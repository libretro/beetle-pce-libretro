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

#include "pce.h"
#include "vce.h"
#include <encodings/crc32.h>
#include "input.h"
#include "huc.h"
#include "pcecd.h"
#include "../hw_sound/pce_psg/pce_psg.h"
#include "../cdrom/scsicd.h"
#include "tsushin.h"
#include "../hw_misc/arcade_card/arcade_card.h"
#include "../mempatcher.h"
#include "../cdrom/cdromif.h"
#include "../FileStream.h"
#include "../sound/OwlResampler.h"

static std::vector<CDIF*> *cdifs = NULL;

HuC6280 HuCPU;

VCE *vce = NULL;

static PCE_PSG *psg = NULL;

extern ArcadeCard *arcade_card;	// Bah, lousy globals.

static OwlBuffer* HRBufs[2] = { NULL, NULL };
static RavenBuffer* ADPCMBuf = NULL;
static RavenBuffer* CDDABufs[2] = { NULL, NULL };
static OwlResampler* HRRes = NULL;

static bool SetSoundRate(double rate);

static void Cleanup(void);

bool PCE_ACEnabled;
uint64 PCE_TimestampBase;	// Only used with the debugger for the time being.

uint8 BaseRAM[32768]; // 8KB for PCE, 32KB for Super Grafx

HuC6280::readfunc NonCheatPCERead[0x100];

static DECLFR(PCEBusRead)
{
	return(0xFF);
}

static DECLFW(PCENullWrite)
{
}

static DECLFR(BaseRAMRead)
{
	return(BaseRAM[A & 0x1FFF]);
}

static DECLFW(BaseRAMWrite)
{
	BaseRAM[A & 0x1FFF] = V;
}

static DECLFR(IORead)
{
	A &= 0x1FFF;

	switch(A & 0x1c00)
	{
		case 0x0000:
			HuCPU.StealCycle(); 
			return(vce->ReadVDC(A));

		case 0x0400:
			HuCPU.StealCycle(); 
			return(vce->Read(A));

		case 0x0800:
			if(HuCPU.InBlockMove())
				return(0);
			return(HuCPU.GetIODataBuffer());

		case 0x0c00:
			if(HuCPU.InBlockMove())
				return(0);
			{
				uint8 ret = HuCPU.TimerRead(A, 0);
				HuCPU.SetIODataBuffer(ret);
				return(ret);
			}

		case 0x1000:
			if(HuCPU.InBlockMove())
				return(0);
			{
				uint8 ret = INPUT_Read(HuCPU.Timestamp(), A);
				HuCPU.SetIODataBuffer(ret);
				return(ret);
			}

		case 0x1400:
			if(HuCPU.InBlockMove())
				return(0);
			{
				uint8 ret = HuCPU.IRQStatusRead(A, 0);
				HuCPU.SetIODataBuffer(ret);
				return(ret);
			}

		case 0x1800:
			if(IsTsushin)
				return(PCE_TsushinRead(A));
	
			if(!PCE_IsCD)
				break;
			if((A & 0x1E00) == 0x1A00)
			{
				if(arcade_card)
					return(arcade_card->Read(A, 0));
				else
					return(0);
			}
			else
			{
				int32 next_cd_event;
				uint8 ret;

				ret = PCECD_Read(HuCPU.Timestamp(), A, next_cd_event, 0);

				vce->SetCDEvent(next_cd_event);

				return(ret);
			}

		case 0x1C00:
			break; // Expansion
	}

	return(0xFF);
}

