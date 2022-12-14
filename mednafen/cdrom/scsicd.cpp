/* Mednafen - Multi-system Emulator
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#include <math.h>
#include <algorithm>

#include <compat/msvc.h>

#include "scsicd.h"
#include "cdromif.h"
#include "SimpleFIFO.h"
#include "../mednafen.h"

#if defined(__SSE2__)
#include <xmmintrin.h>
#include <emmintrin.h>
#endif

#ifdef __LIBRETRO__
#define RETRO_LED_CD 1
#define RETRO_LED_NUM 2
extern unsigned int pce_led_state[RETRO_LED_NUM];
#endif

static uint32_t CD_DATA_TRANSFER_RATE;
static uint32_t System_Clock;

static int32_t* HRBufs[2];

static CDIF *Cur_CDIF;
static bool TrayOpen;

/* Forward declaration */
void CDIRQ(int type);
void StuffSubchannel(uint8_t a, int b);

// Internal operation to the SCSI CD unit.  Only pass 1 or 0 to these macros!
#define SetIOP(mask, set)	{ cd_bus.signals &= ~mask; if(set) cd_bus.signals |= mask; }

#define SetBSY(set)		SetIOP(SCSICD_BSY_mask, set)
#define SetIO(set)              SetIOP(SCSICD_IO_mask, set)
#define SetCD(set)              SetIOP(SCSICD_CD_mask, set)
#define SetMSG(set)             SetIOP(SCSICD_MSG_mask, set)

static INLINE void SetREQ(bool set)
{
 if(set && !REQ_signal)
  CDIRQ(SCSICD_IRQ_MAGICAL_REQ);

 SetIOP(SCSICD_REQ_mask, set);
}

#define SetkingACK(set)		SetIOP(SCSICD_kingACK_mask, set)
#define SetkingRST(set)         SetIOP(SCSICD_kingRST_mask, set)
#define SetkingSEL(set)         SetIOP(SCSICD_kingSEL_mask, set)
#define SetkingATN(set)         SetIOP(SCSICD_kingATN_mask, set)


enum
{
 QMode_Zero = 0,
 QMode_Time = 1,
 QMode_MCN = 2, // Media Catalog Number
 QMode_ISRC = 3 // International Standard Recording Code
};

typedef struct
{
 bool last_RST_signal;

 // The pending message to send(in the message phase)
 uint8_t message_pending;

 bool status_sent, message_sent;

 // Pending error codes
 uint8_t key_pending, asc_pending, ascq_pending, fru_pending;

 uint8_t command_buffer[256];
 uint8_t command_buffer_pos;
 uint8_t command_size_left;

 // FALSE if not all pending data is in the FIFO, TRUE if it is.
 // Used for multiple sector CD reads.
 bool data_transfer_done;

 // To target(the cd unit); for "MODE SELECT".
 uint8_t data_out[256];	// Technically it only needs to be 255, but powers of 2 are better than those degenerate powers of 2 minus one goons.
 uint8_t data_out_pos;	// Current index for writing into data_out.
 uint8_t data_out_want;	// Total number of bytes to buffer into data_out.

 bool DiscChanged;

 uint8_t SubQBuf[4][0xC];		// One for each of the 4 most recent q-Modes.
 uint8_t SubQBuf_Last[0xC];	// The most recent q subchannel data, regardless of q-mode.

 uint8_t SubPWBuf[96];

} scsicd_t;

enum
{
 CDDASTATUS_PAUSED = -1,
 CDDASTATUS_STOPPED = 0,
 CDDASTATUS_PLAYING = 1,
 CDDASTATUS_SCANNING = 2
};

enum
{
 PLAYMODE_SILENT = 0x00,
 PLAYMODE_NORMAL,
 PLAYMODE_INTERRUPT,
 PLAYMODE_LOOP
};

typedef struct
{
 uint32_t CDDADivAcc;
 uint8_t CDDADivAccVolFudge;	// For PC-FX CD-DA rate control RE impulses and resampling; 100 = 1.0.
 uint32_t scan_sec_end;

 uint8_t PlayMode;
 int32_t CDDAVolume[2];		// 65536 = 1.0, the maximum.
 int16 CDDASectorBuffer[1176];
 uint32_t CDDAReadPos;

 int8_t CDDAStatus;
 uint8_t ScanMode;
 int64_t CDDADiv;
 int CDDATimeDiv;

 int16 OversampleBuffer[2][0x10 * 2];	// *2 so our MAC loop can blast through without masking the index.
 unsigned OversamplePos;

 int16 sr[2];

 uint8_t OutPortChSelect[2];
 uint32_t OutPortChSelectCache[2];
 int32_t OutPortVolumeCache[2];

 float DeemphState[2][2];
} cdda_t;

static void MakeSense(uint8_t * target, uint8_t key, uint8_t asc, uint8_t ascq, uint8_t fru)
{
 memset(target, 0, 18);

 target[0] = 0x70;		// Current errors and sense data is not SCSI compliant
 target[2] = key;
 target[7] = 0x0A;
 target[12] = asc;		// Additional Sense Code
 target[13] = ascq;		// Additional Sense Code Qualifier
 target[14] = fru;		// Field Replaceable Unit code
}

static void InitModePages(void);

static scsicd_timestamp_t lastts;
static int64_t monotonic_timestamp;
static int64_t pce_lastsapsp_timestamp;

scsicd_t cd;
scsicd_bus_t cd_bus;
static cdda_t cdda;

static SimpleFIFO<uint8_t> *din = NULL;

static TOC toc;

static uint32_t read_sec_start;
static uint32_t read_sec;
static uint32_t read_sec_end;

static int32_t CDReadTimer;
static uint32_t SectorAddr;
static uint32_t SectorCount;


enum
{
 PHASE_BUS_FREE = 0,
 PHASE_COMMAND,
 PHASE_DATA_IN,
 PHASE_DATA_OUT,
 PHASE_STATUS,
 PHASE_MESSAGE_IN,
 PHASE_MESSAGE_OUT
};
static unsigned int CurrentPhase;
static void ChangePhase(const unsigned int new_phase);


static void FixOPV(void)
{
 if(!cdda.CDDADivAccVolFudge)
  cdda.CDDADivAccVolFudge = 100;

 for(int port = 0; port < 2; port++)
 {
  int32_t tmpvol = cdda.CDDAVolume[port] * 100 / (2 * cdda.CDDADivAccVolFudge);

  cdda.OutPortVolumeCache[port] = tmpvol;

  if(cdda.OutPortChSelect[port] & 0x01)
   cdda.OutPortChSelectCache[port] = 0;
  else if(cdda.OutPortChSelect[port] & 0x02)
   cdda.OutPortChSelectCache[port] = 1;
  else
  {
   cdda.OutPortChSelectCache[port] = 0;
   cdda.OutPortVolumeCache[port] = 0;
  }
 }
}

static void VirtualReset(void)
{
 InitModePages();

 din->Flush();

 CDReadTimer = 0;

 pce_lastsapsp_timestamp = monotonic_timestamp;

 SectorAddr = SectorCount = 0;
 read_sec_start = read_sec = 0;
 read_sec_end = ~0;

 cdda.PlayMode = PLAYMODE_SILENT;
 cdda.CDDAReadPos = 0;
 cdda.CDDAStatus = CDDASTATUS_STOPPED;
 cdda.CDDADiv = 0;

 cdda.ScanMode = 0;
 cdda.scan_sec_end = 0;

 cdda.OversamplePos = 0;
 memset(cdda.sr, 0, sizeof(cdda.sr));
 memset(cdda.OversampleBuffer, 0, sizeof(cdda.OversampleBuffer));
 memset(cdda.DeemphState, 0, sizeof(cdda.DeemphState));

 memset(cd.data_out, 0, sizeof(cd.data_out));
 cd.data_out_pos = 0;
 cd.data_out_want = 0;


 FixOPV();

 ChangePhase(PHASE_BUS_FREE);
}

