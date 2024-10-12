#include <stdarg.h>

#include <retro_miscellaneous.h>
#include <streams/file_stream.h>
#include <string/stdstring.h>
#include <encodings/crc32.h>
#include <libretro.h>
#include "libretro_core_options.h"
#include <math.h>

#include "mednafen/mednafen.h"
#include "mednafen/git.h"
#include "mednafen/general.h"

#include "mednafen/pce/pce.h"
#include "mednafen/pce/pcecd.h"
#include "mednafen/pce/input.h"
#include "mednafen/pce/huc.h"
#include "mednafen/pce/vce.h"
#include "mednafen/mempatcher.h"
#include "mednafen/cdrom/cdromif.h"
#include "mednafen/cdrom/CDUtility.h"

#ifdef _MSC_VER
#include "mednafen/msvc_compat.h"
#endif

#define MEDNAFEN_CORE_NAME_MODULE "pce"
#define MEDNAFEN_CORE_NAME "Beetle PCE"
#define MEDNAFEN_CORE_VERSION "v1.29.0"
#define MEDNAFEN_CORE_EXTENSIONS "pce|sgx|cue|ccd|chd|toc|m3u"
#define MEDNAFEN_CORE_TIMING_FPS 7159090.90909090 / 455.0 / 263.0
#define MEDNAFEN_CORE_GEOMETRY_BASE_W 256
#define MEDNAFEN_CORE_GEOMETRY_BASE_H 224
#define MEDNAFEN_CORE_GEOMETRY_MAX_W 2048
#define MEDNAFEN_CORE_GEOMETRY_MAX_H 264
#define MEDNAFEN_CORE_GEOMETRY_ASPECT_RATIO 6.0 / 5.0
#define FB_WIDTH 2048
#define FB_HEIGHT 264

static bool cdimagecache = false;
static bool show_advanced_input_settings = true;
static bool use_palette = false;

static int hires_blend = 0;
static int blur_passes = 1;
static int aspect_ratio = 0;

static unsigned video_width = 0;
static unsigned video_height = 0;

/* Composite palette 2020/09/14
 * authors: Dshadoff, Turboxray, Furrtek, Kitrinx and others
 */