static DECLFW(IOWrite)
{
	switch(A & 0x1c00)
	{
		case 0x0000:
			HuCPU.StealCycle();
			vce->WriteVDC(A & 0x80001FFF, V);
			break;

		case 0x0400:
			HuCPU.StealCycle(); 
			vce->Write(A & 0x1FFF, V);
			break;

		case 0x0800:
			HuCPU.SetIODataBuffer(V); 
			psg->Write(HuCPU.Timestamp() / 3, A & 0x1FFF, V);
			break;

		case 0x0c00:
			HuCPU.SetIODataBuffer(V);
			HuCPU.TimerWrite(A & 0x1FFF, V);
			break;

		case 0x1000:
			HuCPU.SetIODataBuffer(V);
			INPUT_Write(HuCPU.Timestamp(), A & 0x1FFF, V);
			break;

		case 0x1400:
			HuCPU.SetIODataBuffer(V);
			HuCPU.IRQStatusWrite(A & 0x1FFF, V);
			break;

		case 0x1800:
			if(IsTsushin)
					PCE_TsushinWrite(A & 0x1FFF, V);
	
			if(!PCE_IsCD)
				break;

			if((A & 0x1E00) == 0x1A00)
			{
				if(arcade_card)
					arcade_card->Write(A& 0x1FFF, V);
			}
			else
			{
				int32 next_cd_event = PCECD_Write(HuCPU.Timestamp(), A & 0x1FFF, V);

				vce->SetCDEvent(next_cd_event);
			}

			break;

		case 0x1C00:
			break;
	}
}

static void PCECDIRQCB(bool asserted)
{
	if(asserted)
		HuCPU.IRQBegin(HuC6280::IQIRQ2);
	else
		HuCPU.IRQEnd(HuC6280::IQIRQ2);
}

static int LoadCommon(void);
static void LoadCommonPre(void);

static void SetCDSettings(void)
{
	double cdpsgvolume;
	PCECD_Settings cd_settings;
	memset(&cd_settings, 0, sizeof(PCECD_Settings));

	cdpsgvolume = (double)MDFN_GetSettingUI("pce.cdpsgvolume") / 100;
	cd_settings.CDDA_Volume = (double)MDFN_GetSettingUI("pce.cddavolume") / 100;
	cd_settings.ADPCM_Volume = (double)MDFN_GetSettingUI("pce.adpcmvolume") / 100;
	cd_settings.ADPCM_ExtraPrecision = MDFN_GetSettingB("pce.adpcmextraprec");
	cd_settings.CD_Speed = MDFN_GetSettingUI("pce.cdspeed");

	PCECD_SetSettings(&cd_settings);
	psg->SetVolume(0.678 * cdpsgvolume);
}

MDFN_COLD int PCE_Load(const uint8_t *data, size_t size, const char *ext)
{
	LoadCommonPre();
	uint32 crc = HuC_Load(data, size, MDFN_GetSettingB("pce.disable_bram_hucard"));
	return LoadCommon();
}

static MDFN_COLD void LoadCommonPre(void)
{
	// Initialize sound buffers
	for(unsigned ch = 0; ch < 2; ch++)
		HRBufs[ch] = new OwlBuffer();

	// FIXME:  Make these globals less global!
	PCE_ACEnabled = MDFN_GetSettingB("pce.arcadecard");

	HuCPU.Init(0);

	for(int x = 0; x < 0x100; x++)
	{
		HuCPU.SetFastRead(x, NULL);
		HuCPU.SetReadHandler(x, PCEBusRead);
		HuCPU.SetWriteHandler(x, PCENullWrite);
	}

	MDFNMP_Init(1024, (1 << 21) / 1024);
}

static MDFN_COLD int LoadCommon(void)
{ 
	int i;

	const uint32 vram_size = MDFN_GetSettingUI("pce.vramsize");

	vce = new VCE(vram_size);
	vce->SetVDCUnlimitedSprites(MDFN_GetSettingB("pce.nospritelimit"));

	for(i = 0xF8; i < 0xFC; i++)
	{
		HuCPU.SetReadHandler(i, BaseRAMRead);
		HuCPU.SetWriteHandler(i, BaseRAMWrite);

		HuCPU.SetFastRead(i, BaseRAM);
	}

	MDFNMP_AddRAM(8192, 0xf8 * 8192, BaseRAM);

	HuCPU.SetReadHandler(0xFF, IORead);
	HuCPU.SetWriteHandler(0xFF, IOWrite);
	
	HuCPU.SetOverclock(MDFN_GetSettingUI("pce.ocmultiplier"));

	int psgrevision = MDFN_GetSettingI("pce.psgrevision");

	if(psgrevision == PCE_PSG::_REVISION_COUNT)
		psgrevision = PCE_PSG::REVISION_HUC6280;

	psg = new PCE_PSG(HRBufs[0]->Buf(), HRBufs[1]->Buf(), psgrevision);

	psg->SetVolume(1.0);

	if(PCE_IsCD)
		SetCDSettings();

	PCEINPUT_Init();

	PCE_Power();

	MDFNGameInfo->fps = (uint32)((double)7159090.90909090 / 455 / 263 * 65536 * 256);

	for(unsigned int i = 0; i < 0x100; i++)
		NonCheatPCERead[i] = HuCPU.GetReadHandler(i);

	MDFNGameInfo->nominal_height = MDFN_GetSettingUI("pce.slend") - MDFN_GetSettingUI("pce.slstart") + 1;
	MDFNGameInfo->nominal_width = MDFN_GetSettingB("pce.h_overscan") ? 320 : 288;

	MDFNGameInfo->lcm_width = MDFN_GetSettingB("pce.h_overscan") ? 1120 : 1024;
	MDFNGameInfo->lcm_height = MDFNGameInfo->nominal_height;

	vce->SetShowHorizOS(MDFN_GetSettingB("pce.h_overscan")); 

	return(1);
}