void SCSICD_Power(scsicd_timestamp_t system_timestamp)
{
 memset(&cd, 0, sizeof(scsicd_t));
 memset(&cd_bus, 0, sizeof(scsicd_bus_t));

 monotonic_timestamp = system_timestamp;

 cd.DiscChanged = false;

 if(Cur_CDIF && !TrayOpen)
  Cur_CDIF->ReadTOC(&toc);

 CurrentPhase = PHASE_BUS_FREE;

 VirtualReset();
}


void SCSICD_SetDB(uint8_t data)
{
 cd_bus.DB = data;
}

void SCSICD_SetACK(bool set)
{
 SetkingACK(set);
}

void SCSICD_SetSEL(bool set)
{
 SetkingSEL(set);
}

void SCSICD_SetRST(bool set)
{
 SetkingRST(set);
}

void SCSICD_SetATN(bool set)
{
 SetkingATN(set);
}

static void GenSubQFromSubPW(void)
{
 uint8_t SubQBuf[0xC];

 memset(SubQBuf, 0, 0xC);

 for(int i = 0; i < 96; i++)
  SubQBuf[i >> 3] |= ((cd.SubPWBuf[i] & 0x40) >> 6) << (7 - (i & 7));

 if(!subq_check_checksum(SubQBuf))
 {
  //SCSIDBG("SubQ checksum error!");
 }
 else
 {
  memcpy(cd.SubQBuf_Last, SubQBuf, 0xC);

  uint8_t adr = SubQBuf[0] & 0xF;

  if(adr <= 0x3)
   memcpy(cd.SubQBuf[adr], SubQBuf, 0xC);
 }
}


#define STATUS_GOOD		0
#define STATUS_CHECK_CONDITION	1
#define STATUS_CONDITION_MET	2
#define STATUS_BUSY		4
#define STATUS_INTERMEDIATE	8

#define SENSEKEY_NO_SENSE		0x0
#define SENSEKEY_NOT_READY		0x2
#define SENSEKEY_MEDIUM_ERROR		0x3
#define SENSEKEY_HARDWARE_ERROR		0x4
#define SENSEKEY_ILLEGAL_REQUEST	0x5
#define SENSEKEY_UNIT_ATTENTION		0x6
#define SENSEKEY_ABORTED_COMMAND	0xB

#define ASC_MEDIUM_NOT_PRESENT		0x3A


// NEC sub-errors(ASC), no ASCQ.
#define NSE_NO_DISC			0x0B		// Used with SENSEKEY_NOT_READY	- This condition occurs when tray is closed with no disc present.
#define NSE_TRAY_OPEN			0x0D		// Used with SENSEKEY_NOT_READY 
#define NSE_SEEK_ERROR			0x15
#define NSE_HEADER_READ_ERROR		0x16		// Used with SENSEKEY_MEDIUM_ERROR
#define NSE_NOT_AUDIO_TRACK		0x1C		// Used with SENSEKEY_MEDIUM_ERROR
#define NSE_NOT_DATA_TRACK		0x1D		// Used with SENSEKEY_MEDIUM_ERROR
#define NSE_INVALID_COMMAND		0x20
#define NSE_INVALID_ADDRESS		0x21
#define NSE_INVALID_PARAMETER		0x22
#define NSE_END_OF_VOLUME		0x25
#define NSE_INVALID_REQUEST_IN_CDB	0x27
#define NSE_DISC_CHANGED		0x28		// Used with SENSEKEY_UNIT_ATTENTION
#define NSE_AUDIO_NOT_PLAYING		0x2C

// ASC, ASCQ pair
#define AP_UNRECOVERED_READ_ERROR	0x11, 0x00
#define AP_LEC_UNCORRECTABLE_ERROR	0x11, 0x05
#define AP_CIRC_UNRECOVERED_ERROR	0x11, 0x06

#define AP_UNKNOWN_MEDIUM_FORMAT	0x30, 0x01
#define AP_INCOMPAT_MEDIUM_FORMAT	0x30, 0x02

static void ChangePhase(const unsigned int new_phase)
{
 switch(new_phase)
 {
  case PHASE_BUS_FREE:
		SetBSY(false);
		SetMSG(false);
		SetCD(false);
		SetIO(false);
		SetREQ(false);

	        CDIRQ(0x8000 | SCSICD_IRQ_DATA_TRANSFER_DONE);
		break;

  case PHASE_DATA_IN:		// Us to them
		SetBSY(true);
	        SetMSG(false);
	        SetCD(false);
	        SetIO(true);
	        //SetREQ(true);
		SetREQ(false);
		break;

  case PHASE_STATUS:		// Us to them
		SetBSY(true);
		SetMSG(false);
		SetCD(true);
		SetIO(true);
		SetREQ(true);
		break;

  case PHASE_MESSAGE_IN:	// Us to them
		SetBSY(true);
		SetMSG(true);
		SetCD(true);
		SetIO(true);
		SetREQ(true);
		break;


  case PHASE_DATA_OUT:		// Them to us
		SetBSY(true);
	        SetMSG(false);
	        SetCD(false);
	        SetIO(false);
	        SetREQ(true);
		break;

  case PHASE_COMMAND:		// Them to us
		SetBSY(true);
	        SetMSG(false);
	        SetCD(true);
	        SetIO(false);
	        SetREQ(true);
		break;

  case PHASE_MESSAGE_OUT:	// Them to us
		SetBSY(true);
  		SetMSG(true);
		SetCD(true);
		SetIO(false);
		SetREQ(true);
		break;
 }
 CurrentPhase = new_phase;
}

static void SendStatusAndMessage(uint8_t status, uint8_t message)
{
 // This should never ever happen, but that doesn't mean it won't. ;)
 if(din->in_count)
  din->Flush();

 cd.message_pending = message;

 cd.status_sent = FALSE;
 cd.message_sent = FALSE;

 if(status == STATUS_GOOD || status == STATUS_CONDITION_MET)
   cd_bus.DB = 0x00;
 else
   cd_bus.DB = 0x01;

 ChangePhase(PHASE_STATUS);
}

static void DoSimpleDataIn(const uint8_t *data_in, uint32_t len)
{
 din->Write(data_in, len);

 cd.data_transfer_done = true;

 ChangePhase(PHASE_DATA_IN);
}

void SCSICD_SetDisc(bool new_tray_open, CDIF *cdif, bool no_emu_side_effects)
{
 Cur_CDIF = cdif;

 // Closing the tray.
 if(TrayOpen && !new_tray_open)
 {
  TrayOpen = false;

  if(cdif)
  {
   cdif->ReadTOC(&toc);

   if(!no_emu_side_effects)
   {
    memset(cd.SubQBuf, 0, sizeof(cd.SubQBuf));
    memset(cd.SubQBuf_Last, 0, sizeof(cd.SubQBuf_Last));
    cd.DiscChanged = true;
   }
  }
 }
 else if(!TrayOpen && new_tray_open)	// Opening the tray
 {
  TrayOpen = true;
 }
}