static uint8_t composite_palette[] = {
	0, 0, 0, 
	0, 0, 27, 
	1, 2, 61, 
	0, 0, 88, 
	1, 4, 123, 
	0, 0, 149, 
	2, 5, 184, 
	0, 2, 211, 
	28, 0, 4, 
	32, 4, 39, 
	29, 1, 65, 
	33, 6, 100, 
	29, 2, 127, 
	34, 7, 162, 
	30, 4, 188, 
	34, 9, 223, 
	64, 6, 16, 
	60, 3, 43, 
	65, 8, 78, 
	61, 5, 104, 
	66, 10, 139, 
	62, 6, 166, 
	66, 11, 200, 
	62, 8, 227, 
	92, 5, 20, 
	88, 2, 47, 
	93, 7, 82, 
	89, 4, 108, 
	94, 9, 143, 
	90, 5, 170, 
	94, 10, 205, 
	90, 7, 231, 
	120, 4, 25, 
	125, 9, 59, 
	121, 6, 86, 
	125, 11, 121, 
	122, 8, 147, 
	126, 13, 182, 
	122, 9, 209, 
	127, 14, 243, 
	156, 11, 37, 
	153, 8, 63, 
	157, 13, 98, 
	153, 10, 125, 
	158, 15, 160, 
	154, 12, 186, 
	158, 17, 221, 
	155, 13, 247, 
	184, 10, 41, 
	181, 7, 68, 
	185, 12, 102, 
	181, 9, 129, 
	186, 14, 164, 
	182, 10, 190, 
	186, 15, 225, 
	183, 12, 252, 
	212, 9, 45, 
	217, 14, 80, 
	213, 11, 106, 
	218, 16, 141, 
	214, 13, 168, 
	218, 18, 203, 
	214, 14, 229, 
	219, 19, 255, 
	9, 37, 2, 
	5, 34, 29, 
	9, 39, 64, 
	6, 36, 90, 
	10, 41, 125, 
	6, 37, 152, 
	11, 42, 186, 
	7, 39, 213, 
	37, 36, 6, 
	33, 33, 33, 
	37, 38, 68, 
	34, 35, 94, 
	38, 40, 129, 
	34, 36, 156, 
	39, 41, 190, 
	35, 38, 217, 
	65, 35, 10, 
	69, 40, 45, 
	65, 37, 72, 
	70, 42, 107, 
	66, 39, 133, 
	70, 44, 168, 
	67, 40, 194, 
	71, 45, 229, 
	101, 42, 23, 
	97, 39, 49, 
	102, 44, 84, 
	98, 41, 111, 
	102, 46, 145, 
	98, 43, 172, 
	103, 48, 207, 
	99, 44, 233, 
	129, 41, 27, 
	125, 38, 53, 
	130, 43, 88, 
	126, 40, 115, 
	130, 45, 150, 
	126, 42, 176, 
	131, 47, 211, 
	127, 43, 237, 
	157, 40, 31, 
	161, 45, 66, 
	158, 42, 92, 
	162, 47, 127, 
	158, 44, 154, 
	163, 49, 188, 
	159, 45, 215, 
	163, 50, 250, 
	193, 47, 43, 
	189, 44, 70, 
	194, 49, 105, 
	190, 46, 131, 
	194, 51, 166, 
	191, 48, 192, 
	195, 53, 227, 
	191, 49, 254, 
	221, 46, 47, 
	217, 43, 74, 
	222, 48, 109, 
	218, 45, 135, 
	222, 50, 170, 
	219, 47, 197, 
	223, 52, 231, 
	219, 48, 255, 
	9, 66, 0, 
	14, 71, 31, 
	10, 68, 58, 
	14, 73, 92, 
	10, 70, 119, 
	15, 75, 154, 
	11, 71, 180, 
	16, 76, 215, 
	45, 73, 9, 
	42, 70, 35, 
	46, 75, 70, 
	42, 72, 97, 
	47, 77, 131, 
	43, 74, 158, 
	39, 70, 184, 
	44, 75, 219, 
	73, 72, 13, 
	70, 69, 39, 
	74, 74, 74, 
	70, 71, 101, 
	75, 76, 135, 
	71, 73, 162, 
	75, 78, 197, 
	72, 74, 223, 
	101, 71, 17, 
	106, 76, 52, 
	102, 73, 78, 
	106, 78, 113, 
	103, 75, 139, 
	107, 80, 174, 
	103, 77, 201, 
	108, 82, 236, 
	138, 78, 29, 
	134, 75, 56, 
	138, 80, 90, 
	134, 77, 117, 
	139, 82, 152, 
	135, 79, 178, 
	131, 75, 205, 
	136, 80, 240, 
	166, 77, 33, 
	162, 74, 60, 
	166, 79, 95, 
	162, 76, 121, 
	167, 81, 156, 
	163, 78, 182, 
	168, 83, 217, 
	164, 79, 244, 
	194, 76, 37, 
	198, 81, 72, 
	194, 78, 99, 
	199, 83, 133, 
	195, 80, 160, 
	199, 85, 195, 
	196, 82, 221, 
	200, 87, 255, 
	230, 84, 50, 
	226, 80, 76, 
	230, 85, 111, 
	227, 82, 137, 
	223, 79, 164, 
	227, 84, 199, 
	224, 81, 225, 
	228, 86, 255, 
	18, 103, 0, 
	14, 100, 25, 
	18, 105, 60, 
	15, 102, 86, 
	19, 107, 121, 
	15, 104, 148, 
	20, 109, 183, 
	16, 105, 209, 
	46, 102, 3, 
	50, 107, 37, 
	46, 104, 64, 
	51, 109, 99, 
	47, 106, 125, 
	52, 111, 160, 
	48, 108, 187, 
	52, 113, 221, 
	74, 101, 7, 
	78, 106, 42, 
	74, 103, 68, 
	79, 108, 103, 
	75, 105, 129, 
	80, 110, 164, 
	76, 107, 191, 
	80, 112, 226, 
	110, 108, 19, 
	106, 105, 46, 
	111, 110, 80, 
	107, 107, 107, 
	111, 112, 142, 
	108, 109, 168, 
	112, 114, 203, 
	108, 110, 230, 
	138, 107, 23, 
	142, 112, 58, 
	139, 109, 84, 
	143, 114, 119, 
	139, 111, 146, 
	144, 116, 181, 
	140, 113, 207, 
	144, 118, 242, 
	166, 106, 27, 
	170, 111, 62, 
	167, 108, 89, 
	171, 113, 123, 
	167, 110, 150, 
	172, 115, 185, 
	168, 112, 211, 
	172, 117, 246, 
	202, 114, 40, 
	198, 110, 66, 
	203, 115, 101, 
	199, 112, 127, 
	204, 117, 162, 
	200, 114, 189, 
	204, 119, 224, 
	200, 116, 250, 
	230, 112, 44, 
	235, 117, 78, 
	231, 114, 105, 
	235, 119, 140, 
	232, 116, 166, 
	236, 121, 201, 
	232, 118, 228, 
	237, 123, 255, 
	18, 132, 0, 
	23, 137, 27, 
	19, 134, 54, 
	23, 139, 89, 
	20, 136, 115, 
	24, 141, 150, 
	20, 138, 177, 
	25, 143, 211, 
	55, 139, 5, 
	51, 136, 31, 
	55, 141, 66, 
	51, 138, 93, 
	56, 143, 128, 
	52, 140, 154, 
	57, 145, 189, 
	53, 141, 215, 
	83, 138, 9, 
	87, 143, 44, 
	83, 140, 70, 
	88, 145, 105, 
	84, 142, 132, 
	88, 147, 166, 
	85, 144, 193, 
	89, 149, 228, 
	111, 137, 13, 
	115, 142, 48, 
	111, 139, 74, 
	116, 144, 109, 
	112, 141, 136, 
	116, 146, 171, 
	113, 143, 197, 
	117, 148, 232, 
	147, 145, 25, 
	143, 141, 52, 
	147, 146, 87, 
	144, 143, 113, 
	148, 148, 148, 
	144, 145, 175, 
	149, 150, 209, 
	145, 147, 236, 
	175, 143, 29, 
	179, 148, 64, 
	175, 145, 91, 
	180, 150, 126, 
	176, 147, 152, 
	181, 152, 187, 
	177, 149, 213, 
	181, 154, 248, 
	203, 142, 34, 
	207, 147, 68, 
	203, 144, 95, 
	208, 149, 130, 
	204, 146, 156, 
	209, 151, 191, 
	205, 148, 218, 
	209, 153, 252, 
	239, 150, 46, 
	235, 146, 72, 
	240, 151, 107, 
	236, 148, 134, 
	240, 153, 169, 
	237, 150, 195, 
	241, 155, 230, 
	237, 152, 255, 
	27, 169, 0, 
	31, 174, 30, 
	28, 171, 56, 
	32, 176, 91, 
	28, 173, 118, 
	33, 178, 152, 
	29, 175, 179, 
	25, 171, 205, 
	55, 168, 0, 
	59, 173, 34, 
	56, 170, 60, 
	60, 175, 95, 
	56, 172, 122, 
	61, 177, 156, 
	57, 174, 183, 
	61, 179, 218, 
	91, 176, 11, 
	87, 172, 38, 
	92, 177, 73, 
	88, 174, 99, 
	93, 179, 134, 
	89, 176, 160, 
	93, 181, 195, 
	89, 178, 222, 
	119, 175, 15, 
	124, 180, 50, 
	120, 176, 77, 
	124, 181, 111, 
	121, 178, 138, 
	117, 175, 165, 
	121, 180, 199, 
	117, 177, 226, 
	147, 173, 19, 
	152, 178, 54, 
	148, 175, 81, 
	152, 180, 116, 
	149, 177, 142, 
	153, 182, 177, 
	149, 179, 203, 
	154, 184, 238, 
	183, 181, 32, 
	180, 177, 58, 
	184, 182, 93, 
	180, 179, 120, 
	185, 184, 154, 
	181, 181, 181, 
	185, 186, 216, 
	182, 183, 242, 
	211, 180, 36, 
	216, 185, 71, 
	212, 181, 97, 
	217, 186, 132, 
	213, 183, 158, 
	209, 180, 185, 
	213, 185, 220, 
	210, 182, 246, 
	239, 179, 40, 
	244, 184, 75, 
	240, 180, 101, 
	245, 185, 136, 
	241, 182, 163, 
	245, 187, 197, 
	241, 184, 224, 
	246, 189, 255, 
	36, 207, 0, 
	32, 203, 24, 
	36, 208, 58, 
	33, 205, 85, 
	37, 210, 120, 
	33, 207, 146, 
	38, 212, 181, 
	34, 209, 208, 
	64, 206, 1, 
	60, 202, 28, 
	64, 207, 63, 
	61, 204, 89, 
	65, 209, 124, 
	61, 206, 150, 
	66, 211, 185, 
	62, 208, 212, 
	92, 205, 5, 
	96, 210, 40, 
	92, 206, 67, 
	97, 211, 101, 
	93, 208, 128, 
	97, 213, 163, 
	94, 210, 189, 
	98, 215, 224, 
	128, 212, 18, 
	124, 208, 44, 
	129, 213, 79, 
	125, 210, 105, 
	129, 215, 140, 
	125, 212, 167, 
	130, 217, 202, 
	126, 214, 228, 
	156, 211, 22, 
	152, 207, 48, 
	157, 212, 83, 
	153, 209, 110, 
	157, 214, 144, 
	153, 211, 171, 
	158, 216, 206, 
	154, 213, 232, 
	184, 210, 26, 
	188, 215, 61, 
	185, 211, 87, 
	189, 216, 122, 
	185, 213, 148, 
	190, 218, 183, 
	186, 215, 210, 
	190, 220, 245, 
	220, 217, 38, 
	216, 214, 65, 
	221, 219, 99, 
	217, 215, 126, 
	221, 220, 161, 
	218, 217, 187, 
	222, 222, 222, 
	218, 219, 249, 
	248, 216, 42, 
	244, 213, 69, 
	249, 218, 103, 
	245, 214, 130, 
	249, 219, 165, 
	246, 216, 191, 
	250, 221, 226, 
	246, 218, 253, 
	36, 236, 0, 
	41, 241, 26, 
	37, 237, 52, 
	41, 242, 87, 
	37, 239, 114, 
	42, 244, 149, 
	38, 241, 175, 
	43, 246, 210, 
	72, 243, 3, 
	69, 240, 30, 
	73, 245, 65, 
	69, 241, 91, 
	74, 246, 126, 
	70, 243, 153, 
	74, 248, 187, 
	71, 245, 214, 
	100, 242, 8, 
	97, 238, 34, 
	101, 243, 69, 
	97, 240, 95, 
	102, 245, 130, 
	98, 242, 157, 
	102, 247, 192, 
	99, 244, 218, 
	128, 241, 12, 
	133, 246, 46, 
	129, 242, 73, 
	133, 247, 108, 
	130, 244, 134, 
	134, 249, 169, 
	130, 246, 196, 
	135, 251, 230, 
	165, 248, 24, 
	161, 245, 50, 
	165, 250, 85, 
	161, 246, 112, 
	166, 251, 147, 
	162, 248, 173, 
	167, 253, 208, 
	163, 250, 235, 
	193, 247, 28, 
	189, 244, 55, 
	193, 249, 89, 
	189, 245, 116, 
	194, 250, 151, 
	190, 247, 177, 
	195, 252, 212, 
	191, 249, 239, 
	221, 246, 32, 
	225, 251, 67, 
	221, 248, 93, 
	226, 253, 128, 
	222, 249, 155, 
	226, 254, 190, 
	223, 251, 216, 
	227, 255, 251, 
	255, 253, 44, 
	253, 250, 71, 
	255, 255, 106, 
	254, 251, 132, 
	255, 255, 167, 
	254, 253, 194, 
	255, 255, 228, 
	255, 255, 255
};

