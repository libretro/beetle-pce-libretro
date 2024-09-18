#ifndef LIBRETRO_CORE_OPTIONS_H__
#define LIBRETRO_CORE_OPTIONS_H__

#include <stdlib.h>
#include <string.h>

#include <libretro.h>
#include <retro_inline.h>

#ifndef HAVE_NO_LANGEXTRA
#include "libretro_core_options_intl.h"
#endif

/*
 ********************************
 * VERSION: 2.0
 ********************************
 *
 * - 2.0: Add support for core options v2 interface
 * - 1.3: Move translations to libretro_core_options_intl.h
 *        - libretro_core_options_intl.h includes BOM and utf-8
 *          fix for MSVC 2010-2013
 *        - Added HAVE_NO_LANGEXTRA flag to disable translations
 *          on platforms/compilers without BOM support
 * - 1.2: Use core options v1 interface when
 *        RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION is >= 1
 *        (previously required RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION == 1)
 * - 1.1: Support generation of core options v0 retro_core_option_value
 *        arrays containing options with a single value
 * - 1.0: First commit
*/

#ifdef __cplusplus
extern "C" {
#endif

/*
 ********************************
 * Core Option Definitions
 ********************************
*/

/* RETRO_LANGUAGE_ENGLISH */

/* Default language:
 * - All other languages must include the same keys and values
 * - Will be used as a fallback in the event that frontend language
 *   is not available
 * - Will be used as a fallback for any missing entries in
 *   frontend language definition */

struct retro_core_option_v2_category option_cats_us[] = {
   {
      "video",
      "Video",
      "Configure aspect ratio, display cropping and other image output parameters."
   },
   {
      "audio",
      "Audio",
      "Configure emulated audio devices."
   },
   {
      "input",
      "Input",
      "Configure light gun, mouse and controller input."
   },
   {
      "hacks",
      "Emulation Hacks",
      "Configure processor overclocking and emulation accuracy parameters affecting low-level performance and compatibility."
   },
   {
      "cd",
      "PC Engine CD",
      "Configure settings related to the PC Engine CD emulation."
   },
   { NULL, NULL, NULL },
};

struct retro_core_option_v2_definition option_defs_us[] = {
   {
      "pce_palette",
      "Color Palette",
      NULL,
      "Composite tries to recreate the original console output and can show more details in some games.",
      NULL,
      "video",
      {
         { "RGB", NULL },
         { "Composite", NULL },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      "Aspect Ratio",
      NULL,
      "Choose the preferred content aspect ratio. This will only apply when RetroArch's aspect ratio is set to 'Core provided' in the Video settings.",
      NULL, 
      "video",
      {
         { "auto", "Auto" },
         { "6:5", NULL },
         { "4:3", NULL },
         { "uncorrected", "Uncorrected" },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      "Resolution Scaling",
      NULL,
      "'Auto' will allow the resolution to change. 'Low Resolution' can crush pixels. 'High Resolution' will stay on the maximum width.",
      NULL,
      "video",
      {
         { "auto", "Auto" },
         { "lores", "Low Resolution" },
         { "hires", "High Resolution" },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      "High Resolution Blending Strength",
      NULL,
      "Blend pixels together when in High Resolution mode. Higher values will blur the picture more.",
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_h_overscan",
      "Show Horizontal Overscan",
      NULL,
      "'Auto' will try to adapt to games, cropping empty areas.",
      NULL,
      "video",
      {
         { "auto", "Auto" },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      "Initial Scanline",
      NULL,
      "First rendered scanline. Higher values will crop the top of the image.",
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", "3 (Default)" },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_last_scanline",
      "Last Scanline",
      NULL,
      "Last rendered scanline. Lower values will crop the bottom of the image.",
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", "242 (Default)" },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      "PSG Audio Chip (Restart Required)",
      NULL,
      "HuC6280 represents the original PC Engine, HuC6280A the SuperGrafx and CoreGrafx I.",
      NULL,
      "audio",
      {
         { "HuC6280", NULL },
         { "HuC6280A", NULL },
         { "auto", "Auto" },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      "Owl Resampler Quality",
      NULL,
      "Higher values give better signal-to-noise ratio and preservation of higher frequencies but increase the computation cost and may cause higher latency and clipping if the volume is set too high.",
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", "3 (Default)" },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "0"
   },
   {
      "pce_show_advanced_input_settings",
      "Show Advanced Input/Turbo Settings",
      NULL,
      "Show Multitap, Mouse, Turbo Buttons and advanced parameters. NOTE: You may need to go back in game and re-enter the menu to refresh the list.",
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_mouse_sensitivity",
      "Mouse Sensitivity",
      NULL,
      "Higher values will make the mouse cursor move faster.",
      NULL,
      "input",
      {
         { "0.125", NULL },
         { "0.250", NULL },
         { "0.375", NULL },
         { "0.500", NULL },
         { "0.625", NULL },
         { "0.750", NULL },
         { "0.875", NULL },
         { "1.000", NULL },
         { "1.125", NULL },
         { "1.25", NULL },
         { "1.50", NULL },
         { "1.75", NULL },
         { "2.00", NULL },
         { "2.25", NULL },
         { "2.50", NULL },
         { "2.75", NULL },
         { "3.00", NULL },
         { "3.25", NULL },
         { "3.50", NULL },
         { "3.75", NULL },
         { "4.00", NULL },
         { "4.25", NULL },
         { "4.50", NULL },
         { "4.75", NULL },
         { "5.00", NULL },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_up_down_allowed",
      "Allow Opposing Directions",
      NULL,
      "Enabling this will allow pressing / quickly alternating / holding both left and right (or up and down) directions at the same time. This may cause movement-based glitches.",
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_disable_softreset",
      "Disable Soft Reset (RUN+SELECT)",
      NULL,
      "When RUN and SELECT are pressed simultaneously, disable both buttons temporarily instead of resetting.",
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_multitap",
      "Multitap 5-port Controller",
      NULL,
      "Enable up to 5-player multitap emulation. Disabling this is only needed in some cases (e.g. Cho Aniki).",
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_default_joypad_type_p1",
      "P1 Default Joypad Type",
      NULL,
      "Choose if port 1 joypad should be 2 or 6 buttons by default. This option is only applied when the core starts, if you want to switch while content is running, use the 'Mode Switch' button. NOTE: 6 buttons joypad can have weird behaviors in non compatible games.",
      NULL,
      "input",
      {
         { "2 Buttons", NULL },
         { "6 Buttons", NULL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p2",
      "P2 Default Joypad Type",
      NULL,
      "Choose if port 2 joypad should be 2 or 6 buttons by default. This option is only applied when the core starts, if you want to switch while content is running, use the 'Mode Switch' button. NOTE: 6 buttons joypad can have weird behaviors in non compatible games.",
      NULL,
      "input",
      {
         { "2 Buttons", NULL },
         { "6 Buttons", NULL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p3",
      "P3 Default Joypad Type",
      NULL,
      "Choose if port 3 joypad should be 2 or 6 buttons by default. This option is only applied when the core starts, if you want to switch while content is running, use the 'Mode Switch' button. NOTE: 6 buttons joypad can have weird behaviors in non compatible games.",
      NULL,
      "input",
      {
         { "2 Buttons", NULL },
         { "6 Buttons", NULL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p4",
      "P4 Default Joypad Type",
      NULL,
      "Choose if port 4 joypad should be 2 or 6 buttons by default. This option is only applied when the core starts, if you want to switch while content is running, use the 'Mode Switch' button. NOTE: 6 buttons joypad can have weird behaviors in non compatible games.",
      NULL,
      "input",
      {
         { "2 Buttons", NULL },
         { "6 Buttons", NULL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p5",
      "P5 Default Joypad Type",
      NULL,
      "Choose if port 5 joypad should be 2 or 6 buttons by default. This option is only applied when the core starts, if you want to switch while content is running, use the 'Mode Switch' button. NOTE: 6 buttons joypad can have weird behaviors in non compatible games.",
      NULL,
      "input",
      {
         { "2 Buttons", NULL },
         { "6 Buttons", NULL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_Turbo_Toggling",
      "Turbo Hotkey Mode",
      NULL,
      "Enable turbo buttons. Hotkeys (buttons III and IV) can behave as either toggle switches or dedicated (hold to use) turbo buttons.",
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", "Toggle" },
         { "always", "Dedicated" },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      "Alternate Turbo Hotkey",
      NULL,
      "Assign RetroPad's L3/R3 buttons as turbo hotkeys instead of buttons III and IV. Works only in 'Toggle' mode and only as long as nothing is assigned to the L3/R3 buttons. You can avoid remapping buttons III and IV when switching to 6-button controller mode with this.",
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_Turbo_Delay",
      "Turbo Speed",
      NULL,
      "Choose how fast button presses are repeated.",
      NULL,
      "input",
      {
         { "Fast", NULL },
         { "Medium", NULL },
         { "Slow", NULL },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_p0_turbo_I_enable",
      "P1 Turbo I",
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p0_turbo_II_enable",
      "P1 Turbo II",
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_I_enable",
      "P2 Turbo I",
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_II_enable",
      "P2 Turbo II",
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_I_enable",
      "P3 Turbo I",
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_II_enable",
      "P3 Turbo II",
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_I_enable",
      "P4 Turbo I",
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_II_enable",
      "P4 Turbo II",
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_I_enable",
      "P5 Turbo I",
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_II_enable",
      "P5 Turbo II",
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdimagecache",
      "CD Image Cache (Restart Required)",
      NULL,
      "Load the complete image into memory at startup. Can potentially decrease loading times at the cost of an increased startup time.",
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdbios",
      "CD Bios (Restart Required)",
      NULL,
      "Most games can run on 'System Card 3'. 'Games Express' is needed for several unlicensed games.",
      NULL,
      "cd",
      {
         { "Games Express", NULL },
         { "System Card 1", NULL },
         { "System Card 2", NULL },
         { "System Card 3", NULL },
         { "System Card 2 US", NULL },
         { "System Card 3 US", NULL },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      "Arcade Card (Restart Required)",
      NULL,
      "Leave this option enabled to allow enhanced modes of ACD-enhanced SCD games.",
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_cdspeed",
      "(CD) CD Speed",
      "CD Speed",
      "Higher values enable faster loading times but can cause issues with a couple of games.",
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "1"
   },
   {
      "pce_adpcmextraprec",
      "(CD) ADPCM precision",
      "ADPCM precision",
      "Full precision of 12-bits for the MSM5205 ADPCM predictor can reduce whining noise during ADPCM playback.",
      NULL,
      "cd",
      {
         { "10-bit", NULL },
         { "12-bit", NULL },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_adpcmvolume",
      "(CD) ADPCM Volume %",
      "ADPCM Volume %",
      "CD game only. Setting this volume control too high may cause sample clipping.",
      "Setting this volume control too high may cause sample clipping.",
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cddavolume",
      "(CD) CDDA Volume %",
      "CDDA Volume %",
      "CD game only. Setting this volume control too high may cause sample clipping.",
      "Setting this volume control too high may cause sample clipping.",
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cdpsgvolume",
      "(CD) CD PSG Volume %",
      "CD PSG Volume %",
      "CD game only. Setting this volume control too high may cause sample clipping.",
      "Setting this volume control too high may cause sample clipping.",
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_nospritelimit",
      "No Sprite Limit",
      NULL,
      "Remove 16-sprites-per-scanline hardware limit. WARNING: May cause graphics glitching on some games (such as Bloody Wolf).",
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_ocmultiplier",
      "CPU Overclock Multiplier",
      NULL,
      "Higher values can reduce slowdowns in games. WARNING: Can cause glitches and crashes.",
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL},
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};

struct retro_core_options_v2 options_us = {
   option_cats_us,
   option_defs_us
};

/*
 ********************************
 * Language Mapping
 ********************************
*/

#ifndef HAVE_NO_LANGEXTRA
struct retro_core_options_v2 *options_intl[RETRO_LANGUAGE_LAST] = {
   &options_us,    /* RETRO_LANGUAGE_ENGLISH */
   &options_ja,      /* RETRO_LANGUAGE_JAPANESE */
   &options_fr,      /* RETRO_LANGUAGE_FRENCH */
   &options_es,      /* RETRO_LANGUAGE_SPANISH */
   &options_de,      /* RETRO_LANGUAGE_GERMAN */
   &options_it,      /* RETRO_LANGUAGE_ITALIAN */
   &options_nl,      /* RETRO_LANGUAGE_DUTCH */
   &options_pt_br,   /* RETRO_LANGUAGE_PORTUGUESE_BRAZIL */
   &options_pt_pt,   /* RETRO_LANGUAGE_PORTUGUESE_PORTUGAL */
   &options_ru,      /* RETRO_LANGUAGE_RUSSIAN */
   &options_ko,      /* RETRO_LANGUAGE_KOREAN */
   &options_cht,     /* RETRO_LANGUAGE_CHINESE_TRADITIONAL */
   &options_chs,     /* RETRO_LANGUAGE_CHINESE_SIMPLIFIED */
   &options_eo,      /* RETRO_LANGUAGE_ESPERANTO */
   &options_pl,      /* RETRO_LANGUAGE_POLISH */
   &options_vn,      /* RETRO_LANGUAGE_VIETNAMESE */
   &options_ar,      /* RETRO_LANGUAGE_ARABIC */
   &options_el,      /* RETRO_LANGUAGE_GREEK */
   &options_tr,      /* RETRO_LANGUAGE_TURKISH */
   &options_sk,      /* RETRO_LANGUAGE_SLOVAK */
   &options_fa,      /* RETRO_LANGUAGE_PERSIAN */
   &options_he,      /* RETRO_LANGUAGE_HEBREW */
   &options_ast,     /* RETRO_LANGUAGE_ASTURIAN */
   &options_fi,      /* RETRO_LANGUAGE_FINNISH */
   &options_id,      /* RETRO_LANGUAGE_INDONESIAN */
   &options_sv,      /* RETRO_LANGUAGE_SWEDISH */
   &options_uk,      /* RETRO_LANGUAGE_UKRAINIAN */
   &options_cs,      /* RETRO_LANGUAGE_CZECH */
   &options_val,     /* RETRO_LANGUAGE_CATALAN_VALENCIA */
   &options_ca,      /* RETRO_LANGUAGE_CATALAN */
   &options_en,      /* RETRO_LANGUAGE_BRITISH_ENGLISH */
   &options_hu,      /* RETRO_LANGUAGE_HUNGARIAN */
};
#endif

/*
 ********************************
 * Functions
 ********************************
*/

/* Handles configuration/setting of core options.
 * Should only be called inside retro_set_environment().
 * > We place the function body in the header to avoid the
 *   necessity of adding more .c files (i.e. want this to
 *   be as painless as possible for core devs)
 */

static INLINE void libretro_set_core_options(retro_environment_t environ_cb,
      bool *categories_supported)
{
   unsigned version  = 0;
#ifndef HAVE_NO_LANGEXTRA
   unsigned language = 0;
#endif

   if (!environ_cb || !categories_supported)
      return;

   *categories_supported = false;

   if (!environ_cb(RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION, &version))
      version = 0;

   if (version >= 2)
   {
#ifndef HAVE_NO_LANGEXTRA
      struct retro_core_options_v2_intl core_options_intl;

      core_options_intl.us    = &options_us;
      core_options_intl.local = NULL;

      if (environ_cb(RETRO_ENVIRONMENT_GET_LANGUAGE, &language) &&
          (language < RETRO_LANGUAGE_LAST) && (language != RETRO_LANGUAGE_ENGLISH))
         core_options_intl.local = options_intl[language];

      *categories_supported = environ_cb(RETRO_ENVIRONMENT_SET_CORE_OPTIONS_V2_INTL,
            &core_options_intl);
#else
      *categories_supported = environ_cb(RETRO_ENVIRONMENT_SET_CORE_OPTIONS_V2,
            &options_us);
#endif
   }
   else
   {
      size_t i, j;
      size_t option_index              = 0;
      size_t num_options               = 0;
      struct retro_core_option_definition
            *option_v1_defs_us         = NULL;
#ifndef HAVE_NO_LANGEXTRA
      size_t num_options_intl          = 0;
      struct retro_core_option_v2_definition
            *option_defs_intl          = NULL;
      struct retro_core_option_definition
            *option_v1_defs_intl       = NULL;
      struct retro_core_options_intl
            core_options_v1_intl;
#endif
      struct retro_variable *variables = NULL;
      char **values_buf                = NULL;

      /* Determine total number of options */
      while (true)
      {
         if (option_defs_us[num_options].key)
            num_options++;
         else
            break;
      }

      if (version >= 1)
      {
         /* Allocate US array */
         option_v1_defs_us = (struct retro_core_option_definition *)
               calloc(num_options + 1, sizeof(struct retro_core_option_definition));

         /* Copy parameters from option_defs_us array */
         for (i = 0; i < num_options; i++)
         {
            struct retro_core_option_v2_definition *option_def_us = &option_defs_us[i];
            struct retro_core_option_value *option_values         = option_def_us->values;
            struct retro_core_option_definition *option_v1_def_us = &option_v1_defs_us[i];
            struct retro_core_option_value *option_v1_values      = option_v1_def_us->values;

            option_v1_def_us->key           = option_def_us->key;
            option_v1_def_us->desc          = option_def_us->desc;
            option_v1_def_us->info          = option_def_us->info;
            option_v1_def_us->default_value = option_def_us->default_value;

            /* Values must be copied individually... */
            while (option_values->value)
            {
               option_v1_values->value = option_values->value;
               option_v1_values->label = option_values->label;

               option_values++;
               option_v1_values++;
            }
         }

#ifndef HAVE_NO_LANGEXTRA
         if (environ_cb(RETRO_ENVIRONMENT_GET_LANGUAGE, &language) &&
             (language < RETRO_LANGUAGE_LAST) && (language != RETRO_LANGUAGE_ENGLISH) &&
             options_intl[language])
            option_defs_intl = options_intl[language]->definitions;

         if (option_defs_intl)
         {
            /* Determine number of intl options */
            while (true)
            {
               if (option_defs_intl[num_options_intl].key)
                  num_options_intl++;
               else
                  break;
            }

            /* Allocate intl array */
            option_v1_defs_intl = (struct retro_core_option_definition *)
                  calloc(num_options_intl + 1, sizeof(struct retro_core_option_definition));

            /* Copy parameters from option_defs_intl array */
            for (i = 0; i < num_options_intl; i++)
            {
               struct retro_core_option_v2_definition *option_def_intl = &option_defs_intl[i];
               struct retro_core_option_value *option_values           = option_def_intl->values;
               struct retro_core_option_definition *option_v1_def_intl = &option_v1_defs_intl[i];
               struct retro_core_option_value *option_v1_values        = option_v1_def_intl->values;

               option_v1_def_intl->key           = option_def_intl->key;
               option_v1_def_intl->desc          = option_def_intl->desc;
               option_v1_def_intl->info          = option_def_intl->info;
               option_v1_def_intl->default_value = option_def_intl->default_value;

               /* Values must be copied individually... */
               while (option_values->value)
               {
                  option_v1_values->value = option_values->value;
                  option_v1_values->label = option_values->label;

                  option_values++;
                  option_v1_values++;
               }
            }
         }

         core_options_v1_intl.us    = option_v1_defs_us;
         core_options_v1_intl.local = option_v1_defs_intl;

         environ_cb(RETRO_ENVIRONMENT_SET_CORE_OPTIONS_INTL, &core_options_v1_intl);
#else
         environ_cb(RETRO_ENVIRONMENT_SET_CORE_OPTIONS, option_v1_defs_us);
#endif
      }
      else
      {
         /* Allocate arrays */
         variables  = (struct retro_variable *)calloc(num_options + 1,
               sizeof(struct retro_variable));
         values_buf = (char **)calloc(num_options, sizeof(char *));

         if (!variables || !values_buf)
            goto error;

         /* Copy parameters from option_defs_us array */
         for (i = 0; i < num_options; i++)
         {
            const char *key                        = option_defs_us[i].key;
            const char *desc                       = option_defs_us[i].desc;
            const char *default_value              = option_defs_us[i].default_value;
            struct retro_core_option_value *values = option_defs_us[i].values;
            size_t buf_len                         = 3;
            size_t default_index                   = 0;

            values_buf[i] = NULL;

            if (desc)
            {
               size_t num_values = 0;

               /* Determine number of values */
               while (true)
               {
                  if (values[num_values].value)
                  {
                     /* Check if this is the default value */
                     if (default_value)
                        if (strcmp(values[num_values].value, default_value) == 0)
                           default_index = num_values;

                     buf_len += strlen(values[num_values].value);
                     num_values++;
                  }
                  else
                     break;
               }

               /* Build values string */
               if (num_values > 0)
               {
                  buf_len += num_values - 1;
                  buf_len += strlen(desc);

                  values_buf[i] = (char *)calloc(buf_len, sizeof(char));
                  if (!values_buf[i])
                     goto error;

                  strcpy(values_buf[i], desc);
                  strcat(values_buf[i], "; ");

                  /* Default value goes first */
                  strcat(values_buf[i], values[default_index].value);

                  /* Add remaining values */
                  for (j = 0; j < num_values; j++)
                  {
                     if (j != default_index)
                     {
                        strcat(values_buf[i], "|");
                        strcat(values_buf[i], values[j].value);
                     }
                  }
               }
            }

            variables[option_index].key   = key;
            variables[option_index].value = values_buf[i];
            option_index++;
         }

         /* Set variables */
         environ_cb(RETRO_ENVIRONMENT_SET_VARIABLES, variables);
      }

error:
      /* Clean up */

      if (option_v1_defs_us)
      {
         free(option_v1_defs_us);
         option_v1_defs_us = NULL;
      }

#ifndef HAVE_NO_LANGEXTRA
      if (option_v1_defs_intl)
      {
         free(option_v1_defs_intl);
         option_v1_defs_intl = NULL;
      }
#endif

      if (values_buf)
      {
         for (i = 0; i < num_options; i++)
         {
            if (values_buf[i])
            {
               free(values_buf[i]);
               values_buf[i] = NULL;
            }
         }

         free(values_buf);
         values_buf = NULL;
      }

      if (variables)
      {
         free(variables);
         variables = NULL;
      }
   }
}

#ifdef __cplusplus
}
#endif

#endif