static void CommandCCError(int key, int asc = 0, int ascq = 0)
{
 cd.key_pending = key;
 cd.asc_pending = asc;
 cd.ascq_pending = ascq;
 cd.fru_pending = 0x00;

 SendStatusAndMessage(STATUS_CHECK_CONDITION, 0x00);
}

static bool ValidateRawDataSector(uint8_t *data, const uint32_t lba)
{
 if(!Cur_CDIF->ValidateRawSector(data))
 {
  MDFN_DispMessage(_("Uncorrectable data at sector %d"), lba);

  din->Flush();
  cd.data_transfer_done = false;

  CommandCCError(SENSEKEY_MEDIUM_ERROR, AP_LEC_UNCORRECTABLE_ERROR);
  return(false);
 }

 return(true);
}

static void DoMODESELECT6(const uint8_t *cdb)
{
 if(cdb[4])
 {
  cd.data_out_pos = 0;
  cd.data_out_want = cdb[4];
  ChangePhase(PHASE_DATA_OUT);
 }
 else
  SendStatusAndMessage(STATUS_GOOD, 0x00);
}

/*
 All Japan Female Pro Wrestle:
	Datumama: 10, 00 00 00 00 00 00 00 00 00 0a

 Kokuu Hyouryuu Nirgends:
	Datumama: 10, 00 00 00 00 00 00 00 00 00 0f
	Datumama: 10, 00 00 00 00 00 00 00 00 00 0f

 Last Imperial Prince:
	Datumama: 10, 00 00 00 00 00 00 00 00 00 0f 
	Datumama: 10, 00 00 00 00 00 00 00 00 00 0f 

 Megami Paradise II:
	Datumama: 10, 00 00 00 00 00 00 00 00 00 0a

 Miraculum:
	Datumama: 7, 00 00 00 00 29 01 00 
	Datumama: 10, 00 00 00 00 00 00 00 00 00 0f 
	Datumama: 7, 00 00 00 00 29 01 00 
	Datumama: 10, 00 00 00 00 00 00 00 00 00 00 
	Datumama: 7, 00 00 00 00 29 01 00 

 Pachio Kun FX:
	Datumama: 10, 00 00 00 00 00 00 00 00 00 14

 Return to Zork:
	Datumama: 10, 00 00 00 00 00 00 00 00 00 00

 Sotsugyou II:
	Datumama: 10, 00 00 00 00 01 00 00 00 00 01

 Tokimeki Card Paradise:
	Datumama: 10, 00 00 00 00 00 00 00 00 00 14 
	Datumama: 10, 00 00 00 00 00 00 00 00 00 07 

 Tonari no Princess Rolfee:
	Datumama: 10, 00 00 00 00 00 00 00 00 00 00

 Zoku Hakutoi Monogatari:
	Datumama: 10, 00 00 00 00 00 00 00 00 00 14
*/

      // Page 151: MODE SENSE(6)
	// PC = 0 current
	// PC = 1 Changeable
	// PC = 2 Default
	// PC = 3 Saved
      // Page 183: Mode parameter header.
      // Page 363: CD-ROM density codes.
      // Page 364: CD-ROM mode page codes.
      // Page 469: ASC and ASCQ table


struct ModePageParam
{
 uint8_t default_value;
 uint8_t alterable_mask;	// Alterable mask reported when PC == 1
 uint8_t real_mask;		// Real alterable mask.
};

struct ModePage
{
 const uint8_t code;
 const uint8_t param_length;
 const ModePageParam params[64];	// 64 should be more than enough
 uint8_t current_value[64];
};

/*
 Mode pages present:
	0x00:
	0x0E:
	0x28:
	0x29:
	0x2A:
	0x2B:
	0x3F(Yes, not really a mode page but a fetch method)
*/
// Remember to update the code in StateAction() if we change the number or layout of modepages here.
static const int NumModePages = 5;
static ModePage ModePages[NumModePages] =
{
 // Unknown
 { 0x28,
   0x04,
   {
        { 0x00, 0x00, 0xFF },
        { 0x00, 0x00, 0xFF },
        { 0x00, 0x00, 0xFF },
        { 0x00, 0x00, 0xFF },
   }
 },

 // Unknown
 { 0x29,
   0x01,
   {
	{ 0x00, 0x00, 0xFF },
   }
 },

 // Unknown
 { 0x2a,
   0x02,
   {
        { 0x00, 0x00, 0xFF },
        { 0x11, 0x00, 0xFF },
   }
 },

 // CD-DA playback speed modifier
 { 0x2B,
   0x01,
   {
	{ 0x00, 0x00, 0xFF },
   }
 },

 // 0x0E goes last, for correct order of return data when page code == 0x3F
 // Real mask values are probably not right; some functionality not emulated yet.
 // CD-ROM audio control parameters
 { 0x0E,
   0x0E,
   {
        { 0x04, 0x04, 0x04 },   // Immed
        { 0x00, 0x00, 0x00 },   // Reserved
        { 0x00, 0x00, 0x00 }, // Reserved
        { 0x00, 0x01, 0x01 }, // Reserved?
        { 0x00, 0x00, 0x00 },   // MSB of LBA per second.
        { 0x00, 0x00, 0x00 }, // LSB of LBA per second.
        { 0x01, 0x01, 0x03 }, // Outport port 0 channel selection.
        { 0xFF, 0x00, 0x00 }, // Outport port 0 volume.
        { 0x02, 0x02, 0x03 }, // Outport port 1 channel selection.
        { 0xFF, 0x00, 0x00 }, // Outport port 1 volume.
        { 0x00, 0x00, 0x00 }, // Outport port 2 channel selection.
        { 0x00, 0x00, 0x00 }, // Outport port 2 volume.
        { 0x00, 0x00, 0x00 }, // Outport port 3 channel selection.
        { 0x00, 0x00, 0x00 }, // Outport port 3 volume.
   }
 },
};

static void UpdateMPCacheP(const ModePage* mp)
{
  switch(mp->code)
  {
   case 0x0E:
	     {
              const uint8_t *pd = &mp->current_value[0];

              for(int i = 0; i < 2; i++)
               cdda.OutPortChSelect[i] = pd[6 + i * 2];
              FixOPV();
	     }
	     break;

   case 0x28:
	     break;

   case 0x29:
	     break;

   case 0x2A:
	     break;

   case 0x2B:
	    {
             int speed;
             int rate;

	     //
	     // Not sure what the actual limits are, or what happens when exceeding them, but these will at least keep the
	     // CD-DA playback system from imploding in on itself.
	     //
	     // The range of speed values accessible via the BIOS CD-DA player is apparently -10 to 10.
	     //
	     // No game is known to use the CD-DA playback speed control.  It may be useful in homebrew to lower the rate for fitting more CD-DA onto the disc,
	     // is implemented on the PC-FX in such a way that it degrades audio quality, so it wouldn't really make sense to increase the rate in homebrew.
	     //
	     // Due to performance considerations, we only partially emulate the CD-DA oversampling filters used on the PC Engine and PC-FX, and instead
	     // blast impulses into the 1.78MHz buffer, relying on the final sound resampler to kill spectrum mirrors.  This is less than ideal, but generally
	     // works well in practice, except when lowering CD-DA playback rate...which causes the spectrum mirrors to enter the non-murder zone, causing
	     // the sound output amplitude to approach overflow levels.
	     // But, until there's a killer PC-FX homebrew game that necessitates more computationally-expensive CD-DA handling,
	     // I don't see a good reason to change how CD-DA resampling is currently implemented.
	     // 
	     speed = std::max<int>(-32, std::min<int>(32, (int8_t)mp->current_value[0]));
	     rate = 44100 + 441 * speed;

             cdda.CDDADivAcc = ((int64_t)System_Clock * (1024 * 1024) / (2 * rate));
	     cdda.CDDADivAccVolFudge = 100 + speed;
	     FixOPV();	// Resampler impulse amplitude volume adjustment(call after setting cdda.CDDADivAccVolFudge)
	    }
	    break;
  }
}