static int curindent  = 0;
static uint8 lastchar = 0;

static void MDFN_indent(int indent)
{
   curindent += indent;
}

#ifdef DEBUG
static void MDFN_printf(const char *format, ...)
{
   va_list ap;
   char *temp;
   char *format_temp;
   unsigned int x, newlen;
   size_t len            = strlen(format);
   // First, determine how large our format_temp buffer needs to be.
   uint8 lastchar_backup = lastchar; // Save lastchar!

   va_start(ap,format);

   for(newlen=x=0;x < len;x++)
   {
      if(lastchar == '\n' && format[x] != '\n')
      {
         int y;
         for(y=0;y<curindent;y++)
            newlen++;
      }
      newlen++;
      lastchar = format[x];
   }

   // Length + NULL character, duh
   format_temp = (char *)malloc(newlen + 1);
   // Now, construct our format_temp string
   lastchar    = lastchar_backup; // Restore lastchar

   for(newlen=x=0;x < len;x++)
   {
      if(lastchar == '\n' && format[x] != '\n')
      {
         int y;
         for(y=0;y<curindent;y++)
            format_temp[newlen++] = ' ';
      }
      format_temp[newlen++] = format[x];
      lastchar = format[x];
   }

   format_temp[newlen] = 0;

   temp = (char*)malloc(4096 * sizeof(char));
   vsnprintf(temp, 4096, format_temp, ap);
   free(format_temp);

   if (log_cb)
      log_cb(RETRO_LOG_INFO, "%s\n", temp);
   free(temp);

   va_end(ap);
}
#endif

static void ReadM3U(std::vector<std::string> &file_list, std::string path, unsigned depth = 0)
{
   std::string dir_path;
   char linebuf[2048];
   RFILE *fp = filestream_open(path.c_str(), RETRO_VFS_FILE_ACCESS_READ,
         RETRO_VFS_FILE_ACCESS_HINT_NONE);

   if (!fp)
      return;

   MDFN_GetFilePathComponents(path, &dir_path);

   while(filestream_gets(fp, linebuf, sizeof(linebuf)) != NULL)
   {
      std::string efp;

      if(linebuf[0] == '#')
         continue;
      string_trim_whitespace_right(linebuf);
      if(linebuf[0] == 0)
         continue;

      efp = MDFN_EvalFIP(dir_path, std::string(linebuf));

      if(efp.size() >= 4 && efp.substr(efp.size() - 4) == ".m3u")
      {
         if(efp == path)
         {
            log_cb(RETRO_LOG_ERROR, "M3U at \"%s\" references self.\n", efp.c_str());
            goto end;
         }

         if(depth == 99)
         {
            log_cb(RETRO_LOG_ERROR, "M3U load recursion too deep!\n");
            goto end;
         }

         ReadM3U(file_list, efp, depth++);
      }
      else
         file_list.push_back(efp);
   }

end:
   filestream_close(fp);
}

static std::vector<CDIF *> CDInterfaces;   // FIXME: Cleanup on error out.
// TODO: LoadCommon()

static bool MDFNI_LoadCD(const char *path, const char *ext)
{
   bool ret = false;

   if (!path || !ext)
   {
      log_cb(RETRO_LOG_ERROR, "Error opening CD - invalid path\n");
      return false;
   }

   if (!strcasecmp(ext, "m3u"))
   {
      std::vector<std::string> file_list;

      ReadM3U(file_list, path);

      for(unsigned i = 0; i < file_list.size(); i++)
      {
         CDIF *cdif = CDIF_Open(file_list[i].c_str(), cdimagecache);
         CDInterfaces.push_back(cdif);
      }
   }
   else
   {
      CDIF *cdif = CDIF_Open(path, cdimagecache);

      if (cdif)
      {
         ret = true;
         CDInterfaces.push_back(cdif);
      }
   }

   if (!ret)
   {
      log_cb(RETRO_LOG_ERROR, "Error opening CD.\n");
      return false;
   }

#ifdef DEBUG
   /* Print out a track list for all discs. */
   MDFN_indent(1);
   for(unsigned i = 0; i < CDInterfaces.size(); i++)
   {
      TOC toc;

      CDInterfaces[i]->ReadTOC(&toc);

      MDFN_printf("CD %d Layout:", i + 1);
      MDFN_indent(1);

      for(int32 track = toc.first_track; track <= toc.last_track; track++)
      {
         MDFN_printf("Track %2d, LBA: %6d  %s", track, toc.tracks[track].lba, (toc.tracks[track].control & 0x4) ? "DATA" : "AUDIO");
      }

      MDFN_printf("Leadout: %6d", toc.tracks[100].lba);
      MDFN_indent(-1);
   }
#endif

   if(!(PCE_LoadCD(&CDInterfaces)))
   {
      for(unsigned i = 0; i < CDInterfaces.size(); i++)
         delete CDInterfaces[i];

      CDInterfaces.clear();

      return false;
   }

   MDFN_LoadGameCheats(NULL);
   MDFNMP_InstallReadPatches();

   return true;
}

static bool MDFNI_LoadGame(const char *path, const char *ext,
      const uint8_t *data, size_t size)
{
   MDFNFILE *GameFile          = NULL;
   const uint8_t *content_data = NULL;
   size_t content_size         = 0;

   if(ext &&
      (!strcasecmp(ext, "cue") ||
       !strcasecmp(ext, "ccd") ||
       !strcasecmp(ext, "chd") ||
       !strcasecmp(ext, "toc") ||
       !strcasecmp(ext, "m3u")))
      return MDFNI_LoadCD(path, ext);

   /* Check whether we already have a valid
    * data buffer */
   if (data)
   {
      content_data = data;
      content_size = size;
   }
   else
   {
      if (!path)
      {
         log_cb(RETRO_LOG_ERROR, "Error loading content - invalid path\n");
         goto error;
      }

      /* Load content from file */
      GameFile = file_open(path);

      if(!GameFile)
         goto error;

      content_data = GameFile->data;
      content_size = GameFile->size;
   }

   if(PCE_Load(content_data, content_size, ext) <= 0)
      goto error;

   MDFN_LoadGameCheats(NULL);
   MDFNMP_InstallReadPatches();

   if (GameFile)
      file_close(GameFile);

   return true;

error:
   if (GameFile)
      file_close(GameFile);

   return false;
}

struct retro_perf_callback perf_cb;
retro_get_cpu_features_t perf_get_cpu_features_cb = NULL;
retro_log_printf_t log_cb;
static retro_set_led_state_t led_state_cb = NULL;
static retro_video_refresh_t video_cb;
static retro_audio_sample_t audio_cb;
static retro_audio_sample_batch_t audio_batch_cb;
static retro_environment_t environ_cb;
static retro_input_poll_t input_poll_cb;
static retro_input_state_t input_state_cb;
static double last_sound_rate = 0.0;

static bool libretro_supports_option_categories = false;
static bool libretro_supports_bitmasks = false;

static MDFN_Surface *surf = NULL;

static bool failed_init = false;

std::string retro_base_directory;

static void check_system_specs(void)
{
   unsigned level = 5;
   environ_cb(RETRO_ENVIRONMENT_SET_PERFORMANCE_LEVEL, &level);
}

/* LED interface */
enum
{
   RETRO_LED_POWER = 0,
   RETRO_LED_CD,
   RETRO_LED_NUM
};