static bool DetectGECD(CDIF *cdiface)	// Very half-assed detection until(if) we get ISO-9660 reading code.
{
	uint8 sector_buffer[2048];
	TOC toc;

	cdiface->ReadTOC(&toc);

	// Now, test for the Games Express CD games.  The GE BIOS seems to always look at sector 0x10, but only if the first track is a
	// data track.
	if(toc.first_track == 1 && (toc.tracks[1].control & 0x4))
	{
		if(cdiface->ReadSector(sector_buffer, 0x10, 1) == 0x1)
		{
			if(!memcmp((char *)sector_buffer + 0x8, "HACKER CD ROM SYSTEM", 0x14))
				return(true);

			if(!memcmp((char *)sector_buffer + 0x01, "CD001", 0x5))
			{
				if(cdiface->ReadSector(sector_buffer, 0x14, 1) == 0x1)
				{
					static const uint32 known_crcs[] =
					{
						0xd7b47c06,	// AV Tanjou
						0x86aec522,	// Bishoujo Jyanshi [...]
						0xc8d1b5ef,	// CD Bishoujo [...]
						0x0bdbde64,	// CD Pachisuro [...]
					};
					uint32 zecrc = encoding_crc32(0, sector_buffer, 2048);

					for(unsigned int i = 0; i < sizeof(known_crcs) / sizeof(uint32); i++)
						if(known_crcs[i] == zecrc)
							return(true);
				}
			}
		}
	}

	return(false);
}

MDFN_COLD int PCE_LoadCD(std::vector<CDIF *> *CDInterfaces)
{
	LoadCommonPre();

	const char *bios_sname = DetectGECD((*CDInterfaces)[0]) ? "pce.gecdbios" : "pce.cdbios";
	std::string bios_path = MDFN_GetSettingS("filesys.path_firmware") + "/" + MDFN_GetSettingS(bios_sname).c_str();

	MDFNFILE *fp = file_open(bios_path.c_str());
	if (!fp)
		return 0;

	bool disable_bram_cd = MDFN_GetSettingB("pce.disable_bram_cd");

	HuC_Load(fp->data, fp->size, disable_bram_cd, PCE_ACEnabled ? SYSCARD_ARCADE : SYSCARD_3);
	file_close(fp);

	ADPCMBuf = new RavenBuffer();
	for(unsigned lr = 0; lr < 2; lr++)
		CDDABufs[lr] = new RavenBuffer();

	PCE_IsCD = 1;
	PCECD_Init(NULL, PCECDIRQCB, PCE_MASTER_CLOCK, ADPCMBuf->Buf(), CDDABufs[0]->Buf(), CDDABufs[1]->Buf());

	cdifs = CDInterfaces;

	SCSICD_SetDisc(true, NULL, true);
	SCSICD_SetDisc(false, (*cdifs)[0], true);

	return LoadCommon();
}