static void UpdateMPCache(uint8_t code)
{
 for(int pi = 0; pi < NumModePages; pi++)
 { 
  const ModePage* mp = &ModePages[pi];

  if(mp->code == code)
  {
   UpdateMPCacheP(mp);
   break;
  }
 }
}

static void InitModePages(void)
{
 for(int pi = 0; pi < NumModePages; pi++)
 {
  ModePage *mp = &ModePages[pi];
  const ModePageParam *params = &ModePages[pi].params[0];

  for(int parami = 0; parami < mp->param_length; parami++)
   mp->current_value[parami] = params[parami].default_value;

  UpdateMPCacheP(mp);
 }
}

static void FinishMODESELECT6(const uint8_t *data, const uint8_t data_len)
{
	uint8_t mode_data_length, medium_type, device_specific, block_descriptor_length;
	uint32_t offset = 0;

        if(data_len < 4)
        {
         CommandCCError(SENSEKEY_ILLEGAL_REQUEST, NSE_INVALID_PARAMETER);
         return;
        }

	mode_data_length = data[offset++];
	medium_type = data[offset++];
	device_specific = data[offset++];
	block_descriptor_length = data[offset++];

	// For now, shut up gcc.
	(void)mode_data_length;
	(void)medium_type;
	(void)device_specific;

	if(block_descriptor_length & 0x7)
	{
	 CommandCCError(SENSEKEY_ILLEGAL_REQUEST, NSE_INVALID_PARAMETER);
	 return;
	}

	if((offset + block_descriptor_length) > data_len)
	{
	 CommandCCError(SENSEKEY_ILLEGAL_REQUEST, NSE_INVALID_PARAMETER);
	 return;
	}

	// TODO: block descriptors.
	offset += block_descriptor_length;

	// Now handle mode pages
	while(offset < data_len)
	{
	 const uint8_t code = data[offset++];
	 uint8_t param_len = 0;
	 bool page_found = false;

	 if(code == 0x00)
	 {
	  if((offset + 0x5) > data_len)
	  {
           CommandCCError(SENSEKEY_ILLEGAL_REQUEST, NSE_INVALID_PARAMETER);
	   return;
	  }

	  UpdateMPCache(0x00);

	  offset += 0x5;
 	  continue;
	 }

	 if(offset >= data_len)
	 {
          CommandCCError(SENSEKEY_ILLEGAL_REQUEST, NSE_INVALID_PARAMETER);
	  return;
	 }

         param_len = data[offset++];

	 for(int pi = 0; pi < NumModePages; pi++)
	 {
	  ModePage *mp = &ModePages[pi];

	  if(code == mp->code)
	  {
	   page_found = true;
	
	   if(param_len != mp->param_length)
	   {
            CommandCCError(SENSEKEY_ILLEGAL_REQUEST, NSE_INVALID_PARAMETER);
            return;
	   }

	   if((param_len + offset) > data_len)
	   {
            CommandCCError(SENSEKEY_ILLEGAL_REQUEST, NSE_INVALID_PARAMETER);
            return;
	   }

	   for(int parami = 0; parami < mp->param_length; parami++)
	   {
	    mp->current_value[parami] &= ~mp->params[parami].real_mask;
	    mp->current_value[parami] |= (data[offset++]) & mp->params[parami].real_mask;
	   }

	   UpdateMPCacheP(mp);
	   break;
	  }
	 }

	 if(!page_found)
	 {
	  CommandCCError(SENSEKEY_ILLEGAL_REQUEST, NSE_INVALID_PARAMETER);
	  return;
	 }
	}

	SendStatusAndMessage(STATUS_GOOD, 0x00);
}

static void DoREQUESTSENSE(const uint8_t *cdb)
{
 uint8_t data_in[8192];

 MakeSense(data_in, cd.key_pending, cd.asc_pending, cd.ascq_pending, cd.fru_pending);

 DoSimpleDataIn(data_in, 18);

 cd.key_pending = 0;
 cd.asc_pending = 0;
 cd.ascq_pending = 0;
 cd.fru_pending = 0;
}

static void DoREADBase(uint32_t sa, uint32_t sc)
{
 int track;

 if(sa > toc.tracks[100].lba) // Another one of those off-by-one PC-FX CD bugs.
 {
  CommandCCError(SENSEKEY_ILLEGAL_REQUEST, NSE_END_OF_VOLUME);
  return;
 }

 if((track = toc.FindTrackByLBA(sa)) == 0)
 {
  CommandCCError(SENSEKEY_ILLEGAL_REQUEST, NSE_END_OF_VOLUME);
  return;
 }

 if(!(toc.tracks[track].control & 0x4))
 {
  CommandCCError(SENSEKEY_MEDIUM_ERROR, NSE_NOT_DATA_TRACK);
  return;
 }

 // Case for READ(10) and READ(12) where sc == 0, and sa == toc.tracks[100].lba
 if(!sc && sa == toc.tracks[100].lba)
 {
  CommandCCError(SENSEKEY_MEDIUM_ERROR, NSE_HEADER_READ_ERROR);
  return;
 }

 SectorAddr = sa;
 SectorCount = sc;
 if(SectorCount)
 {
  Cur_CDIF->HintReadSector(sa);	//, sa + sc);

  CDReadTimer = (uint64_t)3 * 2048 * System_Clock / CD_DATA_TRANSFER_RATE;
 }
 else
 {
  CDReadTimer = 0;
  SendStatusAndMessage(STATUS_GOOD, 0x00);
 }
 cdda.CDDAStatus = CDDASTATUS_STOPPED;
}



/********************************************************
*							*
*	SCSI-2 CD Command 0x08 - READ(6)		*
*							*
********************************************************/
static void DoREAD6(const uint8_t *cdb)
{
 uint32_t sa = ((cdb[1] & 0x1F) << 16) | (cdb[2] << 8) | (cdb[3] << 0);
 uint32_t sc = cdb[4];

 // TODO: confirm real PCE does this(PC-FX does at least).
 if(!sc)
 {
  //SCSIDBG("READ(6) with count == 0.\n");
  sc = 256;
 }

 DoREADBase(sa, sc);
}

// SEEK functions are mostly just stubs for now, until(if) we emulate seek delays.
static void DoSEEKBase(uint32_t lba)
{
 if(lba >= toc.tracks[100].lba)
 {
  CommandCCError(SENSEKEY_ILLEGAL_REQUEST, NSE_END_OF_VOLUME);
  return;
 } 

 cdda.CDDAStatus = CDDASTATUS_STOPPED;
 SendStatusAndMessage(STATUS_GOOD, 0x00);
}

static void DoTESTUNITREADY(const uint8_t *cdb)
{
 SendStatusAndMessage(STATUS_GOOD, 0x00);
}

#include "scsicd-pce-commands.inc"


#define SCF_REQUIRES_MEDIUM	0x0001
#define SCF_INCOMPLETE		0x4000
#define SCF_UNTESTED		0x8000