unsigned int pce_led_state[RETRO_LED_NUM] = {0};
static unsigned int retro_led_state[RETRO_LED_NUM] = {0};
static void retro_led_interface(void)
{
   /* 0: Power
    * 1: CD */

   unsigned int led_state[RETRO_LED_NUM] = {0};
   unsigned int l                        = 0;

   led_state[RETRO_LED_POWER] = pce_led_state[RETRO_LED_POWER];
   led_state[RETRO_LED_CD]    = pce_led_state[RETRO_LED_CD];

   for (l = 0; l < RETRO_LED_NUM; l++)
   {
      if (retro_led_state[l] != led_state[l])
      {
         retro_led_state[l] = led_state[l];
         led_state_cb(l, led_state[l]);
      }
   }
}

void retro_init(void)
{
   struct retro_log_callback log;
   const char *dir = NULL;
   if (environ_cb(RETRO_ENVIRONMENT_GET_LOG_INTERFACE, &log))
      log_cb = log.log;
   else
      log_cb = NULL;

   CDUtility_Init();

   if (environ_cb(RETRO_ENVIRONMENT_GET_SYSTEM_DIRECTORY, &dir) && dir)
   {
      size_t last;
      retro_base_directory = dir;
      // Make sure that we don't have any lingering slashes, etc, as they break Windows.
      last = retro_base_directory.find_last_not_of("/\\");
      if (last != std::string::npos)
         last++;

      retro_base_directory = retro_base_directory.substr(0, last);
   }
   else
   {
      /* TODO: Add proper fallback */
      if (log_cb)
         log_cb(RETRO_LOG_WARN, "System directory is not defined. Fallback on using same dir as ROM for system directory later ...\n");
      failed_init = true;
   }

#if defined(WANT_16BPP) && defined(FRONTEND_SUPPORTS_RGB565)
   enum retro_pixel_format rgb565 = RETRO_PIXEL_FORMAT_RGB565;
   if (environ_cb(RETRO_ENVIRONMENT_SET_PIXEL_FORMAT, &rgb565) && log_cb)
      log_cb(RETRO_LOG_DEBUG, "Frontend supports RGB565 - will use that instead of XRGB1555.\n");
#elif defined(WANT_32BPP)
   enum retro_pixel_format rgb888 = RETRO_PIXEL_FORMAT_XRGB8888;
   if (!environ_cb(RETRO_ENVIRONMENT_SET_PIXEL_FORMAT, &rgb888))
   {
      if (log_cb)
         log_cb(RETRO_LOG_ERROR, "Pixel format XRGB8888 not supported by platform, cannot use %s.\n", MEDNAFEN_CORE_NAME);
      return;
   }
#endif

   if (environ_cb(RETRO_ENVIRONMENT_GET_PERF_INTERFACE, &perf_cb))
      perf_get_cpu_features_cb = perf_cb.get_cpu_features;
   else
      perf_get_cpu_features_cb = NULL;

   bool yes = true;
   environ_cb(RETRO_ENVIRONMENT_SET_SUPPORT_ACHIEVEMENTS, &yes);

   setting_pce_initial_scanline = 0;
   setting_pce_last_scanline = 242;

   check_system_specs();

   libretro_supports_bitmasks = false;
   if (environ_cb(RETRO_ENVIRONMENT_GET_INPUT_BITMASKS, NULL))
      libretro_supports_bitmasks = true;
}

void retro_reset(void)
{
   DoSimpleCommand(MDFN_MSC_RESET);
}

bool retro_load_game_special(unsigned, const struct retro_game_info *, size_t)
{
   return false;
}

#define MAX_PLAYERS 5
#define MAX_BUTTONS 15
static uint8_t input_buf[MAX_PLAYERS][2] = {{0}};
static unsigned int input_type[MAX_PLAYERS] = {0};

static int16_t mousedata[MAX_PLAYERS][3] = {{0}};
static float mouse_sensitivity = 1.0f;
static bool disable_softreset = false;
static bool up_down_allowed = false;

static int avpad6_enable[MAX_PLAYERS] = {0};
static bool avpad6_toggle_down[MAX_PLAYERS] = {0};

// Array to keep track of whether a given player's button is turbo
static int turbo_enable[MAX_PLAYERS][MAX_BUTTONS] = {};
// Array to keep track of each buttons turbo status
static int turbo_counter[MAX_PLAYERS][MAX_BUTTONS] = {};
// The number of frames between each firing of a turbo button
static int Turbo_Delay;
static int Turbo_Toggling = 1;
static bool turbo_toggle_alt = false;
static int turbo_toggle_down[MAX_PLAYERS][MAX_BUTTONS] = {};

static bool update_option_visibility(void)
{
   struct retro_variable var = {0};
   bool updated = false;

   if (libretro_supports_option_categories)
      return false;

   /* decide if input/turbo settings should be shown */
   var.key = "pce_show_advanced_input_settings";
   var.value = NULL;
   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      bool show_advanced_input_settings_prev = show_advanced_input_settings;

      show_advanced_input_settings = (strcmp(var.value, "enabled") == 0);

      if (show_advanced_input_settings != show_advanced_input_settings_prev)
      {
         struct retro_core_option_display option_display;
         size_t i;
         const char av_keys[22][32] = {
            "pce_multitap",
            "pce_mouse_sensitivity",
            "pce_disable_softreset",
            "pce_up_down_allowed",
            "pce_Turbo_Delay",
            "pce_Turbo_Toggling",
            "pce_turbo_toggle_hotkey",
            "pce_p0_turbo_I_enable",
            "pce_p0_turbo_II_enable",
            "pce_p1_turbo_I_enable",
            "pce_p1_turbo_II_enable",
            "pce_p2_turbo_I_enable",
            "pce_p2_turbo_II_enable",
            "pce_p3_turbo_I_enable",
            "pce_p3_turbo_II_enable",
            "pce_p4_turbo_I_enable",
            "pce_p4_turbo_II_enable",
            "pce_default_joypad_type_p1",
            "pce_default_joypad_type_p2",
            "pce_default_joypad_type_p3",
            "pce_default_joypad_type_p4",
            "pce_default_joypad_type_p5",
         };

         option_display.visible = show_advanced_input_settings;

         for (i = 0; i < 22; i++)
         {
            option_display.key = av_keys[i];
            environ_cb(RETRO_ENVIRONMENT_SET_CORE_OPTIONS_DISPLAY, &option_display);
         }

         updated = true;
      }
   }

   return updated;
}