static MDFN_COLD void Cleanup(void)
{
	if(PCE_IsCD)
		PCECD_Close();

	HuC_Kill();

	if(vce)
	{
		delete vce;
		vce = NULL;
	}

	if(psg)
	{
		delete psg;
		psg = NULL;
	}

	for(unsigned ch = 0; ch < 2; ch++)
	{
		if(HRBufs[ch])
		{
			delete HRBufs[ch];
			HRBufs[ch] = NULL;
		}

		if(CDDABufs[ch])
		{
			delete CDDABufs[ch];
			CDDABufs[ch] = NULL;
		}
	}

	if(ADPCMBuf)
	{
		delete ADPCMBuf;
		ADPCMBuf = NULL;
	}

	if(HRRes)
	{
		delete HRRes;
		HRRes = NULL;
	}
}

MDFN_COLD void PCE_CloseGame(void)
{
	HuC_SaveNV();
	Cleanup();
}

static EmulateSpecStruct *es;
void Emulate(EmulateSpecStruct *espec)
{
	es = espec;

	espec->MasterCycles = 0;
	espec->SoundBufSize = 0;

	MDFNMP_ApplyPeriodicCheats();

	if(espec->VideoFormatChanged)
		vce->SetPixelFormat(espec->CustomPalette, espec->CustomPaletteNumEntries);

	if(espec->SoundFormatChanged)
		SetSoundRate(espec->SoundRate);

	vce->StartFrame(espec->surface, &espec->DisplayRect, espec->LineWidths, espec->skip);

	bool rp_rv;
	bool start_frame = true;

	do
	{
		assert(HuCPU.Timestamp() < 12);

		INPUT_Frame(start_frame);

		//vce->RunFrame(espec->surface, &espec->DisplayRect, espec->LineWidths, IsHES ? 1 : espec->skip);
		do
		{
			rp_rv = vce->RunPartial();
		} while(espec->NeedSoundReverse && !rp_rv);

		const uint32 end_timestamp = HuCPU.Timestamp();
		const uint32 end_timestamp_div12 = end_timestamp / 12;
		const uint32 end_timestamp_mod12 = end_timestamp % 12;

		INPUT_AdjustTS((int32)end_timestamp_mod12 - (int32)end_timestamp);	// Careful with this!

		psg->Update(end_timestamp / 3);
		psg->ResetTS(end_timestamp_mod12 / 3);

		HuC_Update(end_timestamp);
		HuC_ResetTS(end_timestamp_mod12);

		const unsigned rsc = min_T<unsigned>(65536, end_timestamp_div12);
		int32 new_sc;

		if(ADPCMBuf)
			PCECD_ProcessADPCMBuffer(rsc);

		for(unsigned ch = 0; ch < 2; ch++)
		{
			if(HRRes)
			{
				//
				// These filter parameters cause much less of a lowpass and much much less of a highpass filter effect than what I've tested on my Turbo Duo,
				// but I think it's probably broken(in need of capacitor replacements).
				// 
				HRBufs[ch]->Integrate(rsc, 2 /* lp shift, lower = less lp effect */, 14 /* hp shift, higher = less hp effect*/, ADPCMBuf, CDDABufs[ch]);
			}

			if(espec->SoundBuf && HRRes)
			{
				new_sc = HRRes->Resample(HRBufs[ch], rsc, espec->SoundBuf + (espec->SoundBufSize * 2) + ch, espec->SoundBufMaxSize - espec->SoundBufSize, espec->NeedSoundReverse);
			}
			else
			{
				HRBufs[ch]->ResampleSkipped(rsc);
				new_sc = 0;
			}
		}

		espec->NeedSoundReverse = false;

		if(ADPCMBuf)
			ADPCMBuf->Finish(rsc);

		if(CDDABufs[0])
		{
			CDDABufs[0]->Finish(rsc);
			CDDABufs[1]->Finish(rsc);
		}

		espec->SoundBufSize += new_sc;

		if(PCE_IsCD)
			PCECD_ResetTS(end_timestamp_mod12);

		vce->ResetTS(end_timestamp_mod12);

		HuCPU.SyncAndResetTimestamp(end_timestamp_mod12);

		//
		//
		//
		PCE_TimestampBase += end_timestamp - end_timestamp_mod12;
		espec->MasterCycles += end_timestamp - end_timestamp_mod12;

		if(!rp_rv)
			MDFN_MidSync(espec);
		
		
		start_frame = false;
	} while(!rp_rv);

	vce->EndFrame(&espec->DisplayRect);
}