typedef struct
{
 uint8_t cmd;
 uint32_t flags;
 void (*func)(const uint8_t *cdb);
 const char *pretty_name;
 const char *format_string;
} SCSICH;

static const int32_t RequiredCDBLen[16] =
{
 6, // 0x0n
 6, // 0x1n
 10, // 0x2n
 10, // 0x3n
 10, // 0x4n
 10, // 0x5n
 10, // 0x6n
 10, // 0x7n
 10, // 0x8n
 10, // 0x9n
 12, // 0xAn
 12, // 0xBn
 10, // 0xCn
 10, // 0xDn
 10, // 0xEn
 10, // 0xFn
};

static SCSICH PCECommandDefs[] = 
{
 { 0x00, SCF_REQUIRES_MEDIUM, DoTESTUNITREADY, "Test Unit Ready" },
 { 0x03, 0, DoREQUESTSENSE, "Request Sense" },
 { 0x08, SCF_REQUIRES_MEDIUM, DoREAD6, "Read(6)" },
 //{ 0x15, DoMODESELECT6, "Mode Select(6)" },
 { 0xD8, SCF_REQUIRES_MEDIUM, DoNEC_PCE_SAPSP, "Set Audio Playback Start Position" },
 { 0xD9, SCF_REQUIRES_MEDIUM, DoNEC_PCE_SAPEP, "Set Audio Playback End Position" },
 { 0xDA, SCF_REQUIRES_MEDIUM, DoNEC_PCE_PAUSE, "Pause" },
 { 0xDD, SCF_REQUIRES_MEDIUM, DoNEC_PCE_READSUBQ, "Read Subchannel Q" },
 { 0xDE, SCF_REQUIRES_MEDIUM, DoNEC_PCE_GETDIRINFO, "Get Dir Info" },

 { 0xFF, 0, 0, NULL, NULL },
};

void SCSICD_ResetTS(uint32_t ts_base)
{
 lastts = ts_base;
}

void SCSICD_GetCDDAValues(int16_t &left, int16_t &right)
{
 if(cdda.CDDAStatus)
 {
  left = cdda.sr[0];
  right = cdda.sr[1];
 }
 else
  left = right = 0;
}

#define CDDA_FILTER_NUMCONVOLUTIONS		7
#define CDDA_FILTER_NUMCONVOLUTIONS_PADDED	8

#define CDDA_FILTER_NUMPHASES_SHIFT		6
#define CDDA_FILTER_NUMPHASES	       		(1 << CDDA_FILTER_NUMPHASES_SHIFT)

static const int16 CDDA_Filter[1 + CDDA_FILTER_NUMPHASES + 1][CDDA_FILTER_NUMCONVOLUTIONS_PADDED] =
{
 #include "scsicd_cdda_filter.inc"
};

static const int16 OversampleFilter[2][0x10] =
{
 {    -82,    217,   -463,    877,  -1562,   2783,  -5661,  29464,   9724,  -3844,   2074,  -1176,    645,   -323,    138,    -43,  }, /* sum=32768, sum_abs=59076 */
 {    -43,    138,   -323,    645,  -1176,   2074,  -3844,   9724,  29464,  -5661,   2783,  -1562,    877,   -463,    217,    -82,  }, /* sum=32768, sum_abs=59076 */
};