static void check_variables(bool loaded)
{
   struct retro_variable var = {0};

   if (!loaded)
   {
      var.key      = "pce_cdimagecache";
      cdimagecache = false;

      if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
         if (strcmp(var.value, "enabled") == 0)
            cdimagecache = true;

      var.key = "pce_cdbios";

      if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
      {
         if (strcmp(var.value, "System Card 3") == 0)
            setting_pce_cdbios = "syscard3.pce";
         else if (strcmp(var.value, "System Card 2") == 0)
            setting_pce_cdbios = "syscard2.pce";
         else if (strcmp(var.value, "System Card 1") == 0)
            setting_pce_cdbios = "syscard1.pce";
         else if (strcmp(var.value, "Games Express") == 0)
            setting_pce_cdbios = "gexpress.pce";
         else if (strcmp(var.value, "System Card 3 US") == 0)
            setting_pce_cdbios = "syscard3u.pce";
         else if (strcmp(var.value, "System Card 2 US") == 0)
            setting_pce_cdbios = "syscard2u.pce";
      }

      var.key = "pce_arcadecard";

      if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
      {
         setting_pce_arcadecard = (strcmp(var.value, "enabled") == 0);
      }

      var.key = "pce_psgrevision";

      if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
      {
         if (strcmp(var.value, "auto") == 0)
            setting_pce_psgrevision = 2;
         else if (strcmp(var.value, "HuC6280") == 0)
            setting_pce_psgrevision = 0;
         else if (strcmp(var.value, "HuC6280A") == 0)
            setting_pce_psgrevision = 1;
      }

      char key[64] = {0};

      var.key = key;
      for (int i = 0; i < MAX_PLAYERS; i++)
      {
         snprintf(key, sizeof(key), "pce_default_joypad_type_p%d", i + 1);
         if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
         {
            if (strcmp(var.value, "2 Buttons") == 0)
               avpad6_enable[i] = 0;
            else if (strcmp(var.value, "6 Buttons") == 0)
               avpad6_enable[i] = (1 << RETRO_DEVICE_ID_JOYPAD_L2);
         }
      }
   }

   var.key = "pce_nospritelimit";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      setting_pce_nospritelimit = (strcmp(var.value, "enabled") == 0);
   }

   var.key = "pce_ocmultiplier";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      setting_pce_overclocked = atoi(var.value);
   }

   var.key = "pce_palette";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      if (strcmp(var.value, "Composite") == 0)
         use_palette = true;
      else
         use_palette = false;
   }

   var.key = "pce_aspect_ratio";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      if (strcmp(var.value, "auto") == 0)
         aspect_ratio = 0;
      else if (strcmp(var.value, "6:5") == 0)
         aspect_ratio = 1;
      else if (strcmp(var.value, "4:3") == 0)
         aspect_ratio = 2;
      else if (strcmp(var.value, "uncorrected") == 0)
         aspect_ratio = 3;
   }

   var.key = "pce_h_overscan";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      setting_pce_h_overscan = (strcmp(var.value, "disabled") != 0);
      setting_pce_crop_h_overscan = (strcmp(var.value, "auto") == 0);
   }

   var.key = "pce_hires_blend";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      hires_blend = !(strcmp(var.value, "disabled") == 0);
      if (hires_blend)
         blur_passes = atoi(var.value);
   }

   var.key = "pce_initial_scanline";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      setting_pce_initial_scanline = atoi(var.value);
   }

   var.key = "pce_last_scanline";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      setting_pce_last_scanline = atoi(var.value);
   }

   var.key = "pce_cddavolume";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      setting_pce_cddavolume = atoi(var.value);
   }

   var.key = "pce_adpcmvolume";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      setting_pce_adpcmvolume = atoi(var.value);
   }

   var.key = "pce_cdpsgvolume";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      setting_pce_cdpsgvolume = atoi(var.value);
   }

   var.key = "pce_cdspeed";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      setting_pce_cdspeed = atoi(var.value);
   }

   var.key = "pce_adpcmextraprec";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      setting_pce_adpcmextraprec = (strcmp(var.value, "12-bit") == 0);
   }

   var.key = "pce_resamp_quality";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      setting_pce_resamp_quality = atoi(var.value);

      last_sound_rate = 0;
   }

   var.key = "pce_multitap";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      setting_pce_multitap = (strcmp(var.value, "enabled") == 0);
   }

   var.key = "pce_scaling";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      if(strcmp(var.value, "auto") == 0)
         setting_pce_scaling = 0;
      else if(strcmp(var.value, "lores") == 0)
         setting_pce_scaling = 1;
      else if(strcmp(var.value, "hires") == 0)
         setting_pce_scaling = 2;
   }

   // Set Turbo_Toggling
   var.key = "pce_Turbo_Toggling";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      if(strcmp(var.value, "disabled") == 0)
         Turbo_Toggling = 0;
      else if(strcmp(var.value, "toggle") == 0)
         Turbo_Toggling = 1;
      else if(strcmp(var.value, "always") == 0)
         Turbo_Toggling = 2;

      int mode = (Turbo_Toggling == 2);
      for(int lcv = 0; lcv < MAX_PLAYERS; lcv++)
      {
         turbo_enable[lcv][8] = mode;
         turbo_enable[lcv][9] = mode;
      }
   }

   // Set TURBO_DELAY
   var.key = "pce_Turbo_Delay";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      if (strcmp(var.value, "Fast") == 0)
         Turbo_Delay = 3;
      else if (strcmp(var.value, "Medium") == 0)
         Turbo_Delay = 8;
      else if (strcmp(var.value, "Slow") == 0)
         Turbo_Delay = 15;
   }

   //  False sets turbo hotkey X/Y, true assigns hotkey to L3/R3
   var.key = "pce_turbo_toggle_hotkey";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      turbo_toggle_alt = (strcmp(var.value, "enabled") == 0);
   }

   // Enable turbo for each player's I+II buttons
   var.key = "pce_p0_turbo_I_enable";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      turbo_enable[0][0] = (strcmp(var.value, "enabled") == 0);
   }

   var.key = "pce_p0_turbo_II_enable";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      turbo_enable[0][1] = (strcmp(var.value, "enabled") == 0);
   }

   var.key = "pce_p1_turbo_I_enable";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      turbo_enable[1][0] = (strcmp(var.value, "enabled") == 0);
   }

   var.key = "pce_p1_turbo_II_enable";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      turbo_enable[1][1] = (strcmp(var.value, "enabled") == 0);
   }

   var.key = "pce_p2_turbo_I_enable";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      turbo_enable[2][0] = (strcmp(var.value, "enabled") == 0);
   }

   var.key = "pce_p2_turbo_II_enable";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      turbo_enable[2][1] = (strcmp(var.value, "enabled") == 0);
   }

   var.key = "pce_p3_turbo_I_enable";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      turbo_enable[3][0] = (strcmp(var.value, "enabled") == 0);
   }

   var.key = "pce_p3_turbo_II_enable";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      turbo_enable[3][1] = (strcmp(var.value, "enabled") == 0);
   }

   var.key = "pce_p4_turbo_I_enable";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      turbo_enable[4][0] = (strcmp(var.value, "enabled") == 0);
   }

   var.key = "pce_p4_turbo_II_enable";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      turbo_enable[4][1] = (strcmp(var.value, "enabled") == 0);
   }

   var.key = "pce_mouse_sensitivity";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      mouse_sensitivity = atof(var.value);
   }

   var.key = "pce_disable_softreset";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      disable_softreset = (strcmp(var.value, "enabled") == 0);
   }

   var.key = "pce_up_down_allowed";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      up_down_allowed = (strcmp(var.value, "enabled") == 0);
   }

   update_option_visibility();

   if (loaded)
      SettingsChanged();
}

bool retro_load_game(const struct retro_game_info *info)
{
   struct retro_input_descriptor desc[] = {
      #define button_ids(INDEX) \
      { INDEX, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_LEFT,  "D-Pad Left" },\
      { INDEX, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_UP,    "D-Pad Up" },\
      { INDEX, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_DOWN,  "D-Pad Down" },\
      { INDEX, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_RIGHT, "D-Pad Right" },\
      { INDEX, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_B,     "II" },\
      { INDEX, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_A,     "I" },\
      { INDEX, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_X,     "IV" },\
      { INDEX, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_Y,     "III" },\
      { INDEX, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_L,     "V" },\
      { INDEX, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_R,     "VI" },\
      { INDEX, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_L2,    "Mode Switch" },\
      { INDEX, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_SELECT,    "Select" },\
      { INDEX, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_START,    "Run" },
      button_ids(0)
      button_ids(1)
      button_ids(2)
      button_ids(3)
      button_ids(4)

      { 0 },
   };

   const struct retro_game_info_ext *info_ext = NULL;
   const uint8_t *content_data                = NULL;
   size_t content_size                        = 0;
   const char *content_path                   = NULL;
   char content_ext[8];

   content_ext[0] = '\0';

   if (failed_init)
      return false;

   /* Attempt to fetch extended game info */
   if (environ_cb(RETRO_ENVIRONMENT_GET_GAME_INFO_EXT, &info_ext))
   {
      content_data = (const uint8_t *)info_ext->data;
      content_size = info_ext->size;

      /* Content path information is only required
       * if we do not have a valid data buffer */
      if (!content_data)
      {
         content_path = info_ext->full_path;

         strncpy(content_ext, info_ext->ext, sizeof(content_ext));
         content_ext[sizeof(content_ext) - 1] = '\0';
      }
   }
   else
   {
      const char *ext = NULL;

      if (!info || !info->path)
         return false;

      content_data = NULL;
      content_size = 0;
      content_path = info->path;

      if ((ext = strrchr(info->path, '.')))
      {
         strncpy(content_ext, ext + 1, sizeof(content_ext));
         content_ext[sizeof(content_ext) - 1] = '\0';
      }
   }

   environ_cb(RETRO_ENVIRONMENT_SET_INPUT_DESCRIPTORS, desc);

   check_variables(false);

   if (!MDFNI_LoadGame(content_path, content_ext,
         content_data, content_size))
      return false;

   surf = (MDFN_Surface*)calloc(1, sizeof(*surf));

   if (!surf)
      return false;

   surf->width  = FB_WIDTH;
   surf->height = FB_HEIGHT;
   surf->pitch  = FB_WIDTH;
   surf->pixels = (bpp_t*) calloc(sizeof(bpp_t), FB_WIDTH * FB_HEIGHT);

   if (!surf->pixels)
   {
      free(surf);
      return false;
   }

   // Possible endian bug ...
   for (unsigned i = 0; i < MAX_PLAYERS; i++)
      PCEINPUT_SetInput(i, "gamepad", &input_buf[i][0]);

   pce_led_state[RETRO_LED_POWER] = 1;

   return true;
}