int StateAction(StateMem *sm, int load, int data_only)
{
	SFORMAT StateRegs[] =
	{
		SFARRAY(BaseRAM, 8192),
		SFVAR(PCE_TimestampBase),

		SFEND
	};

	int ret = MDFNSS_StateAction(sm, load, data_only, StateRegs, "MAIN", false);

	ret &= HuCPU.StateAction(sm, load, data_only);
	ret &= vce->StateAction(sm, load, data_only);
	ret &= psg->StateAction(sm, load, data_only);
	ret &= INPUT_StateAction(sm, load, data_only);
	ret &= HuC_StateAction(sm, load, data_only);
	
	return ret;
}

void PCE_Power(void)
{
	memset(BaseRAM, 0x00, sizeof(BaseRAM));

	HuCPU.Power();
	PCE_TimestampBase = 0;	// FIXME, move to init.
	const int32 timestamp = HuCPU.Timestamp();

	vce->Reset(timestamp);
	psg->Power(timestamp / 3);

	HuC_Power();

	PCEINPUT_Power(timestamp);

	if(PCE_IsCD)
		vce->SetCDEvent(PCECD_Power(timestamp));
}

void DoSimpleCommand(int cmd)
{
	switch(cmd)
	{
		case MDFN_MSC_RESET: PCE_Power(); break;
		case MDFN_MSC_POWER: PCE_Power(); break;
	}
}

static DECLFR(CheatReadFunc)
{
	std::vector<SUBCHEAT>::iterator chit;
	uint8 retval = NonCheatPCERead[(A / 8192) & 0xFF](A);

	for(chit = SubCheats[A & 0x7].begin(); chit != SubCheats[A & 0x7].end(); chit++)
	{
		if(A == chit->addr)
		{
			if(chit->compare == -1 || chit->compare == retval)
			{
				retval = chit->value;
				break;
			}
		}
	}
	return(retval);
}

uint8 MemRead(uint32 addr)
{
	return(NonCheatPCERead[(addr / 8192) & 0xFF](addr));
}

static void InstallReadPatch(uint32 address, uint8 value, int compare)
{
	HuCPU.SetFastRead(address >> 13, NULL);
	HuCPU.SetReadHandler(address >> 13, CheatReadFunc);
}

static void RemoveReadPatches(void)
{
	for(int x = 0; x < 0x100; x++)
		HuCPU.SetReadHandler(x, NonCheatPCERead[x]);
}

static void SetLayerEnableMask(uint64 mask)
{
	vce->SetLayerEnableMask(mask);
}

static bool SetSoundRate(double rate)
{
	if(HRRes)
	{
		delete HRRes;
		HRRes = NULL;
	}

	if(rate > 0)
	{
		uint8_t i;
		HRRes = new OwlResampler(PCE_MASTER_CLOCK / 12, rate, MDFN_GetSettingF("pce.resamp_rate_error"), 20, MDFN_GetSettingUI("pce.resamp_quality"));
		for(i = 0; i < 2; i++)
			HRRes->ResetBufResampState(HRBufs[i]);
	}

	return(true);
}

void SettingsChanged(void)
{
	if(PCE_IsCD)
		SetCDSettings();

	PCEINPUT_SettingChanged("input");

	HuCPU.SetOverclock(MDFN_GetSettingUI("pce.ocmultiplier"));

	vce->SetVDCUnlimitedSprites(MDFN_GetSettingB("pce.nospritelimit"));
	vce->SetShowHorizOS(MDFN_GetSettingB("pce.h_overscan"));
}

MDFNGI EmulatedPCE =
{
	MDFN_MASTERCLOCK_FIXED(PCE_MASTER_CLOCK),
	0,

	true,  	// Multires possible?

	0,   	// lcm_width
	0,   	// lcm_height           
	NULL,  	// Dummy

	512,   	// Nominal width
	243,   	// Nominal height

	1365,	// Framebuffer width
	270,	// Framebuffer height

	2,     	// Number of output sound channels
};