static INLINE void RunCDDA(uint32_t system_timestamp, int32_t run_time)
{
 if(cdda.CDDAStatus == CDDASTATUS_PLAYING || cdda.CDDAStatus == CDDASTATUS_SCANNING)
 {
  cdda.CDDADiv -= (int64_t)run_time << 20;

  while(cdda.CDDADiv <= 0)
  {
   const uint32_t synthtime_ex = (((uint64_t)system_timestamp << 20) + (int64_t)cdda.CDDADiv) / cdda.CDDATimeDiv;
   const int synthtime = (synthtime_ex >> 16) & 0xFFFF;	// & 0xFFFF(or equivalent) to prevent overflowing HRBufs[]
   const int synthtime_phase = (int)(synthtime_ex & 0xFFFF) - 0x80;
   const int synthtime_phase_int = synthtime_phase >> (16 - CDDA_FILTER_NUMPHASES_SHIFT);
   const int synthtime_phase_fract = synthtime_phase & ((1 << (16 - CDDA_FILTER_NUMPHASES_SHIFT)) - 1);
   int32_t sample_va[2];

   cdda.CDDADiv += cdda.CDDADivAcc;

   if(!(cdda.OversamplePos & 1))
   {
    if(cdda.CDDAReadPos == 588)
    {
     if(read_sec >= read_sec_end || (cdda.CDDAStatus == CDDASTATUS_SCANNING && read_sec == cdda.scan_sec_end))
     {
      switch(cdda.PlayMode)
      {
       case PLAYMODE_SILENT:
       case PLAYMODE_NORMAL:
        cdda.CDDAStatus = CDDASTATUS_STOPPED;
        break;

       case PLAYMODE_INTERRUPT:
        cdda.CDDAStatus = CDDASTATUS_STOPPED;
        CDIRQ(SCSICD_IRQ_DATA_TRANSFER_DONE);
        break;

       case PLAYMODE_LOOP:
        read_sec = read_sec_start;
        break;
      }

      // If CDDA playback is stopped, break out of our while(CDDADiv ...) loop and don't play any more sound!
      if(cdda.CDDAStatus == CDDASTATUS_STOPPED)
       break;
     }

     // Don't play past the user area of the disc.
     if(read_sec >= toc.tracks[100].lba)
     {
      cdda.CDDAStatus = CDDASTATUS_STOPPED;
      break;
     }

     if(TrayOpen || !Cur_CDIF)
     {
      cdda.CDDAStatus = CDDASTATUS_STOPPED;
      break;
     }


     cdda.CDDAReadPos = 0;

     {
      uint8_t tmpbuf[2352 + 96];

      Cur_CDIF->ReadRawSector(tmpbuf, read_sec);	//, read_sec_end, read_sec_start);

      for(int i = 0; i < 588 * 2; i++)
       cdda.CDDASectorBuffer[i] = MDFN_de16lsb(&tmpbuf[i * 2]);

      memcpy(cd.SubPWBuf, tmpbuf + 2352, 96);
     }
     GenSubQFromSubPW();

     if(!(cd.SubQBuf_Last[0] & 0x10))
     {
      // Not using de-emphasis, so clear the de-emphasis filter state.
      memset(cdda.DeemphState, 0, sizeof(cdda.DeemphState));
     }

     if(cdda.CDDAStatus == CDDASTATUS_SCANNING)
     {
      int64_t tmp_read_sec = read_sec;

      if(cdda.ScanMode & 1)
      {
       tmp_read_sec -= 24;
       if(tmp_read_sec < cdda.scan_sec_end)
        tmp_read_sec = cdda.scan_sec_end;
      }
      else
      {
       tmp_read_sec += 24;
       if(tmp_read_sec > cdda.scan_sec_end)
        tmp_read_sec = cdda.scan_sec_end;
      }
      read_sec = tmp_read_sec;
     }
     else
      read_sec++;
    } // End    if(CDDAReadPos == 588)

    if(!(cdda.CDDAReadPos % 6))
    {
     int subindex = cdda.CDDAReadPos / 6 - 2;

     if(subindex >= 0)
      StuffSubchannel(cd.SubPWBuf[subindex], subindex);
     else // The system-specific emulation code should handle what value the sync bytes are.
      StuffSubchannel(0x00, subindex);
    }

    // If the last valid sub-Q data decoded indicate that the corresponding sector is a data sector, don't output the
    // current sector as audio.
    if(!(cd.SubQBuf_Last[0] & 0x40) && cdda.PlayMode != PLAYMODE_SILENT)
    {
     cdda.sr[0] = cdda.CDDASectorBuffer[cdda.CDDAReadPos * 2 + cdda.OutPortChSelectCache[0]];
     cdda.sr[1] = cdda.CDDASectorBuffer[cdda.CDDAReadPos * 2 + cdda.OutPortChSelectCache[1]];
    }

    {
     const unsigned obwp = cdda.OversamplePos >> 1;
     cdda.OversampleBuffer[0][obwp] = cdda.OversampleBuffer[0][0x10 + obwp] = cdda.sr[0];
     cdda.OversampleBuffer[1][obwp] = cdda.OversampleBuffer[1][0x10 + obwp] = cdda.sr[1];
    }

    cdda.CDDAReadPos++;
   } // End if(!(cdda.OversamplePos & 1))

   {
    const int16* f = OversampleFilter[cdda.OversamplePos & 1];
#if defined(__SSE2__)
    __m128i f0 = _mm_load_si128((__m128i *)&f[0]);
    __m128i f1 = _mm_load_si128((__m128i *)&f[8]);
#endif
      
    for(unsigned lr = 0; lr < 2; lr++)
    {
     const int16* b = &cdda.OversampleBuffer[lr][((cdda.OversamplePos >> 1) + 1) & 0xF];
#if defined(__SSE2__)
     union
     {
      int32_t accum;
      float accum_f;
      //__m128i accum_m128;
     };

     {
      __m128i b0;
      __m128i b1;
      __m128i sum;

      b0 = _mm_loadu_si128((__m128i *)&b[0]);
      b1 = _mm_loadu_si128((__m128i *)&b[8]);

      sum = _mm_add_epi32(_mm_madd_epi16(f0, b0), _mm_madd_epi16(f1, b1));
      sum = _mm_add_epi32(sum, _mm_shuffle_epi32(sum, (3 << 0) | (2 << 2) | (1 << 4) | (0 << 6)));
      sum = _mm_add_epi32(sum, _mm_shuffle_epi32(sum, (1 << 0) | (0 << 2) | (3 << 4) | (2 << 6)));
      _mm_store_ss(&accum_f, (__m128)sum);
      //_mm_store_si128(&accum_m128, sum);
     }
#else
     int32_t accum = 0;

     for(unsigned i = 0; i < 0x10; i++)
      accum += f[i] * b[i];
#endif
     // sum_abs * cdda_min =
     // 59076 * -32768 = -1935802368
     // OPVC can have a maximum value of 65536.
     // -1935802368 * 65536 = -126864743989248
     //
     // -126864743989248 / 65536 = -1935802368
     sample_va[lr] = ((int64_t)accum * cdda.OutPortVolumeCache[lr]) >> 16;
     // Output of this stage will be (approximate max ranges) -2147450880 through 2147385345.
    }
   }

   //
   // This de-emphasis filter's frequency response isn't totally correct, but it's much better than nothing(and it's not like any known PCE CD/TG16 CD/PC-FX games
   // utilize pre-emphasis anyway).
   //
   if(MDFN_UNLIKELY(cd.SubQBuf_Last[0] & 0x10))
   {
    for(unsigned lr = 0; lr < 2; lr++)
    {
     float inv = sample_va[lr] * 0.35971507338824012f;

     cdda.DeemphState[lr][1] = (cdda.DeemphState[lr][0] - 0.4316395666f * inv) + (0.7955522347f * cdda.DeemphState[lr][1]);
     cdda.DeemphState[lr][0] = inv;

     sample_va[lr] = std::max<float>(-2147483648.0, std::min<float>(2147483647.0, cdda.DeemphState[lr][1]));
    }
   }


   if(HRBufs[0] && HRBufs[1])
   {
    //
    // FINAL_OUT_SHIFT should be 32 so we can take advantage of 32x32->64 multipliers on 32-bit CPUs.
    //
    #define FINAL_OUT_SHIFT 32
    #define MULT_SHIFT_ADJ (32 - (26 + (8 - CDDA_FILTER_NUMPHASES_SHIFT)))

    #if (((1 << (16 - CDDA_FILTER_NUMPHASES_SHIFT)) - 0) << MULT_SHIFT_ADJ) > 32767
     #error "COEFF MULT OVERFLOW"
    #endif

    const int16 mult_a = ((1 << (16 - CDDA_FILTER_NUMPHASES_SHIFT)) - synthtime_phase_fract) << MULT_SHIFT_ADJ;
    const int16 mult_b = synthtime_phase_fract << MULT_SHIFT_ADJ;
    int32_t coeff[CDDA_FILTER_NUMCONVOLUTIONS];

    for(unsigned c = 0; c < CDDA_FILTER_NUMCONVOLUTIONS; c++)
    {
     coeff[c] = (CDDA_Filter[1 + synthtime_phase_int + 0][c] * mult_a + 
		 CDDA_Filter[1 + synthtime_phase_int + 1][c] * mult_b);
    }

    int32_t* tb0 = &HRBufs[0][synthtime];
    int32_t* tb1 = &HRBufs[1][synthtime];

    for(unsigned c = 0; c < CDDA_FILTER_NUMCONVOLUTIONS; c++)
    {
     tb0[c] += ((int64_t)coeff[c] * sample_va[0]) >> FINAL_OUT_SHIFT;
     tb1[c] += ((int64_t)coeff[c] * sample_va[1]) >> FINAL_OUT_SHIFT;
    }
    #undef FINAL_OUT_SHIFT
    #undef MULT_SHIFT_ADJ
   }

   cdda.OversamplePos = (cdda.OversamplePos + 1) & 0x1F;
  } // end while(cdda.CDDADiv <= 0)
 }
}

static INLINE void RunCDRead(uint32_t system_timestamp, int32_t run_time)
{
 if(CDReadTimer > 0)
 {
  CDReadTimer -= run_time;

  if(CDReadTimer <= 0)
  {
   if(din->CanWrite() < 2048)	// +96 if we find out the PC-FX can read subchannel data along with raw data too. ;)
   {
    CDReadTimer += (uint64_t) 1 * 2048 * System_Clock / CD_DATA_TRANSFER_RATE;
   }
   else
   {
    uint8_t tmp_read_buf[2352 + 96];

    if(TrayOpen)
    {
     din->Flush();
     cd.data_transfer_done = FALSE;

     CommandCCError(SENSEKEY_NOT_READY, NSE_TRAY_OPEN);
    }
    else if(!Cur_CDIF)
    {
     CommandCCError(SENSEKEY_NOT_READY, NSE_NO_DISC);
    }
    else if(SectorAddr >= toc.tracks[100].lba)
    {
     CommandCCError(SENSEKEY_ILLEGAL_REQUEST, NSE_END_OF_VOLUME);
    }
    else if(!Cur_CDIF->ReadRawSector(tmp_read_buf, SectorAddr))	//, SectorAddr + SectorCount))
    {
     cd.data_transfer_done = FALSE;

     CommandCCError(SENSEKEY_ILLEGAL_REQUEST);
    }
    else if(ValidateRawDataSector(tmp_read_buf, SectorAddr))
    {
     memcpy(cd.SubPWBuf, tmp_read_buf + 2352, 96);

     if(tmp_read_buf[12 + 3] == 0x2)
      din->Write(tmp_read_buf + 24, 2048);
     else
      din->Write(tmp_read_buf + 16, 2048);

     GenSubQFromSubPW();

     CDIRQ(SCSICD_IRQ_DATA_TRANSFER_READY);

     SectorAddr++;
     SectorCount--;

     if(CurrentPhase != PHASE_DATA_IN)
      ChangePhase(PHASE_DATA_IN);

     if(SectorCount)
     {
      cd.data_transfer_done = FALSE;
      CDReadTimer += (uint64_t) 1 * 2048 * System_Clock / CD_DATA_TRANSFER_RATE;
     }
     else
     {
      cd.data_transfer_done = TRUE;
     }
    }
   }				// end else to if(!Cur_CDIF->ReadSector

  }
#ifdef __LIBRETRO__
  if (cd.data_transfer_done)
     pce_led_state[RETRO_LED_CD] = 0;
  else
     pce_led_state[RETRO_LED_CD] = 1;
#endif
 }
}