void retro_unload_game(void)
{
   MDFN_FlushGameCheats(0);

   PCE_CloseGame();

   MDFNMP_Kill();

   for(unsigned i = 0; i < CDInterfaces.size(); i++)
      delete CDInterfaces[i];

   CDInterfaces.clear();
}

static void update_input(void)
{
   unsigned i,j;
   int16_t joy_bits[MAX_PLAYERS] = {0};

   static int turbo_map[]     = { -1,-1,-1,-1,-1,-1,-1,-1, 1, 0,-1,-1,-1,-1,-1 };
   static int turbo_map_alt[] = { -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, 1, 0 };
   static unsigned map[] = {
      RETRO_DEVICE_ID_JOYPAD_A,
      RETRO_DEVICE_ID_JOYPAD_B,
      RETRO_DEVICE_ID_JOYPAD_SELECT,
      RETRO_DEVICE_ID_JOYPAD_START,
      RETRO_DEVICE_ID_JOYPAD_UP,
      RETRO_DEVICE_ID_JOYPAD_RIGHT,
      RETRO_DEVICE_ID_JOYPAD_DOWN,
      RETRO_DEVICE_ID_JOYPAD_LEFT,
      RETRO_DEVICE_ID_JOYPAD_Y,
      RETRO_DEVICE_ID_JOYPAD_X,
      RETRO_DEVICE_ID_JOYPAD_L,
      RETRO_DEVICE_ID_JOYPAD_R,
      RETRO_DEVICE_ID_JOYPAD_L2,
      RETRO_DEVICE_ID_JOYPAD_L3,
      RETRO_DEVICE_ID_JOYPAD_R3
   };

   for (j = 0; j < MAX_PLAYERS; j++)
   {
      if (libretro_supports_bitmasks)
         joy_bits[j] = input_state_cb(j, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_MASK);
      else
      {
         for (i = 0; i < (RETRO_DEVICE_ID_JOYPAD_R3+1); i++)
            joy_bits[j] |= input_state_cb(j, RETRO_DEVICE_JOYPAD, 0, i) ? (1 << i) : 0;
      }
   }

   for (j = 0; j < MAX_PLAYERS; j++)
   {
      if (input_type[j] == RETRO_DEVICE_JOYPAD)             // Joypad
      {
         uint16_t input_state = 0;

         for (i = 0; i < MAX_BUTTONS; i++)
         {
            if (turbo_enable[j][i] == 1) //Check whether a given button is turbo-capable
            {
               turbo_counter[j][i]++;

               if (turbo_counter[j][i] > (Turbo_Delay)) //When the counter exceeds turbo delay, fire and return to zero
               {
                  if(Turbo_Toggling == 2 && (i == 8 || i == 9) && !avpad6_enable[j])
                     input_state |= (joy_bits[j] & (1 << map[i])) ? (1 << turbo_map[i]) : 0;
                  else
                     input_state |= (joy_bits[j] & (1 << map[i])) ? (1 << i) : 0;

                  turbo_counter[j][i] = 0;
               }
            }
            else if ((!turbo_toggle_alt ? turbo_map[i] : turbo_map_alt[i]) != -1 && Turbo_Toggling == 1 && !avpad6_enable[j])
            {
               if (input_state_cb(j, RETRO_DEVICE_JOYPAD, 0, map[i]))
               {
                  if (turbo_toggle_down[j][i] == 0)
                  {
                     turbo_toggle_down[j][i] = 1;
                     turbo_enable[j][(!turbo_toggle_alt ? turbo_map[i] : turbo_map_alt[i])] = turbo_enable[j][(!turbo_toggle_alt ? turbo_map[i] : turbo_map_alt[i])] ^ 1;
                     MDFN_DispMessage("Pad %i Button %s Turbo %s", j + 1,
                        i == (!turbo_toggle_alt ? 9 : 14) ? "I" : "II",
                        turbo_enable[j][(!turbo_toggle_alt ? turbo_map[i] : turbo_map_alt[i])] ? "ON" : "OFF" );
                  }
               }
               else
                  turbo_toggle_down[j][i] = 0;
            }
            else if(i == RETRO_DEVICE_ID_JOYPAD_L2)
            {
               if(input_state_cb(j, RETRO_DEVICE_JOYPAD, 0, map[i]))
               {
                  if (avpad6_toggle_down[j] == 0)
                  {
                     avpad6_toggle_down[j] = 1;
                     avpad6_enable[j] ^= (1 << RETRO_DEVICE_ID_JOYPAD_L2);

                     MDFN_DispMessage("Pad %i %s", j + 1, avpad6_enable[j] ? "6-buttons" : "2-buttons" );

                     int mode = !avpad6_enable[j] && (Turbo_Toggling == 2);
                     for(int lcv = 0; lcv < MAX_PLAYERS; lcv++)
                     {
                        turbo_enable[lcv][8] = mode;
                        turbo_enable[lcv][9] = mode;
                     }
                  }
               }
               else
                  avpad6_toggle_down[j] = 0;

               input_state |= avpad6_enable[j];
            }
            else
               input_state |= (joy_bits[j] & (1 << map[i])) ? (1 << i) : 0;
         }

         if (disable_softreset == true)
            if ((input_state & 0xC) == 0xC) input_state &= ~0xC;

         if (up_down_allowed == false)
         {
            if ((input_state & 0x50) == 0x50) input_state &= ~0x50;
            if ((input_state & 0xA0) == 0xA0) input_state &= ~0xA0;
         }

         // Input data must be little endian.
         input_buf[j][0] = (input_state >> 0) & 0xff;
         input_buf[j][1] = (input_state >> 8) & 0xff;
      }

      else if (input_type[j] == RETRO_DEVICE_MOUSE)
      {
         int16_t mouse_buttons = 0;

         float _x = input_state_cb(j, RETRO_DEVICE_MOUSE, 0, RETRO_DEVICE_ID_MOUSE_X);
         float _y = input_state_cb(j, RETRO_DEVICE_MOUSE, 0, RETRO_DEVICE_ID_MOUSE_Y);

         mousedata[j][0] = (int)roundf(_x * mouse_sensitivity);
         mousedata[j][1] = (int)roundf(_y * mouse_sensitivity);

         if (input_state_cb(j, RETRO_DEVICE_MOUSE, 0, RETRO_DEVICE_ID_MOUSE_LEFT))
            mouse_buttons |= (1 << 0); // left mouse button
         if (input_state_cb(j, RETRO_DEVICE_MOUSE, 0, RETRO_DEVICE_ID_MOUSE_RIGHT))
            mouse_buttons |= (1 << 1); // right mouse button
         if (input_state_cb(j, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_SELECT))
            mouse_buttons |= (1 << 2); // select
         if (input_state_cb(j, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_START) ||
            input_state_cb(j, RETRO_DEVICE_MOUSE, 0, RETRO_DEVICE_ID_MOUSE_MIDDLE))
            mouse_buttons |= (1 << 3); // start

         mousedata[j][2] = mouse_buttons;
      }
   }
}