uint32_t SCSICD_Run(scsicd_timestamp_t system_timestamp)
{
 int32_t run_time = system_timestamp - lastts;

 if(system_timestamp < lastts)
  assert(system_timestamp >= lastts);

 monotonic_timestamp += run_time;

 lastts = system_timestamp;

 RunCDRead(system_timestamp, run_time);
 RunCDDA(system_timestamp, run_time);

 bool ResetNeeded = false;

 if(RST_signal && !cd.last_RST_signal)
  ResetNeeded = true;

 cd.last_RST_signal = RST_signal;

 if(ResetNeeded)
  VirtualReset();
 else if(CurrentPhase == PHASE_BUS_FREE)
 {
  if(SEL_signal)
  {
    ChangePhase(PHASE_COMMAND);
  }
 }
 else if(ATN_signal && !REQ_signal && !ACK_signal)
  ChangePhase(PHASE_MESSAGE_OUT);
 else switch(CurrentPhase)
 {
  case PHASE_COMMAND:
    if(REQ_signal && ACK_signal)	// Data bus is valid nowww
    {
     cd.command_buffer[cd.command_buffer_pos++] = cd_bus.DB;
     SetREQ(FALSE);
    }

    if(!REQ_signal && !ACK_signal && cd.command_buffer_pos)	// Received at least one byte, what should we do?
    {
     if(cd.command_buffer_pos == RequiredCDBLen[cd.command_buffer[0] >> 4])
     {
      const SCSICH *cmd_info_ptr = PCECommandDefs;

      while(cmd_info_ptr->pretty_name && cmd_info_ptr->cmd != cd.command_buffer[0])
       cmd_info_ptr++;
  
      if(cmd_info_ptr->pretty_name == NULL)	// Command not found!
      {
       CommandCCError(SENSEKEY_ILLEGAL_REQUEST, NSE_INVALID_COMMAND);

       cd.command_buffer_pos = 0;
      }
      else
      {
       if(TrayOpen && (cmd_info_ptr->flags & SCF_REQUIRES_MEDIUM))
       {
	CommandCCError(SENSEKEY_NOT_READY, NSE_TRAY_OPEN);
       }
       else if(!Cur_CDIF && (cmd_info_ptr->flags & SCF_REQUIRES_MEDIUM))
       {
	CommandCCError(SENSEKEY_NOT_READY, NSE_NO_DISC);
       }
       else if(cd.DiscChanged && (cmd_info_ptr->flags & SCF_REQUIRES_MEDIUM))
       {
	CommandCCError(SENSEKEY_UNIT_ATTENTION, NSE_DISC_CHANGED);
	cd.DiscChanged = false;
       }
       else
       {
	bool prev_ps = (cdda.CDDAStatus == CDDASTATUS_PLAYING || cdda.CDDAStatus == CDDASTATUS_SCANNING);

        cmd_info_ptr->func(cd.command_buffer);

	bool new_ps = (cdda.CDDAStatus == CDDASTATUS_PLAYING || cdda.CDDAStatus == CDDASTATUS_SCANNING);

	// A bit kludgey, but ehhhh.
	if(!prev_ps && new_ps)
	{
	 memset(cdda.sr, 0, sizeof(cdda.sr));
	 memset(cdda.OversampleBuffer, 0, sizeof(cdda.OversampleBuffer));
	 memset(cdda.DeemphState, 0, sizeof(cdda.DeemphState));
	}
       }

       cd.command_buffer_pos = 0;
      }
     } // end if(cd.command_buffer_pos == RequiredCDBLen[cd.command_buffer[0] >> 4])
     else			// Otherwise, get more data for the command!
      SetREQ(TRUE);
    }
    break;

  case PHASE_DATA_OUT:
    if(REQ_signal && ACK_signal)	// Data bus is valid nowww
    {
     cd.data_out[cd.data_out_pos++] = cd_bus.DB;
     SetREQ(FALSE);
    }
    else if(!REQ_signal && !ACK_signal && cd.data_out_pos)
    {
     if(cd.data_out_pos == cd.data_out_want)
     {
      cd.data_out_pos = 0;

      if(cd.command_buffer[0] == 0x15)
	FinishMODESELECT6(cd.data_out, cd.data_out_want);
      else	// Error out here?  It shouldn't be reached:
       SendStatusAndMessage(STATUS_GOOD, 0x00);
     }
     else
      SetREQ(TRUE);
    }
    break;

  
  case PHASE_MESSAGE_OUT:
   if(REQ_signal && ACK_signal)
   {
    SetREQ(FALSE);

    // ABORT message is 0x06, but the code isn't set up to be able to recover from a MESSAGE OUT phase back to the previous phase, so we treat any message as an ABORT.
    // Real tests are needed on the PC-FX to determine its behavior.
    //  (Previously, ATN emulation was a bit broken, which resulted in the wrong data on the data bus in this code path in at least "Battle Heat", but it's fixed now and 0x06 is on the data bus).
    //if(cd_bus.DB == 0x6)		// ABORT message!
    if(1)
    {
     din->Flush();
     cd.data_out_pos = cd.data_out_want = 0;

     CDReadTimer = 0;
     cdda.CDDAStatus = CDDASTATUS_STOPPED;
     ChangePhase(PHASE_BUS_FREE);
    }
   }
   break;


  case PHASE_STATUS:
    if(REQ_signal && ACK_signal)
    {
     SetREQ(FALSE);
     cd.status_sent = TRUE;
    }

    if(!REQ_signal && !ACK_signal && cd.status_sent)
    {
     // Status sent, so get ready to send the message!
     cd.status_sent = FALSE;
     cd_bus.DB = cd.message_pending;

     ChangePhase(PHASE_MESSAGE_IN);
    }
    break;

  case PHASE_DATA_IN:
    if(!REQ_signal && !ACK_signal)
    {
     if(din->in_count == 0)	// aaand we're done!
     {
      CDIRQ(0x8000 | SCSICD_IRQ_DATA_TRANSFER_READY);

      if(cd.data_transfer_done)
      {
       SendStatusAndMessage(STATUS_GOOD, 0x00);
       cd.data_transfer_done = FALSE;
       CDIRQ(SCSICD_IRQ_DATA_TRANSFER_DONE);
      }
     }
     else
     {
      cd_bus.DB = din->ReadByte();
      SetREQ(TRUE);
     }
    }
    if(REQ_signal && ACK_signal)
     SetREQ(FALSE);
    break;

  case PHASE_MESSAGE_IN:
   if(REQ_signal && ACK_signal)
   {
    SetREQ(FALSE);
    cd.message_sent = TRUE;
   }

   if(!REQ_signal && !ACK_signal && cd.message_sent)
   {
    cd.message_sent = FALSE;
    ChangePhase(PHASE_BUS_FREE);
   }
   break;
 }

 int32_t next_time = 0x7fffffff;

 if(CDReadTimer > 0 && CDReadTimer < next_time)
  next_time = CDReadTimer;

 if(cdda.CDDAStatus == CDDASTATUS_PLAYING || cdda.CDDAStatus == CDDASTATUS_SCANNING)
 {
  int32_t cdda_div_sexytime = (cdda.CDDADiv + (cdda.CDDADivAcc * (cdda.OversamplePos & 1)) + ((1 << 20) - 1)) >> 20;
  if(cdda_div_sexytime > 0 && cdda_div_sexytime < next_time)
   next_time = cdda_div_sexytime;
 }

#ifdef __LIBRETRO__
 if(cdda.CDDAStatus == CDDASTATUS_PLAYING || cdda.CDDAStatus == CDDASTATUS_SCANNING)
    pce_led_state[RETRO_LED_CD] = 1;
 else if(cdda.CDDAStatus == CDDASTATUS_PAUSED)
    pce_led_state[RETRO_LED_CD] = 0;
#endif

 assert(next_time >= 0);

 return(next_time);
}