static uint64_t video_frames, audio_frames;

#define PAR_4_3      (4.0 / 3.0)
#define PAR_6_5      (6.0 / 5.0)
#define CLOCK_FREQ_NTSC  (135.0 / 11.0 * 1000000.0) // NTSC Square Interlaced Pixels

static float get_aspect_ratio(unsigned width, unsigned height)
{
   if(aspect_ratio == 0)
   {
      float par = (CLOCK_FREQ_NTSC / 2.0);

      switch(vce_resolution.max_rate)
      {
         case 0: par /= 5369317.5; break;
         case 1: par /= 7159090.0; break;
         case 2:
         case 3: par /= 10738635.0; break;
         case 4: par /= 21477270.0; break;
      }

      return (float) width / (float) height * par;
   }
   else if(aspect_ratio == 1)
      return 6.0 / 5.0;
   else if(aspect_ratio == 2)
      return 4.0 / 3.0;
   else if(aspect_ratio == 3)
   {
      float aspect = (float) width / (float) height;

      if(vce_resolution.max_rate == 4)
      {
         if(vce_resolution.res_512)
            aspect /= 2.0;

         else if(vce_resolution.res_352)
            aspect /= 3.0;

         else
            aspect /= 4.0;
      }

      return aspect;
   }
   return 4.0 / 3.0;
}

void update_geometry(unsigned width, unsigned height)
{
   struct retro_system_av_info info;

   memset(&info, 0, sizeof(info));
   info.timing.fps            = MEDNAFEN_CORE_TIMING_FPS;
   info.timing.sample_rate    = 44100;
   info.geometry.max_width    = MEDNAFEN_CORE_GEOMETRY_MAX_W;
   info.geometry.max_height   = MEDNAFEN_CORE_GEOMETRY_MAX_H;

   info.geometry.base_width   = width;
   info.geometry.base_height  = height;
   info.geometry.aspect_ratio = get_aspect_ratio(width, height);

   environ_cb(RETRO_ENVIRONMENT_SET_GEOMETRY, &info);
}

static void hires_blending(bpp_t *fb, int width, int height, int pitch)
{
   int x, y, z;

#if defined(WANT_32BPP)
  #define AVERAGE_565(el0, el1) ((el0 + el1) >> 1)
#else
  #define AVERAGE_565(el0, el1) (((el0) & (el1)) + ((((el0) ^ (el1)) & 0xF7DE) >> 1))
#endif

   if (vce_resolution.max_rate == 4 && hires_blend == 1) /* Blur method */
   {
      for (z = 0; z < blur_passes; z++)
      {
         for (y = height - 1; y >= 0; y--)
         {
            bpp_t *input = &fb[y * pitch];
            bpp_t *output = &fb[y * pitch];
            bpp_t l, r;

            l = 0;
            r = *input++;
            *output++ = AVERAGE_565 (r, r);
            l = r;

            for (x = 0; x < (width/2)-1; x++)
            {
               r = *input++;
               *output++ = AVERAGE_565 (l, r);
               l = r;

               r = *input++;
               *output++ = AVERAGE_565 (l, r);
               l = r;
            }
         }
      }
   }
}
void retro_run(void)
{
   input_poll_cb();

   update_input();

   static int16_t sound_buf[0x10000];
   static int32_t rects[FB_HEIGHT];
   bool resolution_changed = false;
   rects[0] = ~0;

   EmulateSpecStruct spec;

   spec.surface = surf;
   spec.VideoFormatChanged = true;

   spec.DisplayRect.x = 0;
   spec.DisplayRect.y = 0;
   spec.DisplayRect.w = 0;
   spec.DisplayRect.h = 0;

   spec.LineWidths = rects;
   spec.CustomPalette = use_palette ? composite_palette : NULL;
   spec.CustomPaletteNumEntries = use_palette ? 512 : 0;

   spec.InterlaceOn = false;
   spec.InterlaceField = false;

   spec.skip = false;

   spec.SoundFormatChanged = false;

   spec.SoundRate = 44100;

   spec.SoundBuf = sound_buf;
   spec.SoundBufMaxSize = sizeof(sound_buf) / 2;
   spec.SoundBufSize = 0;

   spec.SoundVolume = 1.0;
   spec.soundmultiplier = 1.0;

   spec.NeedRewind = false;
   spec.NeedSoundReverse = false;

   if (spec.SoundRate != last_sound_rate)
   {
      spec.SoundFormatChanged = true;
      last_sound_rate = spec.SoundRate;
   }

   Emulate(&spec);

   /* LED interface */
   if (led_state_cb)
      retro_led_interface();

#define PCE_SOUNDCHANS 2
   const int32 SoundBufMaxSize = spec.SoundBufMaxSize;

   if (video_width != spec.DisplayRect.w || video_height != spec.DisplayRect.h)
      resolution_changed = true;

   video_width  = spec.DisplayRect.w;
   video_height = spec.DisplayRect.h;

   bpp_t *fb = surf->pixels + spec.DisplayRect.x + surf->pitch * spec.DisplayRect.y;
   
   hires_blending(fb, video_width, video_height, FB_WIDTH);

   video_cb(fb, video_width, video_height, FB_WIDTH * sizeof(bpp_t));
   audio_batch_cb(spec.SoundBuf, spec.SoundBufSize);

   bool updated = false;
   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE_UPDATE, &updated) && updated)
   {
      check_variables(true);
      update_geometry(video_width, video_height);
   }
   else if (resolution_changed)
      update_geometry(video_width, video_height);

   video_frames++;
   audio_frames += spec.SoundBufSize;
}

void retro_get_system_info(struct retro_system_info *info)
{
   memset(info, 0, sizeof(*info));
   info->library_name     = MEDNAFEN_CORE_NAME;
#ifndef GIT_VERSION
#define GIT_VERSION ""
#endif
   info->library_version  = MEDNAFEN_CORE_VERSION GIT_VERSION;
   info->need_fullpath    = true;
   info->valid_extensions = MEDNAFEN_CORE_EXTENSIONS;
   info->block_extract    = false;
}

void retro_get_system_av_info(struct retro_system_av_info *info)
{
   memset(info, 0, sizeof(*info));
   info->timing.fps            = MEDNAFEN_CORE_TIMING_FPS;
   info->timing.sample_rate    = 44100;
   info->geometry.base_width   = MEDNAFEN_CORE_GEOMETRY_BASE_W;
   info->geometry.base_height  = MEDNAFEN_CORE_GEOMETRY_BASE_H;
   info->geometry.max_width    = MEDNAFEN_CORE_GEOMETRY_MAX_W;
   info->geometry.max_height   = MEDNAFEN_CORE_GEOMETRY_MAX_H;
   info->geometry.aspect_ratio = MEDNAFEN_CORE_GEOMETRY_ASPECT_RATIO;
}

void retro_deinit()
{
   if (surf)
   {
      if (surf->pixels)
         free(surf->pixels);
      surf->pixels = NULL;
      free(surf);
   }
   surf = NULL;

   if (log_cb)
   {
      log_cb(RETRO_LOG_DEBUG, "[%s]: Samples / Frame: %.5f\n",
            MEDNAFEN_CORE_NAME, (double)audio_frames / video_frames);
      log_cb(RETRO_LOG_DEBUG, "[%s]: Estimated FPS: %.5f\n",
            MEDNAFEN_CORE_NAME, (double)video_frames * 44100 / audio_frames);
   }

   libretro_supports_option_categories = false;
   libretro_supports_bitmasks = false;
   video_width = 0;
   video_height = 0;
   curindent = 0;
   lastchar = 0;
   last_sound_rate = 0.0;
   failed_init = false;
}

unsigned retro_get_region(void)
{
   return RETRO_REGION_NTSC; // FIXME: Regions for other cores.
}

unsigned retro_api_version(void)
{
   return RETRO_API_VERSION;
}

void retro_set_controller_port_device(unsigned in_port, unsigned device)
{
   if (in_port < MAX_PLAYERS)
   {
      input_type[in_port] = device;

      switch(device)
      {
         case RETRO_DEVICE_JOYPAD:
            PCEINPUT_SetInput(in_port, "gamepad", &input_buf[in_port][0]);
            break;

         case RETRO_DEVICE_MOUSE:
            PCEINPUT_SetInput(in_port, "mouse", (uint8_t *) &mousedata[in_port][0]);
            break;
      }
   }
}

void retro_set_environment(retro_environment_t cb)
{
   struct retro_vfs_interface_info vfs_iface_info;
   struct retro_led_interface led_interface;
   bool option_categories = false;
   environ_cb = cb;

   static const struct retro_controller_description pads[] = {
      { "PCE Joypad", RETRO_DEVICE_JOYPAD },
      { "PCE Mouse", RETRO_DEVICE_MOUSE },
   };

   static const struct retro_controller_info ports[] = {
      { pads, 2 },
      { pads, 2 },
      { pads, 2 },
      { pads, 2 },
      { pads, 2 },
      { 0 },
   };

   static const struct retro_system_content_info_override content_overrides[] = {
      {
         "pce|sgx", /* extensions */
         false,     /* need_fullpath */
         false      /* persistent_data */
      },
      { NULL, false, false }
   };

   libretro_set_core_options(environ_cb, &option_categories);
   libretro_supports_option_categories |= option_categories;

   if (libretro_supports_option_categories)
   {
      struct retro_core_option_display option_display;

      option_display.visible = false;
      option_display.key     = "pce_show_advanced_input_settings";

      environ_cb(RETRO_ENVIRONMENT_SET_CORE_OPTIONS_DISPLAY,
            &option_display);
   }
   else
   {
      struct retro_core_options_update_display_callback update_display_cb;
      update_display_cb.callback = update_option_visibility;

      environ_cb(RETRO_ENVIRONMENT_SET_CORE_OPTIONS_UPDATE_DISPLAY_CALLBACK,
            &update_display_cb);
   }

   environ_cb(RETRO_ENVIRONMENT_SET_CONTROLLER_INFO, (void*)ports);
   environ_cb(RETRO_ENVIRONMENT_SET_CONTENT_INFO_OVERRIDE, (void*)content_overrides);

   vfs_iface_info.required_interface_version = 2;
   vfs_iface_info.iface                      = NULL;
   if (environ_cb(RETRO_ENVIRONMENT_GET_VFS_INTERFACE, &vfs_iface_info))
      filestream_vfs_init(&vfs_iface_info);

   if (environ_cb(RETRO_ENVIRONMENT_GET_LED_INTERFACE, &led_interface))
      if (led_interface.set_led_state && !led_state_cb)
         led_state_cb = led_interface.set_led_state;
}

void retro_set_audio_sample(retro_audio_sample_t cb)
{
   audio_cb = cb;
}

void retro_set_audio_sample_batch(retro_audio_sample_batch_t cb)
{
   audio_batch_cb = cb;
}

void retro_set_input_poll(retro_input_poll_t cb)
{
   input_poll_cb = cb;
}

void retro_set_input_state(retro_input_state_t cb)
{
   input_state_cb = cb;
}

void retro_set_video_refresh(retro_video_refresh_t cb)
{
   video_cb = cb;
}

size_t retro_serialize_size(void)
{
   StateMem st;
   size_t serialize_size;

   st.data           = NULL;
   st.data_frontend  = NULL;
   st.loc            = 0;
   st.len            = 0;
   st.malloced       = 0;
   st.initial_malloc = 0;

   if (!MDFNSS_SaveSM(&st, 0, 0, NULL, NULL, NULL))
      return 0;

   free(st.data);

   serialize_size = st.len;

   int runahead = -1;
   if(environ_cb(RETRO_ENVIRONMENT_GET_AUDIO_VIDEO_ENABLE, &runahead))
   {
      // future expanding size
      if(runahead & 4)
         serialize_size += 0x280000;
   }

   return serialize_size;
}

bool retro_serialize(void *data, size_t size)
{
   StateMem st;
   bool ret          = false;

   st.data_frontend  = (uint8_t*)data;
   st.data           = st.data_frontend;
   st.loc            = 0;
   st.len            = 0;
   st.malloced       = size;
   st.initial_malloc = 0;

   /* MDFNSS_SaveSM will malloc separate memory for st.data to complete
    * the save if the passed-in size is too small */
   ret = MDFNSS_SaveSM(&st, 0, 0, NULL, NULL, NULL);

   if (st.data != st.data_frontend)
   {
      log_cb(RETRO_LOG_WARN, "Save state size has increased\n");
      free(st.data);
      ret = false;
   }

   return ret;
}

bool retro_unserialize(const void *data, size_t size)
{
   StateMem st;

   st.data_frontend  = (uint8_t*)data;
   st.data           = st.data_frontend;
   st.loc            = 0;
   st.len            = size;
   st.malloced       = 0;
   st.initial_malloc = 0;

   return MDFNSS_LoadSM(&st, 0, 0);
}

void *retro_get_memory_data(unsigned type)
{
   switch (type)
   {
      case RETRO_MEMORY_SAVE_RAM:
         if (IsPopulous)
            return (uint8_t*)PopRAM;

         return (uint8_t*)SaveRAM;

      case RETRO_MEMORY_SYSTEM_RAM:
         return BaseRAM;

      default:
         break;
   }

   return NULL;
}

size_t retro_get_memory_size(unsigned type)
{
   switch (type)
   {
   case RETRO_MEMORY_SAVE_RAM:
      if (IsPopulous)
         return 32768;

      return 2048;

   case RETRO_MEMORY_SYSTEM_RAM:
      return sizeof(BaseRAM) - 8192;

   default:
      break;
   }

   return 0;
}

void retro_cheat_reset(void)
{}

void retro_cheat_set(unsigned, bool, const char *)
{}

#ifdef _WIN32
static void sanitize_path(std::string &path)
{
   size_t size = path.size();
   for (size_t i = 0; i < size; i++)
      if (path[i] == '/')
         path[i] = '\\';
}
#endif

// Use a simpler approach to make sure that things go right for libretro.
std::string MDFN_MakeFName(MakeFName_Type type, int id1, const char *cd1)
{
#ifdef _WIN32
   char slash = '\\';
#else
   char slash = '/';
#endif
   std::string ret;
   switch (type)
   {
   case MDFNMKF_FIRMWARE:
      ret = retro_base_directory + slash + std::string(cd1);
#ifdef _WIN32
      sanitize_path(ret); // Because Windows path handling is mongoloid.
#endif
      break;

   default:
      break;
   }

   if (log_cb)
      log_cb(RETRO_LOG_INFO, "MDFN_MakeFName: %s\n", ret.c_str());
   return ret;
}

void MDFND_DispMessage(unsigned char *str)
{
   const char *strc = (const char*)str;
   struct retro_message msg =
   {
      strc,
      180
   };

   environ_cb(RETRO_ENVIRONMENT_SET_MESSAGE, &msg);
}

void MDFN_DispMessage(const char *format, ...)
{
   struct retro_message msg;
   va_list ap;
   va_start(ap,format);
   char *str        = (char*)malloc(4096 * sizeof(char));
   const char *strc = NULL;

   vsnprintf(str, 4096, format,ap);
   va_end(ap);
   strc = str;

   msg.frames = 180;
   msg.msg    = strc;

   environ_cb(RETRO_ENVIRONMENT_SET_MESSAGE, &msg);
}

void MDFN_MidSync(EmulateSpecStruct *espec)
{
   PCEINPUT_TransformInput();
}