void SCSICD_SetTransferRate(uint32_t TransferRate)
{
 CD_DATA_TRANSFER_RATE = TransferRate;
}

void SCSICD_Close(void)
{
 if(din)
 {
  delete din;
  din = NULL;
 }
}

void SCSICD_Init(int cdda_time_div, int32_t* left_hrbuf, int32_t* right_hrbuf, uint32_t TransferRate, uint32_t SystemClock)
{
 Cur_CDIF = NULL;
 TrayOpen = true;

 assert(SystemClock < 30000000);	// 30 million, sanity check.

 monotonic_timestamp = 0;
 lastts      = 0;
 din         = new SimpleFIFO<uint8_t>(2048); //8192); //1024); /2048);

 cdda.CDDADivAcc = (int64_t)System_Clock * (1024 * 1024) / 88200;
 cdda.CDDADivAccVolFudge = 100;
 cdda.CDDATimeDiv = cdda_time_div * (1 << (4 + 2));

 cdda.CDDAVolume[0] = 65536;
 cdda.CDDAVolume[1] = 65536;

 FixOPV();

 HRBufs[0] = left_hrbuf;
 HRBufs[1] = right_hrbuf;

 CD_DATA_TRANSFER_RATE = TransferRate;
 System_Clock = SystemClock;
}

void SCSICD_SetCDDAVolume(double left, double right)
{
 cdda.CDDAVolume[0] = 65536 * left;
 cdda.CDDAVolume[1] = 65536 * right;

 for(int i = 0; i < 2; i++)
 {
  if(cdda.CDDAVolume[i] > 65536)
   cdda.CDDAVolume[i] = 65536;
 }

 FixOPV();
}

int SCSICD_StateAction(StateMem* sm, const unsigned load, const bool data_only, const char *sname)
{
 SFORMAT StateRegs[] = 
 {
  SFVARN(cd_bus.DB, "DB"),
  SFVARN(cd_bus.signals, "Signals"),
  SFVAR(CurrentPhase),

  SFVARN(cd.last_RST_signal, "last_RST"),
  SFVARN(cd.message_pending, "message_pending"),
  SFVARN(cd.status_sent, "status_sent"),
  SFVARN(cd.message_sent, "message_sent"),
  SFVARN(cd.key_pending, "key_pending"),
  SFVARN(cd.asc_pending, "asc_pending"),
  SFVARN(cd.ascq_pending, "ascq_pending"),
  SFVARN(cd.fru_pending, "fru_pending"),

  SFARRAYN(cd.command_buffer, 256, "command_buffer"),
  SFVARN(cd.command_buffer_pos, "command_buffer_pos"),
  SFVARN(cd.command_size_left, "command_size_left"),

  // Don't save the FIFO's write position, it will be reconstructed from read_pos and in_count
  SFARRAYN(&din->data[0], din->data.size(), "din_fifo"),
  SFVARN(din->read_pos, "din_read_pos"),
  SFVARN(din->in_count, "din_in_count"),
  SFVARN(cd.data_transfer_done, "data_transfer_done"),

  SFARRAYN(cd.data_out, sizeof(cd.data_out), "data_out"),
  SFVARN(cd.data_out_pos, "data_out_pos"),
  SFVARN(cd.data_out_want, "data_out_want"),

  SFVARN(cd.DiscChanged, "DiscChanged"),

  SFVAR(cdda.PlayMode),
  SFARRAY16(cdda.CDDASectorBuffer, 1176),
  SFVAR(cdda.CDDAReadPos),
  SFVAR(cdda.CDDAStatus),
  SFVAR(cdda.CDDADiv),
  SFVAR(read_sec_start),
  SFVAR(read_sec),
  SFVAR(read_sec_end),

  SFVAR(CDReadTimer),
  SFVAR(SectorAddr),
  SFVAR(SectorCount),

  SFVAR(cdda.ScanMode),
  SFVAR(cdda.scan_sec_end),

  SFVAR(cdda.OversamplePos),
  SFARRAY16(&cdda.sr[0], sizeof(cdda.sr) / sizeof(cdda.sr[0])),
  SFARRAY16(&cdda.OversampleBuffer[0][0], sizeof(cdda.OversampleBuffer) / sizeof(cdda.OversampleBuffer[0][0])),

  SFVAR(cdda.DeemphState[0][0]),
  SFVAR(cdda.DeemphState[0][1]),
  SFVAR(cdda.DeemphState[1][0]),
  SFVAR(cdda.DeemphState[1][1]),

  SFARRAYN(&cd.SubQBuf[0][0], sizeof(cd.SubQBuf), "SubQBufs"),
  SFARRAYN(cd.SubQBuf_Last, sizeof(cd.SubQBuf_Last), "SubQBufLast"),
  SFARRAYN(cd.SubPWBuf, sizeof(cd.SubPWBuf), "SubPWBuf"),

  SFVAR(monotonic_timestamp),
  SFVAR(pce_lastsapsp_timestamp),

  //
  //
  //
  SFARRAY(ModePages[0].current_value, ModePages[0].param_length),
  SFARRAY(ModePages[1].current_value, ModePages[1].param_length),
  SFARRAY(ModePages[2].current_value, ModePages[2].param_length),
  SFARRAY(ModePages[3].current_value, ModePages[3].param_length),
  SFARRAY(ModePages[4].current_value, ModePages[4].param_length),
  SFEND
 };

 int ret = MDFNSS_StateAction(sm, load, data_only, StateRegs, sname, false);

 if(load)
 {
  din->in_count &= din->size - 1;
  din->read_pos &= din->size - 1;
  din->write_pos = (din->read_pos + din->in_count) & (din->size - 1);

  if(load < 0x0935)
   cdda.CDDADiv /= 2;

  if(cdda.CDDADiv <= 0)
   cdda.CDDADiv = 1;

  cdda.OversamplePos &= 0x1F;

  for(int i = 0; i < NumModePages; i++)
   UpdateMPCacheP(&ModePages[i]);
 }

 return ret;
}
