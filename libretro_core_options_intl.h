#ifndef LIBRETRO_CORE_OPTIONS_INTL_H__
#define LIBRETRO_CORE_OPTIONS_INTL_H__

#if defined(_MSC_VER) && (_MSC_VER >= 1500 && _MSC_VER < 1900)
/* https://support.microsoft.com/en-us/kb/980263 */
#pragma execution_character_set("utf-8")
#pragma warning(disable:4566)
#endif

#include <libretro.h>

#ifdef __cplusplus
extern "C" {
#endif
/* RETRO_LANGUAGE_AR */

#define CATEGORY_VIDEO_LABEL_AR NULL
#define CATEGORY_VIDEO_INFO_0_AR NULL
#define CATEGORY_AUDIO_LABEL_AR NULL
#define CATEGORY_AUDIO_INFO_0_AR NULL
#define CATEGORY_INPUT_LABEL_AR NULL
#define CATEGORY_INPUT_INFO_0_AR NULL
#define CATEGORY_HACKS_LABEL_AR NULL
#define CATEGORY_HACKS_INFO_0_AR NULL
#define CATEGORY_CD_LABEL_AR NULL
#define CATEGORY_CD_INFO_0_AR NULL
#define PCE_PALETTE_LABEL_AR NULL
#define PCE_PALETTE_INFO_0_AR NULL
#define OPTION_VAL_RGB_AR NULL
#define OPTION_VAL_COMPOSITE_AR NULL
#define PCE_ASPECT_RATIO_LABEL_AR NULL
#define PCE_ASPECT_RATIO_INFO_0_AR NULL
#define OPTION_VAL_AUTO_AR NULL
#define OPTION_VAL_6_5_AR NULL
#define OPTION_VAL_4_3_AR NULL
#define OPTION_VAL_UNCORRECTED_AR NULL
#define PCE_SCALING_LABEL_AR NULL
#define PCE_SCALING_INFO_0_AR NULL
#define OPTION_VAL_LORES_AR NULL
#define OPTION_VAL_HIRES_AR NULL
#define PCE_HIRES_BLEND_LABEL_AR NULL
#define PCE_HIRES_BLEND_INFO_0_AR NULL
#define PCE_H_OVERSCAN_LABEL_AR NULL
#define PCE_H_OVERSCAN_INFO_0_AR NULL
#define PCE_INITIAL_SCANLINE_LABEL_AR NULL
#define PCE_INITIAL_SCANLINE_INFO_0_AR NULL
#define OPTION_VAL_3_AR NULL
#define PCE_LAST_SCANLINE_LABEL_AR NULL
#define PCE_LAST_SCANLINE_INFO_0_AR NULL
#define OPTION_VAL_242_AR NULL
#define PCE_PSGREVISION_LABEL_AR NULL
#define PCE_PSGREVISION_INFO_0_AR NULL
#define OPTION_VAL_HUC6280_AR NULL
#define OPTION_VAL_HUC6280A_AR NULL
#define PCE_RESAMP_QUALITY_LABEL_AR NULL
#define PCE_RESAMP_QUALITY_INFO_0_AR NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_AR NULL
#define PCE_MOUSE_SENSITIVITY_INFO_0_AR NULL
#define OPTION_VAL_0_125_AR NULL
#define OPTION_VAL_0_250_AR NULL
#define OPTION_VAL_0_375_AR NULL
#define OPTION_VAL_0_500_AR NULL
#define OPTION_VAL_0_625_AR NULL
#define OPTION_VAL_0_750_AR NULL
#define OPTION_VAL_0_875_AR NULL
#define OPTION_VAL_1_000_AR NULL
#define OPTION_VAL_1_125_AR NULL
#define OPTION_VAL_1_25_AR NULL
#define OPTION_VAL_1_50_AR NULL
#define OPTION_VAL_1_75_AR NULL
#define OPTION_VAL_2_00_AR NULL
#define OPTION_VAL_2_25_AR NULL
#define OPTION_VAL_2_50_AR NULL
#define OPTION_VAL_2_75_AR NULL
#define OPTION_VAL_3_00_AR NULL
#define OPTION_VAL_3_25_AR NULL
#define OPTION_VAL_3_50_AR NULL
#define OPTION_VAL_3_75_AR NULL
#define OPTION_VAL_4_00_AR NULL
#define OPTION_VAL_4_25_AR NULL
#define OPTION_VAL_4_50_AR NULL
#define OPTION_VAL_4_75_AR NULL
#define OPTION_VAL_5_00_AR NULL
#define PCE_MULTITAP_LABEL_AR NULL
#define PCE_MULTITAP_INFO_0_AR NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_AR NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_AR NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_AR NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_AR NULL
#define PCE_TURBO_DELAY_LABEL_AR NULL
#define PCE_TURBO_DELAY_INFO_0_AR NULL
#define OPTION_VAL_FAST_AR NULL
#define OPTION_VAL_MEDIUM_AR NULL
#define OPTION_VAL_SLOW_AR NULL
#define PCE_TURBO_TOGGLING_LABEL_AR NULL
#define OPTION_VAL_TOGGLE_AR NULL
#define OPTION_VAL_ALWAYS_AR NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_AR NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_AR NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_AR NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_AR NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_AR NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_AR NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_AR NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_AR NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_AR NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_AR NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_AR NULL
#define PCE_DISABLE_SOFTRESET_LABEL_AR NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_AR NULL
#define PCE_CDIMAGECACHE_LABEL_AR NULL
#define PCE_CDIMAGECACHE_INFO_0_AR NULL
#define PCE_CDBIOS_LABEL_AR NULL
#define PCE_CDBIOS_INFO_0_AR NULL
#define OPTION_VAL_GAMES_EXPRESS_AR NULL
#define OPTION_VAL_SYSTEM_CARD_1_AR NULL
#define OPTION_VAL_SYSTEM_CARD_2_AR NULL
#define OPTION_VAL_SYSTEM_CARD_3_AR NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_AR NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_AR NULL
#define PCE_ARCADECARD_LABEL_AR NULL
#define PCE_ARCADECARD_INFO_0_AR NULL
#define PCE_CDSPEED_LABEL_AR NULL
#define PCE_CDSPEED_LABEL_CAT_AR NULL
#define PCE_CDSPEED_INFO_0_AR NULL
#define PCE_ADPCMEXTRAPREC_LABEL_AR NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_AR NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_AR NULL
#define OPTION_VAL_10_BIT_AR NULL
#define OPTION_VAL_12_BIT_AR NULL
#define PCE_CDDAVOLUME_LABEL_AR NULL
#define PCE_CDDAVOLUME_LABEL_CAT_AR NULL
#define PCE_CDDAVOLUME_INFO_0_AR NULL
#define PCE_CDDAVOLUME_INFO_1_AR NULL
#define PCE_ADPCMVOLUME_LABEL_AR NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_AR NULL
#define PCE_CDPSGVOLUME_LABEL_AR NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_AR NULL
#define PCE_NOSPRITELIMIT_LABEL_AR NULL
#define PCE_NOSPRITELIMIT_INFO_0_AR NULL
#define PCE_OCMULTIPLIER_LABEL_AR NULL
#define PCE_OCMULTIPLIER_INFO_0_AR NULL

struct retro_core_option_v2_category option_cats_ar[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_AR,
      CATEGORY_VIDEO_INFO_0_AR
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_AR,
      CATEGORY_AUDIO_INFO_0_AR
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_AR,
      CATEGORY_INPUT_INFO_0_AR
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_AR,
      CATEGORY_HACKS_INFO_0_AR
   },
   {
      "cd",
      CATEGORY_CD_LABEL_AR,
      CATEGORY_CD_INFO_0_AR
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ar[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_AR,
      NULL,
      PCE_PALETTE_INFO_0_AR,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_AR },
         { "Composite", OPTION_VAL_COMPOSITE_AR },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_AR,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_AR,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_AR },
         { "6:5", OPTION_VAL_6_5_AR },
         { "4:3", OPTION_VAL_4_3_AR },
         { "uncorrected", OPTION_VAL_UNCORRECTED_AR },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_AR,
      NULL,
      /*  Is 'authorize' supposed to mean 'allow'? */
      PCE_SCALING_INFO_0_AR,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_AR },
         { "lores", OPTION_VAL_LORES_AR },
         { "hires", OPTION_VAL_HIRES_AR },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_AR,
      NULL,
      PCE_HIRES_BLEND_INFO_0_AR,
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
      PCE_H_OVERSCAN_LABEL_AR,
      NULL,
      PCE_H_OVERSCAN_INFO_0_AR,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_AR },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_AR,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_AR,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_AR },
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
      PCE_LAST_SCANLINE_LABEL_AR,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_AR,
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
         { "242", OPTION_VAL_242_AR },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_AR,
      NULL,
      PCE_PSGREVISION_INFO_0_AR,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_AR },
         { "HuC6280A", OPTION_VAL_HUC6280A_AR },
         { "auto", OPTION_VAL_AUTO_AR },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_AR,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_AR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_AR },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_AR,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_AR,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_AR },
         { "0.250", OPTION_VAL_0_250_AR },
         { "0.375", OPTION_VAL_0_375_AR },
         { "0.500", OPTION_VAL_0_500_AR },
         { "0.625", OPTION_VAL_0_625_AR },
         { "0.750", OPTION_VAL_0_750_AR },
         { "0.875", OPTION_VAL_0_875_AR },
         { "1.000", OPTION_VAL_1_000_AR },
         { "1.125", OPTION_VAL_1_125_AR },
         { "1.25", OPTION_VAL_1_25_AR },
         { "1.50", OPTION_VAL_1_50_AR },
         { "1.75", OPTION_VAL_1_75_AR },
         { "2.00", OPTION_VAL_2_00_AR },
         { "2.25", OPTION_VAL_2_25_AR },
         { "2.50", OPTION_VAL_2_50_AR },
         { "2.75", OPTION_VAL_2_75_AR },
         { "3.00", OPTION_VAL_3_00_AR },
         { "3.25", OPTION_VAL_3_25_AR },
         { "3.50", OPTION_VAL_3_50_AR },
         { "3.75", OPTION_VAL_3_75_AR },
         { "4.00", OPTION_VAL_4_00_AR },
         { "4.25", OPTION_VAL_4_25_AR },
         { "4.50", OPTION_VAL_4_50_AR },
         { "4.75", OPTION_VAL_4_75_AR },
         { "5.00", OPTION_VAL_5_00_AR },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_AR,
      NULL,
      PCE_MULTITAP_INFO_0_AR,
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
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_AR,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_AR,
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
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_AR,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_AR,
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
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_AR,
      NULL,
      PCE_TURBO_DELAY_INFO_0_AR,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_AR },
         { "Medium", OPTION_VAL_MEDIUM_AR },
         { "Slow", OPTION_VAL_SLOW_AR },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_AR,
      NULL,
      /*  requires more explanation */
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_AR },
         { "always", OPTION_VAL_ALWAYS_AR },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_AR,
      NULL,
      /*  requires more explanation */
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
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_AR,
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
      PCE_P0_TURBO_II_ENABLE_LABEL_AR,
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
      PCE_P1_TURBO_I_ENABLE_LABEL_AR,
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
      PCE_P1_TURBO_II_ENABLE_LABEL_AR,
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
      PCE_P2_TURBO_I_ENABLE_LABEL_AR,
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
      PCE_P2_TURBO_II_ENABLE_LABEL_AR,
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
      PCE_P3_TURBO_I_ENABLE_LABEL_AR,
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
      PCE_P3_TURBO_II_ENABLE_LABEL_AR,
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
      PCE_P4_TURBO_I_ENABLE_LABEL_AR,
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
      PCE_P4_TURBO_II_ENABLE_LABEL_AR,
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
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_AR,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_AR,
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
      PCE_CDIMAGECACHE_LABEL_AR,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_AR,
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
      PCE_CDBIOS_LABEL_AR,
      NULL,
      PCE_CDBIOS_INFO_0_AR,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_AR },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_AR },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_AR },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_AR },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_AR },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_AR },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_AR,
      NULL,
      PCE_ARCADECARD_INFO_0_AR,
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
      PCE_CDSPEED_LABEL_AR,
      PCE_CDSPEED_LABEL_CAT_AR,
      PCE_CDSPEED_INFO_0_AR,
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
      PCE_ADPCMEXTRAPREC_LABEL_AR,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_AR,
      PCE_ADPCMEXTRAPREC_INFO_0_AR,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_AR },
         { "12-bit", OPTION_VAL_12_BIT_AR },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_AR,
      PCE_CDDAVOLUME_LABEL_CAT_AR,
      PCE_CDDAVOLUME_INFO_0_AR,
      PCE_CDDAVOLUME_INFO_1_AR,
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
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_AR,
      PCE_ADPCMVOLUME_LABEL_CAT_AR,
      PCE_CDDAVOLUME_INFO_0_AR,
      PCE_CDDAVOLUME_INFO_1_AR,
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
      PCE_CDPSGVOLUME_LABEL_AR,
      PCE_CDPSGVOLUME_LABEL_CAT_AR,
      PCE_CDDAVOLUME_INFO_0_AR,
      PCE_CDDAVOLUME_INFO_1_AR,
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
      PCE_NOSPRITELIMIT_LABEL_AR,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_AR,
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
      PCE_OCMULTIPLIER_LABEL_AR,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_AR,
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
struct retro_core_options_v2 options_ar = {
   option_cats_ar,
   option_defs_ar
};

/* RETRO_LANGUAGE_AST */

#define CATEGORY_VIDEO_LABEL_AST NULL
#define CATEGORY_VIDEO_INFO_0_AST NULL
#define CATEGORY_AUDIO_LABEL_AST NULL
#define CATEGORY_AUDIO_INFO_0_AST NULL
#define CATEGORY_INPUT_LABEL_AST NULL
#define CATEGORY_INPUT_INFO_0_AST NULL
#define CATEGORY_HACKS_LABEL_AST NULL
#define CATEGORY_HACKS_INFO_0_AST NULL
#define CATEGORY_CD_LABEL_AST NULL
#define CATEGORY_CD_INFO_0_AST NULL
#define PCE_PALETTE_LABEL_AST NULL
#define PCE_PALETTE_INFO_0_AST NULL
#define OPTION_VAL_RGB_AST NULL
#define OPTION_VAL_COMPOSITE_AST NULL
#define PCE_ASPECT_RATIO_LABEL_AST NULL
#define PCE_ASPECT_RATIO_INFO_0_AST NULL
#define OPTION_VAL_AUTO_AST NULL
#define OPTION_VAL_6_5_AST NULL
#define OPTION_VAL_4_3_AST NULL
#define OPTION_VAL_UNCORRECTED_AST NULL
#define PCE_SCALING_LABEL_AST NULL
#define PCE_SCALING_INFO_0_AST NULL
#define OPTION_VAL_LORES_AST NULL
#define OPTION_VAL_HIRES_AST NULL
#define PCE_HIRES_BLEND_LABEL_AST NULL
#define PCE_HIRES_BLEND_INFO_0_AST NULL
#define PCE_H_OVERSCAN_LABEL_AST NULL
#define PCE_H_OVERSCAN_INFO_0_AST NULL
#define PCE_INITIAL_SCANLINE_LABEL_AST NULL
#define PCE_INITIAL_SCANLINE_INFO_0_AST NULL
#define OPTION_VAL_3_AST NULL
#define PCE_LAST_SCANLINE_LABEL_AST NULL
#define PCE_LAST_SCANLINE_INFO_0_AST NULL
#define OPTION_VAL_242_AST NULL
#define PCE_PSGREVISION_LABEL_AST NULL
#define PCE_PSGREVISION_INFO_0_AST NULL
#define OPTION_VAL_HUC6280_AST NULL
#define OPTION_VAL_HUC6280A_AST NULL
#define PCE_RESAMP_QUALITY_LABEL_AST NULL
#define PCE_RESAMP_QUALITY_INFO_0_AST NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_AST NULL
#define PCE_MOUSE_SENSITIVITY_INFO_0_AST NULL
#define OPTION_VAL_0_125_AST NULL
#define OPTION_VAL_0_250_AST NULL
#define OPTION_VAL_0_375_AST NULL
#define OPTION_VAL_0_500_AST NULL
#define OPTION_VAL_0_625_AST NULL
#define OPTION_VAL_0_750_AST NULL
#define OPTION_VAL_0_875_AST NULL
#define OPTION_VAL_1_000_AST NULL
#define OPTION_VAL_1_125_AST NULL
#define OPTION_VAL_1_25_AST NULL
#define OPTION_VAL_1_50_AST NULL
#define OPTION_VAL_1_75_AST NULL
#define OPTION_VAL_2_00_AST NULL
#define OPTION_VAL_2_25_AST NULL
#define OPTION_VAL_2_50_AST NULL
#define OPTION_VAL_2_75_AST NULL
#define OPTION_VAL_3_00_AST NULL
#define OPTION_VAL_3_25_AST NULL
#define OPTION_VAL_3_50_AST NULL
#define OPTION_VAL_3_75_AST NULL
#define OPTION_VAL_4_00_AST NULL
#define OPTION_VAL_4_25_AST NULL
#define OPTION_VAL_4_50_AST NULL
#define OPTION_VAL_4_75_AST NULL
#define OPTION_VAL_5_00_AST NULL
#define PCE_MULTITAP_LABEL_AST NULL
#define PCE_MULTITAP_INFO_0_AST NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_AST NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_AST NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_AST NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_AST NULL
#define PCE_TURBO_DELAY_LABEL_AST NULL
#define PCE_TURBO_DELAY_INFO_0_AST NULL
#define OPTION_VAL_FAST_AST NULL
#define OPTION_VAL_MEDIUM_AST NULL
#define OPTION_VAL_SLOW_AST NULL
#define PCE_TURBO_TOGGLING_LABEL_AST NULL
#define OPTION_VAL_TOGGLE_AST NULL
#define OPTION_VAL_ALWAYS_AST NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_AST NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_AST NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_AST NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_AST NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_AST NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_AST NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_AST NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_AST NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_AST NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_AST NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_AST NULL
#define PCE_DISABLE_SOFTRESET_LABEL_AST NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_AST NULL
#define PCE_CDIMAGECACHE_LABEL_AST NULL
#define PCE_CDIMAGECACHE_INFO_0_AST NULL
#define PCE_CDBIOS_LABEL_AST NULL
#define PCE_CDBIOS_INFO_0_AST NULL
#define OPTION_VAL_GAMES_EXPRESS_AST NULL
#define OPTION_VAL_SYSTEM_CARD_1_AST NULL
#define OPTION_VAL_SYSTEM_CARD_2_AST NULL
#define OPTION_VAL_SYSTEM_CARD_3_AST NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_AST NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_AST NULL
#define PCE_ARCADECARD_LABEL_AST NULL
#define PCE_ARCADECARD_INFO_0_AST NULL
#define PCE_CDSPEED_LABEL_AST NULL
#define PCE_CDSPEED_LABEL_CAT_AST NULL
#define PCE_CDSPEED_INFO_0_AST NULL
#define PCE_ADPCMEXTRAPREC_LABEL_AST NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_AST NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_AST NULL
#define OPTION_VAL_10_BIT_AST NULL
#define OPTION_VAL_12_BIT_AST NULL
#define PCE_CDDAVOLUME_LABEL_AST NULL
#define PCE_CDDAVOLUME_LABEL_CAT_AST NULL
#define PCE_CDDAVOLUME_INFO_0_AST NULL
#define PCE_CDDAVOLUME_INFO_1_AST NULL
#define PCE_ADPCMVOLUME_LABEL_AST NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_AST NULL
#define PCE_CDPSGVOLUME_LABEL_AST NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_AST NULL
#define PCE_NOSPRITELIMIT_LABEL_AST NULL
#define PCE_NOSPRITELIMIT_INFO_0_AST NULL
#define PCE_OCMULTIPLIER_LABEL_AST NULL
#define PCE_OCMULTIPLIER_INFO_0_AST NULL

struct retro_core_option_v2_category option_cats_ast[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_AST,
      CATEGORY_VIDEO_INFO_0_AST
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_AST,
      CATEGORY_AUDIO_INFO_0_AST
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_AST,
      CATEGORY_INPUT_INFO_0_AST
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_AST,
      CATEGORY_HACKS_INFO_0_AST
   },
   {
      "cd",
      CATEGORY_CD_LABEL_AST,
      CATEGORY_CD_INFO_0_AST
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ast[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_AST,
      NULL,
      PCE_PALETTE_INFO_0_AST,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_AST },
         { "Composite", OPTION_VAL_COMPOSITE_AST },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_AST,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_AST,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_AST },
         { "6:5", OPTION_VAL_6_5_AST },
         { "4:3", OPTION_VAL_4_3_AST },
         { "uncorrected", OPTION_VAL_UNCORRECTED_AST },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_AST,
      NULL,
      /*  Is 'authorize' supposed to mean 'allow'? */
      PCE_SCALING_INFO_0_AST,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_AST },
         { "lores", OPTION_VAL_LORES_AST },
         { "hires", OPTION_VAL_HIRES_AST },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_AST,
      NULL,
      PCE_HIRES_BLEND_INFO_0_AST,
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
      PCE_H_OVERSCAN_LABEL_AST,
      NULL,
      PCE_H_OVERSCAN_INFO_0_AST,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_AST },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_AST,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_AST,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_AST },
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
      PCE_LAST_SCANLINE_LABEL_AST,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_AST,
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
         { "242", OPTION_VAL_242_AST },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_AST,
      NULL,
      PCE_PSGREVISION_INFO_0_AST,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_AST },
         { "HuC6280A", OPTION_VAL_HUC6280A_AST },
         { "auto", OPTION_VAL_AUTO_AST },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_AST,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_AST,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_AST },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_AST,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_AST,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_AST },
         { "0.250", OPTION_VAL_0_250_AST },
         { "0.375", OPTION_VAL_0_375_AST },
         { "0.500", OPTION_VAL_0_500_AST },
         { "0.625", OPTION_VAL_0_625_AST },
         { "0.750", OPTION_VAL_0_750_AST },
         { "0.875", OPTION_VAL_0_875_AST },
         { "1.000", OPTION_VAL_1_000_AST },
         { "1.125", OPTION_VAL_1_125_AST },
         { "1.25", OPTION_VAL_1_25_AST },
         { "1.50", OPTION_VAL_1_50_AST },
         { "1.75", OPTION_VAL_1_75_AST },
         { "2.00", OPTION_VAL_2_00_AST },
         { "2.25", OPTION_VAL_2_25_AST },
         { "2.50", OPTION_VAL_2_50_AST },
         { "2.75", OPTION_VAL_2_75_AST },
         { "3.00", OPTION_VAL_3_00_AST },
         { "3.25", OPTION_VAL_3_25_AST },
         { "3.50", OPTION_VAL_3_50_AST },
         { "3.75", OPTION_VAL_3_75_AST },
         { "4.00", OPTION_VAL_4_00_AST },
         { "4.25", OPTION_VAL_4_25_AST },
         { "4.50", OPTION_VAL_4_50_AST },
         { "4.75", OPTION_VAL_4_75_AST },
         { "5.00", OPTION_VAL_5_00_AST },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_AST,
      NULL,
      PCE_MULTITAP_INFO_0_AST,
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
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_AST,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_AST,
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
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_AST,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_AST,
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
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_AST,
      NULL,
      PCE_TURBO_DELAY_INFO_0_AST,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_AST },
         { "Medium", OPTION_VAL_MEDIUM_AST },
         { "Slow", OPTION_VAL_SLOW_AST },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_AST,
      NULL,
      /*  requires more explanation */
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_AST },
         { "always", OPTION_VAL_ALWAYS_AST },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_AST,
      NULL,
      /*  requires more explanation */
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
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_AST,
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
      PCE_P0_TURBO_II_ENABLE_LABEL_AST,
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
      PCE_P1_TURBO_I_ENABLE_LABEL_AST,
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
      PCE_P1_TURBO_II_ENABLE_LABEL_AST,
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
      PCE_P2_TURBO_I_ENABLE_LABEL_AST,
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
      PCE_P2_TURBO_II_ENABLE_LABEL_AST,
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
      PCE_P3_TURBO_I_ENABLE_LABEL_AST,
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
      PCE_P3_TURBO_II_ENABLE_LABEL_AST,
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
      PCE_P4_TURBO_I_ENABLE_LABEL_AST,
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
      PCE_P4_TURBO_II_ENABLE_LABEL_AST,
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
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_AST,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_AST,
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
      PCE_CDIMAGECACHE_LABEL_AST,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_AST,
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
      PCE_CDBIOS_LABEL_AST,
      NULL,
      PCE_CDBIOS_INFO_0_AST,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_AST },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_AST },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_AST },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_AST },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_AST },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_AST },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_AST,
      NULL,
      PCE_ARCADECARD_INFO_0_AST,
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
      PCE_CDSPEED_LABEL_AST,
      PCE_CDSPEED_LABEL_CAT_AST,
      PCE_CDSPEED_INFO_0_AST,
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
      PCE_ADPCMEXTRAPREC_LABEL_AST,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_AST,
      PCE_ADPCMEXTRAPREC_INFO_0_AST,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_AST },
         { "12-bit", OPTION_VAL_12_BIT_AST },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_AST,
      PCE_CDDAVOLUME_LABEL_CAT_AST,
      PCE_CDDAVOLUME_INFO_0_AST,
      PCE_CDDAVOLUME_INFO_1_AST,
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
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_AST,
      PCE_ADPCMVOLUME_LABEL_CAT_AST,
      PCE_CDDAVOLUME_INFO_0_AST,
      PCE_CDDAVOLUME_INFO_1_AST,
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
      PCE_CDPSGVOLUME_LABEL_AST,
      PCE_CDPSGVOLUME_LABEL_CAT_AST,
      PCE_CDDAVOLUME_INFO_0_AST,
      PCE_CDDAVOLUME_INFO_1_AST,
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
      PCE_NOSPRITELIMIT_LABEL_AST,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_AST,
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
      PCE_OCMULTIPLIER_LABEL_AST,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_AST,
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
struct retro_core_options_v2 options_ast = {
   option_cats_ast,
   option_defs_ast
};

/* RETRO_LANGUAGE_CA */

#define CATEGORY_VIDEO_LABEL_CA NULL
#define CATEGORY_VIDEO_INFO_0_CA NULL
#define CATEGORY_AUDIO_LABEL_CA NULL
#define CATEGORY_AUDIO_INFO_0_CA NULL
#define CATEGORY_INPUT_LABEL_CA NULL
#define CATEGORY_INPUT_INFO_0_CA NULL
#define CATEGORY_HACKS_LABEL_CA NULL
#define CATEGORY_HACKS_INFO_0_CA NULL
#define CATEGORY_CD_LABEL_CA NULL
#define CATEGORY_CD_INFO_0_CA NULL
#define PCE_PALETTE_LABEL_CA NULL
#define PCE_PALETTE_INFO_0_CA NULL
#define OPTION_VAL_RGB_CA NULL
#define OPTION_VAL_COMPOSITE_CA NULL
#define PCE_ASPECT_RATIO_LABEL_CA NULL
#define PCE_ASPECT_RATIO_INFO_0_CA NULL
#define OPTION_VAL_AUTO_CA NULL
#define OPTION_VAL_6_5_CA NULL
#define OPTION_VAL_4_3_CA NULL
#define OPTION_VAL_UNCORRECTED_CA NULL
#define PCE_SCALING_LABEL_CA NULL
#define PCE_SCALING_INFO_0_CA NULL
#define OPTION_VAL_LORES_CA NULL
#define OPTION_VAL_HIRES_CA NULL
#define PCE_HIRES_BLEND_LABEL_CA NULL
#define PCE_HIRES_BLEND_INFO_0_CA NULL
#define PCE_H_OVERSCAN_LABEL_CA NULL
#define PCE_H_OVERSCAN_INFO_0_CA NULL
#define PCE_INITIAL_SCANLINE_LABEL_CA NULL
#define PCE_INITIAL_SCANLINE_INFO_0_CA NULL
#define OPTION_VAL_3_CA NULL
#define PCE_LAST_SCANLINE_LABEL_CA NULL
#define PCE_LAST_SCANLINE_INFO_0_CA NULL
#define OPTION_VAL_242_CA NULL
#define PCE_PSGREVISION_LABEL_CA NULL
#define PCE_PSGREVISION_INFO_0_CA NULL
#define OPTION_VAL_HUC6280_CA NULL
#define OPTION_VAL_HUC6280A_CA NULL
#define PCE_RESAMP_QUALITY_LABEL_CA NULL
#define PCE_RESAMP_QUALITY_INFO_0_CA NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_CA NULL
#define PCE_MOUSE_SENSITIVITY_INFO_0_CA NULL
#define OPTION_VAL_0_125_CA NULL
#define OPTION_VAL_0_250_CA NULL
#define OPTION_VAL_0_375_CA NULL
#define OPTION_VAL_0_500_CA NULL
#define OPTION_VAL_0_625_CA NULL
#define OPTION_VAL_0_750_CA NULL
#define OPTION_VAL_0_875_CA NULL
#define OPTION_VAL_1_000_CA NULL
#define OPTION_VAL_1_125_CA NULL
#define OPTION_VAL_1_25_CA NULL
#define OPTION_VAL_1_50_CA NULL
#define OPTION_VAL_1_75_CA NULL
#define OPTION_VAL_2_00_CA NULL
#define OPTION_VAL_2_25_CA NULL
#define OPTION_VAL_2_50_CA NULL
#define OPTION_VAL_2_75_CA NULL
#define OPTION_VAL_3_00_CA NULL
#define OPTION_VAL_3_25_CA NULL
#define OPTION_VAL_3_50_CA NULL
#define OPTION_VAL_3_75_CA NULL
#define OPTION_VAL_4_00_CA NULL
#define OPTION_VAL_4_25_CA NULL
#define OPTION_VAL_4_50_CA NULL
#define OPTION_VAL_4_75_CA NULL
#define OPTION_VAL_5_00_CA NULL
#define PCE_MULTITAP_LABEL_CA NULL
#define PCE_MULTITAP_INFO_0_CA NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_CA NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_CA NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_CA NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_CA NULL
#define PCE_TURBO_DELAY_LABEL_CA NULL
#define PCE_TURBO_DELAY_INFO_0_CA NULL
#define OPTION_VAL_FAST_CA NULL
#define OPTION_VAL_MEDIUM_CA NULL
#define OPTION_VAL_SLOW_CA NULL
#define PCE_TURBO_TOGGLING_LABEL_CA NULL
#define OPTION_VAL_TOGGLE_CA NULL
#define OPTION_VAL_ALWAYS_CA NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_CA NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_CA NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_CA NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_CA NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_CA NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_CA NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_CA NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_CA NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_CA NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_CA NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_CA NULL
#define PCE_DISABLE_SOFTRESET_LABEL_CA NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_CA NULL
#define PCE_CDIMAGECACHE_LABEL_CA NULL
#define PCE_CDIMAGECACHE_INFO_0_CA NULL
#define PCE_CDBIOS_LABEL_CA NULL
#define PCE_CDBIOS_INFO_0_CA NULL
#define OPTION_VAL_GAMES_EXPRESS_CA NULL
#define OPTION_VAL_SYSTEM_CARD_1_CA NULL
#define OPTION_VAL_SYSTEM_CARD_2_CA NULL
#define OPTION_VAL_SYSTEM_CARD_3_CA NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_CA NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_CA NULL
#define PCE_ARCADECARD_LABEL_CA NULL
#define PCE_ARCADECARD_INFO_0_CA NULL
#define PCE_CDSPEED_LABEL_CA NULL
#define PCE_CDSPEED_LABEL_CAT_CA NULL
#define PCE_CDSPEED_INFO_0_CA NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CA NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_CA NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_CA NULL
#define OPTION_VAL_10_BIT_CA NULL
#define OPTION_VAL_12_BIT_CA NULL
#define PCE_CDDAVOLUME_LABEL_CA NULL
#define PCE_CDDAVOLUME_LABEL_CAT_CA NULL
#define PCE_CDDAVOLUME_INFO_0_CA NULL
#define PCE_CDDAVOLUME_INFO_1_CA NULL
#define PCE_ADPCMVOLUME_LABEL_CA NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_CA NULL
#define PCE_CDPSGVOLUME_LABEL_CA NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_CA NULL
#define PCE_NOSPRITELIMIT_LABEL_CA NULL
#define PCE_NOSPRITELIMIT_INFO_0_CA NULL
#define PCE_OCMULTIPLIER_LABEL_CA NULL
#define PCE_OCMULTIPLIER_INFO_0_CA NULL

struct retro_core_option_v2_category option_cats_ca[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_CA,
      CATEGORY_VIDEO_INFO_0_CA
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_CA,
      CATEGORY_AUDIO_INFO_0_CA
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_CA,
      CATEGORY_INPUT_INFO_0_CA
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_CA,
      CATEGORY_HACKS_INFO_0_CA
   },
   {
      "cd",
      CATEGORY_CD_LABEL_CA,
      CATEGORY_CD_INFO_0_CA
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ca[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_CA,
      NULL,
      PCE_PALETTE_INFO_0_CA,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_CA },
         { "Composite", OPTION_VAL_COMPOSITE_CA },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_CA,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_CA,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_CA },
         { "6:5", OPTION_VAL_6_5_CA },
         { "4:3", OPTION_VAL_4_3_CA },
         { "uncorrected", OPTION_VAL_UNCORRECTED_CA },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_CA,
      NULL,
      /*  Is 'authorize' supposed to mean 'allow'? */
      PCE_SCALING_INFO_0_CA,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_CA },
         { "lores", OPTION_VAL_LORES_CA },
         { "hires", OPTION_VAL_HIRES_CA },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_CA,
      NULL,
      PCE_HIRES_BLEND_INFO_0_CA,
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
      PCE_H_OVERSCAN_LABEL_CA,
      NULL,
      PCE_H_OVERSCAN_INFO_0_CA,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_CA },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_CA,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_CA,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_CA },
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
      PCE_LAST_SCANLINE_LABEL_CA,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_CA,
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
         { "242", OPTION_VAL_242_CA },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_CA,
      NULL,
      PCE_PSGREVISION_INFO_0_CA,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_CA },
         { "HuC6280A", OPTION_VAL_HUC6280A_CA },
         { "auto", OPTION_VAL_AUTO_CA },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_CA,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_CA,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_CA },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_CA,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_CA,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_CA },
         { "0.250", OPTION_VAL_0_250_CA },
         { "0.375", OPTION_VAL_0_375_CA },
         { "0.500", OPTION_VAL_0_500_CA },
         { "0.625", OPTION_VAL_0_625_CA },
         { "0.750", OPTION_VAL_0_750_CA },
         { "0.875", OPTION_VAL_0_875_CA },
         { "1.000", OPTION_VAL_1_000_CA },
         { "1.125", OPTION_VAL_1_125_CA },
         { "1.25", OPTION_VAL_1_25_CA },
         { "1.50", OPTION_VAL_1_50_CA },
         { "1.75", OPTION_VAL_1_75_CA },
         { "2.00", OPTION_VAL_2_00_CA },
         { "2.25", OPTION_VAL_2_25_CA },
         { "2.50", OPTION_VAL_2_50_CA },
         { "2.75", OPTION_VAL_2_75_CA },
         { "3.00", OPTION_VAL_3_00_CA },
         { "3.25", OPTION_VAL_3_25_CA },
         { "3.50", OPTION_VAL_3_50_CA },
         { "3.75", OPTION_VAL_3_75_CA },
         { "4.00", OPTION_VAL_4_00_CA },
         { "4.25", OPTION_VAL_4_25_CA },
         { "4.50", OPTION_VAL_4_50_CA },
         { "4.75", OPTION_VAL_4_75_CA },
         { "5.00", OPTION_VAL_5_00_CA },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_CA,
      NULL,
      PCE_MULTITAP_INFO_0_CA,
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
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_CA,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_CA,
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
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_CA,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_CA,
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
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_CA,
      NULL,
      PCE_TURBO_DELAY_INFO_0_CA,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_CA },
         { "Medium", OPTION_VAL_MEDIUM_CA },
         { "Slow", OPTION_VAL_SLOW_CA },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_CA,
      NULL,
      /*  requires more explanation */
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_CA },
         { "always", OPTION_VAL_ALWAYS_CA },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_CA,
      NULL,
      /*  requires more explanation */
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
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_CA,
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
      PCE_P0_TURBO_II_ENABLE_LABEL_CA,
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
      PCE_P1_TURBO_I_ENABLE_LABEL_CA,
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
      PCE_P1_TURBO_II_ENABLE_LABEL_CA,
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
      PCE_P2_TURBO_I_ENABLE_LABEL_CA,
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
      PCE_P2_TURBO_II_ENABLE_LABEL_CA,
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
      PCE_P3_TURBO_I_ENABLE_LABEL_CA,
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
      PCE_P3_TURBO_II_ENABLE_LABEL_CA,
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
      PCE_P4_TURBO_I_ENABLE_LABEL_CA,
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
      PCE_P4_TURBO_II_ENABLE_LABEL_CA,
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
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_CA,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_CA,
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
      PCE_CDIMAGECACHE_LABEL_CA,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_CA,
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
      PCE_CDBIOS_LABEL_CA,
      NULL,
      PCE_CDBIOS_INFO_0_CA,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_CA },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_CA },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_CA },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_CA },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_CA },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_CA },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_CA,
      NULL,
      PCE_ARCADECARD_INFO_0_CA,
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
      PCE_CDSPEED_LABEL_CA,
      PCE_CDSPEED_LABEL_CAT_CA,
      PCE_CDSPEED_INFO_0_CA,
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
      PCE_ADPCMEXTRAPREC_LABEL_CA,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_CA,
      PCE_ADPCMEXTRAPREC_INFO_0_CA,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_CA },
         { "12-bit", OPTION_VAL_12_BIT_CA },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_CA,
      PCE_CDDAVOLUME_LABEL_CAT_CA,
      PCE_CDDAVOLUME_INFO_0_CA,
      PCE_CDDAVOLUME_INFO_1_CA,
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
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_CA,
      PCE_ADPCMVOLUME_LABEL_CAT_CA,
      PCE_CDDAVOLUME_INFO_0_CA,
      PCE_CDDAVOLUME_INFO_1_CA,
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
      PCE_CDPSGVOLUME_LABEL_CA,
      PCE_CDPSGVOLUME_LABEL_CAT_CA,
      PCE_CDDAVOLUME_INFO_0_CA,
      PCE_CDDAVOLUME_INFO_1_CA,
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
      PCE_NOSPRITELIMIT_LABEL_CA,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_CA,
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
      PCE_OCMULTIPLIER_LABEL_CA,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_CA,
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
struct retro_core_options_v2 options_ca = {
   option_cats_ca,
   option_defs_ca
};

/* RETRO_LANGUAGE_CHS */

#define CATEGORY_VIDEO_LABEL_CHS NULL
#define CATEGORY_VIDEO_INFO_0_CHS NULL
#define CATEGORY_AUDIO_LABEL_CHS NULL
#define CATEGORY_AUDIO_INFO_0_CHS NULL
#define CATEGORY_INPUT_LABEL_CHS NULL
#define CATEGORY_INPUT_INFO_0_CHS NULL
#define CATEGORY_HACKS_LABEL_CHS NULL
#define CATEGORY_HACKS_INFO_0_CHS NULL
#define CATEGORY_CD_LABEL_CHS NULL
#define CATEGORY_CD_INFO_0_CHS NULL
#define PCE_PALETTE_LABEL_CHS NULL
#define PCE_PALETTE_INFO_0_CHS NULL
#define OPTION_VAL_RGB_CHS NULL
#define OPTION_VAL_COMPOSITE_CHS NULL
#define PCE_ASPECT_RATIO_LABEL_CHS NULL
#define PCE_ASPECT_RATIO_INFO_0_CHS NULL
#define OPTION_VAL_AUTO_CHS NULL
#define OPTION_VAL_6_5_CHS NULL
#define OPTION_VAL_4_3_CHS NULL
#define OPTION_VAL_UNCORRECTED_CHS NULL
#define PCE_SCALING_LABEL_CHS NULL
#define PCE_SCALING_INFO_0_CHS NULL
#define OPTION_VAL_LORES_CHS NULL
#define OPTION_VAL_HIRES_CHS NULL
#define PCE_HIRES_BLEND_LABEL_CHS NULL
#define PCE_HIRES_BLEND_INFO_0_CHS NULL
#define PCE_H_OVERSCAN_LABEL_CHS NULL
#define PCE_H_OVERSCAN_INFO_0_CHS NULL
#define PCE_INITIAL_SCANLINE_LABEL_CHS NULL
#define PCE_INITIAL_SCANLINE_INFO_0_CHS NULL
#define OPTION_VAL_3_CHS NULL
#define PCE_LAST_SCANLINE_LABEL_CHS NULL
#define PCE_LAST_SCANLINE_INFO_0_CHS NULL
#define OPTION_VAL_242_CHS NULL
#define PCE_PSGREVISION_LABEL_CHS NULL
#define PCE_PSGREVISION_INFO_0_CHS NULL
#define OPTION_VAL_HUC6280_CHS NULL
#define OPTION_VAL_HUC6280A_CHS NULL
#define PCE_RESAMP_QUALITY_LABEL_CHS NULL
#define PCE_RESAMP_QUALITY_INFO_0_CHS NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_CHS NULL
#define PCE_MOUSE_SENSITIVITY_INFO_0_CHS NULL
#define OPTION_VAL_0_125_CHS NULL
#define OPTION_VAL_0_250_CHS NULL
#define OPTION_VAL_0_375_CHS NULL
#define OPTION_VAL_0_500_CHS NULL
#define OPTION_VAL_0_625_CHS NULL
#define OPTION_VAL_0_750_CHS NULL
#define OPTION_VAL_0_875_CHS NULL
#define OPTION_VAL_1_000_CHS NULL
#define OPTION_VAL_1_125_CHS NULL
#define OPTION_VAL_1_25_CHS NULL
#define OPTION_VAL_1_50_CHS NULL
#define OPTION_VAL_1_75_CHS NULL
#define OPTION_VAL_2_00_CHS NULL
#define OPTION_VAL_2_25_CHS NULL
#define OPTION_VAL_2_50_CHS NULL
#define OPTION_VAL_2_75_CHS NULL
#define OPTION_VAL_3_00_CHS NULL
#define OPTION_VAL_3_25_CHS NULL
#define OPTION_VAL_3_50_CHS NULL
#define OPTION_VAL_3_75_CHS NULL
#define OPTION_VAL_4_00_CHS NULL
#define OPTION_VAL_4_25_CHS NULL
#define OPTION_VAL_4_50_CHS NULL
#define OPTION_VAL_4_75_CHS NULL
#define OPTION_VAL_5_00_CHS NULL
#define PCE_MULTITAP_LABEL_CHS NULL
#define PCE_MULTITAP_INFO_0_CHS NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_CHS NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_CHS NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_CHS NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_CHS NULL
#define PCE_TURBO_DELAY_LABEL_CHS NULL
#define PCE_TURBO_DELAY_INFO_0_CHS NULL
#define OPTION_VAL_FAST_CHS NULL
#define OPTION_VAL_MEDIUM_CHS NULL
#define OPTION_VAL_SLOW_CHS NULL
#define PCE_TURBO_TOGGLING_LABEL_CHS NULL
#define OPTION_VAL_TOGGLE_CHS NULL
#define OPTION_VAL_ALWAYS_CHS NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_CHS NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_CHS NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_CHS NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_CHS NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_CHS NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_CHS NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_CHS NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_CHS NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_CHS NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_CHS NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_CHS NULL
#define PCE_DISABLE_SOFTRESET_LABEL_CHS NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_CHS NULL
#define PCE_CDIMAGECACHE_LABEL_CHS NULL
#define PCE_CDIMAGECACHE_INFO_0_CHS NULL
#define PCE_CDBIOS_LABEL_CHS NULL
#define PCE_CDBIOS_INFO_0_CHS NULL
#define OPTION_VAL_GAMES_EXPRESS_CHS NULL
#define OPTION_VAL_SYSTEM_CARD_1_CHS NULL
#define OPTION_VAL_SYSTEM_CARD_2_CHS NULL
#define OPTION_VAL_SYSTEM_CARD_3_CHS NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_CHS NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_CHS NULL
#define PCE_ARCADECARD_LABEL_CHS NULL
#define PCE_ARCADECARD_INFO_0_CHS NULL
#define PCE_CDSPEED_LABEL_CHS NULL
#define PCE_CDSPEED_LABEL_CAT_CHS NULL
#define PCE_CDSPEED_INFO_0_CHS NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CHS NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_CHS NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_CHS NULL
#define OPTION_VAL_10_BIT_CHS NULL
#define OPTION_VAL_12_BIT_CHS NULL
#define PCE_CDDAVOLUME_LABEL_CHS NULL
#define PCE_CDDAVOLUME_LABEL_CAT_CHS NULL
#define PCE_CDDAVOLUME_INFO_0_CHS NULL
#define PCE_CDDAVOLUME_INFO_1_CHS NULL
#define PCE_ADPCMVOLUME_LABEL_CHS NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_CHS NULL
#define PCE_CDPSGVOLUME_LABEL_CHS NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_CHS NULL
#define PCE_NOSPRITELIMIT_LABEL_CHS NULL
#define PCE_NOSPRITELIMIT_INFO_0_CHS NULL
#define PCE_OCMULTIPLIER_LABEL_CHS NULL
#define PCE_OCMULTIPLIER_INFO_0_CHS NULL

struct retro_core_option_v2_category option_cats_chs[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_CHS,
      CATEGORY_VIDEO_INFO_0_CHS
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_CHS,
      CATEGORY_AUDIO_INFO_0_CHS
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_CHS,
      CATEGORY_INPUT_INFO_0_CHS
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_CHS,
      CATEGORY_HACKS_INFO_0_CHS
   },
   {
      "cd",
      CATEGORY_CD_LABEL_CHS,
      CATEGORY_CD_INFO_0_CHS
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_chs[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_CHS,
      NULL,
      PCE_PALETTE_INFO_0_CHS,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_CHS },
         { "Composite", OPTION_VAL_COMPOSITE_CHS },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_CHS,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_CHS,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_CHS },
         { "6:5", OPTION_VAL_6_5_CHS },
         { "4:3", OPTION_VAL_4_3_CHS },
         { "uncorrected", OPTION_VAL_UNCORRECTED_CHS },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_CHS,
      NULL,
      /*  Is 'authorize' supposed to mean 'allow'? */
      PCE_SCALING_INFO_0_CHS,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_CHS },
         { "lores", OPTION_VAL_LORES_CHS },
         { "hires", OPTION_VAL_HIRES_CHS },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_CHS,
      NULL,
      PCE_HIRES_BLEND_INFO_0_CHS,
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
      PCE_H_OVERSCAN_LABEL_CHS,
      NULL,
      PCE_H_OVERSCAN_INFO_0_CHS,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_CHS },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_CHS,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_CHS,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_CHS },
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
      PCE_LAST_SCANLINE_LABEL_CHS,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_CHS,
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
         { "242", OPTION_VAL_242_CHS },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_CHS,
      NULL,
      PCE_PSGREVISION_INFO_0_CHS,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_CHS },
         { "HuC6280A", OPTION_VAL_HUC6280A_CHS },
         { "auto", OPTION_VAL_AUTO_CHS },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_CHS,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_CHS,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_CHS },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_CHS,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_CHS,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_CHS },
         { "0.250", OPTION_VAL_0_250_CHS },
         { "0.375", OPTION_VAL_0_375_CHS },
         { "0.500", OPTION_VAL_0_500_CHS },
         { "0.625", OPTION_VAL_0_625_CHS },
         { "0.750", OPTION_VAL_0_750_CHS },
         { "0.875", OPTION_VAL_0_875_CHS },
         { "1.000", OPTION_VAL_1_000_CHS },
         { "1.125", OPTION_VAL_1_125_CHS },
         { "1.25", OPTION_VAL_1_25_CHS },
         { "1.50", OPTION_VAL_1_50_CHS },
         { "1.75", OPTION_VAL_1_75_CHS },
         { "2.00", OPTION_VAL_2_00_CHS },
         { "2.25", OPTION_VAL_2_25_CHS },
         { "2.50", OPTION_VAL_2_50_CHS },
         { "2.75", OPTION_VAL_2_75_CHS },
         { "3.00", OPTION_VAL_3_00_CHS },
         { "3.25", OPTION_VAL_3_25_CHS },
         { "3.50", OPTION_VAL_3_50_CHS },
         { "3.75", OPTION_VAL_3_75_CHS },
         { "4.00", OPTION_VAL_4_00_CHS },
         { "4.25", OPTION_VAL_4_25_CHS },
         { "4.50", OPTION_VAL_4_50_CHS },
         { "4.75", OPTION_VAL_4_75_CHS },
         { "5.00", OPTION_VAL_5_00_CHS },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_CHS,
      NULL,
      PCE_MULTITAP_INFO_0_CHS,
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
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_CHS,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_CHS,
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
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_CHS,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_CHS,
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
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_CHS,
      NULL,
      PCE_TURBO_DELAY_INFO_0_CHS,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_CHS },
         { "Medium", OPTION_VAL_MEDIUM_CHS },
         { "Slow", OPTION_VAL_SLOW_CHS },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_CHS,
      NULL,
      /*  requires more explanation */
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_CHS },
         { "always", OPTION_VAL_ALWAYS_CHS },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_CHS,
      NULL,
      /*  requires more explanation */
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
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_CHS,
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
      PCE_P0_TURBO_II_ENABLE_LABEL_CHS,
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
      PCE_P1_TURBO_I_ENABLE_LABEL_CHS,
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
      PCE_P1_TURBO_II_ENABLE_LABEL_CHS,
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
      PCE_P2_TURBO_I_ENABLE_LABEL_CHS,
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
      PCE_P2_TURBO_II_ENABLE_LABEL_CHS,
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
      PCE_P3_TURBO_I_ENABLE_LABEL_CHS,
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
      PCE_P3_TURBO_II_ENABLE_LABEL_CHS,
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
      PCE_P4_TURBO_I_ENABLE_LABEL_CHS,
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
      PCE_P4_TURBO_II_ENABLE_LABEL_CHS,
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
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_CHS,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_CHS,
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
      PCE_CDIMAGECACHE_LABEL_CHS,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_CHS,
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
      PCE_CDBIOS_LABEL_CHS,
      NULL,
      PCE_CDBIOS_INFO_0_CHS,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_CHS },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_CHS },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_CHS },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_CHS },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_CHS },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_CHS },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_CHS,
      NULL,
      PCE_ARCADECARD_INFO_0_CHS,
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
      PCE_CDSPEED_LABEL_CHS,
      PCE_CDSPEED_LABEL_CAT_CHS,
      PCE_CDSPEED_INFO_0_CHS,
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
      PCE_ADPCMEXTRAPREC_LABEL_CHS,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_CHS,
      PCE_ADPCMEXTRAPREC_INFO_0_CHS,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_CHS },
         { "12-bit", OPTION_VAL_12_BIT_CHS },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_CHS,
      PCE_CDDAVOLUME_LABEL_CAT_CHS,
      PCE_CDDAVOLUME_INFO_0_CHS,
      PCE_CDDAVOLUME_INFO_1_CHS,
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
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_CHS,
      PCE_ADPCMVOLUME_LABEL_CAT_CHS,
      PCE_CDDAVOLUME_INFO_0_CHS,
      PCE_CDDAVOLUME_INFO_1_CHS,
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
      PCE_CDPSGVOLUME_LABEL_CHS,
      PCE_CDPSGVOLUME_LABEL_CAT_CHS,
      PCE_CDDAVOLUME_INFO_0_CHS,
      PCE_CDDAVOLUME_INFO_1_CHS,
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
      PCE_NOSPRITELIMIT_LABEL_CHS,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_CHS,
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
      PCE_OCMULTIPLIER_LABEL_CHS,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_CHS,
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
struct retro_core_options_v2 options_chs = {
   option_cats_chs,
   option_defs_chs
};

/* RETRO_LANGUAGE_CHT */

#define CATEGORY_VIDEO_LABEL_CHT NULL
#define CATEGORY_VIDEO_INFO_0_CHT NULL
#define CATEGORY_AUDIO_LABEL_CHT NULL
#define CATEGORY_AUDIO_INFO_0_CHT NULL
#define CATEGORY_INPUT_LABEL_CHT NULL
#define CATEGORY_INPUT_INFO_0_CHT NULL
#define CATEGORY_HACKS_LABEL_CHT NULL
#define CATEGORY_HACKS_INFO_0_CHT NULL
#define CATEGORY_CD_LABEL_CHT NULL
#define CATEGORY_CD_INFO_0_CHT NULL
#define PCE_PALETTE_LABEL_CHT NULL
#define PCE_PALETTE_INFO_0_CHT NULL
#define OPTION_VAL_RGB_CHT NULL
#define OPTION_VAL_COMPOSITE_CHT NULL
#define PCE_ASPECT_RATIO_LABEL_CHT NULL
#define PCE_ASPECT_RATIO_INFO_0_CHT NULL
#define OPTION_VAL_AUTO_CHT NULL
#define OPTION_VAL_6_5_CHT NULL
#define OPTION_VAL_4_3_CHT NULL
#define OPTION_VAL_UNCORRECTED_CHT NULL
#define PCE_SCALING_LABEL_CHT NULL
#define PCE_SCALING_INFO_0_CHT NULL
#define OPTION_VAL_LORES_CHT NULL
#define OPTION_VAL_HIRES_CHT NULL
#define PCE_HIRES_BLEND_LABEL_CHT NULL
#define PCE_HIRES_BLEND_INFO_0_CHT NULL
#define PCE_H_OVERSCAN_LABEL_CHT NULL
#define PCE_H_OVERSCAN_INFO_0_CHT NULL
#define PCE_INITIAL_SCANLINE_LABEL_CHT NULL
#define PCE_INITIAL_SCANLINE_INFO_0_CHT NULL
#define OPTION_VAL_3_CHT NULL
#define PCE_LAST_SCANLINE_LABEL_CHT NULL
#define PCE_LAST_SCANLINE_INFO_0_CHT NULL
#define OPTION_VAL_242_CHT NULL
#define PCE_PSGREVISION_LABEL_CHT NULL
#define PCE_PSGREVISION_INFO_0_CHT NULL
#define OPTION_VAL_HUC6280_CHT NULL
#define OPTION_VAL_HUC6280A_CHT NULL
#define PCE_RESAMP_QUALITY_LABEL_CHT NULL
#define PCE_RESAMP_QUALITY_INFO_0_CHT NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_CHT NULL
#define PCE_MOUSE_SENSITIVITY_INFO_0_CHT NULL
#define OPTION_VAL_0_125_CHT NULL
#define OPTION_VAL_0_250_CHT NULL
#define OPTION_VAL_0_375_CHT NULL
#define OPTION_VAL_0_500_CHT NULL
#define OPTION_VAL_0_625_CHT NULL
#define OPTION_VAL_0_750_CHT NULL
#define OPTION_VAL_0_875_CHT NULL
#define OPTION_VAL_1_000_CHT NULL
#define OPTION_VAL_1_125_CHT NULL
#define OPTION_VAL_1_25_CHT NULL
#define OPTION_VAL_1_50_CHT NULL
#define OPTION_VAL_1_75_CHT NULL
#define OPTION_VAL_2_00_CHT NULL
#define OPTION_VAL_2_25_CHT NULL
#define OPTION_VAL_2_50_CHT NULL
#define OPTION_VAL_2_75_CHT NULL
#define OPTION_VAL_3_00_CHT NULL
#define OPTION_VAL_3_25_CHT NULL
#define OPTION_VAL_3_50_CHT NULL
#define OPTION_VAL_3_75_CHT NULL
#define OPTION_VAL_4_00_CHT NULL
#define OPTION_VAL_4_25_CHT NULL
#define OPTION_VAL_4_50_CHT NULL
#define OPTION_VAL_4_75_CHT NULL
#define OPTION_VAL_5_00_CHT NULL
#define PCE_MULTITAP_LABEL_CHT NULL
#define PCE_MULTITAP_INFO_0_CHT NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_CHT NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_CHT NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_CHT NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_CHT NULL
#define PCE_TURBO_DELAY_LABEL_CHT NULL
#define PCE_TURBO_DELAY_INFO_0_CHT NULL
#define OPTION_VAL_FAST_CHT NULL
#define OPTION_VAL_MEDIUM_CHT NULL
#define OPTION_VAL_SLOW_CHT NULL
#define PCE_TURBO_TOGGLING_LABEL_CHT NULL
#define OPTION_VAL_TOGGLE_CHT NULL
#define OPTION_VAL_ALWAYS_CHT NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_CHT NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_CHT NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_CHT NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_CHT NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_CHT NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_CHT NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_CHT NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_CHT NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_CHT NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_CHT NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_CHT NULL
#define PCE_DISABLE_SOFTRESET_LABEL_CHT NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_CHT NULL
#define PCE_CDIMAGECACHE_LABEL_CHT NULL
#define PCE_CDIMAGECACHE_INFO_0_CHT NULL
#define PCE_CDBIOS_LABEL_CHT NULL
#define PCE_CDBIOS_INFO_0_CHT NULL
#define OPTION_VAL_GAMES_EXPRESS_CHT NULL
#define OPTION_VAL_SYSTEM_CARD_1_CHT NULL
#define OPTION_VAL_SYSTEM_CARD_2_CHT NULL
#define OPTION_VAL_SYSTEM_CARD_3_CHT NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_CHT NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_CHT NULL
#define PCE_ARCADECARD_LABEL_CHT NULL
#define PCE_ARCADECARD_INFO_0_CHT NULL
#define PCE_CDSPEED_LABEL_CHT NULL
#define PCE_CDSPEED_LABEL_CAT_CHT NULL
#define PCE_CDSPEED_INFO_0_CHT NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CHT NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_CHT NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_CHT NULL
#define OPTION_VAL_10_BIT_CHT NULL
#define OPTION_VAL_12_BIT_CHT NULL
#define PCE_CDDAVOLUME_LABEL_CHT NULL
#define PCE_CDDAVOLUME_LABEL_CAT_CHT NULL
#define PCE_CDDAVOLUME_INFO_0_CHT NULL
#define PCE_CDDAVOLUME_INFO_1_CHT NULL
#define PCE_ADPCMVOLUME_LABEL_CHT NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_CHT NULL
#define PCE_CDPSGVOLUME_LABEL_CHT NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_CHT NULL
#define PCE_NOSPRITELIMIT_LABEL_CHT NULL
#define PCE_NOSPRITELIMIT_INFO_0_CHT NULL
#define PCE_OCMULTIPLIER_LABEL_CHT NULL
#define PCE_OCMULTIPLIER_INFO_0_CHT NULL

struct retro_core_option_v2_category option_cats_cht[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_CHT,
      CATEGORY_VIDEO_INFO_0_CHT
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_CHT,
      CATEGORY_AUDIO_INFO_0_CHT
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_CHT,
      CATEGORY_INPUT_INFO_0_CHT
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_CHT,
      CATEGORY_HACKS_INFO_0_CHT
   },
   {
      "cd",
      CATEGORY_CD_LABEL_CHT,
      CATEGORY_CD_INFO_0_CHT
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_cht[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_CHT,
      NULL,
      PCE_PALETTE_INFO_0_CHT,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_CHT },
         { "Composite", OPTION_VAL_COMPOSITE_CHT },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_CHT,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_CHT,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_CHT },
         { "6:5", OPTION_VAL_6_5_CHT },
         { "4:3", OPTION_VAL_4_3_CHT },
         { "uncorrected", OPTION_VAL_UNCORRECTED_CHT },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_CHT,
      NULL,
      /*  Is 'authorize' supposed to mean 'allow'? */
      PCE_SCALING_INFO_0_CHT,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_CHT },
         { "lores", OPTION_VAL_LORES_CHT },
         { "hires", OPTION_VAL_HIRES_CHT },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_CHT,
      NULL,
      PCE_HIRES_BLEND_INFO_0_CHT,
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
      PCE_H_OVERSCAN_LABEL_CHT,
      NULL,
      PCE_H_OVERSCAN_INFO_0_CHT,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_CHT },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_CHT,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_CHT,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_CHT },
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
      PCE_LAST_SCANLINE_LABEL_CHT,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_CHT,
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
         { "242", OPTION_VAL_242_CHT },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_CHT,
      NULL,
      PCE_PSGREVISION_INFO_0_CHT,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_CHT },
         { "HuC6280A", OPTION_VAL_HUC6280A_CHT },
         { "auto", OPTION_VAL_AUTO_CHT },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_CHT,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_CHT,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_CHT },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_CHT,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_CHT,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_CHT },
         { "0.250", OPTION_VAL_0_250_CHT },
         { "0.375", OPTION_VAL_0_375_CHT },
         { "0.500", OPTION_VAL_0_500_CHT },
         { "0.625", OPTION_VAL_0_625_CHT },
         { "0.750", OPTION_VAL_0_750_CHT },
         { "0.875", OPTION_VAL_0_875_CHT },
         { "1.000", OPTION_VAL_1_000_CHT },
         { "1.125", OPTION_VAL_1_125_CHT },
         { "1.25", OPTION_VAL_1_25_CHT },
         { "1.50", OPTION_VAL_1_50_CHT },
         { "1.75", OPTION_VAL_1_75_CHT },
         { "2.00", OPTION_VAL_2_00_CHT },
         { "2.25", OPTION_VAL_2_25_CHT },
         { "2.50", OPTION_VAL_2_50_CHT },
         { "2.75", OPTION_VAL_2_75_CHT },
         { "3.00", OPTION_VAL_3_00_CHT },
         { "3.25", OPTION_VAL_3_25_CHT },
         { "3.50", OPTION_VAL_3_50_CHT },
         { "3.75", OPTION_VAL_3_75_CHT },
         { "4.00", OPTION_VAL_4_00_CHT },
         { "4.25", OPTION_VAL_4_25_CHT },
         { "4.50", OPTION_VAL_4_50_CHT },
         { "4.75", OPTION_VAL_4_75_CHT },
         { "5.00", OPTION_VAL_5_00_CHT },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_CHT,
      NULL,
      PCE_MULTITAP_INFO_0_CHT,
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
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_CHT,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_CHT,
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
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_CHT,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_CHT,
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
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_CHT,
      NULL,
      PCE_TURBO_DELAY_INFO_0_CHT,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_CHT },
         { "Medium", OPTION_VAL_MEDIUM_CHT },
         { "Slow", OPTION_VAL_SLOW_CHT },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_CHT,
      NULL,
      /*  requires more explanation */
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_CHT },
         { "always", OPTION_VAL_ALWAYS_CHT },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_CHT,
      NULL,
      /*  requires more explanation */
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
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_CHT,
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
      PCE_P0_TURBO_II_ENABLE_LABEL_CHT,
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
      PCE_P1_TURBO_I_ENABLE_LABEL_CHT,
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
      PCE_P1_TURBO_II_ENABLE_LABEL_CHT,
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
      PCE_P2_TURBO_I_ENABLE_LABEL_CHT,
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
      PCE_P2_TURBO_II_ENABLE_LABEL_CHT,
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
      PCE_P3_TURBO_I_ENABLE_LABEL_CHT,
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
      PCE_P3_TURBO_II_ENABLE_LABEL_CHT,
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
      PCE_P4_TURBO_I_ENABLE_LABEL_CHT,
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
      PCE_P4_TURBO_II_ENABLE_LABEL_CHT,
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
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_CHT,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_CHT,
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
      PCE_CDIMAGECACHE_LABEL_CHT,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_CHT,
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
      PCE_CDBIOS_LABEL_CHT,
      NULL,
      PCE_CDBIOS_INFO_0_CHT,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_CHT },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_CHT },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_CHT },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_CHT },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_CHT },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_CHT },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_CHT,
      NULL,
      PCE_ARCADECARD_INFO_0_CHT,
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
      PCE_CDSPEED_LABEL_CHT,
      PCE_CDSPEED_LABEL_CAT_CHT,
      PCE_CDSPEED_INFO_0_CHT,
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
      PCE_ADPCMEXTRAPREC_LABEL_CHT,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_CHT,
      PCE_ADPCMEXTRAPREC_INFO_0_CHT,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_CHT },
         { "12-bit", OPTION_VAL_12_BIT_CHT },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_CHT,
      PCE_CDDAVOLUME_LABEL_CAT_CHT,
      PCE_CDDAVOLUME_INFO_0_CHT,
      PCE_CDDAVOLUME_INFO_1_CHT,
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
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_CHT,
      PCE_ADPCMVOLUME_LABEL_CAT_CHT,
      PCE_CDDAVOLUME_INFO_0_CHT,
      PCE_CDDAVOLUME_INFO_1_CHT,
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
      PCE_CDPSGVOLUME_LABEL_CHT,
      PCE_CDPSGVOLUME_LABEL_CAT_CHT,
      PCE_CDDAVOLUME_INFO_0_CHT,
      PCE_CDDAVOLUME_INFO_1_CHT,
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
      PCE_NOSPRITELIMIT_LABEL_CHT,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_CHT,
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
      PCE_OCMULTIPLIER_LABEL_CHT,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_CHT,
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
struct retro_core_options_v2 options_cht = {
   option_cats_cht,
   option_defs_cht
};

/* RETRO_LANGUAGE_CS */

#define CATEGORY_VIDEO_LABEL_CS NULL
#define CATEGORY_VIDEO_INFO_0_CS NULL
#define CATEGORY_AUDIO_LABEL_CS NULL
#define CATEGORY_AUDIO_INFO_0_CS NULL
#define CATEGORY_INPUT_LABEL_CS NULL
#define CATEGORY_INPUT_INFO_0_CS NULL
#define CATEGORY_HACKS_LABEL_CS NULL
#define CATEGORY_HACKS_INFO_0_CS NULL
#define CATEGORY_CD_LABEL_CS NULL
#define CATEGORY_CD_INFO_0_CS NULL
#define PCE_PALETTE_LABEL_CS NULL
#define PCE_PALETTE_INFO_0_CS NULL
#define OPTION_VAL_RGB_CS NULL
#define OPTION_VAL_COMPOSITE_CS NULL
#define PCE_ASPECT_RATIO_LABEL_CS NULL
#define PCE_ASPECT_RATIO_INFO_0_CS NULL
#define OPTION_VAL_AUTO_CS NULL
#define OPTION_VAL_6_5_CS NULL
#define OPTION_VAL_4_3_CS NULL
#define OPTION_VAL_UNCORRECTED_CS NULL
#define PCE_SCALING_LABEL_CS NULL
#define PCE_SCALING_INFO_0_CS NULL
#define OPTION_VAL_LORES_CS NULL
#define OPTION_VAL_HIRES_CS NULL
#define PCE_HIRES_BLEND_LABEL_CS NULL
#define PCE_HIRES_BLEND_INFO_0_CS NULL
#define PCE_H_OVERSCAN_LABEL_CS NULL
#define PCE_H_OVERSCAN_INFO_0_CS NULL
#define PCE_INITIAL_SCANLINE_LABEL_CS NULL
#define PCE_INITIAL_SCANLINE_INFO_0_CS NULL
#define OPTION_VAL_3_CS NULL
#define PCE_LAST_SCANLINE_LABEL_CS NULL
#define PCE_LAST_SCANLINE_INFO_0_CS NULL
#define OPTION_VAL_242_CS NULL
#define PCE_PSGREVISION_LABEL_CS NULL
#define PCE_PSGREVISION_INFO_0_CS NULL
#define OPTION_VAL_HUC6280_CS NULL
#define OPTION_VAL_HUC6280A_CS NULL
#define PCE_RESAMP_QUALITY_LABEL_CS NULL
#define PCE_RESAMP_QUALITY_INFO_0_CS NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_CS NULL
#define PCE_MOUSE_SENSITIVITY_INFO_0_CS NULL
#define OPTION_VAL_0_125_CS NULL
#define OPTION_VAL_0_250_CS NULL
#define OPTION_VAL_0_375_CS NULL
#define OPTION_VAL_0_500_CS NULL
#define OPTION_VAL_0_625_CS NULL
#define OPTION_VAL_0_750_CS NULL
#define OPTION_VAL_0_875_CS NULL
#define OPTION_VAL_1_000_CS NULL
#define OPTION_VAL_1_125_CS NULL
#define OPTION_VAL_1_25_CS NULL
#define OPTION_VAL_1_50_CS NULL
#define OPTION_VAL_1_75_CS NULL
#define OPTION_VAL_2_00_CS NULL
#define OPTION_VAL_2_25_CS NULL
#define OPTION_VAL_2_50_CS NULL
#define OPTION_VAL_2_75_CS NULL
#define OPTION_VAL_3_00_CS NULL
#define OPTION_VAL_3_25_CS NULL
#define OPTION_VAL_3_50_CS NULL
#define OPTION_VAL_3_75_CS NULL
#define OPTION_VAL_4_00_CS NULL
#define OPTION_VAL_4_25_CS NULL
#define OPTION_VAL_4_50_CS NULL
#define OPTION_VAL_4_75_CS NULL
#define OPTION_VAL_5_00_CS NULL
#define PCE_MULTITAP_LABEL_CS NULL
#define PCE_MULTITAP_INFO_0_CS NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_CS NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_CS NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_CS NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_CS NULL
#define PCE_TURBO_DELAY_LABEL_CS NULL
#define PCE_TURBO_DELAY_INFO_0_CS NULL
#define OPTION_VAL_FAST_CS NULL
#define OPTION_VAL_MEDIUM_CS NULL
#define OPTION_VAL_SLOW_CS NULL
#define PCE_TURBO_TOGGLING_LABEL_CS NULL
#define OPTION_VAL_TOGGLE_CS NULL
#define OPTION_VAL_ALWAYS_CS NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_CS NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_CS NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_CS NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_CS NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_CS NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_CS NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_CS NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_CS NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_CS NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_CS NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_CS NULL
#define PCE_DISABLE_SOFTRESET_LABEL_CS NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_CS NULL
#define PCE_CDIMAGECACHE_LABEL_CS NULL
#define PCE_CDIMAGECACHE_INFO_0_CS NULL
#define PCE_CDBIOS_LABEL_CS NULL
#define PCE_CDBIOS_INFO_0_CS NULL
#define OPTION_VAL_GAMES_EXPRESS_CS NULL
#define OPTION_VAL_SYSTEM_CARD_1_CS NULL
#define OPTION_VAL_SYSTEM_CARD_2_CS NULL
#define OPTION_VAL_SYSTEM_CARD_3_CS NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_CS NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_CS NULL
#define PCE_ARCADECARD_LABEL_CS NULL
#define PCE_ARCADECARD_INFO_0_CS NULL
#define PCE_CDSPEED_LABEL_CS NULL
#define PCE_CDSPEED_LABEL_CAT_CS NULL
#define PCE_CDSPEED_INFO_0_CS NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CS NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_CS NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_CS NULL
#define OPTION_VAL_10_BIT_CS NULL
#define OPTION_VAL_12_BIT_CS NULL
#define PCE_CDDAVOLUME_LABEL_CS NULL
#define PCE_CDDAVOLUME_LABEL_CAT_CS NULL
#define PCE_CDDAVOLUME_INFO_0_CS NULL
#define PCE_CDDAVOLUME_INFO_1_CS NULL
#define PCE_ADPCMVOLUME_LABEL_CS NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_CS NULL
#define PCE_CDPSGVOLUME_LABEL_CS NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_CS NULL
#define PCE_NOSPRITELIMIT_LABEL_CS NULL
#define PCE_NOSPRITELIMIT_INFO_0_CS NULL
#define PCE_OCMULTIPLIER_LABEL_CS NULL
#define PCE_OCMULTIPLIER_INFO_0_CS NULL

struct retro_core_option_v2_category option_cats_cs[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_CS,
      CATEGORY_VIDEO_INFO_0_CS
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_CS,
      CATEGORY_AUDIO_INFO_0_CS
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_CS,
      CATEGORY_INPUT_INFO_0_CS
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_CS,
      CATEGORY_HACKS_INFO_0_CS
   },
   {
      "cd",
      CATEGORY_CD_LABEL_CS,
      CATEGORY_CD_INFO_0_CS
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_cs[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_CS,
      NULL,
      PCE_PALETTE_INFO_0_CS,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_CS },
         { "Composite", OPTION_VAL_COMPOSITE_CS },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_CS,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_CS,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_CS },
         { "6:5", OPTION_VAL_6_5_CS },
         { "4:3", OPTION_VAL_4_3_CS },
         { "uncorrected", OPTION_VAL_UNCORRECTED_CS },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_CS,
      NULL,
      /*  Is 'authorize' supposed to mean 'allow'? */
      PCE_SCALING_INFO_0_CS,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_CS },
         { "lores", OPTION_VAL_LORES_CS },
         { "hires", OPTION_VAL_HIRES_CS },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_CS,
      NULL,
      PCE_HIRES_BLEND_INFO_0_CS,
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
      PCE_H_OVERSCAN_LABEL_CS,
      NULL,
      PCE_H_OVERSCAN_INFO_0_CS,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_CS },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_CS,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_CS,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_CS },
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
      PCE_LAST_SCANLINE_LABEL_CS,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_CS,
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
         { "242", OPTION_VAL_242_CS },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_CS,
      NULL,
      PCE_PSGREVISION_INFO_0_CS,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_CS },
         { "HuC6280A", OPTION_VAL_HUC6280A_CS },
         { "auto", OPTION_VAL_AUTO_CS },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_CS,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_CS,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_CS },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_CS,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_CS,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_CS },
         { "0.250", OPTION_VAL_0_250_CS },
         { "0.375", OPTION_VAL_0_375_CS },
         { "0.500", OPTION_VAL_0_500_CS },
         { "0.625", OPTION_VAL_0_625_CS },
         { "0.750", OPTION_VAL_0_750_CS },
         { "0.875", OPTION_VAL_0_875_CS },
         { "1.000", OPTION_VAL_1_000_CS },
         { "1.125", OPTION_VAL_1_125_CS },
         { "1.25", OPTION_VAL_1_25_CS },
         { "1.50", OPTION_VAL_1_50_CS },
         { "1.75", OPTION_VAL_1_75_CS },
         { "2.00", OPTION_VAL_2_00_CS },
         { "2.25", OPTION_VAL_2_25_CS },
         { "2.50", OPTION_VAL_2_50_CS },
         { "2.75", OPTION_VAL_2_75_CS },
         { "3.00", OPTION_VAL_3_00_CS },
         { "3.25", OPTION_VAL_3_25_CS },
         { "3.50", OPTION_VAL_3_50_CS },
         { "3.75", OPTION_VAL_3_75_CS },
         { "4.00", OPTION_VAL_4_00_CS },
         { "4.25", OPTION_VAL_4_25_CS },
         { "4.50", OPTION_VAL_4_50_CS },
         { "4.75", OPTION_VAL_4_75_CS },
         { "5.00", OPTION_VAL_5_00_CS },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_CS,
      NULL,
      PCE_MULTITAP_INFO_0_CS,
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
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_CS,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_CS,
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
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_CS,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_CS,
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
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_CS,
      NULL,
      PCE_TURBO_DELAY_INFO_0_CS,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_CS },
         { "Medium", OPTION_VAL_MEDIUM_CS },
         { "Slow", OPTION_VAL_SLOW_CS },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_CS,
      NULL,
      /*  requires more explanation */
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_CS },
         { "always", OPTION_VAL_ALWAYS_CS },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_CS,
      NULL,
      /*  requires more explanation */
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
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_CS,
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
      PCE_P0_TURBO_II_ENABLE_LABEL_CS,
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
      PCE_P1_TURBO_I_ENABLE_LABEL_CS,
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
      PCE_P1_TURBO_II_ENABLE_LABEL_CS,
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
      PCE_P2_TURBO_I_ENABLE_LABEL_CS,
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
      PCE_P2_TURBO_II_ENABLE_LABEL_CS,
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
      PCE_P3_TURBO_I_ENABLE_LABEL_CS,
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
      PCE_P3_TURBO_II_ENABLE_LABEL_CS,
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
      PCE_P4_TURBO_I_ENABLE_LABEL_CS,
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
      PCE_P4_TURBO_II_ENABLE_LABEL_CS,
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
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_CS,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_CS,
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
      PCE_CDIMAGECACHE_LABEL_CS,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_CS,
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
      PCE_CDBIOS_LABEL_CS,
      NULL,
      PCE_CDBIOS_INFO_0_CS,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_CS },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_CS },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_CS },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_CS },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_CS },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_CS },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_CS,
      NULL,
      PCE_ARCADECARD_INFO_0_CS,
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
      PCE_CDSPEED_LABEL_CS,
      PCE_CDSPEED_LABEL_CAT_CS,
      PCE_CDSPEED_INFO_0_CS,
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
      PCE_ADPCMEXTRAPREC_LABEL_CS,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_CS,
      PCE_ADPCMEXTRAPREC_INFO_0_CS,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_CS },
         { "12-bit", OPTION_VAL_12_BIT_CS },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_CS,
      PCE_CDDAVOLUME_LABEL_CAT_CS,
      PCE_CDDAVOLUME_INFO_0_CS,
      PCE_CDDAVOLUME_INFO_1_CS,
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
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_CS,
      PCE_ADPCMVOLUME_LABEL_CAT_CS,
      PCE_CDDAVOLUME_INFO_0_CS,
      PCE_CDDAVOLUME_INFO_1_CS,
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
      PCE_CDPSGVOLUME_LABEL_CS,
      PCE_CDPSGVOLUME_LABEL_CAT_CS,
      PCE_CDDAVOLUME_INFO_0_CS,
      PCE_CDDAVOLUME_INFO_1_CS,
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
      PCE_NOSPRITELIMIT_LABEL_CS,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_CS,
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
      PCE_OCMULTIPLIER_LABEL_CS,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_CS,
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
struct retro_core_options_v2 options_cs = {
   option_cats_cs,
   option_defs_cs
};

/* RETRO_LANGUAGE_CY */

#define CATEGORY_VIDEO_LABEL_CY NULL
#define CATEGORY_VIDEO_INFO_0_CY NULL
#define CATEGORY_AUDIO_LABEL_CY NULL
#define CATEGORY_AUDIO_INFO_0_CY NULL
#define CATEGORY_INPUT_LABEL_CY NULL
#define CATEGORY_INPUT_INFO_0_CY NULL
#define CATEGORY_HACKS_LABEL_CY NULL
#define CATEGORY_HACKS_INFO_0_CY NULL
#define CATEGORY_CD_LABEL_CY NULL
#define CATEGORY_CD_INFO_0_CY NULL
#define PCE_PALETTE_LABEL_CY NULL
#define PCE_PALETTE_INFO_0_CY NULL
#define OPTION_VAL_RGB_CY NULL
#define OPTION_VAL_COMPOSITE_CY NULL
#define PCE_ASPECT_RATIO_LABEL_CY NULL
#define PCE_ASPECT_RATIO_INFO_0_CY NULL
#define OPTION_VAL_AUTO_CY NULL
#define OPTION_VAL_6_5_CY NULL
#define OPTION_VAL_4_3_CY NULL
#define OPTION_VAL_UNCORRECTED_CY NULL
#define PCE_SCALING_LABEL_CY NULL
#define PCE_SCALING_INFO_0_CY NULL
#define OPTION_VAL_LORES_CY NULL
#define OPTION_VAL_HIRES_CY NULL
#define PCE_HIRES_BLEND_LABEL_CY NULL
#define PCE_HIRES_BLEND_INFO_0_CY NULL
#define PCE_H_OVERSCAN_LABEL_CY NULL
#define PCE_H_OVERSCAN_INFO_0_CY NULL
#define PCE_INITIAL_SCANLINE_LABEL_CY NULL
#define PCE_INITIAL_SCANLINE_INFO_0_CY NULL
#define OPTION_VAL_3_CY NULL
#define PCE_LAST_SCANLINE_LABEL_CY NULL
#define PCE_LAST_SCANLINE_INFO_0_CY NULL
#define OPTION_VAL_242_CY NULL
#define PCE_PSGREVISION_LABEL_CY NULL
#define PCE_PSGREVISION_INFO_0_CY NULL
#define OPTION_VAL_HUC6280_CY NULL
#define OPTION_VAL_HUC6280A_CY NULL
#define PCE_RESAMP_QUALITY_LABEL_CY NULL
#define PCE_RESAMP_QUALITY_INFO_0_CY NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_CY NULL
#define PCE_MOUSE_SENSITIVITY_INFO_0_CY NULL
#define OPTION_VAL_0_125_CY NULL
#define OPTION_VAL_0_250_CY NULL
#define OPTION_VAL_0_375_CY NULL
#define OPTION_VAL_0_500_CY NULL
#define OPTION_VAL_0_625_CY NULL
#define OPTION_VAL_0_750_CY NULL
#define OPTION_VAL_0_875_CY NULL
#define OPTION_VAL_1_000_CY NULL
#define OPTION_VAL_1_125_CY NULL
#define OPTION_VAL_1_25_CY NULL
#define OPTION_VAL_1_50_CY NULL
#define OPTION_VAL_1_75_CY NULL
#define OPTION_VAL_2_00_CY NULL
#define OPTION_VAL_2_25_CY NULL
#define OPTION_VAL_2_50_CY NULL
#define OPTION_VAL_2_75_CY NULL
#define OPTION_VAL_3_00_CY NULL
#define OPTION_VAL_3_25_CY NULL
#define OPTION_VAL_3_50_CY NULL
#define OPTION_VAL_3_75_CY NULL
#define OPTION_VAL_4_00_CY NULL
#define OPTION_VAL_4_25_CY NULL
#define OPTION_VAL_4_50_CY NULL
#define OPTION_VAL_4_75_CY NULL
#define OPTION_VAL_5_00_CY NULL
#define PCE_MULTITAP_LABEL_CY NULL
#define PCE_MULTITAP_INFO_0_CY NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_CY NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_CY NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_CY NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_CY NULL
#define PCE_TURBO_DELAY_LABEL_CY NULL
#define PCE_TURBO_DELAY_INFO_0_CY NULL
#define OPTION_VAL_FAST_CY NULL
#define OPTION_VAL_MEDIUM_CY NULL
#define OPTION_VAL_SLOW_CY NULL
#define PCE_TURBO_TOGGLING_LABEL_CY NULL
#define OPTION_VAL_TOGGLE_CY NULL
#define OPTION_VAL_ALWAYS_CY NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_CY NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_CY NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_CY NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_CY NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_CY NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_CY NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_CY NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_CY NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_CY NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_CY NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_CY NULL
#define PCE_DISABLE_SOFTRESET_LABEL_CY NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_CY NULL
#define PCE_CDIMAGECACHE_LABEL_CY NULL
#define PCE_CDIMAGECACHE_INFO_0_CY NULL
#define PCE_CDBIOS_LABEL_CY NULL
#define PCE_CDBIOS_INFO_0_CY NULL
#define OPTION_VAL_GAMES_EXPRESS_CY NULL
#define OPTION_VAL_SYSTEM_CARD_1_CY NULL
#define OPTION_VAL_SYSTEM_CARD_2_CY NULL
#define OPTION_VAL_SYSTEM_CARD_3_CY NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_CY NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_CY NULL
#define PCE_ARCADECARD_LABEL_CY NULL
#define PCE_ARCADECARD_INFO_0_CY NULL
#define PCE_CDSPEED_LABEL_CY NULL
#define PCE_CDSPEED_LABEL_CAT_CY NULL
#define PCE_CDSPEED_INFO_0_CY NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CY NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_CY NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_CY NULL
#define OPTION_VAL_10_BIT_CY NULL
#define OPTION_VAL_12_BIT_CY NULL
#define PCE_CDDAVOLUME_LABEL_CY NULL
#define PCE_CDDAVOLUME_LABEL_CAT_CY NULL
#define PCE_CDDAVOLUME_INFO_0_CY NULL
#define PCE_CDDAVOLUME_INFO_1_CY NULL
#define PCE_ADPCMVOLUME_LABEL_CY NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_CY NULL
#define PCE_CDPSGVOLUME_LABEL_CY NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_CY NULL
#define PCE_NOSPRITELIMIT_LABEL_CY NULL
#define PCE_NOSPRITELIMIT_INFO_0_CY NULL
#define PCE_OCMULTIPLIER_LABEL_CY NULL
#define PCE_OCMULTIPLIER_INFO_0_CY NULL

struct retro_core_option_v2_category option_cats_cy[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_CY,
      CATEGORY_VIDEO_INFO_0_CY
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_CY,
      CATEGORY_AUDIO_INFO_0_CY
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_CY,
      CATEGORY_INPUT_INFO_0_CY
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_CY,
      CATEGORY_HACKS_INFO_0_CY
   },
   {
      "cd",
      CATEGORY_CD_LABEL_CY,
      CATEGORY_CD_INFO_0_CY
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_cy[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_CY,
      NULL,
      PCE_PALETTE_INFO_0_CY,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_CY },
         { "Composite", OPTION_VAL_COMPOSITE_CY },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_CY,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_CY,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_CY },
         { "6:5", OPTION_VAL_6_5_CY },
         { "4:3", OPTION_VAL_4_3_CY },
         { "uncorrected", OPTION_VAL_UNCORRECTED_CY },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_CY,
      NULL,
      /*  Is 'authorize' supposed to mean 'allow'? */
      PCE_SCALING_INFO_0_CY,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_CY },
         { "lores", OPTION_VAL_LORES_CY },
         { "hires", OPTION_VAL_HIRES_CY },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_CY,
      NULL,
      PCE_HIRES_BLEND_INFO_0_CY,
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
      PCE_H_OVERSCAN_LABEL_CY,
      NULL,
      PCE_H_OVERSCAN_INFO_0_CY,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_CY },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_CY,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_CY,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_CY },
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
      PCE_LAST_SCANLINE_LABEL_CY,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_CY,
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
         { "242", OPTION_VAL_242_CY },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_CY,
      NULL,
      PCE_PSGREVISION_INFO_0_CY,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_CY },
         { "HuC6280A", OPTION_VAL_HUC6280A_CY },
         { "auto", OPTION_VAL_AUTO_CY },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_CY,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_CY,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_CY },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_CY,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_CY,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_CY },
         { "0.250", OPTION_VAL_0_250_CY },
         { "0.375", OPTION_VAL_0_375_CY },
         { "0.500", OPTION_VAL_0_500_CY },
         { "0.625", OPTION_VAL_0_625_CY },
         { "0.750", OPTION_VAL_0_750_CY },
         { "0.875", OPTION_VAL_0_875_CY },
         { "1.000", OPTION_VAL_1_000_CY },
         { "1.125", OPTION_VAL_1_125_CY },
         { "1.25", OPTION_VAL_1_25_CY },
         { "1.50", OPTION_VAL_1_50_CY },
         { "1.75", OPTION_VAL_1_75_CY },
         { "2.00", OPTION_VAL_2_00_CY },
         { "2.25", OPTION_VAL_2_25_CY },
         { "2.50", OPTION_VAL_2_50_CY },
         { "2.75", OPTION_VAL_2_75_CY },
         { "3.00", OPTION_VAL_3_00_CY },
         { "3.25", OPTION_VAL_3_25_CY },
         { "3.50", OPTION_VAL_3_50_CY },
         { "3.75", OPTION_VAL_3_75_CY },
         { "4.00", OPTION_VAL_4_00_CY },
         { "4.25", OPTION_VAL_4_25_CY },
         { "4.50", OPTION_VAL_4_50_CY },
         { "4.75", OPTION_VAL_4_75_CY },
         { "5.00", OPTION_VAL_5_00_CY },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_CY,
      NULL,
      PCE_MULTITAP_INFO_0_CY,
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
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_CY,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_CY,
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
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_CY,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_CY,
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
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_CY,
      NULL,
      PCE_TURBO_DELAY_INFO_0_CY,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_CY },
         { "Medium", OPTION_VAL_MEDIUM_CY },
         { "Slow", OPTION_VAL_SLOW_CY },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_CY,
      NULL,
      /*  requires more explanation */
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_CY },
         { "always", OPTION_VAL_ALWAYS_CY },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_CY,
      NULL,
      /*  requires more explanation */
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
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_CY,
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
      PCE_P0_TURBO_II_ENABLE_LABEL_CY,
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
      PCE_P1_TURBO_I_ENABLE_LABEL_CY,
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
      PCE_P1_TURBO_II_ENABLE_LABEL_CY,
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
      PCE_P2_TURBO_I_ENABLE_LABEL_CY,
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
      PCE_P2_TURBO_II_ENABLE_LABEL_CY,
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
      PCE_P3_TURBO_I_ENABLE_LABEL_CY,
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
      PCE_P3_TURBO_II_ENABLE_LABEL_CY,
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
      PCE_P4_TURBO_I_ENABLE_LABEL_CY,
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
      PCE_P4_TURBO_II_ENABLE_LABEL_CY,
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
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_CY,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_CY,
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
      PCE_CDIMAGECACHE_LABEL_CY,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_CY,
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
      PCE_CDBIOS_LABEL_CY,
      NULL,
      PCE_CDBIOS_INFO_0_CY,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_CY },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_CY },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_CY },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_CY },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_CY },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_CY },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_CY,
      NULL,
      PCE_ARCADECARD_INFO_0_CY,
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
      PCE_CDSPEED_LABEL_CY,
      PCE_CDSPEED_LABEL_CAT_CY,
      PCE_CDSPEED_INFO_0_CY,
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
      PCE_ADPCMEXTRAPREC_LABEL_CY,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_CY,
      PCE_ADPCMEXTRAPREC_INFO_0_CY,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_CY },
         { "12-bit", OPTION_VAL_12_BIT_CY },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_CY,
      PCE_CDDAVOLUME_LABEL_CAT_CY,
      PCE_CDDAVOLUME_INFO_0_CY,
      PCE_CDDAVOLUME_INFO_1_CY,
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
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_CY,
      PCE_ADPCMVOLUME_LABEL_CAT_CY,
      PCE_CDDAVOLUME_INFO_0_CY,
      PCE_CDDAVOLUME_INFO_1_CY,
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
      PCE_CDPSGVOLUME_LABEL_CY,
      PCE_CDPSGVOLUME_LABEL_CAT_CY,
      PCE_CDDAVOLUME_INFO_0_CY,
      PCE_CDDAVOLUME_INFO_1_CY,
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
      PCE_NOSPRITELIMIT_LABEL_CY,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_CY,
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
      PCE_OCMULTIPLIER_LABEL_CY,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_CY,
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
struct retro_core_options_v2 options_cy = {
   option_cats_cy,
   option_defs_cy
};

/* RETRO_LANGUAGE_DA */

#define CATEGORY_VIDEO_LABEL_DA NULL
#define CATEGORY_VIDEO_INFO_0_DA NULL
#define CATEGORY_AUDIO_LABEL_DA NULL
#define CATEGORY_AUDIO_INFO_0_DA NULL
#define CATEGORY_INPUT_LABEL_DA NULL
#define CATEGORY_INPUT_INFO_0_DA NULL
#define CATEGORY_HACKS_LABEL_DA NULL
#define CATEGORY_HACKS_INFO_0_DA NULL
#define CATEGORY_CD_LABEL_DA NULL
#define CATEGORY_CD_INFO_0_DA NULL
#define PCE_PALETTE_LABEL_DA NULL
#define PCE_PALETTE_INFO_0_DA NULL
#define OPTION_VAL_RGB_DA NULL
#define OPTION_VAL_COMPOSITE_DA NULL
#define PCE_ASPECT_RATIO_LABEL_DA NULL
#define PCE_ASPECT_RATIO_INFO_0_DA NULL
#define OPTION_VAL_AUTO_DA NULL
#define OPTION_VAL_6_5_DA NULL
#define OPTION_VAL_4_3_DA NULL
#define OPTION_VAL_UNCORRECTED_DA NULL
#define PCE_SCALING_LABEL_DA NULL
#define PCE_SCALING_INFO_0_DA NULL
#define OPTION_VAL_LORES_DA NULL
#define OPTION_VAL_HIRES_DA NULL
#define PCE_HIRES_BLEND_LABEL_DA NULL
#define PCE_HIRES_BLEND_INFO_0_DA NULL
#define PCE_H_OVERSCAN_LABEL_DA NULL
#define PCE_H_OVERSCAN_INFO_0_DA NULL
#define PCE_INITIAL_SCANLINE_LABEL_DA NULL
#define PCE_INITIAL_SCANLINE_INFO_0_DA NULL
#define OPTION_VAL_3_DA NULL
#define PCE_LAST_SCANLINE_LABEL_DA NULL
#define PCE_LAST_SCANLINE_INFO_0_DA NULL
#define OPTION_VAL_242_DA NULL
#define PCE_PSGREVISION_LABEL_DA NULL
#define PCE_PSGREVISION_INFO_0_DA NULL
#define OPTION_VAL_HUC6280_DA NULL
#define OPTION_VAL_HUC6280A_DA NULL
#define PCE_RESAMP_QUALITY_LABEL_DA NULL
#define PCE_RESAMP_QUALITY_INFO_0_DA NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_DA NULL
#define PCE_MOUSE_SENSITIVITY_INFO_0_DA NULL
#define OPTION_VAL_0_125_DA NULL
#define OPTION_VAL_0_250_DA NULL
#define OPTION_VAL_0_375_DA NULL
#define OPTION_VAL_0_500_DA NULL
#define OPTION_VAL_0_625_DA NULL
#define OPTION_VAL_0_750_DA NULL
#define OPTION_VAL_0_875_DA NULL
#define OPTION_VAL_1_000_DA NULL
#define OPTION_VAL_1_125_DA NULL
#define OPTION_VAL_1_25_DA NULL
#define OPTION_VAL_1_50_DA NULL
#define OPTION_VAL_1_75_DA NULL
#define OPTION_VAL_2_00_DA NULL
#define OPTION_VAL_2_25_DA NULL
#define OPTION_VAL_2_50_DA NULL
#define OPTION_VAL_2_75_DA NULL
#define OPTION_VAL_3_00_DA NULL
#define OPTION_VAL_3_25_DA NULL
#define OPTION_VAL_3_50_DA NULL
#define OPTION_VAL_3_75_DA NULL
#define OPTION_VAL_4_00_DA NULL
#define OPTION_VAL_4_25_DA NULL
#define OPTION_VAL_4_50_DA NULL
#define OPTION_VAL_4_75_DA NULL
#define OPTION_VAL_5_00_DA NULL
#define PCE_MULTITAP_LABEL_DA NULL
#define PCE_MULTITAP_INFO_0_DA NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_DA NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_DA NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_DA NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_DA NULL
#define PCE_TURBO_DELAY_LABEL_DA NULL
#define PCE_TURBO_DELAY_INFO_0_DA NULL
#define OPTION_VAL_FAST_DA NULL
#define OPTION_VAL_MEDIUM_DA NULL
#define OPTION_VAL_SLOW_DA NULL
#define PCE_TURBO_TOGGLING_LABEL_DA NULL
#define OPTION_VAL_TOGGLE_DA NULL
#define OPTION_VAL_ALWAYS_DA NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_DA NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_DA NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_DA NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_DA NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_DA NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_DA NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_DA NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_DA NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_DA NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_DA NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_DA NULL
#define PCE_DISABLE_SOFTRESET_LABEL_DA NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_DA NULL
#define PCE_CDIMAGECACHE_LABEL_DA NULL
#define PCE_CDIMAGECACHE_INFO_0_DA NULL
#define PCE_CDBIOS_LABEL_DA NULL
#define PCE_CDBIOS_INFO_0_DA NULL
#define OPTION_VAL_GAMES_EXPRESS_DA NULL
#define OPTION_VAL_SYSTEM_CARD_1_DA NULL
#define OPTION_VAL_SYSTEM_CARD_2_DA NULL
#define OPTION_VAL_SYSTEM_CARD_3_DA NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_DA NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_DA NULL
#define PCE_ARCADECARD_LABEL_DA NULL
#define PCE_ARCADECARD_INFO_0_DA NULL
#define PCE_CDSPEED_LABEL_DA NULL
#define PCE_CDSPEED_LABEL_CAT_DA NULL
#define PCE_CDSPEED_INFO_0_DA NULL
#define PCE_ADPCMEXTRAPREC_LABEL_DA NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_DA NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_DA NULL
#define OPTION_VAL_10_BIT_DA NULL
#define OPTION_VAL_12_BIT_DA NULL
#define PCE_CDDAVOLUME_LABEL_DA NULL
#define PCE_CDDAVOLUME_LABEL_CAT_DA NULL
#define PCE_CDDAVOLUME_INFO_0_DA NULL
#define PCE_CDDAVOLUME_INFO_1_DA NULL
#define PCE_ADPCMVOLUME_LABEL_DA NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_DA NULL
#define PCE_CDPSGVOLUME_LABEL_DA NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_DA NULL
#define PCE_NOSPRITELIMIT_LABEL_DA NULL
#define PCE_NOSPRITELIMIT_INFO_0_DA NULL
#define PCE_OCMULTIPLIER_LABEL_DA NULL
#define PCE_OCMULTIPLIER_INFO_0_DA NULL

struct retro_core_option_v2_category option_cats_da[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_DA,
      CATEGORY_VIDEO_INFO_0_DA
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_DA,
      CATEGORY_AUDIO_INFO_0_DA
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_DA,
      CATEGORY_INPUT_INFO_0_DA
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_DA,
      CATEGORY_HACKS_INFO_0_DA
   },
   {
      "cd",
      CATEGORY_CD_LABEL_DA,
      CATEGORY_CD_INFO_0_DA
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_da[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_DA,
      NULL,
      PCE_PALETTE_INFO_0_DA,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_DA },
         { "Composite", OPTION_VAL_COMPOSITE_DA },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_DA,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_DA,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_DA },
         { "6:5", OPTION_VAL_6_5_DA },
         { "4:3", OPTION_VAL_4_3_DA },
         { "uncorrected", OPTION_VAL_UNCORRECTED_DA },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_DA,
      NULL,
      /*  Is 'authorize' supposed to mean 'allow'? */
      PCE_SCALING_INFO_0_DA,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_DA },
         { "lores", OPTION_VAL_LORES_DA },
         { "hires", OPTION_VAL_HIRES_DA },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_DA,
      NULL,
      PCE_HIRES_BLEND_INFO_0_DA,
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
      PCE_H_OVERSCAN_LABEL_DA,
      NULL,
      PCE_H_OVERSCAN_INFO_0_DA,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_DA },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_DA,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_DA,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_DA },
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
      PCE_LAST_SCANLINE_LABEL_DA,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_DA,
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
         { "242", OPTION_VAL_242_DA },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_DA,
      NULL,
      PCE_PSGREVISION_INFO_0_DA,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_DA },
         { "HuC6280A", OPTION_VAL_HUC6280A_DA },
         { "auto", OPTION_VAL_AUTO_DA },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_DA,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_DA,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_DA },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_DA,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_DA,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_DA },
         { "0.250", OPTION_VAL_0_250_DA },
         { "0.375", OPTION_VAL_0_375_DA },
         { "0.500", OPTION_VAL_0_500_DA },
         { "0.625", OPTION_VAL_0_625_DA },
         { "0.750", OPTION_VAL_0_750_DA },
         { "0.875", OPTION_VAL_0_875_DA },
         { "1.000", OPTION_VAL_1_000_DA },
         { "1.125", OPTION_VAL_1_125_DA },
         { "1.25", OPTION_VAL_1_25_DA },
         { "1.50", OPTION_VAL_1_50_DA },
         { "1.75", OPTION_VAL_1_75_DA },
         { "2.00", OPTION_VAL_2_00_DA },
         { "2.25", OPTION_VAL_2_25_DA },
         { "2.50", OPTION_VAL_2_50_DA },
         { "2.75", OPTION_VAL_2_75_DA },
         { "3.00", OPTION_VAL_3_00_DA },
         { "3.25", OPTION_VAL_3_25_DA },
         { "3.50", OPTION_VAL_3_50_DA },
         { "3.75", OPTION_VAL_3_75_DA },
         { "4.00", OPTION_VAL_4_00_DA },
         { "4.25", OPTION_VAL_4_25_DA },
         { "4.50", OPTION_VAL_4_50_DA },
         { "4.75", OPTION_VAL_4_75_DA },
         { "5.00", OPTION_VAL_5_00_DA },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_DA,
      NULL,
      PCE_MULTITAP_INFO_0_DA,
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
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_DA,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_DA,
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
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_DA,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_DA,
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
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_DA,
      NULL,
      PCE_TURBO_DELAY_INFO_0_DA,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_DA },
         { "Medium", OPTION_VAL_MEDIUM_DA },
         { "Slow", OPTION_VAL_SLOW_DA },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_DA,
      NULL,
      /*  requires more explanation */
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_DA },
         { "always", OPTION_VAL_ALWAYS_DA },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_DA,
      NULL,
      /*  requires more explanation */
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
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_DA,
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
      PCE_P0_TURBO_II_ENABLE_LABEL_DA,
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
      PCE_P1_TURBO_I_ENABLE_LABEL_DA,
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
      PCE_P1_TURBO_II_ENABLE_LABEL_DA,
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
      PCE_P2_TURBO_I_ENABLE_LABEL_DA,
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
      PCE_P2_TURBO_II_ENABLE_LABEL_DA,
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
      PCE_P3_TURBO_I_ENABLE_LABEL_DA,
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
      PCE_P3_TURBO_II_ENABLE_LABEL_DA,
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
      PCE_P4_TURBO_I_ENABLE_LABEL_DA,
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
      PCE_P4_TURBO_II_ENABLE_LABEL_DA,
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
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_DA,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_DA,
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
      PCE_CDIMAGECACHE_LABEL_DA,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_DA,
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
      PCE_CDBIOS_LABEL_DA,
      NULL,
      PCE_CDBIOS_INFO_0_DA,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_DA },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_DA },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_DA },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_DA },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_DA },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_DA },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_DA,
      NULL,
      PCE_ARCADECARD_INFO_0_DA,
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
      PCE_CDSPEED_LABEL_DA,
      PCE_CDSPEED_LABEL_CAT_DA,
      PCE_CDSPEED_INFO_0_DA,
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
      PCE_ADPCMEXTRAPREC_LABEL_DA,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_DA,
      PCE_ADPCMEXTRAPREC_INFO_0_DA,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_DA },
         { "12-bit", OPTION_VAL_12_BIT_DA },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_DA,
      PCE_CDDAVOLUME_LABEL_CAT_DA,
      PCE_CDDAVOLUME_INFO_0_DA,
      PCE_CDDAVOLUME_INFO_1_DA,
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
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_DA,
      PCE_ADPCMVOLUME_LABEL_CAT_DA,
      PCE_CDDAVOLUME_INFO_0_DA,
      PCE_CDDAVOLUME_INFO_1_DA,
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
      PCE_CDPSGVOLUME_LABEL_DA,
      PCE_CDPSGVOLUME_LABEL_CAT_DA,
      PCE_CDDAVOLUME_INFO_0_DA,
      PCE_CDDAVOLUME_INFO_1_DA,
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
      PCE_NOSPRITELIMIT_LABEL_DA,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_DA,
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
      PCE_OCMULTIPLIER_LABEL_DA,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_DA,
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
struct retro_core_options_v2 options_da = {
   option_cats_da,
   option_defs_da
};

/* RETRO_LANGUAGE_DE */

#define CATEGORY_VIDEO_LABEL_DE NULL
#define CATEGORY_VIDEO_INFO_0_DE NULL
#define CATEGORY_AUDIO_LABEL_DE NULL
#define CATEGORY_AUDIO_INFO_0_DE NULL
#define CATEGORY_INPUT_LABEL_DE NULL
#define CATEGORY_INPUT_INFO_0_DE NULL
#define CATEGORY_HACKS_LABEL_DE NULL
#define CATEGORY_HACKS_INFO_0_DE NULL
#define CATEGORY_CD_LABEL_DE NULL
#define CATEGORY_CD_INFO_0_DE NULL
#define PCE_PALETTE_LABEL_DE NULL
#define PCE_PALETTE_INFO_0_DE NULL
#define OPTION_VAL_RGB_DE NULL
#define OPTION_VAL_COMPOSITE_DE NULL
#define PCE_ASPECT_RATIO_LABEL_DE NULL
#define PCE_ASPECT_RATIO_INFO_0_DE NULL
#define OPTION_VAL_AUTO_DE NULL
#define OPTION_VAL_6_5_DE NULL
#define OPTION_VAL_4_3_DE NULL
#define OPTION_VAL_UNCORRECTED_DE NULL
#define PCE_SCALING_LABEL_DE NULL
#define PCE_SCALING_INFO_0_DE NULL
#define OPTION_VAL_LORES_DE NULL
#define OPTION_VAL_HIRES_DE NULL
#define PCE_HIRES_BLEND_LABEL_DE NULL
#define PCE_HIRES_BLEND_INFO_0_DE NULL
#define PCE_H_OVERSCAN_LABEL_DE NULL
#define PCE_H_OVERSCAN_INFO_0_DE NULL
#define PCE_INITIAL_SCANLINE_LABEL_DE NULL
#define PCE_INITIAL_SCANLINE_INFO_0_DE NULL
#define OPTION_VAL_3_DE NULL
#define PCE_LAST_SCANLINE_LABEL_DE NULL
#define PCE_LAST_SCANLINE_INFO_0_DE NULL
#define OPTION_VAL_242_DE NULL
#define PCE_PSGREVISION_LABEL_DE NULL
#define PCE_PSGREVISION_INFO_0_DE NULL
#define OPTION_VAL_HUC6280_DE NULL
#define OPTION_VAL_HUC6280A_DE NULL
#define PCE_RESAMP_QUALITY_LABEL_DE NULL
#define PCE_RESAMP_QUALITY_INFO_0_DE NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_DE NULL
#define PCE_MOUSE_SENSITIVITY_INFO_0_DE NULL
#define OPTION_VAL_0_125_DE NULL
#define OPTION_VAL_0_250_DE NULL
#define OPTION_VAL_0_375_DE NULL
#define OPTION_VAL_0_500_DE NULL
#define OPTION_VAL_0_625_DE NULL
#define OPTION_VAL_0_750_DE NULL
#define OPTION_VAL_0_875_DE NULL
#define OPTION_VAL_1_000_DE NULL
#define OPTION_VAL_1_125_DE NULL
#define OPTION_VAL_1_25_DE NULL
#define OPTION_VAL_1_50_DE NULL
#define OPTION_VAL_1_75_DE NULL
#define OPTION_VAL_2_00_DE NULL
#define OPTION_VAL_2_25_DE NULL
#define OPTION_VAL_2_50_DE NULL
#define OPTION_VAL_2_75_DE NULL
#define OPTION_VAL_3_00_DE NULL
#define OPTION_VAL_3_25_DE NULL
#define OPTION_VAL_3_50_DE NULL
#define OPTION_VAL_3_75_DE NULL
#define OPTION_VAL_4_00_DE NULL
#define OPTION_VAL_4_25_DE NULL
#define OPTION_VAL_4_50_DE NULL
#define OPTION_VAL_4_75_DE NULL
#define OPTION_VAL_5_00_DE NULL
#define PCE_MULTITAP_LABEL_DE NULL
#define PCE_MULTITAP_INFO_0_DE NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_DE NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_DE NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_DE NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_DE NULL
#define PCE_TURBO_DELAY_LABEL_DE NULL
#define PCE_TURBO_DELAY_INFO_0_DE NULL
#define OPTION_VAL_FAST_DE NULL
#define OPTION_VAL_MEDIUM_DE NULL
#define OPTION_VAL_SLOW_DE NULL
#define PCE_TURBO_TOGGLING_LABEL_DE NULL
#define OPTION_VAL_TOGGLE_DE NULL
#define OPTION_VAL_ALWAYS_DE NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_DE NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_DE NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_DE NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_DE NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_DE NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_DE NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_DE NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_DE NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_DE NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_DE NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_DE NULL
#define PCE_DISABLE_SOFTRESET_LABEL_DE NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_DE NULL
#define PCE_CDIMAGECACHE_LABEL_DE NULL
#define PCE_CDIMAGECACHE_INFO_0_DE NULL
#define PCE_CDBIOS_LABEL_DE NULL
#define PCE_CDBIOS_INFO_0_DE NULL
#define OPTION_VAL_GAMES_EXPRESS_DE NULL
#define OPTION_VAL_SYSTEM_CARD_1_DE NULL
#define OPTION_VAL_SYSTEM_CARD_2_DE NULL
#define OPTION_VAL_SYSTEM_CARD_3_DE NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_DE NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_DE NULL
#define PCE_ARCADECARD_LABEL_DE NULL
#define PCE_ARCADECARD_INFO_0_DE NULL
#define PCE_CDSPEED_LABEL_DE NULL
#define PCE_CDSPEED_LABEL_CAT_DE NULL
#define PCE_CDSPEED_INFO_0_DE NULL
#define PCE_ADPCMEXTRAPREC_LABEL_DE NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_DE NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_DE NULL
#define OPTION_VAL_10_BIT_DE NULL
#define OPTION_VAL_12_BIT_DE NULL
#define PCE_CDDAVOLUME_LABEL_DE NULL
#define PCE_CDDAVOLUME_LABEL_CAT_DE NULL
#define PCE_CDDAVOLUME_INFO_0_DE NULL
#define PCE_CDDAVOLUME_INFO_1_DE NULL
#define PCE_ADPCMVOLUME_LABEL_DE NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_DE NULL
#define PCE_CDPSGVOLUME_LABEL_DE NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_DE NULL
#define PCE_NOSPRITELIMIT_LABEL_DE NULL
#define PCE_NOSPRITELIMIT_INFO_0_DE NULL
#define PCE_OCMULTIPLIER_LABEL_DE NULL
#define PCE_OCMULTIPLIER_INFO_0_DE NULL

struct retro_core_option_v2_category option_cats_de[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_DE,
      CATEGORY_VIDEO_INFO_0_DE
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_DE,
      CATEGORY_AUDIO_INFO_0_DE
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_DE,
      CATEGORY_INPUT_INFO_0_DE
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_DE,
      CATEGORY_HACKS_INFO_0_DE
   },
   {
      "cd",
      CATEGORY_CD_LABEL_DE,
      CATEGORY_CD_INFO_0_DE
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_de[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_DE,
      NULL,
      PCE_PALETTE_INFO_0_DE,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_DE },
         { "Composite", OPTION_VAL_COMPOSITE_DE },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_DE,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_DE,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_DE },
         { "6:5", OPTION_VAL_6_5_DE },
         { "4:3", OPTION_VAL_4_3_DE },
         { "uncorrected", OPTION_VAL_UNCORRECTED_DE },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_DE,
      NULL,
      /*  Is 'authorize' supposed to mean 'allow'? */
      PCE_SCALING_INFO_0_DE,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_DE },
         { "lores", OPTION_VAL_LORES_DE },
         { "hires", OPTION_VAL_HIRES_DE },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_DE,
      NULL,
      PCE_HIRES_BLEND_INFO_0_DE,
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
      PCE_H_OVERSCAN_LABEL_DE,
      NULL,
      PCE_H_OVERSCAN_INFO_0_DE,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_DE },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_DE,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_DE,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_DE },
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
      PCE_LAST_SCANLINE_LABEL_DE,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_DE,
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
         { "242", OPTION_VAL_242_DE },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_DE,
      NULL,
      PCE_PSGREVISION_INFO_0_DE,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_DE },
         { "HuC6280A", OPTION_VAL_HUC6280A_DE },
         { "auto", OPTION_VAL_AUTO_DE },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_DE,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_DE,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_DE },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_DE,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_DE,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_DE },
         { "0.250", OPTION_VAL_0_250_DE },
         { "0.375", OPTION_VAL_0_375_DE },
         { "0.500", OPTION_VAL_0_500_DE },
         { "0.625", OPTION_VAL_0_625_DE },
         { "0.750", OPTION_VAL_0_750_DE },
         { "0.875", OPTION_VAL_0_875_DE },
         { "1.000", OPTION_VAL_1_000_DE },
         { "1.125", OPTION_VAL_1_125_DE },
         { "1.25", OPTION_VAL_1_25_DE },
         { "1.50", OPTION_VAL_1_50_DE },
         { "1.75", OPTION_VAL_1_75_DE },
         { "2.00", OPTION_VAL_2_00_DE },
         { "2.25", OPTION_VAL_2_25_DE },
         { "2.50", OPTION_VAL_2_50_DE },
         { "2.75", OPTION_VAL_2_75_DE },
         { "3.00", OPTION_VAL_3_00_DE },
         { "3.25", OPTION_VAL_3_25_DE },
         { "3.50", OPTION_VAL_3_50_DE },
         { "3.75", OPTION_VAL_3_75_DE },
         { "4.00", OPTION_VAL_4_00_DE },
         { "4.25", OPTION_VAL_4_25_DE },
         { "4.50", OPTION_VAL_4_50_DE },
         { "4.75", OPTION_VAL_4_75_DE },
         { "5.00", OPTION_VAL_5_00_DE },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_DE,
      NULL,
      PCE_MULTITAP_INFO_0_DE,
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
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_DE,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_DE,
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
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_DE,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_DE,
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
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_DE,
      NULL,
      PCE_TURBO_DELAY_INFO_0_DE,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_DE },
         { "Medium", OPTION_VAL_MEDIUM_DE },
         { "Slow", OPTION_VAL_SLOW_DE },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_DE,
      NULL,
      /*  requires more explanation */
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_DE },
         { "always", OPTION_VAL_ALWAYS_DE },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_DE,
      NULL,
      /*  requires more explanation */
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
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_DE,
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
      PCE_P0_TURBO_II_ENABLE_LABEL_DE,
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
      PCE_P1_TURBO_I_ENABLE_LABEL_DE,
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
      PCE_P1_TURBO_II_ENABLE_LABEL_DE,
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
      PCE_P2_TURBO_I_ENABLE_LABEL_DE,
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
      PCE_P2_TURBO_II_ENABLE_LABEL_DE,
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
      PCE_P3_TURBO_I_ENABLE_LABEL_DE,
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
      PCE_P3_TURBO_II_ENABLE_LABEL_DE,
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
      PCE_P4_TURBO_I_ENABLE_LABEL_DE,
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
      PCE_P4_TURBO_II_ENABLE_LABEL_DE,
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
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_DE,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_DE,
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
      PCE_CDIMAGECACHE_LABEL_DE,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_DE,
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
      PCE_CDBIOS_LABEL_DE,
      NULL,
      PCE_CDBIOS_INFO_0_DE,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_DE },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_DE },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_DE },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_DE },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_DE },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_DE },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_DE,
      NULL,
      PCE_ARCADECARD_INFO_0_DE,
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
      PCE_CDSPEED_LABEL_DE,
      PCE_CDSPEED_LABEL_CAT_DE,
      PCE_CDSPEED_INFO_0_DE,
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
      PCE_ADPCMEXTRAPREC_LABEL_DE,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_DE,
      PCE_ADPCMEXTRAPREC_INFO_0_DE,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_DE },
         { "12-bit", OPTION_VAL_12_BIT_DE },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_DE,
      PCE_CDDAVOLUME_LABEL_CAT_DE,
      PCE_CDDAVOLUME_INFO_0_DE,
      PCE_CDDAVOLUME_INFO_1_DE,
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
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_DE,
      PCE_ADPCMVOLUME_LABEL_CAT_DE,
      PCE_CDDAVOLUME_INFO_0_DE,
      PCE_CDDAVOLUME_INFO_1_DE,
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
      PCE_CDPSGVOLUME_LABEL_DE,
      PCE_CDPSGVOLUME_LABEL_CAT_DE,
      PCE_CDDAVOLUME_INFO_0_DE,
      PCE_CDDAVOLUME_INFO_1_DE,
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
      PCE_NOSPRITELIMIT_LABEL_DE,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_DE,
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
      PCE_OCMULTIPLIER_LABEL_DE,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_DE,
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
struct retro_core_options_v2 options_de = {
   option_cats_de,
   option_defs_de
};

/* RETRO_LANGUAGE_EL */

#define CATEGORY_VIDEO_LABEL_EL NULL
#define CATEGORY_VIDEO_INFO_0_EL NULL
#define CATEGORY_AUDIO_LABEL_EL NULL
#define CATEGORY_AUDIO_INFO_0_EL NULL
#define CATEGORY_INPUT_LABEL_EL NULL
#define CATEGORY_INPUT_INFO_0_EL NULL
#define CATEGORY_HACKS_LABEL_EL NULL
#define CATEGORY_HACKS_INFO_0_EL NULL
#define CATEGORY_CD_LABEL_EL NULL
#define CATEGORY_CD_INFO_0_EL NULL
#define PCE_PALETTE_LABEL_EL NULL
#define PCE_PALETTE_INFO_0_EL NULL
#define OPTION_VAL_RGB_EL NULL
#define OPTION_VAL_COMPOSITE_EL NULL
#define PCE_ASPECT_RATIO_LABEL_EL NULL
#define PCE_ASPECT_RATIO_INFO_0_EL NULL
#define OPTION_VAL_AUTO_EL NULL
#define OPTION_VAL_6_5_EL NULL
#define OPTION_VAL_4_3_EL NULL
#define OPTION_VAL_UNCORRECTED_EL NULL
#define PCE_SCALING_LABEL_EL NULL
#define PCE_SCALING_INFO_0_EL NULL
#define OPTION_VAL_LORES_EL NULL
#define OPTION_VAL_HIRES_EL NULL
#define PCE_HIRES_BLEND_LABEL_EL NULL
#define PCE_HIRES_BLEND_INFO_0_EL NULL
#define PCE_H_OVERSCAN_LABEL_EL NULL
#define PCE_H_OVERSCAN_INFO_0_EL NULL
#define PCE_INITIAL_SCANLINE_LABEL_EL NULL
#define PCE_INITIAL_SCANLINE_INFO_0_EL NULL
#define OPTION_VAL_3_EL NULL
#define PCE_LAST_SCANLINE_LABEL_EL NULL
#define PCE_LAST_SCANLINE_INFO_0_EL NULL
#define OPTION_VAL_242_EL NULL
#define PCE_PSGREVISION_LABEL_EL NULL
#define PCE_PSGREVISION_INFO_0_EL NULL
#define OPTION_VAL_HUC6280_EL NULL
#define OPTION_VAL_HUC6280A_EL NULL
#define PCE_RESAMP_QUALITY_LABEL_EL NULL
#define PCE_RESAMP_QUALITY_INFO_0_EL NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_EL NULL
#define PCE_MOUSE_SENSITIVITY_INFO_0_EL NULL
#define OPTION_VAL_0_125_EL NULL
#define OPTION_VAL_0_250_EL NULL
#define OPTION_VAL_0_375_EL NULL
#define OPTION_VAL_0_500_EL NULL
#define OPTION_VAL_0_625_EL NULL
#define OPTION_VAL_0_750_EL NULL
#define OPTION_VAL_0_875_EL NULL
#define OPTION_VAL_1_000_EL NULL
#define OPTION_VAL_1_125_EL NULL
#define OPTION_VAL_1_25_EL NULL
#define OPTION_VAL_1_50_EL NULL
#define OPTION_VAL_1_75_EL NULL
#define OPTION_VAL_2_00_EL NULL
#define OPTION_VAL_2_25_EL NULL
#define OPTION_VAL_2_50_EL NULL
#define OPTION_VAL_2_75_EL NULL
#define OPTION_VAL_3_00_EL NULL
#define OPTION_VAL_3_25_EL NULL
#define OPTION_VAL_3_50_EL NULL
#define OPTION_VAL_3_75_EL NULL
#define OPTION_VAL_4_00_EL NULL
#define OPTION_VAL_4_25_EL NULL
#define OPTION_VAL_4_50_EL NULL
#define OPTION_VAL_4_75_EL NULL
#define OPTION_VAL_5_00_EL NULL
#define PCE_MULTITAP_LABEL_EL NULL
#define PCE_MULTITAP_INFO_0_EL NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_EL NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_EL NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_EL NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_EL NULL
#define PCE_TURBO_DELAY_LABEL_EL NULL
#define PCE_TURBO_DELAY_INFO_0_EL NULL
#define OPTION_VAL_FAST_EL NULL
#define OPTION_VAL_MEDIUM_EL NULL
#define OPTION_VAL_SLOW_EL NULL
#define PCE_TURBO_TOGGLING_LABEL_EL NULL
#define OPTION_VAL_TOGGLE_EL NULL
#define OPTION_VAL_ALWAYS_EL NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_EL NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_EL NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_EL NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_EL NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_EL NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_EL NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_EL NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_EL NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_EL NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_EL NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_EL NULL
#define PCE_DISABLE_SOFTRESET_LABEL_EL NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_EL NULL
#define PCE_CDIMAGECACHE_LABEL_EL NULL
#define PCE_CDIMAGECACHE_INFO_0_EL NULL
#define PCE_CDBIOS_LABEL_EL NULL
#define PCE_CDBIOS_INFO_0_EL NULL
#define OPTION_VAL_GAMES_EXPRESS_EL NULL
#define OPTION_VAL_SYSTEM_CARD_1_EL NULL
#define OPTION_VAL_SYSTEM_CARD_2_EL NULL
#define OPTION_VAL_SYSTEM_CARD_3_EL NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_EL NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_EL NULL
#define PCE_ARCADECARD_LABEL_EL NULL
#define PCE_ARCADECARD_INFO_0_EL NULL
#define PCE_CDSPEED_LABEL_EL NULL
#define PCE_CDSPEED_LABEL_CAT_EL NULL
#define PCE_CDSPEED_INFO_0_EL NULL
#define PCE_ADPCMEXTRAPREC_LABEL_EL NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_EL NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_EL NULL
#define OPTION_VAL_10_BIT_EL NULL
#define OPTION_VAL_12_BIT_EL NULL
#define PCE_CDDAVOLUME_LABEL_EL NULL
#define PCE_CDDAVOLUME_LABEL_CAT_EL NULL
#define PCE_CDDAVOLUME_INFO_0_EL NULL
#define PCE_CDDAVOLUME_INFO_1_EL NULL
#define PCE_ADPCMVOLUME_LABEL_EL NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_EL NULL
#define PCE_CDPSGVOLUME_LABEL_EL NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_EL NULL
#define PCE_NOSPRITELIMIT_LABEL_EL NULL
#define PCE_NOSPRITELIMIT_INFO_0_EL NULL
#define PCE_OCMULTIPLIER_LABEL_EL NULL
#define PCE_OCMULTIPLIER_INFO_0_EL NULL

struct retro_core_option_v2_category option_cats_el[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_EL,
      CATEGORY_VIDEO_INFO_0_EL
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_EL,
      CATEGORY_AUDIO_INFO_0_EL
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_EL,
      CATEGORY_INPUT_INFO_0_EL
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_EL,
      CATEGORY_HACKS_INFO_0_EL
   },
   {
      "cd",
      CATEGORY_CD_LABEL_EL,
      CATEGORY_CD_INFO_0_EL
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_el[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_EL,
      NULL,
      PCE_PALETTE_INFO_0_EL,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_EL },
         { "Composite", OPTION_VAL_COMPOSITE_EL },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_EL,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_EL,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_EL },
         { "6:5", OPTION_VAL_6_5_EL },
         { "4:3", OPTION_VAL_4_3_EL },
         { "uncorrected", OPTION_VAL_UNCORRECTED_EL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_EL,
      NULL,
      /*  Is 'authorize' supposed to mean 'allow'? */
      PCE_SCALING_INFO_0_EL,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_EL },
         { "lores", OPTION_VAL_LORES_EL },
         { "hires", OPTION_VAL_HIRES_EL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_EL,
      NULL,
      PCE_HIRES_BLEND_INFO_0_EL,
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
      PCE_H_OVERSCAN_LABEL_EL,
      NULL,
      PCE_H_OVERSCAN_INFO_0_EL,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_EL },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_EL,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_EL,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_EL },
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
      PCE_LAST_SCANLINE_LABEL_EL,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_EL,
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
         { "242", OPTION_VAL_242_EL },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_EL,
      NULL,
      PCE_PSGREVISION_INFO_0_EL,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_EL },
         { "HuC6280A", OPTION_VAL_HUC6280A_EL },
         { "auto", OPTION_VAL_AUTO_EL },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_EL,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_EL,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_EL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_EL,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_EL,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_EL },
         { "0.250", OPTION_VAL_0_250_EL },
         { "0.375", OPTION_VAL_0_375_EL },
         { "0.500", OPTION_VAL_0_500_EL },
         { "0.625", OPTION_VAL_0_625_EL },
         { "0.750", OPTION_VAL_0_750_EL },
         { "0.875", OPTION_VAL_0_875_EL },
         { "1.000", OPTION_VAL_1_000_EL },
         { "1.125", OPTION_VAL_1_125_EL },
         { "1.25", OPTION_VAL_1_25_EL },
         { "1.50", OPTION_VAL_1_50_EL },
         { "1.75", OPTION_VAL_1_75_EL },
         { "2.00", OPTION_VAL_2_00_EL },
         { "2.25", OPTION_VAL_2_25_EL },
         { "2.50", OPTION_VAL_2_50_EL },
         { "2.75", OPTION_VAL_2_75_EL },
         { "3.00", OPTION_VAL_3_00_EL },
         { "3.25", OPTION_VAL_3_25_EL },
         { "3.50", OPTION_VAL_3_50_EL },
         { "3.75", OPTION_VAL_3_75_EL },
         { "4.00", OPTION_VAL_4_00_EL },
         { "4.25", OPTION_VAL_4_25_EL },
         { "4.50", OPTION_VAL_4_50_EL },
         { "4.75", OPTION_VAL_4_75_EL },
         { "5.00", OPTION_VAL_5_00_EL },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_EL,
      NULL,
      PCE_MULTITAP_INFO_0_EL,
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
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_EL,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_EL,
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
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_EL,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_EL,
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
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_EL,
      NULL,
      PCE_TURBO_DELAY_INFO_0_EL,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_EL },
         { "Medium", OPTION_VAL_MEDIUM_EL },
         { "Slow", OPTION_VAL_SLOW_EL },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_EL,
      NULL,
      /*  requires more explanation */
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_EL },
         { "always", OPTION_VAL_ALWAYS_EL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_EL,
      NULL,
      /*  requires more explanation */
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
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_EL,
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
      PCE_P0_TURBO_II_ENABLE_LABEL_EL,
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
      PCE_P1_TURBO_I_ENABLE_LABEL_EL,
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
      PCE_P1_TURBO_II_ENABLE_LABEL_EL,
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
      PCE_P2_TURBO_I_ENABLE_LABEL_EL,
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
      PCE_P2_TURBO_II_ENABLE_LABEL_EL,
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
      PCE_P3_TURBO_I_ENABLE_LABEL_EL,
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
      PCE_P3_TURBO_II_ENABLE_LABEL_EL,
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
      PCE_P4_TURBO_I_ENABLE_LABEL_EL,
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
      PCE_P4_TURBO_II_ENABLE_LABEL_EL,
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
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_EL,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_EL,
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
      PCE_CDIMAGECACHE_LABEL_EL,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_EL,
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
      PCE_CDBIOS_LABEL_EL,
      NULL,
      PCE_CDBIOS_INFO_0_EL,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_EL },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_EL },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_EL },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_EL },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_EL },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_EL },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_EL,
      NULL,
      PCE_ARCADECARD_INFO_0_EL,
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
      PCE_CDSPEED_LABEL_EL,
      PCE_CDSPEED_LABEL_CAT_EL,
      PCE_CDSPEED_INFO_0_EL,
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
      PCE_ADPCMEXTRAPREC_LABEL_EL,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_EL,
      PCE_ADPCMEXTRAPREC_INFO_0_EL,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_EL },
         { "12-bit", OPTION_VAL_12_BIT_EL },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_EL,
      PCE_CDDAVOLUME_LABEL_CAT_EL,
      PCE_CDDAVOLUME_INFO_0_EL,
      PCE_CDDAVOLUME_INFO_1_EL,
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
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_EL,
      PCE_ADPCMVOLUME_LABEL_CAT_EL,
      PCE_CDDAVOLUME_INFO_0_EL,
      PCE_CDDAVOLUME_INFO_1_EL,
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
      PCE_CDPSGVOLUME_LABEL_EL,
      PCE_CDPSGVOLUME_LABEL_CAT_EL,
      PCE_CDDAVOLUME_INFO_0_EL,
      PCE_CDDAVOLUME_INFO_1_EL,
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
      PCE_NOSPRITELIMIT_LABEL_EL,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_EL,
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
      PCE_OCMULTIPLIER_LABEL_EL,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_EL,
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
struct retro_core_options_v2 options_el = {
   option_cats_el,
   option_defs_el
};

/* RETRO_LANGUAGE_EO */

#define CATEGORY_VIDEO_LABEL_EO NULL
#define CATEGORY_VIDEO_INFO_0_EO NULL
#define CATEGORY_AUDIO_LABEL_EO NULL
#define CATEGORY_AUDIO_INFO_0_EO NULL
#define CATEGORY_INPUT_LABEL_EO NULL
#define CATEGORY_INPUT_INFO_0_EO NULL
#define CATEGORY_HACKS_LABEL_EO NULL
#define CATEGORY_HACKS_INFO_0_EO NULL
#define CATEGORY_CD_LABEL_EO NULL
#define CATEGORY_CD_INFO_0_EO NULL
#define PCE_PALETTE_LABEL_EO NULL
#define PCE_PALETTE_INFO_0_EO NULL
#define OPTION_VAL_RGB_EO NULL
#define OPTION_VAL_COMPOSITE_EO NULL
#define PCE_ASPECT_RATIO_LABEL_EO NULL
#define PCE_ASPECT_RATIO_INFO_0_EO NULL
#define OPTION_VAL_AUTO_EO NULL
#define OPTION_VAL_6_5_EO NULL
#define OPTION_VAL_4_3_EO NULL
#define OPTION_VAL_UNCORRECTED_EO NULL
#define PCE_SCALING_LABEL_EO NULL
#define PCE_SCALING_INFO_0_EO NULL
#define OPTION_VAL_LORES_EO NULL
#define OPTION_VAL_HIRES_EO NULL
#define PCE_HIRES_BLEND_LABEL_EO NULL
#define PCE_HIRES_BLEND_INFO_0_EO NULL
#define PCE_H_OVERSCAN_LABEL_EO NULL
#define PCE_H_OVERSCAN_INFO_0_EO NULL
#define PCE_INITIAL_SCANLINE_LABEL_EO NULL
#define PCE_INITIAL_SCANLINE_INFO_0_EO NULL
#define OPTION_VAL_3_EO NULL
#define PCE_LAST_SCANLINE_LABEL_EO NULL
#define PCE_LAST_SCANLINE_INFO_0_EO NULL
#define OPTION_VAL_242_EO NULL
#define PCE_PSGREVISION_LABEL_EO NULL
#define PCE_PSGREVISION_INFO_0_EO NULL
#define OPTION_VAL_HUC6280_EO NULL
#define OPTION_VAL_HUC6280A_EO NULL
#define PCE_RESAMP_QUALITY_LABEL_EO NULL
#define PCE_RESAMP_QUALITY_INFO_0_EO NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_EO NULL
#define PCE_MOUSE_SENSITIVITY_INFO_0_EO NULL
#define OPTION_VAL_0_125_EO NULL
#define OPTION_VAL_0_250_EO NULL
#define OPTION_VAL_0_375_EO NULL
#define OPTION_VAL_0_500_EO NULL
#define OPTION_VAL_0_625_EO NULL
#define OPTION_VAL_0_750_EO NULL
#define OPTION_VAL_0_875_EO NULL
#define OPTION_VAL_1_000_EO NULL
#define OPTION_VAL_1_125_EO NULL
#define OPTION_VAL_1_25_EO NULL
#define OPTION_VAL_1_50_EO NULL
#define OPTION_VAL_1_75_EO NULL
#define OPTION_VAL_2_00_EO NULL
#define OPTION_VAL_2_25_EO NULL
#define OPTION_VAL_2_50_EO NULL
#define OPTION_VAL_2_75_EO NULL
#define OPTION_VAL_3_00_EO NULL
#define OPTION_VAL_3_25_EO NULL
#define OPTION_VAL_3_50_EO NULL
#define OPTION_VAL_3_75_EO NULL
#define OPTION_VAL_4_00_EO NULL
#define OPTION_VAL_4_25_EO NULL
#define OPTION_VAL_4_50_EO NULL
#define OPTION_VAL_4_75_EO NULL
#define OPTION_VAL_5_00_EO NULL
#define PCE_MULTITAP_LABEL_EO NULL
#define PCE_MULTITAP_INFO_0_EO NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_EO NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_EO NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_EO NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_EO NULL
#define PCE_TURBO_DELAY_LABEL_EO NULL
#define PCE_TURBO_DELAY_INFO_0_EO NULL
#define OPTION_VAL_FAST_EO NULL
#define OPTION_VAL_MEDIUM_EO NULL
#define OPTION_VAL_SLOW_EO NULL
#define PCE_TURBO_TOGGLING_LABEL_EO NULL
#define OPTION_VAL_TOGGLE_EO NULL
#define OPTION_VAL_ALWAYS_EO NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_EO NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_EO NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_EO NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_EO NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_EO NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_EO NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_EO NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_EO NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_EO NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_EO NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_EO NULL
#define PCE_DISABLE_SOFTRESET_LABEL_EO NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_EO NULL
#define PCE_CDIMAGECACHE_LABEL_EO NULL
#define PCE_CDIMAGECACHE_INFO_0_EO NULL
#define PCE_CDBIOS_LABEL_EO NULL
#define PCE_CDBIOS_INFO_0_EO NULL
#define OPTION_VAL_GAMES_EXPRESS_EO NULL
#define OPTION_VAL_SYSTEM_CARD_1_EO NULL
#define OPTION_VAL_SYSTEM_CARD_2_EO NULL
#define OPTION_VAL_SYSTEM_CARD_3_EO NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_EO NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_EO NULL
#define PCE_ARCADECARD_LABEL_EO NULL
#define PCE_ARCADECARD_INFO_0_EO NULL
#define PCE_CDSPEED_LABEL_EO NULL
#define PCE_CDSPEED_LABEL_CAT_EO NULL
#define PCE_CDSPEED_INFO_0_EO NULL
#define PCE_ADPCMEXTRAPREC_LABEL_EO NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_EO NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_EO NULL
#define OPTION_VAL_10_BIT_EO NULL
#define OPTION_VAL_12_BIT_EO NULL
#define PCE_CDDAVOLUME_LABEL_EO NULL
#define PCE_CDDAVOLUME_LABEL_CAT_EO NULL
#define PCE_CDDAVOLUME_INFO_0_EO NULL
#define PCE_CDDAVOLUME_INFO_1_EO NULL
#define PCE_ADPCMVOLUME_LABEL_EO NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_EO NULL
#define PCE_CDPSGVOLUME_LABEL_EO NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_EO NULL
#define PCE_NOSPRITELIMIT_LABEL_EO NULL
#define PCE_NOSPRITELIMIT_INFO_0_EO NULL
#define PCE_OCMULTIPLIER_LABEL_EO NULL
#define PCE_OCMULTIPLIER_INFO_0_EO NULL

struct retro_core_option_v2_category option_cats_eo[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_EO,
      CATEGORY_VIDEO_INFO_0_EO
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_EO,
      CATEGORY_AUDIO_INFO_0_EO
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_EO,
      CATEGORY_INPUT_INFO_0_EO
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_EO,
      CATEGORY_HACKS_INFO_0_EO
   },
   {
      "cd",
      CATEGORY_CD_LABEL_EO,
      CATEGORY_CD_INFO_0_EO
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_eo[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_EO,
      NULL,
      PCE_PALETTE_INFO_0_EO,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_EO },
         { "Composite", OPTION_VAL_COMPOSITE_EO },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_EO,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_EO,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_EO },
         { "6:5", OPTION_VAL_6_5_EO },
         { "4:3", OPTION_VAL_4_3_EO },
         { "uncorrected", OPTION_VAL_UNCORRECTED_EO },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_EO,
      NULL,
      /*  Is 'authorize' supposed to mean 'allow'? */
      PCE_SCALING_INFO_0_EO,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_EO },
         { "lores", OPTION_VAL_LORES_EO },
         { "hires", OPTION_VAL_HIRES_EO },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_EO,
      NULL,
      PCE_HIRES_BLEND_INFO_0_EO,
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
      PCE_H_OVERSCAN_LABEL_EO,
      NULL,
      PCE_H_OVERSCAN_INFO_0_EO,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_EO },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_EO,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_EO,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_EO },
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
      PCE_LAST_SCANLINE_LABEL_EO,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_EO,
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
         { "242", OPTION_VAL_242_EO },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_EO,
      NULL,
      PCE_PSGREVISION_INFO_0_EO,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_EO },
         { "HuC6280A", OPTION_VAL_HUC6280A_EO },
         { "auto", OPTION_VAL_AUTO_EO },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_EO,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_EO,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_EO },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_EO,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_EO,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_EO },
         { "0.250", OPTION_VAL_0_250_EO },
         { "0.375", OPTION_VAL_0_375_EO },
         { "0.500", OPTION_VAL_0_500_EO },
         { "0.625", OPTION_VAL_0_625_EO },
         { "0.750", OPTION_VAL_0_750_EO },
         { "0.875", OPTION_VAL_0_875_EO },
         { "1.000", OPTION_VAL_1_000_EO },
         { "1.125", OPTION_VAL_1_125_EO },
         { "1.25", OPTION_VAL_1_25_EO },
         { "1.50", OPTION_VAL_1_50_EO },
         { "1.75", OPTION_VAL_1_75_EO },
         { "2.00", OPTION_VAL_2_00_EO },
         { "2.25", OPTION_VAL_2_25_EO },
         { "2.50", OPTION_VAL_2_50_EO },
         { "2.75", OPTION_VAL_2_75_EO },
         { "3.00", OPTION_VAL_3_00_EO },
         { "3.25", OPTION_VAL_3_25_EO },
         { "3.50", OPTION_VAL_3_50_EO },
         { "3.75", OPTION_VAL_3_75_EO },
         { "4.00", OPTION_VAL_4_00_EO },
         { "4.25", OPTION_VAL_4_25_EO },
         { "4.50", OPTION_VAL_4_50_EO },
         { "4.75", OPTION_VAL_4_75_EO },
         { "5.00", OPTION_VAL_5_00_EO },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_EO,
      NULL,
      PCE_MULTITAP_INFO_0_EO,
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
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_EO,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_EO,
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
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_EO,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_EO,
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
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_EO,
      NULL,
      PCE_TURBO_DELAY_INFO_0_EO,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_EO },
         { "Medium", OPTION_VAL_MEDIUM_EO },
         { "Slow", OPTION_VAL_SLOW_EO },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_EO,
      NULL,
      /*  requires more explanation */
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_EO },
         { "always", OPTION_VAL_ALWAYS_EO },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_EO,
      NULL,
      /*  requires more explanation */
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
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_EO,
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
      PCE_P0_TURBO_II_ENABLE_LABEL_EO,
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
      PCE_P1_TURBO_I_ENABLE_LABEL_EO,
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
      PCE_P1_TURBO_II_ENABLE_LABEL_EO,
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
      PCE_P2_TURBO_I_ENABLE_LABEL_EO,
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
      PCE_P2_TURBO_II_ENABLE_LABEL_EO,
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
      PCE_P3_TURBO_I_ENABLE_LABEL_EO,
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
      PCE_P3_TURBO_II_ENABLE_LABEL_EO,
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
      PCE_P4_TURBO_I_ENABLE_LABEL_EO,
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
      PCE_P4_TURBO_II_ENABLE_LABEL_EO,
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
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_EO,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_EO,
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
      PCE_CDIMAGECACHE_LABEL_EO,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_EO,
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
      PCE_CDBIOS_LABEL_EO,
      NULL,
      PCE_CDBIOS_INFO_0_EO,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_EO },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_EO },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_EO },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_EO },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_EO },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_EO },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_EO,
      NULL,
      PCE_ARCADECARD_INFO_0_EO,
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
      PCE_CDSPEED_LABEL_EO,
      PCE_CDSPEED_LABEL_CAT_EO,
      PCE_CDSPEED_INFO_0_EO,
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
      PCE_ADPCMEXTRAPREC_LABEL_EO,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_EO,
      PCE_ADPCMEXTRAPREC_INFO_0_EO,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_EO },
         { "12-bit", OPTION_VAL_12_BIT_EO },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_EO,
      PCE_CDDAVOLUME_LABEL_CAT_EO,
      PCE_CDDAVOLUME_INFO_0_EO,
      PCE_CDDAVOLUME_INFO_1_EO,
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
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_EO,
      PCE_ADPCMVOLUME_LABEL_CAT_EO,
      PCE_CDDAVOLUME_INFO_0_EO,
      PCE_CDDAVOLUME_INFO_1_EO,
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
      PCE_CDPSGVOLUME_LABEL_EO,
      PCE_CDPSGVOLUME_LABEL_CAT_EO,
      PCE_CDDAVOLUME_INFO_0_EO,
      PCE_CDDAVOLUME_INFO_1_EO,
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
      PCE_NOSPRITELIMIT_LABEL_EO,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_EO,
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
      PCE_OCMULTIPLIER_LABEL_EO,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_EO,
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
struct retro_core_options_v2 options_eo = {
   option_cats_eo,
   option_defs_eo
};

/* RETRO_LANGUAGE_ES */

#define CATEGORY_VIDEO_LABEL_ES NULL
#define CATEGORY_VIDEO_INFO_0_ES NULL
#define CATEGORY_AUDIO_LABEL_ES NULL
#define CATEGORY_AUDIO_INFO_0_ES NULL
#define CATEGORY_INPUT_LABEL_ES NULL
#define CATEGORY_INPUT_INFO_0_ES NULL
#define CATEGORY_HACKS_LABEL_ES NULL
#define CATEGORY_HACKS_INFO_0_ES NULL
#define CATEGORY_CD_LABEL_ES NULL
#define CATEGORY_CD_INFO_0_ES NULL
#define PCE_PALETTE_LABEL_ES NULL
#define PCE_PALETTE_INFO_0_ES NULL
#define OPTION_VAL_RGB_ES NULL
#define OPTION_VAL_COMPOSITE_ES NULL
#define PCE_ASPECT_RATIO_LABEL_ES NULL
#define PCE_ASPECT_RATIO_INFO_0_ES NULL
#define OPTION_VAL_AUTO_ES NULL
#define OPTION_VAL_6_5_ES NULL
#define OPTION_VAL_4_3_ES NULL
#define OPTION_VAL_UNCORRECTED_ES NULL
#define PCE_SCALING_LABEL_ES NULL
#define PCE_SCALING_INFO_0_ES NULL
#define OPTION_VAL_LORES_ES NULL
#define OPTION_VAL_HIRES_ES NULL
#define PCE_HIRES_BLEND_LABEL_ES NULL
#define PCE_HIRES_BLEND_INFO_0_ES NULL
#define PCE_H_OVERSCAN_LABEL_ES NULL
#define PCE_H_OVERSCAN_INFO_0_ES NULL
#define PCE_INITIAL_SCANLINE_LABEL_ES NULL
#define PCE_INITIAL_SCANLINE_INFO_0_ES NULL
#define OPTION_VAL_3_ES NULL
#define PCE_LAST_SCANLINE_LABEL_ES NULL
#define PCE_LAST_SCANLINE_INFO_0_ES NULL
#define OPTION_VAL_242_ES NULL
#define PCE_PSGREVISION_LABEL_ES NULL
#define PCE_PSGREVISION_INFO_0_ES NULL
#define OPTION_VAL_HUC6280_ES NULL
#define OPTION_VAL_HUC6280A_ES NULL
#define PCE_RESAMP_QUALITY_LABEL_ES NULL
#define PCE_RESAMP_QUALITY_INFO_0_ES NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_ES NULL
#define PCE_MOUSE_SENSITIVITY_INFO_0_ES NULL
#define OPTION_VAL_0_125_ES NULL
#define OPTION_VAL_0_250_ES NULL
#define OPTION_VAL_0_375_ES NULL
#define OPTION_VAL_0_500_ES NULL
#define OPTION_VAL_0_625_ES NULL
#define OPTION_VAL_0_750_ES NULL
#define OPTION_VAL_0_875_ES NULL
#define OPTION_VAL_1_000_ES NULL
#define OPTION_VAL_1_125_ES NULL
#define OPTION_VAL_1_25_ES NULL
#define OPTION_VAL_1_50_ES NULL
#define OPTION_VAL_1_75_ES NULL
#define OPTION_VAL_2_00_ES NULL
#define OPTION_VAL_2_25_ES NULL
#define OPTION_VAL_2_50_ES NULL
#define OPTION_VAL_2_75_ES NULL
#define OPTION_VAL_3_00_ES NULL
#define OPTION_VAL_3_25_ES NULL
#define OPTION_VAL_3_50_ES NULL
#define OPTION_VAL_3_75_ES NULL
#define OPTION_VAL_4_00_ES NULL
#define OPTION_VAL_4_25_ES NULL
#define OPTION_VAL_4_50_ES NULL
#define OPTION_VAL_4_75_ES NULL
#define OPTION_VAL_5_00_ES NULL
#define PCE_MULTITAP_LABEL_ES NULL
#define PCE_MULTITAP_INFO_0_ES NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_ES NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_ES NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_ES NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_ES NULL
#define PCE_TURBO_DELAY_LABEL_ES NULL
#define PCE_TURBO_DELAY_INFO_0_ES NULL
#define OPTION_VAL_FAST_ES NULL
#define OPTION_VAL_MEDIUM_ES NULL
#define OPTION_VAL_SLOW_ES NULL
#define PCE_TURBO_TOGGLING_LABEL_ES NULL
#define OPTION_VAL_TOGGLE_ES NULL
#define OPTION_VAL_ALWAYS_ES NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_ES NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_ES NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_ES NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_ES NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_ES NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_ES NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_ES NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_ES NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_ES NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_ES NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_ES NULL
#define PCE_DISABLE_SOFTRESET_LABEL_ES NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_ES NULL
#define PCE_CDIMAGECACHE_LABEL_ES NULL
#define PCE_CDIMAGECACHE_INFO_0_ES NULL
#define PCE_CDBIOS_LABEL_ES NULL
#define PCE_CDBIOS_INFO_0_ES NULL
#define OPTION_VAL_GAMES_EXPRESS_ES NULL
#define OPTION_VAL_SYSTEM_CARD_1_ES NULL
#define OPTION_VAL_SYSTEM_CARD_2_ES NULL
#define OPTION_VAL_SYSTEM_CARD_3_ES NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_ES NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_ES NULL
#define PCE_ARCADECARD_LABEL_ES NULL
#define PCE_ARCADECARD_INFO_0_ES NULL
#define PCE_CDSPEED_LABEL_ES NULL
#define PCE_CDSPEED_LABEL_CAT_ES NULL
#define PCE_CDSPEED_INFO_0_ES NULL
#define PCE_ADPCMEXTRAPREC_LABEL_ES NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_ES NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_ES NULL
#define OPTION_VAL_10_BIT_ES NULL
#define OPTION_VAL_12_BIT_ES NULL
#define PCE_CDDAVOLUME_LABEL_ES NULL
#define PCE_CDDAVOLUME_LABEL_CAT_ES NULL
#define PCE_CDDAVOLUME_INFO_0_ES NULL
#define PCE_CDDAVOLUME_INFO_1_ES NULL
#define PCE_ADPCMVOLUME_LABEL_ES NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_ES NULL
#define PCE_CDPSGVOLUME_LABEL_ES NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_ES NULL
#define PCE_NOSPRITELIMIT_LABEL_ES NULL
#define PCE_NOSPRITELIMIT_INFO_0_ES NULL
#define PCE_OCMULTIPLIER_LABEL_ES NULL
#define PCE_OCMULTIPLIER_INFO_0_ES NULL

struct retro_core_option_v2_category option_cats_es[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_ES,
      CATEGORY_VIDEO_INFO_0_ES
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_ES,
      CATEGORY_AUDIO_INFO_0_ES
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_ES,
      CATEGORY_INPUT_INFO_0_ES
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_ES,
      CATEGORY_HACKS_INFO_0_ES
   },
   {
      "cd",
      CATEGORY_CD_LABEL_ES,
      CATEGORY_CD_INFO_0_ES
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_es[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_ES,
      NULL,
      PCE_PALETTE_INFO_0_ES,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_ES },
         { "Composite", OPTION_VAL_COMPOSITE_ES },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_ES,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_ES,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_ES },
         { "6:5", OPTION_VAL_6_5_ES },
         { "4:3", OPTION_VAL_4_3_ES },
         { "uncorrected", OPTION_VAL_UNCORRECTED_ES },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_ES,
      NULL,
      /*  Is 'authorize' supposed to mean 'allow'? */
      PCE_SCALING_INFO_0_ES,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_ES },
         { "lores", OPTION_VAL_LORES_ES },
         { "hires", OPTION_VAL_HIRES_ES },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_ES,
      NULL,
      PCE_HIRES_BLEND_INFO_0_ES,
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
      PCE_H_OVERSCAN_LABEL_ES,
      NULL,
      PCE_H_OVERSCAN_INFO_0_ES,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_ES },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_ES,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_ES,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_ES },
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
      PCE_LAST_SCANLINE_LABEL_ES,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_ES,
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
         { "242", OPTION_VAL_242_ES },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_ES,
      NULL,
      PCE_PSGREVISION_INFO_0_ES,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_ES },
         { "HuC6280A", OPTION_VAL_HUC6280A_ES },
         { "auto", OPTION_VAL_AUTO_ES },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_ES,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_ES,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_ES },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_ES,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_ES,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_ES },
         { "0.250", OPTION_VAL_0_250_ES },
         { "0.375", OPTION_VAL_0_375_ES },
         { "0.500", OPTION_VAL_0_500_ES },
         { "0.625", OPTION_VAL_0_625_ES },
         { "0.750", OPTION_VAL_0_750_ES },
         { "0.875", OPTION_VAL_0_875_ES },
         { "1.000", OPTION_VAL_1_000_ES },
         { "1.125", OPTION_VAL_1_125_ES },
         { "1.25", OPTION_VAL_1_25_ES },
         { "1.50", OPTION_VAL_1_50_ES },
         { "1.75", OPTION_VAL_1_75_ES },
         { "2.00", OPTION_VAL_2_00_ES },
         { "2.25", OPTION_VAL_2_25_ES },
         { "2.50", OPTION_VAL_2_50_ES },
         { "2.75", OPTION_VAL_2_75_ES },
         { "3.00", OPTION_VAL_3_00_ES },
         { "3.25", OPTION_VAL_3_25_ES },
         { "3.50", OPTION_VAL_3_50_ES },
         { "3.75", OPTION_VAL_3_75_ES },
         { "4.00", OPTION_VAL_4_00_ES },
         { "4.25", OPTION_VAL_4_25_ES },
         { "4.50", OPTION_VAL_4_50_ES },
         { "4.75", OPTION_VAL_4_75_ES },
         { "5.00", OPTION_VAL_5_00_ES },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_ES,
      NULL,
      PCE_MULTITAP_INFO_0_ES,
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
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_ES,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_ES,
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
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_ES,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_ES,
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
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_ES,
      NULL,
      PCE_TURBO_DELAY_INFO_0_ES,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_ES },
         { "Medium", OPTION_VAL_MEDIUM_ES },
         { "Slow", OPTION_VAL_SLOW_ES },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_ES,
      NULL,
      /*  requires more explanation */
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_ES },
         { "always", OPTION_VAL_ALWAYS_ES },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_ES,
      NULL,
      /*  requires more explanation */
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
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_ES,
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
      PCE_P0_TURBO_II_ENABLE_LABEL_ES,
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
      PCE_P1_TURBO_I_ENABLE_LABEL_ES,
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
      PCE_P1_TURBO_II_ENABLE_LABEL_ES,
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
      PCE_P2_TURBO_I_ENABLE_LABEL_ES,
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
      PCE_P2_TURBO_II_ENABLE_LABEL_ES,
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
      PCE_P3_TURBO_I_ENABLE_LABEL_ES,
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
      PCE_P3_TURBO_II_ENABLE_LABEL_ES,
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
      PCE_P4_TURBO_I_ENABLE_LABEL_ES,
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
      PCE_P4_TURBO_II_ENABLE_LABEL_ES,
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
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_ES,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_ES,
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
      PCE_CDIMAGECACHE_LABEL_ES,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_ES,
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
      PCE_CDBIOS_LABEL_ES,
      NULL,
      PCE_CDBIOS_INFO_0_ES,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_ES },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_ES },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_ES },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_ES },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_ES },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_ES },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_ES,
      NULL,
      PCE_ARCADECARD_INFO_0_ES,
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
      PCE_CDSPEED_LABEL_ES,
      PCE_CDSPEED_LABEL_CAT_ES,
      PCE_CDSPEED_INFO_0_ES,
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
      PCE_ADPCMEXTRAPREC_LABEL_ES,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_ES,
      PCE_ADPCMEXTRAPREC_INFO_0_ES,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_ES },
         { "12-bit", OPTION_VAL_12_BIT_ES },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_ES,
      PCE_CDDAVOLUME_LABEL_CAT_ES,
      PCE_CDDAVOLUME_INFO_0_ES,
      PCE_CDDAVOLUME_INFO_1_ES,
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
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_ES,
      PCE_ADPCMVOLUME_LABEL_CAT_ES,
      PCE_CDDAVOLUME_INFO_0_ES,
      PCE_CDDAVOLUME_INFO_1_ES,
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
      PCE_CDPSGVOLUME_LABEL_ES,
      PCE_CDPSGVOLUME_LABEL_CAT_ES,
      PCE_CDDAVOLUME_INFO_0_ES,
      PCE_CDDAVOLUME_INFO_1_ES,
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
      PCE_NOSPRITELIMIT_LABEL_ES,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_ES,
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
      PCE_OCMULTIPLIER_LABEL_ES,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_ES,
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
struct retro_core_options_v2 options_es = {
   option_cats_es,
   option_defs_es
};

/* RETRO_LANGUAGE_FA */

#define CATEGORY_VIDEO_LABEL_FA NULL
#define CATEGORY_VIDEO_INFO_0_FA NULL
#define CATEGORY_AUDIO_LABEL_FA NULL
#define CATEGORY_AUDIO_INFO_0_FA NULL
#define CATEGORY_INPUT_LABEL_FA NULL
#define CATEGORY_INPUT_INFO_0_FA NULL
#define CATEGORY_HACKS_LABEL_FA NULL
#define CATEGORY_HACKS_INFO_0_FA NULL
#define CATEGORY_CD_LABEL_FA NULL
#define CATEGORY_CD_INFO_0_FA NULL
#define PCE_PALETTE_LABEL_FA NULL
#define PCE_PALETTE_INFO_0_FA NULL
#define OPTION_VAL_RGB_FA NULL
#define OPTION_VAL_COMPOSITE_FA NULL
#define PCE_ASPECT_RATIO_LABEL_FA NULL
#define PCE_ASPECT_RATIO_INFO_0_FA NULL
#define OPTION_VAL_AUTO_FA NULL
#define OPTION_VAL_6_5_FA NULL
#define OPTION_VAL_4_3_FA NULL
#define OPTION_VAL_UNCORRECTED_FA NULL
#define PCE_SCALING_LABEL_FA NULL
#define PCE_SCALING_INFO_0_FA NULL
#define OPTION_VAL_LORES_FA NULL
#define OPTION_VAL_HIRES_FA NULL
#define PCE_HIRES_BLEND_LABEL_FA NULL
#define PCE_HIRES_BLEND_INFO_0_FA NULL
#define PCE_H_OVERSCAN_LABEL_FA NULL
#define PCE_H_OVERSCAN_INFO_0_FA NULL
#define PCE_INITIAL_SCANLINE_LABEL_FA NULL
#define PCE_INITIAL_SCANLINE_INFO_0_FA NULL
#define OPTION_VAL_3_FA NULL
#define PCE_LAST_SCANLINE_LABEL_FA NULL
#define PCE_LAST_SCANLINE_INFO_0_FA NULL
#define OPTION_VAL_242_FA NULL
#define PCE_PSGREVISION_LABEL_FA NULL
#define PCE_PSGREVISION_INFO_0_FA NULL
#define OPTION_VAL_HUC6280_FA NULL
#define OPTION_VAL_HUC6280A_FA NULL
#define PCE_RESAMP_QUALITY_LABEL_FA NULL
#define PCE_RESAMP_QUALITY_INFO_0_FA NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_FA NULL
#define PCE_MOUSE_SENSITIVITY_INFO_0_FA NULL
#define OPTION_VAL_0_125_FA NULL
#define OPTION_VAL_0_250_FA NULL
#define OPTION_VAL_0_375_FA NULL
#define OPTION_VAL_0_500_FA NULL
#define OPTION_VAL_0_625_FA NULL
#define OPTION_VAL_0_750_FA NULL
#define OPTION_VAL_0_875_FA NULL
#define OPTION_VAL_1_000_FA NULL
#define OPTION_VAL_1_125_FA NULL
#define OPTION_VAL_1_25_FA NULL
#define OPTION_VAL_1_50_FA NULL
#define OPTION_VAL_1_75_FA NULL
#define OPTION_VAL_2_00_FA NULL
#define OPTION_VAL_2_25_FA NULL
#define OPTION_VAL_2_50_FA NULL
#define OPTION_VAL_2_75_FA NULL
#define OPTION_VAL_3_00_FA NULL
#define OPTION_VAL_3_25_FA NULL
#define OPTION_VAL_3_50_FA NULL
#define OPTION_VAL_3_75_FA NULL
#define OPTION_VAL_4_00_FA NULL
#define OPTION_VAL_4_25_FA NULL
#define OPTION_VAL_4_50_FA NULL
#define OPTION_VAL_4_75_FA NULL
#define OPTION_VAL_5_00_FA NULL
#define PCE_MULTITAP_LABEL_FA NULL
#define PCE_MULTITAP_INFO_0_FA NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_FA NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_FA NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_FA NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_FA NULL
#define PCE_TURBO_DELAY_LABEL_FA NULL
#define PCE_TURBO_DELAY_INFO_0_FA NULL
#define OPTION_VAL_FAST_FA NULL
#define OPTION_VAL_MEDIUM_FA NULL
#define OPTION_VAL_SLOW_FA NULL
#define PCE_TURBO_TOGGLING_LABEL_FA NULL
#define OPTION_VAL_TOGGLE_FA NULL
#define OPTION_VAL_ALWAYS_FA NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_FA NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_FA NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_FA NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_FA NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_FA NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_FA NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_FA NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_FA NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_FA NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_FA NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_FA NULL
#define PCE_DISABLE_SOFTRESET_LABEL_FA NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_FA NULL
#define PCE_CDIMAGECACHE_LABEL_FA NULL
#define PCE_CDIMAGECACHE_INFO_0_FA NULL
#define PCE_CDBIOS_LABEL_FA NULL
#define PCE_CDBIOS_INFO_0_FA NULL
#define OPTION_VAL_GAMES_EXPRESS_FA NULL
#define OPTION_VAL_SYSTEM_CARD_1_FA NULL
#define OPTION_VAL_SYSTEM_CARD_2_FA NULL
#define OPTION_VAL_SYSTEM_CARD_3_FA NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_FA NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_FA NULL
#define PCE_ARCADECARD_LABEL_FA NULL
#define PCE_ARCADECARD_INFO_0_FA NULL
#define PCE_CDSPEED_LABEL_FA NULL
#define PCE_CDSPEED_LABEL_CAT_FA NULL
#define PCE_CDSPEED_INFO_0_FA NULL
#define PCE_ADPCMEXTRAPREC_LABEL_FA NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_FA NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_FA NULL
#define OPTION_VAL_10_BIT_FA NULL
#define OPTION_VAL_12_BIT_FA NULL
#define PCE_CDDAVOLUME_LABEL_FA NULL
#define PCE_CDDAVOLUME_LABEL_CAT_FA NULL
#define PCE_CDDAVOLUME_INFO_0_FA NULL
#define PCE_CDDAVOLUME_INFO_1_FA NULL
#define PCE_ADPCMVOLUME_LABEL_FA NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_FA NULL
#define PCE_CDPSGVOLUME_LABEL_FA NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_FA NULL
#define PCE_NOSPRITELIMIT_LABEL_FA NULL
#define PCE_NOSPRITELIMIT_INFO_0_FA NULL
#define PCE_OCMULTIPLIER_LABEL_FA NULL
#define PCE_OCMULTIPLIER_INFO_0_FA NULL

struct retro_core_option_v2_category option_cats_fa[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_FA,
      CATEGORY_VIDEO_INFO_0_FA
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_FA,
      CATEGORY_AUDIO_INFO_0_FA
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_FA,
      CATEGORY_INPUT_INFO_0_FA
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_FA,
      CATEGORY_HACKS_INFO_0_FA
   },
   {
      "cd",
      CATEGORY_CD_LABEL_FA,
      CATEGORY_CD_INFO_0_FA
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_fa[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_FA,
      NULL,
      PCE_PALETTE_INFO_0_FA,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_FA },
         { "Composite", OPTION_VAL_COMPOSITE_FA },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_FA,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_FA,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_FA },
         { "6:5", OPTION_VAL_6_5_FA },
         { "4:3", OPTION_VAL_4_3_FA },
         { "uncorrected", OPTION_VAL_UNCORRECTED_FA },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_FA,
      NULL,
      /*  Is 'authorize' supposed to mean 'allow'? */
      PCE_SCALING_INFO_0_FA,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_FA },
         { "lores", OPTION_VAL_LORES_FA },
         { "hires", OPTION_VAL_HIRES_FA },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_FA,
      NULL,
      PCE_HIRES_BLEND_INFO_0_FA,
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
      PCE_H_OVERSCAN_LABEL_FA,
      NULL,
      PCE_H_OVERSCAN_INFO_0_FA,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_FA },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_FA,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_FA,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_FA },
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
      PCE_LAST_SCANLINE_LABEL_FA,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_FA,
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
         { "242", OPTION_VAL_242_FA },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_FA,
      NULL,
      PCE_PSGREVISION_INFO_0_FA,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_FA },
         { "HuC6280A", OPTION_VAL_HUC6280A_FA },
         { "auto", OPTION_VAL_AUTO_FA },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_FA,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_FA,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_FA },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_FA,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_FA,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_FA },
         { "0.250", OPTION_VAL_0_250_FA },
         { "0.375", OPTION_VAL_0_375_FA },
         { "0.500", OPTION_VAL_0_500_FA },
         { "0.625", OPTION_VAL_0_625_FA },
         { "0.750", OPTION_VAL_0_750_FA },
         { "0.875", OPTION_VAL_0_875_FA },
         { "1.000", OPTION_VAL_1_000_FA },
         { "1.125", OPTION_VAL_1_125_FA },
         { "1.25", OPTION_VAL_1_25_FA },
         { "1.50", OPTION_VAL_1_50_FA },
         { "1.75", OPTION_VAL_1_75_FA },
         { "2.00", OPTION_VAL_2_00_FA },
         { "2.25", OPTION_VAL_2_25_FA },
         { "2.50", OPTION_VAL_2_50_FA },
         { "2.75", OPTION_VAL_2_75_FA },
         { "3.00", OPTION_VAL_3_00_FA },
         { "3.25", OPTION_VAL_3_25_FA },
         { "3.50", OPTION_VAL_3_50_FA },
         { "3.75", OPTION_VAL_3_75_FA },
         { "4.00", OPTION_VAL_4_00_FA },
         { "4.25", OPTION_VAL_4_25_FA },
         { "4.50", OPTION_VAL_4_50_FA },
         { "4.75", OPTION_VAL_4_75_FA },
         { "5.00", OPTION_VAL_5_00_FA },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_FA,
      NULL,
      PCE_MULTITAP_INFO_0_FA,
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
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_FA,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_FA,
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
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_FA,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_FA,
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
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_FA,
      NULL,
      PCE_TURBO_DELAY_INFO_0_FA,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_FA },
         { "Medium", OPTION_VAL_MEDIUM_FA },
         { "Slow", OPTION_VAL_SLOW_FA },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_FA,
      NULL,
      /*  requires more explanation */
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_FA },
         { "always", OPTION_VAL_ALWAYS_FA },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_FA,
      NULL,
      /*  requires more explanation */
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
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_FA,
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
      PCE_P0_TURBO_II_ENABLE_LABEL_FA,
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
      PCE_P1_TURBO_I_ENABLE_LABEL_FA,
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
      PCE_P1_TURBO_II_ENABLE_LABEL_FA,
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
      PCE_P2_TURBO_I_ENABLE_LABEL_FA,
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
      PCE_P2_TURBO_II_ENABLE_LABEL_FA,
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
      PCE_P3_TURBO_I_ENABLE_LABEL_FA,
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
      PCE_P3_TURBO_II_ENABLE_LABEL_FA,
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
      PCE_P4_TURBO_I_ENABLE_LABEL_FA,
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
      PCE_P4_TURBO_II_ENABLE_LABEL_FA,
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
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_FA,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_FA,
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
      PCE_CDIMAGECACHE_LABEL_FA,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_FA,
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
      PCE_CDBIOS_LABEL_FA,
      NULL,
      PCE_CDBIOS_INFO_0_FA,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_FA },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_FA },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_FA },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_FA },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_FA },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_FA },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_FA,
      NULL,
      PCE_ARCADECARD_INFO_0_FA,
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
      PCE_CDSPEED_LABEL_FA,
      PCE_CDSPEED_LABEL_CAT_FA,
      PCE_CDSPEED_INFO_0_FA,
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
      PCE_ADPCMEXTRAPREC_LABEL_FA,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_FA,
      PCE_ADPCMEXTRAPREC_INFO_0_FA,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_FA },
         { "12-bit", OPTION_VAL_12_BIT_FA },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_FA,
      PCE_CDDAVOLUME_LABEL_CAT_FA,
      PCE_CDDAVOLUME_INFO_0_FA,
      PCE_CDDAVOLUME_INFO_1_FA,
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
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_FA,
      PCE_ADPCMVOLUME_LABEL_CAT_FA,
      PCE_CDDAVOLUME_INFO_0_FA,
      PCE_CDDAVOLUME_INFO_1_FA,
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
      PCE_CDPSGVOLUME_LABEL_FA,
      PCE_CDPSGVOLUME_LABEL_CAT_FA,
      PCE_CDDAVOLUME_INFO_0_FA,
      PCE_CDDAVOLUME_INFO_1_FA,
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
      PCE_NOSPRITELIMIT_LABEL_FA,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_FA,
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
      PCE_OCMULTIPLIER_LABEL_FA,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_FA,
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
struct retro_core_options_v2 options_fa = {
   option_cats_fa,
   option_defs_fa
};

/* RETRO_LANGUAGE_FI */

#define CATEGORY_VIDEO_LABEL_FI NULL
#define CATEGORY_VIDEO_INFO_0_FI NULL
#define CATEGORY_AUDIO_LABEL_FI NULL
#define CATEGORY_AUDIO_INFO_0_FI NULL
#define CATEGORY_INPUT_LABEL_FI NULL
#define CATEGORY_INPUT_INFO_0_FI NULL
#define CATEGORY_HACKS_LABEL_FI NULL
#define CATEGORY_HACKS_INFO_0_FI NULL
#define CATEGORY_CD_LABEL_FI NULL
#define CATEGORY_CD_INFO_0_FI NULL
#define PCE_PALETTE_LABEL_FI NULL
#define PCE_PALETTE_INFO_0_FI NULL
#define OPTION_VAL_RGB_FI NULL
#define OPTION_VAL_COMPOSITE_FI NULL
#define PCE_ASPECT_RATIO_LABEL_FI NULL
#define PCE_ASPECT_RATIO_INFO_0_FI NULL
#define OPTION_VAL_AUTO_FI NULL
#define OPTION_VAL_6_5_FI NULL
#define OPTION_VAL_4_3_FI NULL
#define OPTION_VAL_UNCORRECTED_FI NULL
#define PCE_SCALING_LABEL_FI NULL
#define PCE_SCALING_INFO_0_FI NULL
#define OPTION_VAL_LORES_FI NULL
#define OPTION_VAL_HIRES_FI NULL
#define PCE_HIRES_BLEND_LABEL_FI NULL
#define PCE_HIRES_BLEND_INFO_0_FI NULL
#define PCE_H_OVERSCAN_LABEL_FI NULL
#define PCE_H_OVERSCAN_INFO_0_FI NULL
#define PCE_INITIAL_SCANLINE_LABEL_FI NULL
#define PCE_INITIAL_SCANLINE_INFO_0_FI NULL
#define OPTION_VAL_3_FI NULL
#define PCE_LAST_SCANLINE_LABEL_FI NULL
#define PCE_LAST_SCANLINE_INFO_0_FI NULL
#define OPTION_VAL_242_FI NULL
#define PCE_PSGREVISION_LABEL_FI NULL
#define PCE_PSGREVISION_INFO_0_FI NULL
#define OPTION_VAL_HUC6280_FI NULL
#define OPTION_VAL_HUC6280A_FI NULL
#define PCE_RESAMP_QUALITY_LABEL_FI NULL
#define PCE_RESAMP_QUALITY_INFO_0_FI NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_FI NULL
#define PCE_MOUSE_SENSITIVITY_INFO_0_FI NULL
#define OPTION_VAL_0_125_FI NULL
#define OPTION_VAL_0_250_FI NULL
#define OPTION_VAL_0_375_FI NULL
#define OPTION_VAL_0_500_FI NULL
#define OPTION_VAL_0_625_FI NULL
#define OPTION_VAL_0_750_FI NULL
#define OPTION_VAL_0_875_FI NULL
#define OPTION_VAL_1_000_FI NULL
#define OPTION_VAL_1_125_FI NULL
#define OPTION_VAL_1_25_FI NULL
#define OPTION_VAL_1_50_FI NULL
#define OPTION_VAL_1_75_FI NULL
#define OPTION_VAL_2_00_FI NULL
#define OPTION_VAL_2_25_FI NULL
#define OPTION_VAL_2_50_FI NULL
#define OPTION_VAL_2_75_FI NULL
#define OPTION_VAL_3_00_FI NULL
#define OPTION_VAL_3_25_FI NULL
#define OPTION_VAL_3_50_FI NULL
#define OPTION_VAL_3_75_FI NULL
#define OPTION_VAL_4_00_FI NULL
#define OPTION_VAL_4_25_FI NULL
#define OPTION_VAL_4_50_FI NULL
#define OPTION_VAL_4_75_FI NULL
#define OPTION_VAL_5_00_FI NULL
#define PCE_MULTITAP_LABEL_FI NULL
#define PCE_MULTITAP_INFO_0_FI NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_FI NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_FI NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_FI NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_FI NULL
#define PCE_TURBO_DELAY_LABEL_FI NULL
#define PCE_TURBO_DELAY_INFO_0_FI NULL
#define OPTION_VAL_FAST_FI NULL
#define OPTION_VAL_MEDIUM_FI NULL
#define OPTION_VAL_SLOW_FI NULL
#define PCE_TURBO_TOGGLING_LABEL_FI NULL
#define OPTION_VAL_TOGGLE_FI NULL
#define OPTION_VAL_ALWAYS_FI NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_FI NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_FI NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_FI NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_FI NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_FI NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_FI NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_FI NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_FI NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_FI NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_FI NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_FI NULL
#define PCE_DISABLE_SOFTRESET_LABEL_FI NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_FI NULL
#define PCE_CDIMAGECACHE_LABEL_FI NULL
#define PCE_CDIMAGECACHE_INFO_0_FI NULL
#define PCE_CDBIOS_LABEL_FI NULL
#define PCE_CDBIOS_INFO_0_FI NULL
#define OPTION_VAL_GAMES_EXPRESS_FI NULL
#define OPTION_VAL_SYSTEM_CARD_1_FI NULL
#define OPTION_VAL_SYSTEM_CARD_2_FI NULL
#define OPTION_VAL_SYSTEM_CARD_3_FI NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_FI NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_FI NULL
#define PCE_ARCADECARD_LABEL_FI NULL
#define PCE_ARCADECARD_INFO_0_FI NULL
#define PCE_CDSPEED_LABEL_FI NULL
#define PCE_CDSPEED_LABEL_CAT_FI NULL
#define PCE_CDSPEED_INFO_0_FI NULL
#define PCE_ADPCMEXTRAPREC_LABEL_FI NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_FI NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_FI NULL
#define OPTION_VAL_10_BIT_FI NULL
#define OPTION_VAL_12_BIT_FI NULL
#define PCE_CDDAVOLUME_LABEL_FI NULL
#define PCE_CDDAVOLUME_LABEL_CAT_FI NULL
#define PCE_CDDAVOLUME_INFO_0_FI NULL
#define PCE_CDDAVOLUME_INFO_1_FI NULL
#define PCE_ADPCMVOLUME_LABEL_FI NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_FI NULL
#define PCE_CDPSGVOLUME_LABEL_FI NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_FI NULL
#define PCE_NOSPRITELIMIT_LABEL_FI NULL
#define PCE_NOSPRITELIMIT_INFO_0_FI NULL
#define PCE_OCMULTIPLIER_LABEL_FI NULL
#define PCE_OCMULTIPLIER_INFO_0_FI NULL

struct retro_core_option_v2_category option_cats_fi[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_FI,
      CATEGORY_VIDEO_INFO_0_FI
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_FI,
      CATEGORY_AUDIO_INFO_0_FI
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_FI,
      CATEGORY_INPUT_INFO_0_FI
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_FI,
      CATEGORY_HACKS_INFO_0_FI
   },
   {
      "cd",
      CATEGORY_CD_LABEL_FI,
      CATEGORY_CD_INFO_0_FI
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_fi[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_FI,
      NULL,
      PCE_PALETTE_INFO_0_FI,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_FI },
         { "Composite", OPTION_VAL_COMPOSITE_FI },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_FI,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_FI,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_FI },
         { "6:5", OPTION_VAL_6_5_FI },
         { "4:3", OPTION_VAL_4_3_FI },
         { "uncorrected", OPTION_VAL_UNCORRECTED_FI },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_FI,
      NULL,
      /*  Is 'authorize' supposed to mean 'allow'? */
      PCE_SCALING_INFO_0_FI,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_FI },
         { "lores", OPTION_VAL_LORES_FI },
         { "hires", OPTION_VAL_HIRES_FI },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_FI,
      NULL,
      PCE_HIRES_BLEND_INFO_0_FI,
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
      PCE_H_OVERSCAN_LABEL_FI,
      NULL,
      PCE_H_OVERSCAN_INFO_0_FI,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_FI },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_FI,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_FI,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_FI },
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
      PCE_LAST_SCANLINE_LABEL_FI,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_FI,
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
         { "242", OPTION_VAL_242_FI },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_FI,
      NULL,
      PCE_PSGREVISION_INFO_0_FI,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_FI },
         { "HuC6280A", OPTION_VAL_HUC6280A_FI },
         { "auto", OPTION_VAL_AUTO_FI },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_FI,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_FI,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_FI },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_FI,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_FI,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_FI },
         { "0.250", OPTION_VAL_0_250_FI },
         { "0.375", OPTION_VAL_0_375_FI },
         { "0.500", OPTION_VAL_0_500_FI },
         { "0.625", OPTION_VAL_0_625_FI },
         { "0.750", OPTION_VAL_0_750_FI },
         { "0.875", OPTION_VAL_0_875_FI },
         { "1.000", OPTION_VAL_1_000_FI },
         { "1.125", OPTION_VAL_1_125_FI },
         { "1.25", OPTION_VAL_1_25_FI },
         { "1.50", OPTION_VAL_1_50_FI },
         { "1.75", OPTION_VAL_1_75_FI },
         { "2.00", OPTION_VAL_2_00_FI },
         { "2.25", OPTION_VAL_2_25_FI },
         { "2.50", OPTION_VAL_2_50_FI },
         { "2.75", OPTION_VAL_2_75_FI },
         { "3.00", OPTION_VAL_3_00_FI },
         { "3.25", OPTION_VAL_3_25_FI },
         { "3.50", OPTION_VAL_3_50_FI },
         { "3.75", OPTION_VAL_3_75_FI },
         { "4.00", OPTION_VAL_4_00_FI },
         { "4.25", OPTION_VAL_4_25_FI },
         { "4.50", OPTION_VAL_4_50_FI },
         { "4.75", OPTION_VAL_4_75_FI },
         { "5.00", OPTION_VAL_5_00_FI },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_FI,
      NULL,
      PCE_MULTITAP_INFO_0_FI,
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
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_FI,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_FI,
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
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_FI,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_FI,
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
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_FI,
      NULL,
      PCE_TURBO_DELAY_INFO_0_FI,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_FI },
         { "Medium", OPTION_VAL_MEDIUM_FI },
         { "Slow", OPTION_VAL_SLOW_FI },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_FI,
      NULL,
      /*  requires more explanation */
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_FI },
         { "always", OPTION_VAL_ALWAYS_FI },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_FI,
      NULL,
      /*  requires more explanation */
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
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_FI,
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
      PCE_P0_TURBO_II_ENABLE_LABEL_FI,
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
      PCE_P1_TURBO_I_ENABLE_LABEL_FI,
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
      PCE_P1_TURBO_II_ENABLE_LABEL_FI,
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
      PCE_P2_TURBO_I_ENABLE_LABEL_FI,
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
      PCE_P2_TURBO_II_ENABLE_LABEL_FI,
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
      PCE_P3_TURBO_I_ENABLE_LABEL_FI,
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
      PCE_P3_TURBO_II_ENABLE_LABEL_FI,
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
      PCE_P4_TURBO_I_ENABLE_LABEL_FI,
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
      PCE_P4_TURBO_II_ENABLE_LABEL_FI,
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
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_FI,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_FI,
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
      PCE_CDIMAGECACHE_LABEL_FI,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_FI,
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
      PCE_CDBIOS_LABEL_FI,
      NULL,
      PCE_CDBIOS_INFO_0_FI,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_FI },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_FI },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_FI },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_FI },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_FI },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_FI },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_FI,
      NULL,
      PCE_ARCADECARD_INFO_0_FI,
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
      PCE_CDSPEED_LABEL_FI,
      PCE_CDSPEED_LABEL_CAT_FI,
      PCE_CDSPEED_INFO_0_FI,
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
      PCE_ADPCMEXTRAPREC_LABEL_FI,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_FI,
      PCE_ADPCMEXTRAPREC_INFO_0_FI,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_FI },
         { "12-bit", OPTION_VAL_12_BIT_FI },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_FI,
      PCE_CDDAVOLUME_LABEL_CAT_FI,
      PCE_CDDAVOLUME_INFO_0_FI,
      PCE_CDDAVOLUME_INFO_1_FI,
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
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_FI,
      PCE_ADPCMVOLUME_LABEL_CAT_FI,
      PCE_CDDAVOLUME_INFO_0_FI,
      PCE_CDDAVOLUME_INFO_1_FI,
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
      PCE_CDPSGVOLUME_LABEL_FI,
      PCE_CDPSGVOLUME_LABEL_CAT_FI,
      PCE_CDDAVOLUME_INFO_0_FI,
      PCE_CDDAVOLUME_INFO_1_FI,
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
      PCE_NOSPRITELIMIT_LABEL_FI,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_FI,
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
      PCE_OCMULTIPLIER_LABEL_FI,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_FI,
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
struct retro_core_options_v2 options_fi = {
   option_cats_fi,
   option_defs_fi
};

/* RETRO_LANGUAGE_FR */

#define CATEGORY_VIDEO_LABEL_FR NULL
#define CATEGORY_VIDEO_INFO_0_FR NULL
#define CATEGORY_AUDIO_LABEL_FR NULL
#define CATEGORY_AUDIO_INFO_0_FR NULL
#define CATEGORY_INPUT_LABEL_FR NULL
#define CATEGORY_INPUT_INFO_0_FR NULL
#define CATEGORY_HACKS_LABEL_FR NULL
#define CATEGORY_HACKS_INFO_0_FR NULL
#define CATEGORY_CD_LABEL_FR NULL
#define CATEGORY_CD_INFO_0_FR NULL
#define PCE_PALETTE_LABEL_FR NULL
#define PCE_PALETTE_INFO_0_FR NULL
#define OPTION_VAL_RGB_FR NULL
#define OPTION_VAL_COMPOSITE_FR NULL
#define PCE_ASPECT_RATIO_LABEL_FR NULL
#define PCE_ASPECT_RATIO_INFO_0_FR NULL
#define OPTION_VAL_AUTO_FR NULL
#define OPTION_VAL_6_5_FR NULL
#define OPTION_VAL_4_3_FR NULL
#define OPTION_VAL_UNCORRECTED_FR NULL
#define PCE_SCALING_LABEL_FR NULL
#define PCE_SCALING_INFO_0_FR NULL
#define OPTION_VAL_LORES_FR NULL
#define OPTION_VAL_HIRES_FR NULL
#define PCE_HIRES_BLEND_LABEL_FR NULL
#define PCE_HIRES_BLEND_INFO_0_FR NULL
#define PCE_H_OVERSCAN_LABEL_FR NULL
#define PCE_H_OVERSCAN_INFO_0_FR NULL
#define PCE_INITIAL_SCANLINE_LABEL_FR NULL
#define PCE_INITIAL_SCANLINE_INFO_0_FR NULL
#define OPTION_VAL_3_FR NULL
#define PCE_LAST_SCANLINE_LABEL_FR NULL
#define PCE_LAST_SCANLINE_INFO_0_FR NULL
#define OPTION_VAL_242_FR NULL
#define PCE_PSGREVISION_LABEL_FR NULL
#define PCE_PSGREVISION_INFO_0_FR NULL
#define OPTION_VAL_HUC6280_FR NULL
#define OPTION_VAL_HUC6280A_FR NULL
#define PCE_RESAMP_QUALITY_LABEL_FR NULL
#define PCE_RESAMP_QUALITY_INFO_0_FR NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_FR NULL
#define PCE_MOUSE_SENSITIVITY_INFO_0_FR NULL
#define OPTION_VAL_0_125_FR NULL
#define OPTION_VAL_0_250_FR NULL
#define OPTION_VAL_0_375_FR NULL
#define OPTION_VAL_0_500_FR NULL
#define OPTION_VAL_0_625_FR NULL
#define OPTION_VAL_0_750_FR NULL
#define OPTION_VAL_0_875_FR NULL
#define OPTION_VAL_1_000_FR NULL
#define OPTION_VAL_1_125_FR NULL
#define OPTION_VAL_1_25_FR NULL
#define OPTION_VAL_1_50_FR NULL
#define OPTION_VAL_1_75_FR NULL
#define OPTION_VAL_2_00_FR NULL
#define OPTION_VAL_2_25_FR NULL
#define OPTION_VAL_2_50_FR NULL
#define OPTION_VAL_2_75_FR NULL
#define OPTION_VAL_3_00_FR NULL
#define OPTION_VAL_3_25_FR NULL
#define OPTION_VAL_3_50_FR NULL
#define OPTION_VAL_3_75_FR NULL
#define OPTION_VAL_4_00_FR NULL
#define OPTION_VAL_4_25_FR NULL
#define OPTION_VAL_4_50_FR NULL
#define OPTION_VAL_4_75_FR NULL
#define OPTION_VAL_5_00_FR NULL
#define PCE_MULTITAP_LABEL_FR NULL
#define PCE_MULTITAP_INFO_0_FR NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_FR NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_FR NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_FR NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_FR NULL
#define PCE_TURBO_DELAY_LABEL_FR NULL
#define PCE_TURBO_DELAY_INFO_0_FR NULL
#define OPTION_VAL_FAST_FR NULL
#define OPTION_VAL_MEDIUM_FR NULL
#define OPTION_VAL_SLOW_FR NULL
#define PCE_TURBO_TOGGLING_LABEL_FR NULL
#define OPTION_VAL_TOGGLE_FR NULL
#define OPTION_VAL_ALWAYS_FR NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_FR NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_FR NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_FR NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_FR NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_FR NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_FR NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_FR NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_FR NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_FR NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_FR NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_FR NULL
#define PCE_DISABLE_SOFTRESET_LABEL_FR NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_FR NULL
#define PCE_CDIMAGECACHE_LABEL_FR NULL
#define PCE_CDIMAGECACHE_INFO_0_FR NULL
#define PCE_CDBIOS_LABEL_FR NULL
#define PCE_CDBIOS_INFO_0_FR NULL
#define OPTION_VAL_GAMES_EXPRESS_FR NULL
#define OPTION_VAL_SYSTEM_CARD_1_FR NULL
#define OPTION_VAL_SYSTEM_CARD_2_FR NULL
#define OPTION_VAL_SYSTEM_CARD_3_FR NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_FR NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_FR NULL
#define PCE_ARCADECARD_LABEL_FR NULL
#define PCE_ARCADECARD_INFO_0_FR NULL
#define PCE_CDSPEED_LABEL_FR NULL
#define PCE_CDSPEED_LABEL_CAT_FR NULL
#define PCE_CDSPEED_INFO_0_FR NULL
#define PCE_ADPCMEXTRAPREC_LABEL_FR NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_FR NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_FR NULL
#define OPTION_VAL_10_BIT_FR NULL
#define OPTION_VAL_12_BIT_FR NULL
#define PCE_CDDAVOLUME_LABEL_FR NULL
#define PCE_CDDAVOLUME_LABEL_CAT_FR NULL
#define PCE_CDDAVOLUME_INFO_0_FR NULL
#define PCE_CDDAVOLUME_INFO_1_FR NULL
#define PCE_ADPCMVOLUME_LABEL_FR NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_FR NULL
#define PCE_CDPSGVOLUME_LABEL_FR NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_FR NULL
#define PCE_NOSPRITELIMIT_LABEL_FR NULL
#define PCE_NOSPRITELIMIT_INFO_0_FR NULL
#define PCE_OCMULTIPLIER_LABEL_FR NULL
#define PCE_OCMULTIPLIER_INFO_0_FR NULL

struct retro_core_option_v2_category option_cats_fr[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_FR,
      CATEGORY_VIDEO_INFO_0_FR
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_FR,
      CATEGORY_AUDIO_INFO_0_FR
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_FR,
      CATEGORY_INPUT_INFO_0_FR
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_FR,
      CATEGORY_HACKS_INFO_0_FR
   },
   {
      "cd",
      CATEGORY_CD_LABEL_FR,
      CATEGORY_CD_INFO_0_FR
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_fr[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_FR,
      NULL,
      PCE_PALETTE_INFO_0_FR,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_FR },
         { "Composite", OPTION_VAL_COMPOSITE_FR },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_FR,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_FR,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_FR },
         { "6:5", OPTION_VAL_6_5_FR },
         { "4:3", OPTION_VAL_4_3_FR },
         { "uncorrected", OPTION_VAL_UNCORRECTED_FR },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_FR,
      NULL,
      /*  Is 'authorize' supposed to mean 'allow'? */
      PCE_SCALING_INFO_0_FR,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_FR },
         { "lores", OPTION_VAL_LORES_FR },
         { "hires", OPTION_VAL_HIRES_FR },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_FR,
      NULL,
      PCE_HIRES_BLEND_INFO_0_FR,
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
      PCE_H_OVERSCAN_LABEL_FR,
      NULL,
      PCE_H_OVERSCAN_INFO_0_FR,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_FR },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_FR,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_FR,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_FR },
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
      PCE_LAST_SCANLINE_LABEL_FR,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_FR,
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
         { "242", OPTION_VAL_242_FR },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_FR,
      NULL,
      PCE_PSGREVISION_INFO_0_FR,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_FR },
         { "HuC6280A", OPTION_VAL_HUC6280A_FR },
         { "auto", OPTION_VAL_AUTO_FR },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_FR,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_FR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_FR },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_FR,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_FR,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_FR },
         { "0.250", OPTION_VAL_0_250_FR },
         { "0.375", OPTION_VAL_0_375_FR },
         { "0.500", OPTION_VAL_0_500_FR },
         { "0.625", OPTION_VAL_0_625_FR },
         { "0.750", OPTION_VAL_0_750_FR },
         { "0.875", OPTION_VAL_0_875_FR },
         { "1.000", OPTION_VAL_1_000_FR },
         { "1.125", OPTION_VAL_1_125_FR },
         { "1.25", OPTION_VAL_1_25_FR },
         { "1.50", OPTION_VAL_1_50_FR },
         { "1.75", OPTION_VAL_1_75_FR },
         { "2.00", OPTION_VAL_2_00_FR },
         { "2.25", OPTION_VAL_2_25_FR },
         { "2.50", OPTION_VAL_2_50_FR },
         { "2.75", OPTION_VAL_2_75_FR },
         { "3.00", OPTION_VAL_3_00_FR },
         { "3.25", OPTION_VAL_3_25_FR },
         { "3.50", OPTION_VAL_3_50_FR },
         { "3.75", OPTION_VAL_3_75_FR },
         { "4.00", OPTION_VAL_4_00_FR },
         { "4.25", OPTION_VAL_4_25_FR },
         { "4.50", OPTION_VAL_4_50_FR },
         { "4.75", OPTION_VAL_4_75_FR },
         { "5.00", OPTION_VAL_5_00_FR },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_FR,
      NULL,
      PCE_MULTITAP_INFO_0_FR,
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
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_FR,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_FR,
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
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_FR,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_FR,
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
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_FR,
      NULL,
      PCE_TURBO_DELAY_INFO_0_FR,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_FR },
         { "Medium", OPTION_VAL_MEDIUM_FR },
         { "Slow", OPTION_VAL_SLOW_FR },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_FR,
      NULL,
      /*  requires more explanation */
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_FR },
         { "always", OPTION_VAL_ALWAYS_FR },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_FR,
      NULL,
      /*  requires more explanation */
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
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_FR,
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
      PCE_P0_TURBO_II_ENABLE_LABEL_FR,
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
      PCE_P1_TURBO_I_ENABLE_LABEL_FR,
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
      PCE_P1_TURBO_II_ENABLE_LABEL_FR,
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
      PCE_P2_TURBO_I_ENABLE_LABEL_FR,
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
      PCE_P2_TURBO_II_ENABLE_LABEL_FR,
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
      PCE_P3_TURBO_I_ENABLE_LABEL_FR,
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
      PCE_P3_TURBO_II_ENABLE_LABEL_FR,
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
      PCE_P4_TURBO_I_ENABLE_LABEL_FR,
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
      PCE_P4_TURBO_II_ENABLE_LABEL_FR,
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
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_FR,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_FR,
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
      PCE_CDIMAGECACHE_LABEL_FR,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_FR,
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
      PCE_CDBIOS_LABEL_FR,
      NULL,
      PCE_CDBIOS_INFO_0_FR,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_FR },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_FR },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_FR },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_FR },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_FR },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_FR },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_FR,
      NULL,
      PCE_ARCADECARD_INFO_0_FR,
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
      PCE_CDSPEED_LABEL_FR,
      PCE_CDSPEED_LABEL_CAT_FR,
      PCE_CDSPEED_INFO_0_FR,
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
      PCE_ADPCMEXTRAPREC_LABEL_FR,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_FR,
      PCE_ADPCMEXTRAPREC_INFO_0_FR,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_FR },
         { "12-bit", OPTION_VAL_12_BIT_FR },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_FR,
      PCE_CDDAVOLUME_LABEL_CAT_FR,
      PCE_CDDAVOLUME_INFO_0_FR,
      PCE_CDDAVOLUME_INFO_1_FR,
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
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_FR,
      PCE_ADPCMVOLUME_LABEL_CAT_FR,
      PCE_CDDAVOLUME_INFO_0_FR,
      PCE_CDDAVOLUME_INFO_1_FR,
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
      PCE_CDPSGVOLUME_LABEL_FR,
      PCE_CDPSGVOLUME_LABEL_CAT_FR,
      PCE_CDDAVOLUME_INFO_0_FR,
      PCE_CDDAVOLUME_INFO_1_FR,
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
      PCE_NOSPRITELIMIT_LABEL_FR,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_FR,
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
      PCE_OCMULTIPLIER_LABEL_FR,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_FR,
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
struct retro_core_options_v2 options_fr = {
   option_cats_fr,
   option_defs_fr
};

/* RETRO_LANGUAGE_GL */

#define CATEGORY_VIDEO_LABEL_GL NULL
#define CATEGORY_VIDEO_INFO_0_GL NULL
#define CATEGORY_AUDIO_LABEL_GL NULL
#define CATEGORY_AUDIO_INFO_0_GL NULL
#define CATEGORY_INPUT_LABEL_GL NULL
#define CATEGORY_INPUT_INFO_0_GL NULL
#define CATEGORY_HACKS_LABEL_GL NULL
#define CATEGORY_HACKS_INFO_0_GL NULL
#define CATEGORY_CD_LABEL_GL NULL
#define CATEGORY_CD_INFO_0_GL NULL
#define PCE_PALETTE_LABEL_GL NULL
#define PCE_PALETTE_INFO_0_GL NULL
#define OPTION_VAL_RGB_GL NULL
#define OPTION_VAL_COMPOSITE_GL NULL
#define PCE_ASPECT_RATIO_LABEL_GL NULL
#define PCE_ASPECT_RATIO_INFO_0_GL NULL
#define OPTION_VAL_AUTO_GL NULL
#define OPTION_VAL_6_5_GL NULL
#define OPTION_VAL_4_3_GL NULL
#define OPTION_VAL_UNCORRECTED_GL NULL
#define PCE_SCALING_LABEL_GL NULL
#define PCE_SCALING_INFO_0_GL NULL
#define OPTION_VAL_LORES_GL NULL
#define OPTION_VAL_HIRES_GL NULL
#define PCE_HIRES_BLEND_LABEL_GL NULL
#define PCE_HIRES_BLEND_INFO_0_GL NULL
#define PCE_H_OVERSCAN_LABEL_GL NULL
#define PCE_H_OVERSCAN_INFO_0_GL NULL
#define PCE_INITIAL_SCANLINE_LABEL_GL NULL
#define PCE_INITIAL_SCANLINE_INFO_0_GL NULL
#define OPTION_VAL_3_GL NULL
#define PCE_LAST_SCANLINE_LABEL_GL NULL
#define PCE_LAST_SCANLINE_INFO_0_GL NULL
#define OPTION_VAL_242_GL NULL
#define PCE_PSGREVISION_LABEL_GL NULL
#define PCE_PSGREVISION_INFO_0_GL NULL
#define OPTION_VAL_HUC6280_GL NULL
#define OPTION_VAL_HUC6280A_GL NULL
#define PCE_RESAMP_QUALITY_LABEL_GL NULL
#define PCE_RESAMP_QUALITY_INFO_0_GL NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_GL NULL
#define PCE_MOUSE_SENSITIVITY_INFO_0_GL NULL
#define OPTION_VAL_0_125_GL NULL
#define OPTION_VAL_0_250_GL NULL
#define OPTION_VAL_0_375_GL NULL
#define OPTION_VAL_0_500_GL NULL
#define OPTION_VAL_0_625_GL NULL
#define OPTION_VAL_0_750_GL NULL
#define OPTION_VAL_0_875_GL NULL
#define OPTION_VAL_1_000_GL NULL
#define OPTION_VAL_1_125_GL NULL
#define OPTION_VAL_1_25_GL NULL
#define OPTION_VAL_1_50_GL NULL
#define OPTION_VAL_1_75_GL NULL
#define OPTION_VAL_2_00_GL NULL
#define OPTION_VAL_2_25_GL NULL
#define OPTION_VAL_2_50_GL NULL
#define OPTION_VAL_2_75_GL NULL
#define OPTION_VAL_3_00_GL NULL
#define OPTION_VAL_3_25_GL NULL
#define OPTION_VAL_3_50_GL NULL
#define OPTION_VAL_3_75_GL NULL
#define OPTION_VAL_4_00_GL NULL
#define OPTION_VAL_4_25_GL NULL
#define OPTION_VAL_4_50_GL NULL
#define OPTION_VAL_4_75_GL NULL
#define OPTION_VAL_5_00_GL NULL
#define PCE_MULTITAP_LABEL_GL NULL
#define PCE_MULTITAP_INFO_0_GL NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_GL NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_GL NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_GL NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_GL NULL
#define PCE_TURBO_DELAY_LABEL_GL NULL
#define PCE_TURBO_DELAY_INFO_0_GL NULL
#define OPTION_VAL_FAST_GL NULL
#define OPTION_VAL_MEDIUM_GL NULL
#define OPTION_VAL_SLOW_GL NULL
#define PCE_TURBO_TOGGLING_LABEL_GL NULL
#define OPTION_VAL_TOGGLE_GL NULL
#define OPTION_VAL_ALWAYS_GL NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_GL NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_GL NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_GL NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_GL NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_GL NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_GL NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_GL NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_GL NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_GL NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_GL NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_GL NULL
#define PCE_DISABLE_SOFTRESET_LABEL_GL NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_GL NULL
#define PCE_CDIMAGECACHE_LABEL_GL NULL
#define PCE_CDIMAGECACHE_INFO_0_GL NULL
#define PCE_CDBIOS_LABEL_GL NULL
#define PCE_CDBIOS_INFO_0_GL NULL
#define OPTION_VAL_GAMES_EXPRESS_GL NULL
#define OPTION_VAL_SYSTEM_CARD_1_GL NULL
#define OPTION_VAL_SYSTEM_CARD_2_GL NULL
#define OPTION_VAL_SYSTEM_CARD_3_GL NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_GL NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_GL NULL
#define PCE_ARCADECARD_LABEL_GL NULL
#define PCE_ARCADECARD_INFO_0_GL NULL
#define PCE_CDSPEED_LABEL_GL NULL
#define PCE_CDSPEED_LABEL_CAT_GL NULL
#define PCE_CDSPEED_INFO_0_GL NULL
#define PCE_ADPCMEXTRAPREC_LABEL_GL NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_GL NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_GL NULL
#define OPTION_VAL_10_BIT_GL NULL
#define OPTION_VAL_12_BIT_GL NULL
#define PCE_CDDAVOLUME_LABEL_GL NULL
#define PCE_CDDAVOLUME_LABEL_CAT_GL NULL
#define PCE_CDDAVOLUME_INFO_0_GL NULL
#define PCE_CDDAVOLUME_INFO_1_GL NULL
#define PCE_ADPCMVOLUME_LABEL_GL NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_GL NULL
#define PCE_CDPSGVOLUME_LABEL_GL NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_GL NULL
#define PCE_NOSPRITELIMIT_LABEL_GL NULL
#define PCE_NOSPRITELIMIT_INFO_0_GL NULL
#define PCE_OCMULTIPLIER_LABEL_GL NULL
#define PCE_OCMULTIPLIER_INFO_0_GL NULL

struct retro_core_option_v2_category option_cats_gl[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_GL,
      CATEGORY_VIDEO_INFO_0_GL
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_GL,
      CATEGORY_AUDIO_INFO_0_GL
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_GL,
      CATEGORY_INPUT_INFO_0_GL
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_GL,
      CATEGORY_HACKS_INFO_0_GL
   },
   {
      "cd",
      CATEGORY_CD_LABEL_GL,
      CATEGORY_CD_INFO_0_GL
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_gl[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_GL,
      NULL,
      PCE_PALETTE_INFO_0_GL,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_GL },
         { "Composite", OPTION_VAL_COMPOSITE_GL },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_GL,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_GL,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_GL },
         { "6:5", OPTION_VAL_6_5_GL },
         { "4:3", OPTION_VAL_4_3_GL },
         { "uncorrected", OPTION_VAL_UNCORRECTED_GL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_GL,
      NULL,
      /*  Is 'authorize' supposed to mean 'allow'? */
      PCE_SCALING_INFO_0_GL,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_GL },
         { "lores", OPTION_VAL_LORES_GL },
         { "hires", OPTION_VAL_HIRES_GL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_GL,
      NULL,
      PCE_HIRES_BLEND_INFO_0_GL,
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
      PCE_H_OVERSCAN_LABEL_GL,
      NULL,
      PCE_H_OVERSCAN_INFO_0_GL,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_GL },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_GL,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_GL,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_GL },
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
      PCE_LAST_SCANLINE_LABEL_GL,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_GL,
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
         { "242", OPTION_VAL_242_GL },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_GL,
      NULL,
      PCE_PSGREVISION_INFO_0_GL,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_GL },
         { "HuC6280A", OPTION_VAL_HUC6280A_GL },
         { "auto", OPTION_VAL_AUTO_GL },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_GL,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_GL,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_GL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_GL,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_GL,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_GL },
         { "0.250", OPTION_VAL_0_250_GL },
         { "0.375", OPTION_VAL_0_375_GL },
         { "0.500", OPTION_VAL_0_500_GL },
         { "0.625", OPTION_VAL_0_625_GL },
         { "0.750", OPTION_VAL_0_750_GL },
         { "0.875", OPTION_VAL_0_875_GL },
         { "1.000", OPTION_VAL_1_000_GL },
         { "1.125", OPTION_VAL_1_125_GL },
         { "1.25", OPTION_VAL_1_25_GL },
         { "1.50", OPTION_VAL_1_50_GL },
         { "1.75", OPTION_VAL_1_75_GL },
         { "2.00", OPTION_VAL_2_00_GL },
         { "2.25", OPTION_VAL_2_25_GL },
         { "2.50", OPTION_VAL_2_50_GL },
         { "2.75", OPTION_VAL_2_75_GL },
         { "3.00", OPTION_VAL_3_00_GL },
         { "3.25", OPTION_VAL_3_25_GL },
         { "3.50", OPTION_VAL_3_50_GL },
         { "3.75", OPTION_VAL_3_75_GL },
         { "4.00", OPTION_VAL_4_00_GL },
         { "4.25", OPTION_VAL_4_25_GL },
         { "4.50", OPTION_VAL_4_50_GL },
         { "4.75", OPTION_VAL_4_75_GL },
         { "5.00", OPTION_VAL_5_00_GL },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_GL,
      NULL,
      PCE_MULTITAP_INFO_0_GL,
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
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_GL,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_GL,
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
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_GL,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_GL,
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
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_GL,
      NULL,
      PCE_TURBO_DELAY_INFO_0_GL,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_GL },
         { "Medium", OPTION_VAL_MEDIUM_GL },
         { "Slow", OPTION_VAL_SLOW_GL },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_GL,
      NULL,
      /*  requires more explanation */
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_GL },
         { "always", OPTION_VAL_ALWAYS_GL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_GL,
      NULL,
      /*  requires more explanation */
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
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_GL,
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
      PCE_P0_TURBO_II_ENABLE_LABEL_GL,
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
      PCE_P1_TURBO_I_ENABLE_LABEL_GL,
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
      PCE_P1_TURBO_II_ENABLE_LABEL_GL,
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
      PCE_P2_TURBO_I_ENABLE_LABEL_GL,
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
      PCE_P2_TURBO_II_ENABLE_LABEL_GL,
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
      PCE_P3_TURBO_I_ENABLE_LABEL_GL,
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
      PCE_P3_TURBO_II_ENABLE_LABEL_GL,
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
      PCE_P4_TURBO_I_ENABLE_LABEL_GL,
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
      PCE_P4_TURBO_II_ENABLE_LABEL_GL,
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
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_GL,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_GL,
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
      PCE_CDIMAGECACHE_LABEL_GL,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_GL,
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
      PCE_CDBIOS_LABEL_GL,
      NULL,
      PCE_CDBIOS_INFO_0_GL,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_GL },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_GL },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_GL },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_GL },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_GL },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_GL },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_GL,
      NULL,
      PCE_ARCADECARD_INFO_0_GL,
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
      PCE_CDSPEED_LABEL_GL,
      PCE_CDSPEED_LABEL_CAT_GL,
      PCE_CDSPEED_INFO_0_GL,
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
      PCE_ADPCMEXTRAPREC_LABEL_GL,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_GL,
      PCE_ADPCMEXTRAPREC_INFO_0_GL,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_GL },
         { "12-bit", OPTION_VAL_12_BIT_GL },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_GL,
      PCE_CDDAVOLUME_LABEL_CAT_GL,
      PCE_CDDAVOLUME_INFO_0_GL,
      PCE_CDDAVOLUME_INFO_1_GL,
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
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_GL,
      PCE_ADPCMVOLUME_LABEL_CAT_GL,
      PCE_CDDAVOLUME_INFO_0_GL,
      PCE_CDDAVOLUME_INFO_1_GL,
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
      PCE_CDPSGVOLUME_LABEL_GL,
      PCE_CDPSGVOLUME_LABEL_CAT_GL,
      PCE_CDDAVOLUME_INFO_0_GL,
      PCE_CDDAVOLUME_INFO_1_GL,
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
      PCE_NOSPRITELIMIT_LABEL_GL,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_GL,
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
      PCE_OCMULTIPLIER_LABEL_GL,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_GL,
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
struct retro_core_options_v2 options_gl = {
   option_cats_gl,
   option_defs_gl
};

/* RETRO_LANGUAGE_HE */

#define CATEGORY_VIDEO_LABEL_HE NULL
#define CATEGORY_VIDEO_INFO_0_HE NULL
#define CATEGORY_AUDIO_LABEL_HE NULL
#define CATEGORY_AUDIO_INFO_0_HE NULL
#define CATEGORY_INPUT_LABEL_HE NULL
#define CATEGORY_INPUT_INFO_0_HE NULL
#define CATEGORY_HACKS_LABEL_HE NULL
#define CATEGORY_HACKS_INFO_0_HE NULL
#define CATEGORY_CD_LABEL_HE NULL
#define CATEGORY_CD_INFO_0_HE NULL
#define PCE_PALETTE_LABEL_HE NULL
#define PCE_PALETTE_INFO_0_HE NULL
#define OPTION_VAL_RGB_HE NULL
#define OPTION_VAL_COMPOSITE_HE NULL
#define PCE_ASPECT_RATIO_LABEL_HE NULL
#define PCE_ASPECT_RATIO_INFO_0_HE NULL
#define OPTION_VAL_AUTO_HE NULL
#define OPTION_VAL_6_5_HE NULL
#define OPTION_VAL_4_3_HE NULL
#define OPTION_VAL_UNCORRECTED_HE NULL
#define PCE_SCALING_LABEL_HE NULL
#define PCE_SCALING_INFO_0_HE NULL
#define OPTION_VAL_LORES_HE NULL
#define OPTION_VAL_HIRES_HE NULL
#define PCE_HIRES_BLEND_LABEL_HE NULL
#define PCE_HIRES_BLEND_INFO_0_HE NULL
#define PCE_H_OVERSCAN_LABEL_HE NULL
#define PCE_H_OVERSCAN_INFO_0_HE NULL
#define PCE_INITIAL_SCANLINE_LABEL_HE NULL
#define PCE_INITIAL_SCANLINE_INFO_0_HE NULL
#define OPTION_VAL_3_HE NULL
#define PCE_LAST_SCANLINE_LABEL_HE NULL
#define PCE_LAST_SCANLINE_INFO_0_HE NULL
#define OPTION_VAL_242_HE NULL
#define PCE_PSGREVISION_LABEL_HE NULL
#define PCE_PSGREVISION_INFO_0_HE NULL
#define OPTION_VAL_HUC6280_HE NULL
#define OPTION_VAL_HUC6280A_HE NULL
#define PCE_RESAMP_QUALITY_LABEL_HE NULL
#define PCE_RESAMP_QUALITY_INFO_0_HE NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_HE NULL
#define PCE_MOUSE_SENSITIVITY_INFO_0_HE NULL
#define OPTION_VAL_0_125_HE NULL
#define OPTION_VAL_0_250_HE NULL
#define OPTION_VAL_0_375_HE NULL
#define OPTION_VAL_0_500_HE NULL
#define OPTION_VAL_0_625_HE NULL
#define OPTION_VAL_0_750_HE NULL
#define OPTION_VAL_0_875_HE NULL
#define OPTION_VAL_1_000_HE NULL
#define OPTION_VAL_1_125_HE NULL
#define OPTION_VAL_1_25_HE NULL
#define OPTION_VAL_1_50_HE NULL
#define OPTION_VAL_1_75_HE NULL
#define OPTION_VAL_2_00_HE NULL
#define OPTION_VAL_2_25_HE NULL
#define OPTION_VAL_2_50_HE NULL
#define OPTION_VAL_2_75_HE NULL
#define OPTION_VAL_3_00_HE NULL
#define OPTION_VAL_3_25_HE NULL
#define OPTION_VAL_3_50_HE NULL
#define OPTION_VAL_3_75_HE NULL
#define OPTION_VAL_4_00_HE NULL
#define OPTION_VAL_4_25_HE NULL
#define OPTION_VAL_4_50_HE NULL
#define OPTION_VAL_4_75_HE NULL
#define OPTION_VAL_5_00_HE NULL
#define PCE_MULTITAP_LABEL_HE NULL
#define PCE_MULTITAP_INFO_0_HE NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_HE NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_HE NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_HE NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_HE NULL
#define PCE_TURBO_DELAY_LABEL_HE NULL
#define PCE_TURBO_DELAY_INFO_0_HE NULL
#define OPTION_VAL_FAST_HE NULL
#define OPTION_VAL_MEDIUM_HE NULL
#define OPTION_VAL_SLOW_HE NULL
#define PCE_TURBO_TOGGLING_LABEL_HE NULL
#define OPTION_VAL_TOGGLE_HE NULL
#define OPTION_VAL_ALWAYS_HE NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_HE NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_HE NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_HE NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_HE NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_HE NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_HE NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_HE NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_HE NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_HE NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_HE NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_HE NULL
#define PCE_DISABLE_SOFTRESET_LABEL_HE NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_HE NULL
#define PCE_CDIMAGECACHE_LABEL_HE NULL
#define PCE_CDIMAGECACHE_INFO_0_HE NULL
#define PCE_CDBIOS_LABEL_HE NULL
#define PCE_CDBIOS_INFO_0_HE NULL
#define OPTION_VAL_GAMES_EXPRESS_HE NULL
#define OPTION_VAL_SYSTEM_CARD_1_HE NULL
#define OPTION_VAL_SYSTEM_CARD_2_HE NULL
#define OPTION_VAL_SYSTEM_CARD_3_HE NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_HE NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_HE NULL
#define PCE_ARCADECARD_LABEL_HE NULL
#define PCE_ARCADECARD_INFO_0_HE NULL
#define PCE_CDSPEED_LABEL_HE NULL
#define PCE_CDSPEED_LABEL_CAT_HE NULL
#define PCE_CDSPEED_INFO_0_HE NULL
#define PCE_ADPCMEXTRAPREC_LABEL_HE NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_HE NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_HE NULL
#define OPTION_VAL_10_BIT_HE NULL
#define OPTION_VAL_12_BIT_HE NULL
#define PCE_CDDAVOLUME_LABEL_HE NULL
#define PCE_CDDAVOLUME_LABEL_CAT_HE NULL
#define PCE_CDDAVOLUME_INFO_0_HE NULL
#define PCE_CDDAVOLUME_INFO_1_HE NULL
#define PCE_ADPCMVOLUME_LABEL_HE NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_HE NULL
#define PCE_CDPSGVOLUME_LABEL_HE NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_HE NULL
#define PCE_NOSPRITELIMIT_LABEL_HE NULL
#define PCE_NOSPRITELIMIT_INFO_0_HE NULL
#define PCE_OCMULTIPLIER_LABEL_HE NULL
#define PCE_OCMULTIPLIER_INFO_0_HE NULL

struct retro_core_option_v2_category option_cats_he[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_HE,
      CATEGORY_VIDEO_INFO_0_HE
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_HE,
      CATEGORY_AUDIO_INFO_0_HE
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_HE,
      CATEGORY_INPUT_INFO_0_HE
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_HE,
      CATEGORY_HACKS_INFO_0_HE
   },
   {
      "cd",
      CATEGORY_CD_LABEL_HE,
      CATEGORY_CD_INFO_0_HE
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_he[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_HE,
      NULL,
      PCE_PALETTE_INFO_0_HE,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_HE },
         { "Composite", OPTION_VAL_COMPOSITE_HE },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_HE,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_HE,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_HE },
         { "6:5", OPTION_VAL_6_5_HE },
         { "4:3", OPTION_VAL_4_3_HE },
         { "uncorrected", OPTION_VAL_UNCORRECTED_HE },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_HE,
      NULL,
      /*  Is 'authorize' supposed to mean 'allow'? */
      PCE_SCALING_INFO_0_HE,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_HE },
         { "lores", OPTION_VAL_LORES_HE },
         { "hires", OPTION_VAL_HIRES_HE },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_HE,
      NULL,
      PCE_HIRES_BLEND_INFO_0_HE,
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
      PCE_H_OVERSCAN_LABEL_HE,
      NULL,
      PCE_H_OVERSCAN_INFO_0_HE,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_HE },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_HE,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_HE,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_HE },
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
      PCE_LAST_SCANLINE_LABEL_HE,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_HE,
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
         { "242", OPTION_VAL_242_HE },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_HE,
      NULL,
      PCE_PSGREVISION_INFO_0_HE,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_HE },
         { "HuC6280A", OPTION_VAL_HUC6280A_HE },
         { "auto", OPTION_VAL_AUTO_HE },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_HE,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_HE,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_HE },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_HE,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_HE,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_HE },
         { "0.250", OPTION_VAL_0_250_HE },
         { "0.375", OPTION_VAL_0_375_HE },
         { "0.500", OPTION_VAL_0_500_HE },
         { "0.625", OPTION_VAL_0_625_HE },
         { "0.750", OPTION_VAL_0_750_HE },
         { "0.875", OPTION_VAL_0_875_HE },
         { "1.000", OPTION_VAL_1_000_HE },
         { "1.125", OPTION_VAL_1_125_HE },
         { "1.25", OPTION_VAL_1_25_HE },
         { "1.50", OPTION_VAL_1_50_HE },
         { "1.75", OPTION_VAL_1_75_HE },
         { "2.00", OPTION_VAL_2_00_HE },
         { "2.25", OPTION_VAL_2_25_HE },
         { "2.50", OPTION_VAL_2_50_HE },
         { "2.75", OPTION_VAL_2_75_HE },
         { "3.00", OPTION_VAL_3_00_HE },
         { "3.25", OPTION_VAL_3_25_HE },
         { "3.50", OPTION_VAL_3_50_HE },
         { "3.75", OPTION_VAL_3_75_HE },
         { "4.00", OPTION_VAL_4_00_HE },
         { "4.25", OPTION_VAL_4_25_HE },
         { "4.50", OPTION_VAL_4_50_HE },
         { "4.75", OPTION_VAL_4_75_HE },
         { "5.00", OPTION_VAL_5_00_HE },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_HE,
      NULL,
      PCE_MULTITAP_INFO_0_HE,
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
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_HE,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_HE,
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
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_HE,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_HE,
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
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_HE,
      NULL,
      PCE_TURBO_DELAY_INFO_0_HE,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_HE },
         { "Medium", OPTION_VAL_MEDIUM_HE },
         { "Slow", OPTION_VAL_SLOW_HE },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_HE,
      NULL,
      /*  requires more explanation */
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_HE },
         { "always", OPTION_VAL_ALWAYS_HE },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_HE,
      NULL,
      /*  requires more explanation */
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
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_HE,
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
      PCE_P0_TURBO_II_ENABLE_LABEL_HE,
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
      PCE_P1_TURBO_I_ENABLE_LABEL_HE,
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
      PCE_P1_TURBO_II_ENABLE_LABEL_HE,
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
      PCE_P2_TURBO_I_ENABLE_LABEL_HE,
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
      PCE_P2_TURBO_II_ENABLE_LABEL_HE,
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
      PCE_P3_TURBO_I_ENABLE_LABEL_HE,
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
      PCE_P3_TURBO_II_ENABLE_LABEL_HE,
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
      PCE_P4_TURBO_I_ENABLE_LABEL_HE,
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
      PCE_P4_TURBO_II_ENABLE_LABEL_HE,
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
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_HE,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_HE,
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
      PCE_CDIMAGECACHE_LABEL_HE,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_HE,
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
      PCE_CDBIOS_LABEL_HE,
      NULL,
      PCE_CDBIOS_INFO_0_HE,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_HE },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_HE },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_HE },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_HE },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_HE },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_HE },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_HE,
      NULL,
      PCE_ARCADECARD_INFO_0_HE,
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
      PCE_CDSPEED_LABEL_HE,
      PCE_CDSPEED_LABEL_CAT_HE,
      PCE_CDSPEED_INFO_0_HE,
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
      PCE_ADPCMEXTRAPREC_LABEL_HE,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_HE,
      PCE_ADPCMEXTRAPREC_INFO_0_HE,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_HE },
         { "12-bit", OPTION_VAL_12_BIT_HE },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_HE,
      PCE_CDDAVOLUME_LABEL_CAT_HE,
      PCE_CDDAVOLUME_INFO_0_HE,
      PCE_CDDAVOLUME_INFO_1_HE,
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
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_HE,
      PCE_ADPCMVOLUME_LABEL_CAT_HE,
      PCE_CDDAVOLUME_INFO_0_HE,
      PCE_CDDAVOLUME_INFO_1_HE,
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
      PCE_CDPSGVOLUME_LABEL_HE,
      PCE_CDPSGVOLUME_LABEL_CAT_HE,
      PCE_CDDAVOLUME_INFO_0_HE,
      PCE_CDDAVOLUME_INFO_1_HE,
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
      PCE_NOSPRITELIMIT_LABEL_HE,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_HE,
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
      PCE_OCMULTIPLIER_LABEL_HE,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_HE,
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
struct retro_core_options_v2 options_he = {
   option_cats_he,
   option_defs_he
};

/* RETRO_LANGUAGE_HU */

#define CATEGORY_VIDEO_LABEL_HU NULL
#define CATEGORY_VIDEO_INFO_0_HU NULL
#define CATEGORY_AUDIO_LABEL_HU NULL
#define CATEGORY_AUDIO_INFO_0_HU NULL
#define CATEGORY_INPUT_LABEL_HU NULL
#define CATEGORY_INPUT_INFO_0_HU NULL
#define CATEGORY_HACKS_LABEL_HU NULL
#define CATEGORY_HACKS_INFO_0_HU NULL
#define CATEGORY_CD_LABEL_HU NULL
#define CATEGORY_CD_INFO_0_HU NULL
#define PCE_PALETTE_LABEL_HU NULL
#define PCE_PALETTE_INFO_0_HU NULL
#define OPTION_VAL_RGB_HU NULL
#define OPTION_VAL_COMPOSITE_HU NULL
#define PCE_ASPECT_RATIO_LABEL_HU NULL
#define PCE_ASPECT_RATIO_INFO_0_HU NULL
#define OPTION_VAL_AUTO_HU NULL
#define OPTION_VAL_6_5_HU NULL
#define OPTION_VAL_4_3_HU NULL
#define OPTION_VAL_UNCORRECTED_HU NULL
#define PCE_SCALING_LABEL_HU NULL
#define PCE_SCALING_INFO_0_HU NULL
#define OPTION_VAL_LORES_HU NULL
#define OPTION_VAL_HIRES_HU NULL
#define PCE_HIRES_BLEND_LABEL_HU NULL
#define PCE_HIRES_BLEND_INFO_0_HU NULL
#define PCE_H_OVERSCAN_LABEL_HU NULL
#define PCE_H_OVERSCAN_INFO_0_HU NULL
#define PCE_INITIAL_SCANLINE_LABEL_HU NULL
#define PCE_INITIAL_SCANLINE_INFO_0_HU NULL
#define OPTION_VAL_3_HU NULL
#define PCE_LAST_SCANLINE_LABEL_HU NULL
#define PCE_LAST_SCANLINE_INFO_0_HU NULL
#define OPTION_VAL_242_HU NULL
#define PCE_PSGREVISION_LABEL_HU NULL
#define PCE_PSGREVISION_INFO_0_HU NULL
#define OPTION_VAL_HUC6280_HU NULL
#define OPTION_VAL_HUC6280A_HU NULL
#define PCE_RESAMP_QUALITY_LABEL_HU NULL
#define PCE_RESAMP_QUALITY_INFO_0_HU NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_HU NULL
#define PCE_MOUSE_SENSITIVITY_INFO_0_HU NULL
#define OPTION_VAL_0_125_HU NULL
#define OPTION_VAL_0_250_HU NULL
#define OPTION_VAL_0_375_HU NULL
#define OPTION_VAL_0_500_HU NULL
#define OPTION_VAL_0_625_HU NULL
#define OPTION_VAL_0_750_HU NULL
#define OPTION_VAL_0_875_HU NULL
#define OPTION_VAL_1_000_HU NULL
#define OPTION_VAL_1_125_HU NULL
#define OPTION_VAL_1_25_HU NULL
#define OPTION_VAL_1_50_HU NULL
#define OPTION_VAL_1_75_HU NULL
#define OPTION_VAL_2_00_HU NULL
#define OPTION_VAL_2_25_HU NULL
#define OPTION_VAL_2_50_HU NULL
#define OPTION_VAL_2_75_HU NULL
#define OPTION_VAL_3_00_HU NULL
#define OPTION_VAL_3_25_HU NULL
#define OPTION_VAL_3_50_HU NULL
#define OPTION_VAL_3_75_HU NULL
#define OPTION_VAL_4_00_HU NULL
#define OPTION_VAL_4_25_HU NULL
#define OPTION_VAL_4_50_HU NULL
#define OPTION_VAL_4_75_HU NULL
#define OPTION_VAL_5_00_HU NULL
#define PCE_MULTITAP_LABEL_HU NULL
#define PCE_MULTITAP_INFO_0_HU NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_HU NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_HU NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_HU NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_HU NULL
#define PCE_TURBO_DELAY_LABEL_HU NULL
#define PCE_TURBO_DELAY_INFO_0_HU NULL
#define OPTION_VAL_FAST_HU NULL
#define OPTION_VAL_MEDIUM_HU NULL
#define OPTION_VAL_SLOW_HU NULL
#define PCE_TURBO_TOGGLING_LABEL_HU NULL
#define OPTION_VAL_TOGGLE_HU NULL
#define OPTION_VAL_ALWAYS_HU NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_HU NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_HU NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_HU NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_HU NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_HU NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_HU NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_HU NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_HU NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_HU NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_HU NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_HU NULL
#define PCE_DISABLE_SOFTRESET_LABEL_HU NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_HU NULL
#define PCE_CDIMAGECACHE_LABEL_HU NULL
#define PCE_CDIMAGECACHE_INFO_0_HU NULL
#define PCE_CDBIOS_LABEL_HU NULL
#define PCE_CDBIOS_INFO_0_HU NULL
#define OPTION_VAL_GAMES_EXPRESS_HU NULL
#define OPTION_VAL_SYSTEM_CARD_1_HU NULL
#define OPTION_VAL_SYSTEM_CARD_2_HU NULL
#define OPTION_VAL_SYSTEM_CARD_3_HU NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_HU NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_HU NULL
#define PCE_ARCADECARD_LABEL_HU NULL
#define PCE_ARCADECARD_INFO_0_HU NULL
#define PCE_CDSPEED_LABEL_HU NULL
#define PCE_CDSPEED_LABEL_CAT_HU NULL
#define PCE_CDSPEED_INFO_0_HU NULL
#define PCE_ADPCMEXTRAPREC_LABEL_HU NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_HU NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_HU NULL
#define OPTION_VAL_10_BIT_HU NULL
#define OPTION_VAL_12_BIT_HU NULL
#define PCE_CDDAVOLUME_LABEL_HU NULL
#define PCE_CDDAVOLUME_LABEL_CAT_HU NULL
#define PCE_CDDAVOLUME_INFO_0_HU NULL
#define PCE_CDDAVOLUME_INFO_1_HU NULL
#define PCE_ADPCMVOLUME_LABEL_HU NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_HU NULL
#define PCE_CDPSGVOLUME_LABEL_HU NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_HU NULL
#define PCE_NOSPRITELIMIT_LABEL_HU NULL
#define PCE_NOSPRITELIMIT_INFO_0_HU NULL
#define PCE_OCMULTIPLIER_LABEL_HU NULL
#define PCE_OCMULTIPLIER_INFO_0_HU NULL

struct retro_core_option_v2_category option_cats_hu[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_HU,
      CATEGORY_VIDEO_INFO_0_HU
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_HU,
      CATEGORY_AUDIO_INFO_0_HU
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_HU,
      CATEGORY_INPUT_INFO_0_HU
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_HU,
      CATEGORY_HACKS_INFO_0_HU
   },
   {
      "cd",
      CATEGORY_CD_LABEL_HU,
      CATEGORY_CD_INFO_0_HU
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_hu[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_HU,
      NULL,
      PCE_PALETTE_INFO_0_HU,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_HU },
         { "Composite", OPTION_VAL_COMPOSITE_HU },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_HU,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_HU,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_HU },
         { "6:5", OPTION_VAL_6_5_HU },
         { "4:3", OPTION_VAL_4_3_HU },
         { "uncorrected", OPTION_VAL_UNCORRECTED_HU },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_HU,
      NULL,
      /*  Is 'authorize' supposed to mean 'allow'? */
      PCE_SCALING_INFO_0_HU,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_HU },
         { "lores", OPTION_VAL_LORES_HU },
         { "hires", OPTION_VAL_HIRES_HU },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_HU,
      NULL,
      PCE_HIRES_BLEND_INFO_0_HU,
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
      PCE_H_OVERSCAN_LABEL_HU,
      NULL,
      PCE_H_OVERSCAN_INFO_0_HU,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_HU },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_HU,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_HU,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_HU },
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
      PCE_LAST_SCANLINE_LABEL_HU,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_HU,
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
         { "242", OPTION_VAL_242_HU },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_HU,
      NULL,
      PCE_PSGREVISION_INFO_0_HU,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_HU },
         { "HuC6280A", OPTION_VAL_HUC6280A_HU },
         { "auto", OPTION_VAL_AUTO_HU },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_HU,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_HU,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_HU },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_HU,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_HU,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_HU },
         { "0.250", OPTION_VAL_0_250_HU },
         { "0.375", OPTION_VAL_0_375_HU },
         { "0.500", OPTION_VAL_0_500_HU },
         { "0.625", OPTION_VAL_0_625_HU },
         { "0.750", OPTION_VAL_0_750_HU },
         { "0.875", OPTION_VAL_0_875_HU },
         { "1.000", OPTION_VAL_1_000_HU },
         { "1.125", OPTION_VAL_1_125_HU },
         { "1.25", OPTION_VAL_1_25_HU },
         { "1.50", OPTION_VAL_1_50_HU },
         { "1.75", OPTION_VAL_1_75_HU },
         { "2.00", OPTION_VAL_2_00_HU },
         { "2.25", OPTION_VAL_2_25_HU },
         { "2.50", OPTION_VAL_2_50_HU },
         { "2.75", OPTION_VAL_2_75_HU },
         { "3.00", OPTION_VAL_3_00_HU },
         { "3.25", OPTION_VAL_3_25_HU },
         { "3.50", OPTION_VAL_3_50_HU },
         { "3.75", OPTION_VAL_3_75_HU },
         { "4.00", OPTION_VAL_4_00_HU },
         { "4.25", OPTION_VAL_4_25_HU },
         { "4.50", OPTION_VAL_4_50_HU },
         { "4.75", OPTION_VAL_4_75_HU },
         { "5.00", OPTION_VAL_5_00_HU },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_HU,
      NULL,
      PCE_MULTITAP_INFO_0_HU,
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
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_HU,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_HU,
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
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_HU,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_HU,
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
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_HU,
      NULL,
      PCE_TURBO_DELAY_INFO_0_HU,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_HU },
         { "Medium", OPTION_VAL_MEDIUM_HU },
         { "Slow", OPTION_VAL_SLOW_HU },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_HU,
      NULL,
      /*  requires more explanation */
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_HU },
         { "always", OPTION_VAL_ALWAYS_HU },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_HU,
      NULL,
      /*  requires more explanation */
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
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_HU,
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
      PCE_P0_TURBO_II_ENABLE_LABEL_HU,
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
      PCE_P1_TURBO_I_ENABLE_LABEL_HU,
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
      PCE_P1_TURBO_II_ENABLE_LABEL_HU,
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
      PCE_P2_TURBO_I_ENABLE_LABEL_HU,
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
      PCE_P2_TURBO_II_ENABLE_LABEL_HU,
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
      PCE_P3_TURBO_I_ENABLE_LABEL_HU,
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
      PCE_P3_TURBO_II_ENABLE_LABEL_HU,
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
      PCE_P4_TURBO_I_ENABLE_LABEL_HU,
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
      PCE_P4_TURBO_II_ENABLE_LABEL_HU,
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
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_HU,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_HU,
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
      PCE_CDIMAGECACHE_LABEL_HU,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_HU,
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
      PCE_CDBIOS_LABEL_HU,
      NULL,
      PCE_CDBIOS_INFO_0_HU,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_HU },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_HU },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_HU },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_HU },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_HU },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_HU },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_HU,
      NULL,
      PCE_ARCADECARD_INFO_0_HU,
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
      PCE_CDSPEED_LABEL_HU,
      PCE_CDSPEED_LABEL_CAT_HU,
      PCE_CDSPEED_INFO_0_HU,
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
      PCE_ADPCMEXTRAPREC_LABEL_HU,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_HU,
      PCE_ADPCMEXTRAPREC_INFO_0_HU,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_HU },
         { "12-bit", OPTION_VAL_12_BIT_HU },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_HU,
      PCE_CDDAVOLUME_LABEL_CAT_HU,
      PCE_CDDAVOLUME_INFO_0_HU,
      PCE_CDDAVOLUME_INFO_1_HU,
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
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_HU,
      PCE_ADPCMVOLUME_LABEL_CAT_HU,
      PCE_CDDAVOLUME_INFO_0_HU,
      PCE_CDDAVOLUME_INFO_1_HU,
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
      PCE_CDPSGVOLUME_LABEL_HU,
      PCE_CDPSGVOLUME_LABEL_CAT_HU,
      PCE_CDDAVOLUME_INFO_0_HU,
      PCE_CDDAVOLUME_INFO_1_HU,
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
      PCE_NOSPRITELIMIT_LABEL_HU,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_HU,
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
      PCE_OCMULTIPLIER_LABEL_HU,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_HU,
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
struct retro_core_options_v2 options_hu = {
   option_cats_hu,
   option_defs_hu
};

/* RETRO_LANGUAGE_ID */

#define CATEGORY_VIDEO_LABEL_ID NULL
#define CATEGORY_VIDEO_INFO_0_ID NULL
#define CATEGORY_AUDIO_LABEL_ID NULL
#define CATEGORY_AUDIO_INFO_0_ID NULL
#define CATEGORY_INPUT_LABEL_ID NULL
#define CATEGORY_INPUT_INFO_0_ID NULL
#define CATEGORY_HACKS_LABEL_ID NULL
#define CATEGORY_HACKS_INFO_0_ID NULL
#define CATEGORY_CD_LABEL_ID NULL
#define CATEGORY_CD_INFO_0_ID NULL
#define PCE_PALETTE_LABEL_ID NULL
#define PCE_PALETTE_INFO_0_ID NULL
#define OPTION_VAL_RGB_ID NULL
#define OPTION_VAL_COMPOSITE_ID NULL
#define PCE_ASPECT_RATIO_LABEL_ID NULL
#define PCE_ASPECT_RATIO_INFO_0_ID NULL
#define OPTION_VAL_AUTO_ID NULL
#define OPTION_VAL_6_5_ID NULL
#define OPTION_VAL_4_3_ID NULL
#define OPTION_VAL_UNCORRECTED_ID NULL
#define PCE_SCALING_LABEL_ID NULL
#define PCE_SCALING_INFO_0_ID NULL
#define OPTION_VAL_LORES_ID NULL
#define OPTION_VAL_HIRES_ID NULL
#define PCE_HIRES_BLEND_LABEL_ID NULL
#define PCE_HIRES_BLEND_INFO_0_ID NULL
#define PCE_H_OVERSCAN_LABEL_ID NULL
#define PCE_H_OVERSCAN_INFO_0_ID NULL
#define PCE_INITIAL_SCANLINE_LABEL_ID NULL
#define PCE_INITIAL_SCANLINE_INFO_0_ID NULL
#define OPTION_VAL_3_ID NULL
#define PCE_LAST_SCANLINE_LABEL_ID NULL
#define PCE_LAST_SCANLINE_INFO_0_ID NULL
#define OPTION_VAL_242_ID NULL
#define PCE_PSGREVISION_LABEL_ID NULL
#define PCE_PSGREVISION_INFO_0_ID NULL
#define OPTION_VAL_HUC6280_ID NULL
#define OPTION_VAL_HUC6280A_ID NULL
#define PCE_RESAMP_QUALITY_LABEL_ID NULL
#define PCE_RESAMP_QUALITY_INFO_0_ID NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_ID NULL
#define PCE_MOUSE_SENSITIVITY_INFO_0_ID NULL
#define OPTION_VAL_0_125_ID NULL
#define OPTION_VAL_0_250_ID NULL
#define OPTION_VAL_0_375_ID NULL
#define OPTION_VAL_0_500_ID NULL
#define OPTION_VAL_0_625_ID NULL
#define OPTION_VAL_0_750_ID NULL
#define OPTION_VAL_0_875_ID NULL
#define OPTION_VAL_1_000_ID NULL
#define OPTION_VAL_1_125_ID NULL
#define OPTION_VAL_1_25_ID NULL
#define OPTION_VAL_1_50_ID NULL
#define OPTION_VAL_1_75_ID NULL
#define OPTION_VAL_2_00_ID NULL
#define OPTION_VAL_2_25_ID NULL
#define OPTION_VAL_2_50_ID NULL
#define OPTION_VAL_2_75_ID NULL
#define OPTION_VAL_3_00_ID NULL
#define OPTION_VAL_3_25_ID NULL
#define OPTION_VAL_3_50_ID NULL
#define OPTION_VAL_3_75_ID NULL
#define OPTION_VAL_4_00_ID NULL
#define OPTION_VAL_4_25_ID NULL
#define OPTION_VAL_4_50_ID NULL
#define OPTION_VAL_4_75_ID NULL
#define OPTION_VAL_5_00_ID NULL
#define PCE_MULTITAP_LABEL_ID NULL
#define PCE_MULTITAP_INFO_0_ID NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_ID NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_ID NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_ID NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_ID NULL
#define PCE_TURBO_DELAY_LABEL_ID NULL
#define PCE_TURBO_DELAY_INFO_0_ID NULL
#define OPTION_VAL_FAST_ID NULL
#define OPTION_VAL_MEDIUM_ID NULL
#define OPTION_VAL_SLOW_ID NULL
#define PCE_TURBO_TOGGLING_LABEL_ID NULL
#define OPTION_VAL_TOGGLE_ID NULL
#define OPTION_VAL_ALWAYS_ID NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_ID NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_ID NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_ID NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_ID NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_ID NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_ID NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_ID NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_ID NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_ID NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_ID NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_ID NULL
#define PCE_DISABLE_SOFTRESET_LABEL_ID NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_ID NULL
#define PCE_CDIMAGECACHE_LABEL_ID NULL
#define PCE_CDIMAGECACHE_INFO_0_ID NULL
#define PCE_CDBIOS_LABEL_ID NULL
#define PCE_CDBIOS_INFO_0_ID NULL
#define OPTION_VAL_GAMES_EXPRESS_ID NULL
#define OPTION_VAL_SYSTEM_CARD_1_ID NULL
#define OPTION_VAL_SYSTEM_CARD_2_ID NULL
#define OPTION_VAL_SYSTEM_CARD_3_ID NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_ID NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_ID NULL
#define PCE_ARCADECARD_LABEL_ID NULL
#define PCE_ARCADECARD_INFO_0_ID NULL
#define PCE_CDSPEED_LABEL_ID NULL
#define PCE_CDSPEED_LABEL_CAT_ID NULL
#define PCE_CDSPEED_INFO_0_ID NULL
#define PCE_ADPCMEXTRAPREC_LABEL_ID NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_ID NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_ID NULL
#define OPTION_VAL_10_BIT_ID NULL
#define OPTION_VAL_12_BIT_ID NULL
#define PCE_CDDAVOLUME_LABEL_ID NULL
#define PCE_CDDAVOLUME_LABEL_CAT_ID NULL
#define PCE_CDDAVOLUME_INFO_0_ID NULL
#define PCE_CDDAVOLUME_INFO_1_ID NULL
#define PCE_ADPCMVOLUME_LABEL_ID NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_ID NULL
#define PCE_CDPSGVOLUME_LABEL_ID NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_ID NULL
#define PCE_NOSPRITELIMIT_LABEL_ID NULL
#define PCE_NOSPRITELIMIT_INFO_0_ID NULL
#define PCE_OCMULTIPLIER_LABEL_ID NULL
#define PCE_OCMULTIPLIER_INFO_0_ID NULL

struct retro_core_option_v2_category option_cats_id[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_ID,
      CATEGORY_VIDEO_INFO_0_ID
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_ID,
      CATEGORY_AUDIO_INFO_0_ID
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_ID,
      CATEGORY_INPUT_INFO_0_ID
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_ID,
      CATEGORY_HACKS_INFO_0_ID
   },
   {
      "cd",
      CATEGORY_CD_LABEL_ID,
      CATEGORY_CD_INFO_0_ID
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_id[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_ID,
      NULL,
      PCE_PALETTE_INFO_0_ID,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_ID },
         { "Composite", OPTION_VAL_COMPOSITE_ID },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_ID,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_ID,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_ID },
         { "6:5", OPTION_VAL_6_5_ID },
         { "4:3", OPTION_VAL_4_3_ID },
         { "uncorrected", OPTION_VAL_UNCORRECTED_ID },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_ID,
      NULL,
      /*  Is 'authorize' supposed to mean 'allow'? */
      PCE_SCALING_INFO_0_ID,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_ID },
         { "lores", OPTION_VAL_LORES_ID },
         { "hires", OPTION_VAL_HIRES_ID },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_ID,
      NULL,
      PCE_HIRES_BLEND_INFO_0_ID,
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
      PCE_H_OVERSCAN_LABEL_ID,
      NULL,
      PCE_H_OVERSCAN_INFO_0_ID,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_ID },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_ID,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_ID,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_ID },
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
      PCE_LAST_SCANLINE_LABEL_ID,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_ID,
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
         { "242", OPTION_VAL_242_ID },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_ID,
      NULL,
      PCE_PSGREVISION_INFO_0_ID,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_ID },
         { "HuC6280A", OPTION_VAL_HUC6280A_ID },
         { "auto", OPTION_VAL_AUTO_ID },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_ID,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_ID,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_ID },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_ID,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_ID,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_ID },
         { "0.250", OPTION_VAL_0_250_ID },
         { "0.375", OPTION_VAL_0_375_ID },
         { "0.500", OPTION_VAL_0_500_ID },
         { "0.625", OPTION_VAL_0_625_ID },
         { "0.750", OPTION_VAL_0_750_ID },
         { "0.875", OPTION_VAL_0_875_ID },
         { "1.000", OPTION_VAL_1_000_ID },
         { "1.125", OPTION_VAL_1_125_ID },
         { "1.25", OPTION_VAL_1_25_ID },
         { "1.50", OPTION_VAL_1_50_ID },
         { "1.75", OPTION_VAL_1_75_ID },
         { "2.00", OPTION_VAL_2_00_ID },
         { "2.25", OPTION_VAL_2_25_ID },
         { "2.50", OPTION_VAL_2_50_ID },
         { "2.75", OPTION_VAL_2_75_ID },
         { "3.00", OPTION_VAL_3_00_ID },
         { "3.25", OPTION_VAL_3_25_ID },
         { "3.50", OPTION_VAL_3_50_ID },
         { "3.75", OPTION_VAL_3_75_ID },
         { "4.00", OPTION_VAL_4_00_ID },
         { "4.25", OPTION_VAL_4_25_ID },
         { "4.50", OPTION_VAL_4_50_ID },
         { "4.75", OPTION_VAL_4_75_ID },
         { "5.00", OPTION_VAL_5_00_ID },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_ID,
      NULL,
      PCE_MULTITAP_INFO_0_ID,
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
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_ID,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_ID,
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
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_ID,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_ID,
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
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_ID,
      NULL,
      PCE_TURBO_DELAY_INFO_0_ID,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_ID },
         { "Medium", OPTION_VAL_MEDIUM_ID },
         { "Slow", OPTION_VAL_SLOW_ID },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_ID,
      NULL,
      /*  requires more explanation */
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_ID },
         { "always", OPTION_VAL_ALWAYS_ID },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_ID,
      NULL,
      /*  requires more explanation */
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
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_ID,
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
      PCE_P0_TURBO_II_ENABLE_LABEL_ID,
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
      PCE_P1_TURBO_I_ENABLE_LABEL_ID,
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
      PCE_P1_TURBO_II_ENABLE_LABEL_ID,
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
      PCE_P2_TURBO_I_ENABLE_LABEL_ID,
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
      PCE_P2_TURBO_II_ENABLE_LABEL_ID,
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
      PCE_P3_TURBO_I_ENABLE_LABEL_ID,
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
      PCE_P3_TURBO_II_ENABLE_LABEL_ID,
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
      PCE_P4_TURBO_I_ENABLE_LABEL_ID,
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
      PCE_P4_TURBO_II_ENABLE_LABEL_ID,
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
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_ID,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_ID,
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
      PCE_CDIMAGECACHE_LABEL_ID,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_ID,
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
      PCE_CDBIOS_LABEL_ID,
      NULL,
      PCE_CDBIOS_INFO_0_ID,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_ID },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_ID },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_ID },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_ID },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_ID },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_ID },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_ID,
      NULL,
      PCE_ARCADECARD_INFO_0_ID,
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
      PCE_CDSPEED_LABEL_ID,
      PCE_CDSPEED_LABEL_CAT_ID,
      PCE_CDSPEED_INFO_0_ID,
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
      PCE_ADPCMEXTRAPREC_LABEL_ID,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_ID,
      PCE_ADPCMEXTRAPREC_INFO_0_ID,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_ID },
         { "12-bit", OPTION_VAL_12_BIT_ID },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_ID,
      PCE_CDDAVOLUME_LABEL_CAT_ID,
      PCE_CDDAVOLUME_INFO_0_ID,
      PCE_CDDAVOLUME_INFO_1_ID,
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
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_ID,
      PCE_ADPCMVOLUME_LABEL_CAT_ID,
      PCE_CDDAVOLUME_INFO_0_ID,
      PCE_CDDAVOLUME_INFO_1_ID,
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
      PCE_CDPSGVOLUME_LABEL_ID,
      PCE_CDPSGVOLUME_LABEL_CAT_ID,
      PCE_CDDAVOLUME_INFO_0_ID,
      PCE_CDDAVOLUME_INFO_1_ID,
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
      PCE_NOSPRITELIMIT_LABEL_ID,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_ID,
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
      PCE_OCMULTIPLIER_LABEL_ID,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_ID,
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
struct retro_core_options_v2 options_id = {
   option_cats_id,
   option_defs_id
};

/* RETRO_LANGUAGE_IT */

#define CATEGORY_VIDEO_LABEL_IT NULL
#define CATEGORY_VIDEO_INFO_0_IT NULL
#define CATEGORY_AUDIO_LABEL_IT NULL
#define CATEGORY_AUDIO_INFO_0_IT NULL
#define CATEGORY_INPUT_LABEL_IT NULL
#define CATEGORY_INPUT_INFO_0_IT NULL
#define CATEGORY_HACKS_LABEL_IT NULL
#define CATEGORY_HACKS_INFO_0_IT NULL
#define CATEGORY_CD_LABEL_IT NULL
#define CATEGORY_CD_INFO_0_IT NULL
#define PCE_PALETTE_LABEL_IT NULL
#define PCE_PALETTE_INFO_0_IT NULL
#define OPTION_VAL_RGB_IT NULL
#define OPTION_VAL_COMPOSITE_IT NULL
#define PCE_ASPECT_RATIO_LABEL_IT NULL
#define PCE_ASPECT_RATIO_INFO_0_IT NULL
#define OPTION_VAL_AUTO_IT NULL
#define OPTION_VAL_6_5_IT NULL
#define OPTION_VAL_4_3_IT NULL
#define OPTION_VAL_UNCORRECTED_IT NULL
#define PCE_SCALING_LABEL_IT NULL
#define PCE_SCALING_INFO_0_IT NULL
#define OPTION_VAL_LORES_IT NULL
#define OPTION_VAL_HIRES_IT NULL
#define PCE_HIRES_BLEND_LABEL_IT NULL
#define PCE_HIRES_BLEND_INFO_0_IT NULL
#define PCE_H_OVERSCAN_LABEL_IT NULL
#define PCE_H_OVERSCAN_INFO_0_IT NULL
#define PCE_INITIAL_SCANLINE_LABEL_IT NULL
#define PCE_INITIAL_SCANLINE_INFO_0_IT NULL
#define OPTION_VAL_3_IT NULL
#define PCE_LAST_SCANLINE_LABEL_IT NULL
#define PCE_LAST_SCANLINE_INFO_0_IT NULL
#define OPTION_VAL_242_IT NULL
#define PCE_PSGREVISION_LABEL_IT NULL
#define PCE_PSGREVISION_INFO_0_IT NULL
#define OPTION_VAL_HUC6280_IT NULL
#define OPTION_VAL_HUC6280A_IT NULL
#define PCE_RESAMP_QUALITY_LABEL_IT NULL
#define PCE_RESAMP_QUALITY_INFO_0_IT NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_IT NULL
#define PCE_MOUSE_SENSITIVITY_INFO_0_IT NULL
#define OPTION_VAL_0_125_IT NULL
#define OPTION_VAL_0_250_IT NULL
#define OPTION_VAL_0_375_IT NULL
#define OPTION_VAL_0_500_IT NULL
#define OPTION_VAL_0_625_IT NULL
#define OPTION_VAL_0_750_IT NULL
#define OPTION_VAL_0_875_IT NULL
#define OPTION_VAL_1_000_IT NULL
#define OPTION_VAL_1_125_IT NULL
#define OPTION_VAL_1_25_IT NULL
#define OPTION_VAL_1_50_IT NULL
#define OPTION_VAL_1_75_IT NULL
#define OPTION_VAL_2_00_IT NULL
#define OPTION_VAL_2_25_IT NULL
#define OPTION_VAL_2_50_IT NULL
#define OPTION_VAL_2_75_IT NULL
#define OPTION_VAL_3_00_IT NULL
#define OPTION_VAL_3_25_IT NULL
#define OPTION_VAL_3_50_IT NULL
#define OPTION_VAL_3_75_IT NULL
#define OPTION_VAL_4_00_IT NULL
#define OPTION_VAL_4_25_IT NULL
#define OPTION_VAL_4_50_IT NULL
#define OPTION_VAL_4_75_IT NULL
#define OPTION_VAL_5_00_IT NULL
#define PCE_MULTITAP_LABEL_IT NULL
#define PCE_MULTITAP_INFO_0_IT NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_IT NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_IT NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_IT NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_IT NULL
#define PCE_TURBO_DELAY_LABEL_IT NULL
#define PCE_TURBO_DELAY_INFO_0_IT NULL
#define OPTION_VAL_FAST_IT NULL
#define OPTION_VAL_MEDIUM_IT NULL
#define OPTION_VAL_SLOW_IT NULL
#define PCE_TURBO_TOGGLING_LABEL_IT NULL
#define OPTION_VAL_TOGGLE_IT NULL
#define OPTION_VAL_ALWAYS_IT NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_IT NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_IT NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_IT NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_IT NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_IT NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_IT NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_IT NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_IT NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_IT NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_IT NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_IT NULL
#define PCE_DISABLE_SOFTRESET_LABEL_IT NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_IT NULL
#define PCE_CDIMAGECACHE_LABEL_IT NULL
#define PCE_CDIMAGECACHE_INFO_0_IT NULL
#define PCE_CDBIOS_LABEL_IT NULL
#define PCE_CDBIOS_INFO_0_IT NULL
#define OPTION_VAL_GAMES_EXPRESS_IT NULL
#define OPTION_VAL_SYSTEM_CARD_1_IT NULL
#define OPTION_VAL_SYSTEM_CARD_2_IT NULL
#define OPTION_VAL_SYSTEM_CARD_3_IT NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_IT NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_IT NULL
#define PCE_ARCADECARD_LABEL_IT NULL
#define PCE_ARCADECARD_INFO_0_IT NULL
#define PCE_CDSPEED_LABEL_IT NULL
#define PCE_CDSPEED_LABEL_CAT_IT NULL
#define PCE_CDSPEED_INFO_0_IT NULL
#define PCE_ADPCMEXTRAPREC_LABEL_IT NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_IT NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_IT NULL
#define OPTION_VAL_10_BIT_IT NULL
#define OPTION_VAL_12_BIT_IT NULL
#define PCE_CDDAVOLUME_LABEL_IT NULL
#define PCE_CDDAVOLUME_LABEL_CAT_IT NULL
#define PCE_CDDAVOLUME_INFO_0_IT NULL
#define PCE_CDDAVOLUME_INFO_1_IT NULL
#define PCE_ADPCMVOLUME_LABEL_IT NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_IT NULL
#define PCE_CDPSGVOLUME_LABEL_IT NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_IT NULL
#define PCE_NOSPRITELIMIT_LABEL_IT NULL
#define PCE_NOSPRITELIMIT_INFO_0_IT NULL
#define PCE_OCMULTIPLIER_LABEL_IT NULL
#define PCE_OCMULTIPLIER_INFO_0_IT NULL

struct retro_core_option_v2_category option_cats_it[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_IT,
      CATEGORY_VIDEO_INFO_0_IT
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_IT,
      CATEGORY_AUDIO_INFO_0_IT
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_IT,
      CATEGORY_INPUT_INFO_0_IT
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_IT,
      CATEGORY_HACKS_INFO_0_IT
   },
   {
      "cd",
      CATEGORY_CD_LABEL_IT,
      CATEGORY_CD_INFO_0_IT
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_it[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_IT,
      NULL,
      PCE_PALETTE_INFO_0_IT,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_IT },
         { "Composite", OPTION_VAL_COMPOSITE_IT },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_IT,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_IT,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_IT },
         { "6:5", OPTION_VAL_6_5_IT },
         { "4:3", OPTION_VAL_4_3_IT },
         { "uncorrected", OPTION_VAL_UNCORRECTED_IT },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_IT,
      NULL,
      /*  Is 'authorize' supposed to mean 'allow'? */
      PCE_SCALING_INFO_0_IT,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_IT },
         { "lores", OPTION_VAL_LORES_IT },
         { "hires", OPTION_VAL_HIRES_IT },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_IT,
      NULL,
      PCE_HIRES_BLEND_INFO_0_IT,
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
      PCE_H_OVERSCAN_LABEL_IT,
      NULL,
      PCE_H_OVERSCAN_INFO_0_IT,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_IT },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_IT,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_IT,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_IT },
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
      PCE_LAST_SCANLINE_LABEL_IT,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_IT,
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
         { "242", OPTION_VAL_242_IT },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_IT,
      NULL,
      PCE_PSGREVISION_INFO_0_IT,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_IT },
         { "HuC6280A", OPTION_VAL_HUC6280A_IT },
         { "auto", OPTION_VAL_AUTO_IT },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_IT,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_IT,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_IT },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_IT,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_IT,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_IT },
         { "0.250", OPTION_VAL_0_250_IT },
         { "0.375", OPTION_VAL_0_375_IT },
         { "0.500", OPTION_VAL_0_500_IT },
         { "0.625", OPTION_VAL_0_625_IT },
         { "0.750", OPTION_VAL_0_750_IT },
         { "0.875", OPTION_VAL_0_875_IT },
         { "1.000", OPTION_VAL_1_000_IT },
         { "1.125", OPTION_VAL_1_125_IT },
         { "1.25", OPTION_VAL_1_25_IT },
         { "1.50", OPTION_VAL_1_50_IT },
         { "1.75", OPTION_VAL_1_75_IT },
         { "2.00", OPTION_VAL_2_00_IT },
         { "2.25", OPTION_VAL_2_25_IT },
         { "2.50", OPTION_VAL_2_50_IT },
         { "2.75", OPTION_VAL_2_75_IT },
         { "3.00", OPTION_VAL_3_00_IT },
         { "3.25", OPTION_VAL_3_25_IT },
         { "3.50", OPTION_VAL_3_50_IT },
         { "3.75", OPTION_VAL_3_75_IT },
         { "4.00", OPTION_VAL_4_00_IT },
         { "4.25", OPTION_VAL_4_25_IT },
         { "4.50", OPTION_VAL_4_50_IT },
         { "4.75", OPTION_VAL_4_75_IT },
         { "5.00", OPTION_VAL_5_00_IT },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_IT,
      NULL,
      PCE_MULTITAP_INFO_0_IT,
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
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_IT,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_IT,
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
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_IT,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_IT,
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
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_IT,
      NULL,
      PCE_TURBO_DELAY_INFO_0_IT,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_IT },
         { "Medium", OPTION_VAL_MEDIUM_IT },
         { "Slow", OPTION_VAL_SLOW_IT },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_IT,
      NULL,
      /*  requires more explanation */
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_IT },
         { "always", OPTION_VAL_ALWAYS_IT },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_IT,
      NULL,
      /*  requires more explanation */
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
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_IT,
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
      PCE_P0_TURBO_II_ENABLE_LABEL_IT,
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
      PCE_P1_TURBO_I_ENABLE_LABEL_IT,
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
      PCE_P1_TURBO_II_ENABLE_LABEL_IT,
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
      PCE_P2_TURBO_I_ENABLE_LABEL_IT,
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
      PCE_P2_TURBO_II_ENABLE_LABEL_IT,
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
      PCE_P3_TURBO_I_ENABLE_LABEL_IT,
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
      PCE_P3_TURBO_II_ENABLE_LABEL_IT,
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
      PCE_P4_TURBO_I_ENABLE_LABEL_IT,
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
      PCE_P4_TURBO_II_ENABLE_LABEL_IT,
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
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_IT,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_IT,
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
      PCE_CDIMAGECACHE_LABEL_IT,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_IT,
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
      PCE_CDBIOS_LABEL_IT,
      NULL,
      PCE_CDBIOS_INFO_0_IT,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_IT },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_IT },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_IT },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_IT },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_IT },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_IT },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_IT,
      NULL,
      PCE_ARCADECARD_INFO_0_IT,
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
      PCE_CDSPEED_LABEL_IT,
      PCE_CDSPEED_LABEL_CAT_IT,
      PCE_CDSPEED_INFO_0_IT,
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
      PCE_ADPCMEXTRAPREC_LABEL_IT,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_IT,
      PCE_ADPCMEXTRAPREC_INFO_0_IT,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_IT },
         { "12-bit", OPTION_VAL_12_BIT_IT },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_IT,
      PCE_CDDAVOLUME_LABEL_CAT_IT,
      PCE_CDDAVOLUME_INFO_0_IT,
      PCE_CDDAVOLUME_INFO_1_IT,
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
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_IT,
      PCE_ADPCMVOLUME_LABEL_CAT_IT,
      PCE_CDDAVOLUME_INFO_0_IT,
      PCE_CDDAVOLUME_INFO_1_IT,
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
      PCE_CDPSGVOLUME_LABEL_IT,
      PCE_CDPSGVOLUME_LABEL_CAT_IT,
      PCE_CDDAVOLUME_INFO_0_IT,
      PCE_CDDAVOLUME_INFO_1_IT,
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
      PCE_NOSPRITELIMIT_LABEL_IT,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_IT,
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
      PCE_OCMULTIPLIER_LABEL_IT,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_IT,
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
struct retro_core_options_v2 options_it = {
   option_cats_it,
   option_defs_it
};

/* RETRO_LANGUAGE_JA */

#define CATEGORY_VIDEO_LABEL_JA NULL
#define CATEGORY_VIDEO_INFO_0_JA NULL
#define CATEGORY_AUDIO_LABEL_JA NULL
#define CATEGORY_AUDIO_INFO_0_JA NULL
#define CATEGORY_INPUT_LABEL_JA NULL
#define CATEGORY_INPUT_INFO_0_JA NULL
#define CATEGORY_HACKS_LABEL_JA NULL
#define CATEGORY_HACKS_INFO_0_JA NULL
#define CATEGORY_CD_LABEL_JA NULL
#define CATEGORY_CD_INFO_0_JA NULL
#define PCE_PALETTE_LABEL_JA NULL
#define PCE_PALETTE_INFO_0_JA NULL
#define OPTION_VAL_RGB_JA NULL
#define OPTION_VAL_COMPOSITE_JA NULL
#define PCE_ASPECT_RATIO_LABEL_JA NULL
#define PCE_ASPECT_RATIO_INFO_0_JA NULL
#define OPTION_VAL_AUTO_JA NULL
#define OPTION_VAL_6_5_JA NULL
#define OPTION_VAL_4_3_JA NULL
#define OPTION_VAL_UNCORRECTED_JA NULL
#define PCE_SCALING_LABEL_JA NULL
#define PCE_SCALING_INFO_0_JA NULL
#define OPTION_VAL_LORES_JA NULL
#define OPTION_VAL_HIRES_JA NULL
#define PCE_HIRES_BLEND_LABEL_JA NULL
#define PCE_HIRES_BLEND_INFO_0_JA NULL
#define PCE_H_OVERSCAN_LABEL_JA NULL
#define PCE_H_OVERSCAN_INFO_0_JA NULL
#define PCE_INITIAL_SCANLINE_LABEL_JA NULL
#define PCE_INITIAL_SCANLINE_INFO_0_JA NULL
#define OPTION_VAL_3_JA NULL
#define PCE_LAST_SCANLINE_LABEL_JA NULL
#define PCE_LAST_SCANLINE_INFO_0_JA NULL
#define OPTION_VAL_242_JA NULL
#define PCE_PSGREVISION_LABEL_JA NULL
#define PCE_PSGREVISION_INFO_0_JA NULL
#define OPTION_VAL_HUC6280_JA NULL
#define OPTION_VAL_HUC6280A_JA NULL
#define PCE_RESAMP_QUALITY_LABEL_JA NULL
#define PCE_RESAMP_QUALITY_INFO_0_JA NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_JA NULL
#define PCE_MOUSE_SENSITIVITY_INFO_0_JA NULL
#define OPTION_VAL_0_125_JA NULL
#define OPTION_VAL_0_250_JA NULL
#define OPTION_VAL_0_375_JA NULL
#define OPTION_VAL_0_500_JA NULL
#define OPTION_VAL_0_625_JA NULL
#define OPTION_VAL_0_750_JA NULL
#define OPTION_VAL_0_875_JA NULL
#define OPTION_VAL_1_000_JA NULL
#define OPTION_VAL_1_125_JA NULL
#define OPTION_VAL_1_25_JA NULL
#define OPTION_VAL_1_50_JA NULL
#define OPTION_VAL_1_75_JA NULL
#define OPTION_VAL_2_00_JA NULL
#define OPTION_VAL_2_25_JA NULL
#define OPTION_VAL_2_50_JA NULL
#define OPTION_VAL_2_75_JA NULL
#define OPTION_VAL_3_00_JA NULL
#define OPTION_VAL_3_25_JA NULL
#define OPTION_VAL_3_50_JA NULL
#define OPTION_VAL_3_75_JA NULL
#define OPTION_VAL_4_00_JA NULL
#define OPTION_VAL_4_25_JA NULL
#define OPTION_VAL_4_50_JA NULL
#define OPTION_VAL_4_75_JA NULL
#define OPTION_VAL_5_00_JA NULL
#define PCE_MULTITAP_LABEL_JA NULL
#define PCE_MULTITAP_INFO_0_JA NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_JA NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_JA NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_JA NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_JA NULL
#define PCE_TURBO_DELAY_LABEL_JA NULL
#define PCE_TURBO_DELAY_INFO_0_JA NULL
#define OPTION_VAL_FAST_JA NULL
#define OPTION_VAL_MEDIUM_JA NULL
#define OPTION_VAL_SLOW_JA NULL
#define PCE_TURBO_TOGGLING_LABEL_JA NULL
#define OPTION_VAL_TOGGLE_JA NULL
#define OPTION_VAL_ALWAYS_JA NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_JA NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_JA NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_JA NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_JA NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_JA NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_JA NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_JA NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_JA NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_JA NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_JA NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_JA NULL
#define PCE_DISABLE_SOFTRESET_LABEL_JA NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_JA NULL
#define PCE_CDIMAGECACHE_LABEL_JA NULL
#define PCE_CDIMAGECACHE_INFO_0_JA NULL
#define PCE_CDBIOS_LABEL_JA NULL
#define PCE_CDBIOS_INFO_0_JA NULL
#define OPTION_VAL_GAMES_EXPRESS_JA NULL
#define OPTION_VAL_SYSTEM_CARD_1_JA NULL
#define OPTION_VAL_SYSTEM_CARD_2_JA NULL
#define OPTION_VAL_SYSTEM_CARD_3_JA NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_JA NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_JA NULL
#define PCE_ARCADECARD_LABEL_JA NULL
#define PCE_ARCADECARD_INFO_0_JA NULL
#define PCE_CDSPEED_LABEL_JA NULL
#define PCE_CDSPEED_LABEL_CAT_JA NULL
#define PCE_CDSPEED_INFO_0_JA NULL
#define PCE_ADPCMEXTRAPREC_LABEL_JA NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_JA NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_JA NULL
#define OPTION_VAL_10_BIT_JA NULL
#define OPTION_VAL_12_BIT_JA NULL
#define PCE_CDDAVOLUME_LABEL_JA NULL
#define PCE_CDDAVOLUME_LABEL_CAT_JA NULL
#define PCE_CDDAVOLUME_INFO_0_JA NULL
#define PCE_CDDAVOLUME_INFO_1_JA NULL
#define PCE_ADPCMVOLUME_LABEL_JA NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_JA NULL
#define PCE_CDPSGVOLUME_LABEL_JA NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_JA NULL
#define PCE_NOSPRITELIMIT_LABEL_JA NULL
#define PCE_NOSPRITELIMIT_INFO_0_JA NULL
#define PCE_OCMULTIPLIER_LABEL_JA NULL
#define PCE_OCMULTIPLIER_INFO_0_JA NULL

struct retro_core_option_v2_category option_cats_ja[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_JA,
      CATEGORY_VIDEO_INFO_0_JA
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_JA,
      CATEGORY_AUDIO_INFO_0_JA
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_JA,
      CATEGORY_INPUT_INFO_0_JA
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_JA,
      CATEGORY_HACKS_INFO_0_JA
   },
   {
      "cd",
      CATEGORY_CD_LABEL_JA,
      CATEGORY_CD_INFO_0_JA
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ja[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_JA,
      NULL,
      PCE_PALETTE_INFO_0_JA,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_JA },
         { "Composite", OPTION_VAL_COMPOSITE_JA },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_JA,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_JA,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_JA },
         { "6:5", OPTION_VAL_6_5_JA },
         { "4:3", OPTION_VAL_4_3_JA },
         { "uncorrected", OPTION_VAL_UNCORRECTED_JA },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_JA,
      NULL,
      /*  Is 'authorize' supposed to mean 'allow'? */
      PCE_SCALING_INFO_0_JA,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_JA },
         { "lores", OPTION_VAL_LORES_JA },
         { "hires", OPTION_VAL_HIRES_JA },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_JA,
      NULL,
      PCE_HIRES_BLEND_INFO_0_JA,
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
      PCE_H_OVERSCAN_LABEL_JA,
      NULL,
      PCE_H_OVERSCAN_INFO_0_JA,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_JA },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_JA,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_JA,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_JA },
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
      PCE_LAST_SCANLINE_LABEL_JA,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_JA,
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
         { "242", OPTION_VAL_242_JA },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_JA,
      NULL,
      PCE_PSGREVISION_INFO_0_JA,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_JA },
         { "HuC6280A", OPTION_VAL_HUC6280A_JA },
         { "auto", OPTION_VAL_AUTO_JA },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_JA,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_JA,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_JA },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_JA,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_JA,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_JA },
         { "0.250", OPTION_VAL_0_250_JA },
         { "0.375", OPTION_VAL_0_375_JA },
         { "0.500", OPTION_VAL_0_500_JA },
         { "0.625", OPTION_VAL_0_625_JA },
         { "0.750", OPTION_VAL_0_750_JA },
         { "0.875", OPTION_VAL_0_875_JA },
         { "1.000", OPTION_VAL_1_000_JA },
         { "1.125", OPTION_VAL_1_125_JA },
         { "1.25", OPTION_VAL_1_25_JA },
         { "1.50", OPTION_VAL_1_50_JA },
         { "1.75", OPTION_VAL_1_75_JA },
         { "2.00", OPTION_VAL_2_00_JA },
         { "2.25", OPTION_VAL_2_25_JA },
         { "2.50", OPTION_VAL_2_50_JA },
         { "2.75", OPTION_VAL_2_75_JA },
         { "3.00", OPTION_VAL_3_00_JA },
         { "3.25", OPTION_VAL_3_25_JA },
         { "3.50", OPTION_VAL_3_50_JA },
         { "3.75", OPTION_VAL_3_75_JA },
         { "4.00", OPTION_VAL_4_00_JA },
         { "4.25", OPTION_VAL_4_25_JA },
         { "4.50", OPTION_VAL_4_50_JA },
         { "4.75", OPTION_VAL_4_75_JA },
         { "5.00", OPTION_VAL_5_00_JA },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_JA,
      NULL,
      PCE_MULTITAP_INFO_0_JA,
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
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_JA,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_JA,
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
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_JA,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_JA,
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
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_JA,
      NULL,
      PCE_TURBO_DELAY_INFO_0_JA,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_JA },
         { "Medium", OPTION_VAL_MEDIUM_JA },
         { "Slow", OPTION_VAL_SLOW_JA },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_JA,
      NULL,
      /*  requires more explanation */
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_JA },
         { "always", OPTION_VAL_ALWAYS_JA },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_JA,
      NULL,
      /*  requires more explanation */
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
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_JA,
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
      PCE_P0_TURBO_II_ENABLE_LABEL_JA,
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
      PCE_P1_TURBO_I_ENABLE_LABEL_JA,
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
      PCE_P1_TURBO_II_ENABLE_LABEL_JA,
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
      PCE_P2_TURBO_I_ENABLE_LABEL_JA,
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
      PCE_P2_TURBO_II_ENABLE_LABEL_JA,
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
      PCE_P3_TURBO_I_ENABLE_LABEL_JA,
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
      PCE_P3_TURBO_II_ENABLE_LABEL_JA,
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
      PCE_P4_TURBO_I_ENABLE_LABEL_JA,
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
      PCE_P4_TURBO_II_ENABLE_LABEL_JA,
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
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_JA,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_JA,
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
      PCE_CDIMAGECACHE_LABEL_JA,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_JA,
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
      PCE_CDBIOS_LABEL_JA,
      NULL,
      PCE_CDBIOS_INFO_0_JA,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_JA },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_JA },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_JA },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_JA },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_JA },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_JA },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_JA,
      NULL,
      PCE_ARCADECARD_INFO_0_JA,
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
      PCE_CDSPEED_LABEL_JA,
      PCE_CDSPEED_LABEL_CAT_JA,
      PCE_CDSPEED_INFO_0_JA,
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
      PCE_ADPCMEXTRAPREC_LABEL_JA,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_JA,
      PCE_ADPCMEXTRAPREC_INFO_0_JA,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_JA },
         { "12-bit", OPTION_VAL_12_BIT_JA },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_JA,
      PCE_CDDAVOLUME_LABEL_CAT_JA,
      PCE_CDDAVOLUME_INFO_0_JA,
      PCE_CDDAVOLUME_INFO_1_JA,
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
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_JA,
      PCE_ADPCMVOLUME_LABEL_CAT_JA,
      PCE_CDDAVOLUME_INFO_0_JA,
      PCE_CDDAVOLUME_INFO_1_JA,
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
      PCE_CDPSGVOLUME_LABEL_JA,
      PCE_CDPSGVOLUME_LABEL_CAT_JA,
      PCE_CDDAVOLUME_INFO_0_JA,
      PCE_CDDAVOLUME_INFO_1_JA,
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
      PCE_NOSPRITELIMIT_LABEL_JA,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_JA,
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
      PCE_OCMULTIPLIER_LABEL_JA,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_JA,
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
struct retro_core_options_v2 options_ja = {
   option_cats_ja,
   option_defs_ja
};

/* RETRO_LANGUAGE_KO */

#define CATEGORY_VIDEO_LABEL_KO NULL
#define CATEGORY_VIDEO_INFO_0_KO NULL
#define CATEGORY_AUDIO_LABEL_KO NULL
#define CATEGORY_AUDIO_INFO_0_KO NULL
#define CATEGORY_INPUT_LABEL_KO NULL
#define CATEGORY_INPUT_INFO_0_KO NULL
#define CATEGORY_HACKS_LABEL_KO NULL
#define CATEGORY_HACKS_INFO_0_KO NULL
#define CATEGORY_CD_LABEL_KO NULL
#define CATEGORY_CD_INFO_0_KO NULL
#define PCE_PALETTE_LABEL_KO NULL
#define PCE_PALETTE_INFO_0_KO NULL
#define OPTION_VAL_RGB_KO NULL
#define OPTION_VAL_COMPOSITE_KO NULL
#define PCE_ASPECT_RATIO_LABEL_KO NULL
#define PCE_ASPECT_RATIO_INFO_0_KO NULL
#define OPTION_VAL_AUTO_KO NULL
#define OPTION_VAL_6_5_KO NULL
#define OPTION_VAL_4_3_KO NULL
#define OPTION_VAL_UNCORRECTED_KO NULL
#define PCE_SCALING_LABEL_KO NULL
#define PCE_SCALING_INFO_0_KO NULL
#define OPTION_VAL_LORES_KO NULL
#define OPTION_VAL_HIRES_KO NULL
#define PCE_HIRES_BLEND_LABEL_KO NULL
#define PCE_HIRES_BLEND_INFO_0_KO NULL
#define PCE_H_OVERSCAN_LABEL_KO NULL
#define PCE_H_OVERSCAN_INFO_0_KO NULL
#define PCE_INITIAL_SCANLINE_LABEL_KO NULL
#define PCE_INITIAL_SCANLINE_INFO_0_KO NULL
#define OPTION_VAL_3_KO NULL
#define PCE_LAST_SCANLINE_LABEL_KO NULL
#define PCE_LAST_SCANLINE_INFO_0_KO NULL
#define OPTION_VAL_242_KO NULL
#define PCE_PSGREVISION_LABEL_KO NULL
#define PCE_PSGREVISION_INFO_0_KO NULL
#define OPTION_VAL_HUC6280_KO NULL
#define OPTION_VAL_HUC6280A_KO NULL
#define PCE_RESAMP_QUALITY_LABEL_KO NULL
#define PCE_RESAMP_QUALITY_INFO_0_KO NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_KO NULL
#define PCE_MOUSE_SENSITIVITY_INFO_0_KO NULL
#define OPTION_VAL_0_125_KO NULL
#define OPTION_VAL_0_250_KO NULL
#define OPTION_VAL_0_375_KO NULL
#define OPTION_VAL_0_500_KO NULL
#define OPTION_VAL_0_625_KO NULL
#define OPTION_VAL_0_750_KO NULL
#define OPTION_VAL_0_875_KO NULL
#define OPTION_VAL_1_000_KO NULL
#define OPTION_VAL_1_125_KO NULL
#define OPTION_VAL_1_25_KO NULL
#define OPTION_VAL_1_50_KO NULL
#define OPTION_VAL_1_75_KO NULL
#define OPTION_VAL_2_00_KO NULL
#define OPTION_VAL_2_25_KO NULL
#define OPTION_VAL_2_50_KO NULL
#define OPTION_VAL_2_75_KO NULL
#define OPTION_VAL_3_00_KO NULL
#define OPTION_VAL_3_25_KO NULL
#define OPTION_VAL_3_50_KO NULL
#define OPTION_VAL_3_75_KO NULL
#define OPTION_VAL_4_00_KO NULL
#define OPTION_VAL_4_25_KO NULL
#define OPTION_VAL_4_50_KO NULL
#define OPTION_VAL_4_75_KO NULL
#define OPTION_VAL_5_00_KO NULL
#define PCE_MULTITAP_LABEL_KO NULL
#define PCE_MULTITAP_INFO_0_KO NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_KO NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_KO NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_KO NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_KO NULL
#define PCE_TURBO_DELAY_LABEL_KO NULL
#define PCE_TURBO_DELAY_INFO_0_KO NULL
#define OPTION_VAL_FAST_KO NULL
#define OPTION_VAL_MEDIUM_KO NULL
#define OPTION_VAL_SLOW_KO NULL
#define PCE_TURBO_TOGGLING_LABEL_KO NULL
#define OPTION_VAL_TOGGLE_KO NULL
#define OPTION_VAL_ALWAYS_KO NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_KO NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_KO NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_KO NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_KO NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_KO NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_KO NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_KO NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_KO NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_KO NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_KO NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_KO NULL
#define PCE_DISABLE_SOFTRESET_LABEL_KO NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_KO NULL
#define PCE_CDIMAGECACHE_LABEL_KO NULL
#define PCE_CDIMAGECACHE_INFO_0_KO NULL
#define PCE_CDBIOS_LABEL_KO NULL
#define PCE_CDBIOS_INFO_0_KO NULL
#define OPTION_VAL_GAMES_EXPRESS_KO NULL
#define OPTION_VAL_SYSTEM_CARD_1_KO NULL
#define OPTION_VAL_SYSTEM_CARD_2_KO NULL
#define OPTION_VAL_SYSTEM_CARD_3_KO NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_KO NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_KO NULL
#define PCE_ARCADECARD_LABEL_KO NULL
#define PCE_ARCADECARD_INFO_0_KO NULL
#define PCE_CDSPEED_LABEL_KO NULL
#define PCE_CDSPEED_LABEL_CAT_KO NULL
#define PCE_CDSPEED_INFO_0_KO NULL
#define PCE_ADPCMEXTRAPREC_LABEL_KO NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_KO NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_KO NULL
#define OPTION_VAL_10_BIT_KO NULL
#define OPTION_VAL_12_BIT_KO NULL
#define PCE_CDDAVOLUME_LABEL_KO NULL
#define PCE_CDDAVOLUME_LABEL_CAT_KO NULL
#define PCE_CDDAVOLUME_INFO_0_KO NULL
#define PCE_CDDAVOLUME_INFO_1_KO NULL
#define PCE_ADPCMVOLUME_LABEL_KO NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_KO NULL
#define PCE_CDPSGVOLUME_LABEL_KO NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_KO NULL
#define PCE_NOSPRITELIMIT_LABEL_KO NULL
#define PCE_NOSPRITELIMIT_INFO_0_KO NULL
#define PCE_OCMULTIPLIER_LABEL_KO NULL
#define PCE_OCMULTIPLIER_INFO_0_KO NULL

struct retro_core_option_v2_category option_cats_ko[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_KO,
      CATEGORY_VIDEO_INFO_0_KO
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_KO,
      CATEGORY_AUDIO_INFO_0_KO
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_KO,
      CATEGORY_INPUT_INFO_0_KO
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_KO,
      CATEGORY_HACKS_INFO_0_KO
   },
   {
      "cd",
      CATEGORY_CD_LABEL_KO,
      CATEGORY_CD_INFO_0_KO
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ko[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_KO,
      NULL,
      PCE_PALETTE_INFO_0_KO,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_KO },
         { "Composite", OPTION_VAL_COMPOSITE_KO },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_KO,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_KO,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_KO },
         { "6:5", OPTION_VAL_6_5_KO },
         { "4:3", OPTION_VAL_4_3_KO },
         { "uncorrected", OPTION_VAL_UNCORRECTED_KO },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_KO,
      NULL,
      /*  Is 'authorize' supposed to mean 'allow'? */
      PCE_SCALING_INFO_0_KO,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_KO },
         { "lores", OPTION_VAL_LORES_KO },
         { "hires", OPTION_VAL_HIRES_KO },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_KO,
      NULL,
      PCE_HIRES_BLEND_INFO_0_KO,
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
      PCE_H_OVERSCAN_LABEL_KO,
      NULL,
      PCE_H_OVERSCAN_INFO_0_KO,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_KO },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_KO,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_KO,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_KO },
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
      PCE_LAST_SCANLINE_LABEL_KO,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_KO,
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
         { "242", OPTION_VAL_242_KO },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_KO,
      NULL,
      PCE_PSGREVISION_INFO_0_KO,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_KO },
         { "HuC6280A", OPTION_VAL_HUC6280A_KO },
         { "auto", OPTION_VAL_AUTO_KO },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_KO,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_KO,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_KO },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_KO,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_KO,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_KO },
         { "0.250", OPTION_VAL_0_250_KO },
         { "0.375", OPTION_VAL_0_375_KO },
         { "0.500", OPTION_VAL_0_500_KO },
         { "0.625", OPTION_VAL_0_625_KO },
         { "0.750", OPTION_VAL_0_750_KO },
         { "0.875", OPTION_VAL_0_875_KO },
         { "1.000", OPTION_VAL_1_000_KO },
         { "1.125", OPTION_VAL_1_125_KO },
         { "1.25", OPTION_VAL_1_25_KO },
         { "1.50", OPTION_VAL_1_50_KO },
         { "1.75", OPTION_VAL_1_75_KO },
         { "2.00", OPTION_VAL_2_00_KO },
         { "2.25", OPTION_VAL_2_25_KO },
         { "2.50", OPTION_VAL_2_50_KO },
         { "2.75", OPTION_VAL_2_75_KO },
         { "3.00", OPTION_VAL_3_00_KO },
         { "3.25", OPTION_VAL_3_25_KO },
         { "3.50", OPTION_VAL_3_50_KO },
         { "3.75", OPTION_VAL_3_75_KO },
         { "4.00", OPTION_VAL_4_00_KO },
         { "4.25", OPTION_VAL_4_25_KO },
         { "4.50", OPTION_VAL_4_50_KO },
         { "4.75", OPTION_VAL_4_75_KO },
         { "5.00", OPTION_VAL_5_00_KO },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_KO,
      NULL,
      PCE_MULTITAP_INFO_0_KO,
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
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_KO,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_KO,
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
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_KO,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_KO,
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
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_KO,
      NULL,
      PCE_TURBO_DELAY_INFO_0_KO,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_KO },
         { "Medium", OPTION_VAL_MEDIUM_KO },
         { "Slow", OPTION_VAL_SLOW_KO },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_KO,
      NULL,
      /*  requires more explanation */
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_KO },
         { "always", OPTION_VAL_ALWAYS_KO },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_KO,
      NULL,
      /*  requires more explanation */
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
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_KO,
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
      PCE_P0_TURBO_II_ENABLE_LABEL_KO,
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
      PCE_P1_TURBO_I_ENABLE_LABEL_KO,
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
      PCE_P1_TURBO_II_ENABLE_LABEL_KO,
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
      PCE_P2_TURBO_I_ENABLE_LABEL_KO,
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
      PCE_P2_TURBO_II_ENABLE_LABEL_KO,
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
      PCE_P3_TURBO_I_ENABLE_LABEL_KO,
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
      PCE_P3_TURBO_II_ENABLE_LABEL_KO,
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
      PCE_P4_TURBO_I_ENABLE_LABEL_KO,
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
      PCE_P4_TURBO_II_ENABLE_LABEL_KO,
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
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_KO,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_KO,
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
      PCE_CDIMAGECACHE_LABEL_KO,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_KO,
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
      PCE_CDBIOS_LABEL_KO,
      NULL,
      PCE_CDBIOS_INFO_0_KO,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_KO },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_KO },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_KO },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_KO },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_KO },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_KO },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_KO,
      NULL,
      PCE_ARCADECARD_INFO_0_KO,
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
      PCE_CDSPEED_LABEL_KO,
      PCE_CDSPEED_LABEL_CAT_KO,
      PCE_CDSPEED_INFO_0_KO,
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
      PCE_ADPCMEXTRAPREC_LABEL_KO,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_KO,
      PCE_ADPCMEXTRAPREC_INFO_0_KO,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_KO },
         { "12-bit", OPTION_VAL_12_BIT_KO },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_KO,
      PCE_CDDAVOLUME_LABEL_CAT_KO,
      PCE_CDDAVOLUME_INFO_0_KO,
      PCE_CDDAVOLUME_INFO_1_KO,
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
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_KO,
      PCE_ADPCMVOLUME_LABEL_CAT_KO,
      PCE_CDDAVOLUME_INFO_0_KO,
      PCE_CDDAVOLUME_INFO_1_KO,
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
      PCE_CDPSGVOLUME_LABEL_KO,
      PCE_CDPSGVOLUME_LABEL_CAT_KO,
      PCE_CDDAVOLUME_INFO_0_KO,
      PCE_CDDAVOLUME_INFO_1_KO,
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
      PCE_NOSPRITELIMIT_LABEL_KO,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_KO,
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
      PCE_OCMULTIPLIER_LABEL_KO,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_KO,
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
struct retro_core_options_v2 options_ko = {
   option_cats_ko,
   option_defs_ko
};

/* RETRO_LANGUAGE_MT */

#define CATEGORY_VIDEO_LABEL_MT NULL
#define CATEGORY_VIDEO_INFO_0_MT NULL
#define CATEGORY_AUDIO_LABEL_MT NULL
#define CATEGORY_AUDIO_INFO_0_MT NULL
#define CATEGORY_INPUT_LABEL_MT NULL
#define CATEGORY_INPUT_INFO_0_MT NULL
#define CATEGORY_HACKS_LABEL_MT NULL
#define CATEGORY_HACKS_INFO_0_MT NULL
#define CATEGORY_CD_LABEL_MT NULL
#define CATEGORY_CD_INFO_0_MT NULL
#define PCE_PALETTE_LABEL_MT NULL
#define PCE_PALETTE_INFO_0_MT NULL
#define OPTION_VAL_RGB_MT NULL
#define OPTION_VAL_COMPOSITE_MT NULL
#define PCE_ASPECT_RATIO_LABEL_MT NULL
#define PCE_ASPECT_RATIO_INFO_0_MT NULL
#define OPTION_VAL_AUTO_MT NULL
#define OPTION_VAL_6_5_MT NULL
#define OPTION_VAL_4_3_MT NULL
#define OPTION_VAL_UNCORRECTED_MT NULL
#define PCE_SCALING_LABEL_MT NULL
#define PCE_SCALING_INFO_0_MT NULL
#define OPTION_VAL_LORES_MT NULL
#define OPTION_VAL_HIRES_MT NULL
#define PCE_HIRES_BLEND_LABEL_MT NULL
#define PCE_HIRES_BLEND_INFO_0_MT NULL
#define PCE_H_OVERSCAN_LABEL_MT NULL
#define PCE_H_OVERSCAN_INFO_0_MT NULL
#define PCE_INITIAL_SCANLINE_LABEL_MT NULL
#define PCE_INITIAL_SCANLINE_INFO_0_MT NULL
#define OPTION_VAL_3_MT NULL
#define PCE_LAST_SCANLINE_LABEL_MT NULL
#define PCE_LAST_SCANLINE_INFO_0_MT NULL
#define OPTION_VAL_242_MT NULL
#define PCE_PSGREVISION_LABEL_MT NULL
#define PCE_PSGREVISION_INFO_0_MT NULL
#define OPTION_VAL_HUC6280_MT NULL
#define OPTION_VAL_HUC6280A_MT NULL
#define PCE_RESAMP_QUALITY_LABEL_MT NULL
#define PCE_RESAMP_QUALITY_INFO_0_MT NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_MT NULL
#define PCE_MOUSE_SENSITIVITY_INFO_0_MT NULL
#define OPTION_VAL_0_125_MT NULL
#define OPTION_VAL_0_250_MT NULL
#define OPTION_VAL_0_375_MT NULL
#define OPTION_VAL_0_500_MT NULL
#define OPTION_VAL_0_625_MT NULL
#define OPTION_VAL_0_750_MT NULL
#define OPTION_VAL_0_875_MT NULL
#define OPTION_VAL_1_000_MT NULL
#define OPTION_VAL_1_125_MT NULL
#define OPTION_VAL_1_25_MT NULL
#define OPTION_VAL_1_50_MT NULL
#define OPTION_VAL_1_75_MT NULL
#define OPTION_VAL_2_00_MT NULL
#define OPTION_VAL_2_25_MT NULL
#define OPTION_VAL_2_50_MT NULL
#define OPTION_VAL_2_75_MT NULL
#define OPTION_VAL_3_00_MT NULL
#define OPTION_VAL_3_25_MT NULL
#define OPTION_VAL_3_50_MT NULL
#define OPTION_VAL_3_75_MT NULL
#define OPTION_VAL_4_00_MT NULL
#define OPTION_VAL_4_25_MT NULL
#define OPTION_VAL_4_50_MT NULL
#define OPTION_VAL_4_75_MT NULL
#define OPTION_VAL_5_00_MT NULL
#define PCE_MULTITAP_LABEL_MT NULL
#define PCE_MULTITAP_INFO_0_MT NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_MT NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_MT NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_MT NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_MT NULL
#define PCE_TURBO_DELAY_LABEL_MT NULL
#define PCE_TURBO_DELAY_INFO_0_MT NULL
#define OPTION_VAL_FAST_MT NULL
#define OPTION_VAL_MEDIUM_MT NULL
#define OPTION_VAL_SLOW_MT NULL
#define PCE_TURBO_TOGGLING_LABEL_MT NULL
#define OPTION_VAL_TOGGLE_MT NULL
#define OPTION_VAL_ALWAYS_MT NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_MT NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_MT NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_MT NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_MT NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_MT NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_MT NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_MT NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_MT NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_MT NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_MT NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_MT NULL
#define PCE_DISABLE_SOFTRESET_LABEL_MT NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_MT NULL
#define PCE_CDIMAGECACHE_LABEL_MT NULL
#define PCE_CDIMAGECACHE_INFO_0_MT NULL
#define PCE_CDBIOS_LABEL_MT NULL
#define PCE_CDBIOS_INFO_0_MT NULL
#define OPTION_VAL_GAMES_EXPRESS_MT NULL
#define OPTION_VAL_SYSTEM_CARD_1_MT NULL
#define OPTION_VAL_SYSTEM_CARD_2_MT NULL
#define OPTION_VAL_SYSTEM_CARD_3_MT NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_MT NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_MT NULL
#define PCE_ARCADECARD_LABEL_MT NULL
#define PCE_ARCADECARD_INFO_0_MT NULL
#define PCE_CDSPEED_LABEL_MT NULL
#define PCE_CDSPEED_LABEL_CAT_MT NULL
#define PCE_CDSPEED_INFO_0_MT NULL
#define PCE_ADPCMEXTRAPREC_LABEL_MT NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_MT NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_MT NULL
#define OPTION_VAL_10_BIT_MT NULL
#define OPTION_VAL_12_BIT_MT NULL
#define PCE_CDDAVOLUME_LABEL_MT NULL
#define PCE_CDDAVOLUME_LABEL_CAT_MT NULL
#define PCE_CDDAVOLUME_INFO_0_MT NULL
#define PCE_CDDAVOLUME_INFO_1_MT NULL
#define PCE_ADPCMVOLUME_LABEL_MT NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_MT NULL
#define PCE_CDPSGVOLUME_LABEL_MT NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_MT NULL
#define PCE_NOSPRITELIMIT_LABEL_MT NULL
#define PCE_NOSPRITELIMIT_INFO_0_MT NULL
#define PCE_OCMULTIPLIER_LABEL_MT NULL
#define PCE_OCMULTIPLIER_INFO_0_MT NULL

struct retro_core_option_v2_category option_cats_mt[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_MT,
      CATEGORY_VIDEO_INFO_0_MT
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_MT,
      CATEGORY_AUDIO_INFO_0_MT
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_MT,
      CATEGORY_INPUT_INFO_0_MT
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_MT,
      CATEGORY_HACKS_INFO_0_MT
   },
   {
      "cd",
      CATEGORY_CD_LABEL_MT,
      CATEGORY_CD_INFO_0_MT
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_mt[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_MT,
      NULL,
      PCE_PALETTE_INFO_0_MT,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_MT },
         { "Composite", OPTION_VAL_COMPOSITE_MT },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_MT,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_MT,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_MT },
         { "6:5", OPTION_VAL_6_5_MT },
         { "4:3", OPTION_VAL_4_3_MT },
         { "uncorrected", OPTION_VAL_UNCORRECTED_MT },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_MT,
      NULL,
      /*  Is 'authorize' supposed to mean 'allow'? */
      PCE_SCALING_INFO_0_MT,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_MT },
         { "lores", OPTION_VAL_LORES_MT },
         { "hires", OPTION_VAL_HIRES_MT },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_MT,
      NULL,
      PCE_HIRES_BLEND_INFO_0_MT,
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
      PCE_H_OVERSCAN_LABEL_MT,
      NULL,
      PCE_H_OVERSCAN_INFO_0_MT,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_MT },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_MT,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_MT,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_MT },
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
      PCE_LAST_SCANLINE_LABEL_MT,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_MT,
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
         { "242", OPTION_VAL_242_MT },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_MT,
      NULL,
      PCE_PSGREVISION_INFO_0_MT,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_MT },
         { "HuC6280A", OPTION_VAL_HUC6280A_MT },
         { "auto", OPTION_VAL_AUTO_MT },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_MT,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_MT,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_MT },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_MT,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_MT,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_MT },
         { "0.250", OPTION_VAL_0_250_MT },
         { "0.375", OPTION_VAL_0_375_MT },
         { "0.500", OPTION_VAL_0_500_MT },
         { "0.625", OPTION_VAL_0_625_MT },
         { "0.750", OPTION_VAL_0_750_MT },
         { "0.875", OPTION_VAL_0_875_MT },
         { "1.000", OPTION_VAL_1_000_MT },
         { "1.125", OPTION_VAL_1_125_MT },
         { "1.25", OPTION_VAL_1_25_MT },
         { "1.50", OPTION_VAL_1_50_MT },
         { "1.75", OPTION_VAL_1_75_MT },
         { "2.00", OPTION_VAL_2_00_MT },
         { "2.25", OPTION_VAL_2_25_MT },
         { "2.50", OPTION_VAL_2_50_MT },
         { "2.75", OPTION_VAL_2_75_MT },
         { "3.00", OPTION_VAL_3_00_MT },
         { "3.25", OPTION_VAL_3_25_MT },
         { "3.50", OPTION_VAL_3_50_MT },
         { "3.75", OPTION_VAL_3_75_MT },
         { "4.00", OPTION_VAL_4_00_MT },
         { "4.25", OPTION_VAL_4_25_MT },
         { "4.50", OPTION_VAL_4_50_MT },
         { "4.75", OPTION_VAL_4_75_MT },
         { "5.00", OPTION_VAL_5_00_MT },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_MT,
      NULL,
      PCE_MULTITAP_INFO_0_MT,
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
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_MT,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_MT,
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
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_MT,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_MT,
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
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_MT,
      NULL,
      PCE_TURBO_DELAY_INFO_0_MT,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_MT },
         { "Medium", OPTION_VAL_MEDIUM_MT },
         { "Slow", OPTION_VAL_SLOW_MT },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_MT,
      NULL,
      /*  requires more explanation */
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_MT },
         { "always", OPTION_VAL_ALWAYS_MT },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_MT,
      NULL,
      /*  requires more explanation */
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
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_MT,
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
      PCE_P0_TURBO_II_ENABLE_LABEL_MT,
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
      PCE_P1_TURBO_I_ENABLE_LABEL_MT,
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
      PCE_P1_TURBO_II_ENABLE_LABEL_MT,
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
      PCE_P2_TURBO_I_ENABLE_LABEL_MT,
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
      PCE_P2_TURBO_II_ENABLE_LABEL_MT,
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
      PCE_P3_TURBO_I_ENABLE_LABEL_MT,
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
      PCE_P3_TURBO_II_ENABLE_LABEL_MT,
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
      PCE_P4_TURBO_I_ENABLE_LABEL_MT,
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
      PCE_P4_TURBO_II_ENABLE_LABEL_MT,
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
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_MT,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_MT,
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
      PCE_CDIMAGECACHE_LABEL_MT,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_MT,
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
      PCE_CDBIOS_LABEL_MT,
      NULL,
      PCE_CDBIOS_INFO_0_MT,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_MT },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_MT },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_MT },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_MT },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_MT },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_MT },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_MT,
      NULL,
      PCE_ARCADECARD_INFO_0_MT,
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
      PCE_CDSPEED_LABEL_MT,
      PCE_CDSPEED_LABEL_CAT_MT,
      PCE_CDSPEED_INFO_0_MT,
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
      PCE_ADPCMEXTRAPREC_LABEL_MT,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_MT,
      PCE_ADPCMEXTRAPREC_INFO_0_MT,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_MT },
         { "12-bit", OPTION_VAL_12_BIT_MT },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_MT,
      PCE_CDDAVOLUME_LABEL_CAT_MT,
      PCE_CDDAVOLUME_INFO_0_MT,
      PCE_CDDAVOLUME_INFO_1_MT,
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
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_MT,
      PCE_ADPCMVOLUME_LABEL_CAT_MT,
      PCE_CDDAVOLUME_INFO_0_MT,
      PCE_CDDAVOLUME_INFO_1_MT,
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
      PCE_CDPSGVOLUME_LABEL_MT,
      PCE_CDPSGVOLUME_LABEL_CAT_MT,
      PCE_CDDAVOLUME_INFO_0_MT,
      PCE_CDDAVOLUME_INFO_1_MT,
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
      PCE_NOSPRITELIMIT_LABEL_MT,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_MT,
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
      PCE_OCMULTIPLIER_LABEL_MT,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_MT,
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
struct retro_core_options_v2 options_mt = {
   option_cats_mt,
   option_defs_mt
};

/* RETRO_LANGUAGE_NL */

#define CATEGORY_VIDEO_LABEL_NL NULL
#define CATEGORY_VIDEO_INFO_0_NL NULL
#define CATEGORY_AUDIO_LABEL_NL NULL
#define CATEGORY_AUDIO_INFO_0_NL NULL
#define CATEGORY_INPUT_LABEL_NL NULL
#define CATEGORY_INPUT_INFO_0_NL NULL
#define CATEGORY_HACKS_LABEL_NL NULL
#define CATEGORY_HACKS_INFO_0_NL NULL
#define CATEGORY_CD_LABEL_NL NULL
#define CATEGORY_CD_INFO_0_NL NULL
#define PCE_PALETTE_LABEL_NL NULL
#define PCE_PALETTE_INFO_0_NL NULL
#define OPTION_VAL_RGB_NL NULL
#define OPTION_VAL_COMPOSITE_NL NULL
#define PCE_ASPECT_RATIO_LABEL_NL NULL
#define PCE_ASPECT_RATIO_INFO_0_NL NULL
#define OPTION_VAL_AUTO_NL NULL
#define OPTION_VAL_6_5_NL NULL
#define OPTION_VAL_4_3_NL NULL
#define OPTION_VAL_UNCORRECTED_NL NULL
#define PCE_SCALING_LABEL_NL NULL
#define PCE_SCALING_INFO_0_NL NULL
#define OPTION_VAL_LORES_NL NULL
#define OPTION_VAL_HIRES_NL NULL
#define PCE_HIRES_BLEND_LABEL_NL NULL
#define PCE_HIRES_BLEND_INFO_0_NL NULL
#define PCE_H_OVERSCAN_LABEL_NL NULL
#define PCE_H_OVERSCAN_INFO_0_NL NULL
#define PCE_INITIAL_SCANLINE_LABEL_NL NULL
#define PCE_INITIAL_SCANLINE_INFO_0_NL NULL
#define OPTION_VAL_3_NL NULL
#define PCE_LAST_SCANLINE_LABEL_NL NULL
#define PCE_LAST_SCANLINE_INFO_0_NL NULL
#define OPTION_VAL_242_NL NULL
#define PCE_PSGREVISION_LABEL_NL NULL
#define PCE_PSGREVISION_INFO_0_NL NULL
#define OPTION_VAL_HUC6280_NL NULL
#define OPTION_VAL_HUC6280A_NL NULL
#define PCE_RESAMP_QUALITY_LABEL_NL NULL
#define PCE_RESAMP_QUALITY_INFO_0_NL NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_NL NULL
#define PCE_MOUSE_SENSITIVITY_INFO_0_NL NULL
#define OPTION_VAL_0_125_NL NULL
#define OPTION_VAL_0_250_NL NULL
#define OPTION_VAL_0_375_NL NULL
#define OPTION_VAL_0_500_NL NULL
#define OPTION_VAL_0_625_NL NULL
#define OPTION_VAL_0_750_NL NULL
#define OPTION_VAL_0_875_NL NULL
#define OPTION_VAL_1_000_NL NULL
#define OPTION_VAL_1_125_NL NULL
#define OPTION_VAL_1_25_NL NULL
#define OPTION_VAL_1_50_NL NULL
#define OPTION_VAL_1_75_NL NULL
#define OPTION_VAL_2_00_NL NULL
#define OPTION_VAL_2_25_NL NULL
#define OPTION_VAL_2_50_NL NULL
#define OPTION_VAL_2_75_NL NULL
#define OPTION_VAL_3_00_NL NULL
#define OPTION_VAL_3_25_NL NULL
#define OPTION_VAL_3_50_NL NULL
#define OPTION_VAL_3_75_NL NULL
#define OPTION_VAL_4_00_NL NULL
#define OPTION_VAL_4_25_NL NULL
#define OPTION_VAL_4_50_NL NULL
#define OPTION_VAL_4_75_NL NULL
#define OPTION_VAL_5_00_NL NULL
#define PCE_MULTITAP_LABEL_NL NULL
#define PCE_MULTITAP_INFO_0_NL NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_NL NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_NL NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_NL NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_NL NULL
#define PCE_TURBO_DELAY_LABEL_NL NULL
#define PCE_TURBO_DELAY_INFO_0_NL NULL
#define OPTION_VAL_FAST_NL NULL
#define OPTION_VAL_MEDIUM_NL NULL
#define OPTION_VAL_SLOW_NL NULL
#define PCE_TURBO_TOGGLING_LABEL_NL NULL
#define OPTION_VAL_TOGGLE_NL NULL
#define OPTION_VAL_ALWAYS_NL NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_NL NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_NL NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_NL NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_NL NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_NL NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_NL NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_NL NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_NL NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_NL NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_NL NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_NL NULL
#define PCE_DISABLE_SOFTRESET_LABEL_NL NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_NL NULL
#define PCE_CDIMAGECACHE_LABEL_NL NULL
#define PCE_CDIMAGECACHE_INFO_0_NL NULL
#define PCE_CDBIOS_LABEL_NL NULL
#define PCE_CDBIOS_INFO_0_NL NULL
#define OPTION_VAL_GAMES_EXPRESS_NL NULL
#define OPTION_VAL_SYSTEM_CARD_1_NL NULL
#define OPTION_VAL_SYSTEM_CARD_2_NL NULL
#define OPTION_VAL_SYSTEM_CARD_3_NL NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_NL NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_NL NULL
#define PCE_ARCADECARD_LABEL_NL NULL
#define PCE_ARCADECARD_INFO_0_NL NULL
#define PCE_CDSPEED_LABEL_NL NULL
#define PCE_CDSPEED_LABEL_CAT_NL NULL
#define PCE_CDSPEED_INFO_0_NL NULL
#define PCE_ADPCMEXTRAPREC_LABEL_NL NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_NL NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_NL NULL
#define OPTION_VAL_10_BIT_NL NULL
#define OPTION_VAL_12_BIT_NL NULL
#define PCE_CDDAVOLUME_LABEL_NL NULL
#define PCE_CDDAVOLUME_LABEL_CAT_NL NULL
#define PCE_CDDAVOLUME_INFO_0_NL NULL
#define PCE_CDDAVOLUME_INFO_1_NL NULL
#define PCE_ADPCMVOLUME_LABEL_NL NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_NL NULL
#define PCE_CDPSGVOLUME_LABEL_NL NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_NL NULL
#define PCE_NOSPRITELIMIT_LABEL_NL NULL
#define PCE_NOSPRITELIMIT_INFO_0_NL NULL
#define PCE_OCMULTIPLIER_LABEL_NL NULL
#define PCE_OCMULTIPLIER_INFO_0_NL NULL

struct retro_core_option_v2_category option_cats_nl[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_NL,
      CATEGORY_VIDEO_INFO_0_NL
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_NL,
      CATEGORY_AUDIO_INFO_0_NL
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_NL,
      CATEGORY_INPUT_INFO_0_NL
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_NL,
      CATEGORY_HACKS_INFO_0_NL
   },
   {
      "cd",
      CATEGORY_CD_LABEL_NL,
      CATEGORY_CD_INFO_0_NL
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_nl[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_NL,
      NULL,
      PCE_PALETTE_INFO_0_NL,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_NL },
         { "Composite", OPTION_VAL_COMPOSITE_NL },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_NL,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_NL,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_NL },
         { "6:5", OPTION_VAL_6_5_NL },
         { "4:3", OPTION_VAL_4_3_NL },
         { "uncorrected", OPTION_VAL_UNCORRECTED_NL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_NL,
      NULL,
      /*  Is 'authorize' supposed to mean 'allow'? */
      PCE_SCALING_INFO_0_NL,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_NL },
         { "lores", OPTION_VAL_LORES_NL },
         { "hires", OPTION_VAL_HIRES_NL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_NL,
      NULL,
      PCE_HIRES_BLEND_INFO_0_NL,
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
      PCE_H_OVERSCAN_LABEL_NL,
      NULL,
      PCE_H_OVERSCAN_INFO_0_NL,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_NL },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_NL,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_NL,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_NL },
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
      PCE_LAST_SCANLINE_LABEL_NL,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_NL,
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
         { "242", OPTION_VAL_242_NL },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_NL,
      NULL,
      PCE_PSGREVISION_INFO_0_NL,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_NL },
         { "HuC6280A", OPTION_VAL_HUC6280A_NL },
         { "auto", OPTION_VAL_AUTO_NL },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_NL,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_NL,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_NL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_NL,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_NL,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_NL },
         { "0.250", OPTION_VAL_0_250_NL },
         { "0.375", OPTION_VAL_0_375_NL },
         { "0.500", OPTION_VAL_0_500_NL },
         { "0.625", OPTION_VAL_0_625_NL },
         { "0.750", OPTION_VAL_0_750_NL },
         { "0.875", OPTION_VAL_0_875_NL },
         { "1.000", OPTION_VAL_1_000_NL },
         { "1.125", OPTION_VAL_1_125_NL },
         { "1.25", OPTION_VAL_1_25_NL },
         { "1.50", OPTION_VAL_1_50_NL },
         { "1.75", OPTION_VAL_1_75_NL },
         { "2.00", OPTION_VAL_2_00_NL },
         { "2.25", OPTION_VAL_2_25_NL },
         { "2.50", OPTION_VAL_2_50_NL },
         { "2.75", OPTION_VAL_2_75_NL },
         { "3.00", OPTION_VAL_3_00_NL },
         { "3.25", OPTION_VAL_3_25_NL },
         { "3.50", OPTION_VAL_3_50_NL },
         { "3.75", OPTION_VAL_3_75_NL },
         { "4.00", OPTION_VAL_4_00_NL },
         { "4.25", OPTION_VAL_4_25_NL },
         { "4.50", OPTION_VAL_4_50_NL },
         { "4.75", OPTION_VAL_4_75_NL },
         { "5.00", OPTION_VAL_5_00_NL },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_NL,
      NULL,
      PCE_MULTITAP_INFO_0_NL,
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
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_NL,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_NL,
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
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_NL,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_NL,
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
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_NL,
      NULL,
      PCE_TURBO_DELAY_INFO_0_NL,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_NL },
         { "Medium", OPTION_VAL_MEDIUM_NL },
         { "Slow", OPTION_VAL_SLOW_NL },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_NL,
      NULL,
      /*  requires more explanation */
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_NL },
         { "always", OPTION_VAL_ALWAYS_NL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_NL,
      NULL,
      /*  requires more explanation */
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
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_NL,
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
      PCE_P0_TURBO_II_ENABLE_LABEL_NL,
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
      PCE_P1_TURBO_I_ENABLE_LABEL_NL,
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
      PCE_P1_TURBO_II_ENABLE_LABEL_NL,
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
      PCE_P2_TURBO_I_ENABLE_LABEL_NL,
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
      PCE_P2_TURBO_II_ENABLE_LABEL_NL,
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
      PCE_P3_TURBO_I_ENABLE_LABEL_NL,
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
      PCE_P3_TURBO_II_ENABLE_LABEL_NL,
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
      PCE_P4_TURBO_I_ENABLE_LABEL_NL,
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
      PCE_P4_TURBO_II_ENABLE_LABEL_NL,
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
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_NL,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_NL,
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
      PCE_CDIMAGECACHE_LABEL_NL,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_NL,
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
      PCE_CDBIOS_LABEL_NL,
      NULL,
      PCE_CDBIOS_INFO_0_NL,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_NL },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_NL },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_NL },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_NL },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_NL },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_NL },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_NL,
      NULL,
      PCE_ARCADECARD_INFO_0_NL,
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
      PCE_CDSPEED_LABEL_NL,
      PCE_CDSPEED_LABEL_CAT_NL,
      PCE_CDSPEED_INFO_0_NL,
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
      PCE_ADPCMEXTRAPREC_LABEL_NL,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_NL,
      PCE_ADPCMEXTRAPREC_INFO_0_NL,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_NL },
         { "12-bit", OPTION_VAL_12_BIT_NL },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_NL,
      PCE_CDDAVOLUME_LABEL_CAT_NL,
      PCE_CDDAVOLUME_INFO_0_NL,
      PCE_CDDAVOLUME_INFO_1_NL,
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
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_NL,
      PCE_ADPCMVOLUME_LABEL_CAT_NL,
      PCE_CDDAVOLUME_INFO_0_NL,
      PCE_CDDAVOLUME_INFO_1_NL,
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
      PCE_CDPSGVOLUME_LABEL_NL,
      PCE_CDPSGVOLUME_LABEL_CAT_NL,
      PCE_CDDAVOLUME_INFO_0_NL,
      PCE_CDDAVOLUME_INFO_1_NL,
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
      PCE_NOSPRITELIMIT_LABEL_NL,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_NL,
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
      PCE_OCMULTIPLIER_LABEL_NL,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_NL,
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
struct retro_core_options_v2 options_nl = {
   option_cats_nl,
   option_defs_nl
};

/* RETRO_LANGUAGE_OC */

#define CATEGORY_VIDEO_LABEL_OC NULL
#define CATEGORY_VIDEO_INFO_0_OC NULL
#define CATEGORY_AUDIO_LABEL_OC NULL
#define CATEGORY_AUDIO_INFO_0_OC NULL
#define CATEGORY_INPUT_LABEL_OC NULL
#define CATEGORY_INPUT_INFO_0_OC NULL
#define CATEGORY_HACKS_LABEL_OC NULL
#define CATEGORY_HACKS_INFO_0_OC NULL
#define CATEGORY_CD_LABEL_OC NULL
#define CATEGORY_CD_INFO_0_OC NULL
#define PCE_PALETTE_LABEL_OC NULL
#define PCE_PALETTE_INFO_0_OC NULL
#define OPTION_VAL_RGB_OC NULL
#define OPTION_VAL_COMPOSITE_OC NULL
#define PCE_ASPECT_RATIO_LABEL_OC NULL
#define PCE_ASPECT_RATIO_INFO_0_OC NULL
#define OPTION_VAL_AUTO_OC NULL
#define OPTION_VAL_6_5_OC NULL
#define OPTION_VAL_4_3_OC NULL
#define OPTION_VAL_UNCORRECTED_OC NULL
#define PCE_SCALING_LABEL_OC NULL
#define PCE_SCALING_INFO_0_OC NULL
#define OPTION_VAL_LORES_OC NULL
#define OPTION_VAL_HIRES_OC NULL
#define PCE_HIRES_BLEND_LABEL_OC NULL
#define PCE_HIRES_BLEND_INFO_0_OC NULL
#define PCE_H_OVERSCAN_LABEL_OC NULL
#define PCE_H_OVERSCAN_INFO_0_OC NULL
#define PCE_INITIAL_SCANLINE_LABEL_OC NULL
#define PCE_INITIAL_SCANLINE_INFO_0_OC NULL
#define OPTION_VAL_3_OC NULL
#define PCE_LAST_SCANLINE_LABEL_OC NULL
#define PCE_LAST_SCANLINE_INFO_0_OC NULL
#define OPTION_VAL_242_OC NULL
#define PCE_PSGREVISION_LABEL_OC NULL
#define PCE_PSGREVISION_INFO_0_OC NULL
#define OPTION_VAL_HUC6280_OC NULL
#define OPTION_VAL_HUC6280A_OC NULL
#define PCE_RESAMP_QUALITY_LABEL_OC NULL
#define PCE_RESAMP_QUALITY_INFO_0_OC NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_OC NULL
#define PCE_MOUSE_SENSITIVITY_INFO_0_OC NULL
#define OPTION_VAL_0_125_OC NULL
#define OPTION_VAL_0_250_OC NULL
#define OPTION_VAL_0_375_OC NULL
#define OPTION_VAL_0_500_OC NULL
#define OPTION_VAL_0_625_OC NULL
#define OPTION_VAL_0_750_OC NULL
#define OPTION_VAL_0_875_OC NULL
#define OPTION_VAL_1_000_OC NULL
#define OPTION_VAL_1_125_OC NULL
#define OPTION_VAL_1_25_OC NULL
#define OPTION_VAL_1_50_OC NULL
#define OPTION_VAL_1_75_OC NULL
#define OPTION_VAL_2_00_OC NULL
#define OPTION_VAL_2_25_OC NULL
#define OPTION_VAL_2_50_OC NULL
#define OPTION_VAL_2_75_OC NULL
#define OPTION_VAL_3_00_OC NULL
#define OPTION_VAL_3_25_OC NULL
#define OPTION_VAL_3_50_OC NULL
#define OPTION_VAL_3_75_OC NULL
#define OPTION_VAL_4_00_OC NULL
#define OPTION_VAL_4_25_OC NULL
#define OPTION_VAL_4_50_OC NULL
#define OPTION_VAL_4_75_OC NULL
#define OPTION_VAL_5_00_OC NULL
#define PCE_MULTITAP_LABEL_OC NULL
#define PCE_MULTITAP_INFO_0_OC NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_OC NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_OC NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_OC NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_OC NULL
#define PCE_TURBO_DELAY_LABEL_OC NULL
#define PCE_TURBO_DELAY_INFO_0_OC NULL
#define OPTION_VAL_FAST_OC NULL
#define OPTION_VAL_MEDIUM_OC NULL
#define OPTION_VAL_SLOW_OC NULL
#define PCE_TURBO_TOGGLING_LABEL_OC NULL
#define OPTION_VAL_TOGGLE_OC NULL
#define OPTION_VAL_ALWAYS_OC NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_OC NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_OC NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_OC NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_OC NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_OC NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_OC NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_OC NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_OC NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_OC NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_OC NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_OC NULL
#define PCE_DISABLE_SOFTRESET_LABEL_OC NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_OC NULL
#define PCE_CDIMAGECACHE_LABEL_OC NULL
#define PCE_CDIMAGECACHE_INFO_0_OC NULL
#define PCE_CDBIOS_LABEL_OC NULL
#define PCE_CDBIOS_INFO_0_OC NULL
#define OPTION_VAL_GAMES_EXPRESS_OC NULL
#define OPTION_VAL_SYSTEM_CARD_1_OC NULL
#define OPTION_VAL_SYSTEM_CARD_2_OC NULL
#define OPTION_VAL_SYSTEM_CARD_3_OC NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_OC NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_OC NULL
#define PCE_ARCADECARD_LABEL_OC NULL
#define PCE_ARCADECARD_INFO_0_OC NULL
#define PCE_CDSPEED_LABEL_OC NULL
#define PCE_CDSPEED_LABEL_CAT_OC NULL
#define PCE_CDSPEED_INFO_0_OC NULL
#define PCE_ADPCMEXTRAPREC_LABEL_OC NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_OC NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_OC NULL
#define OPTION_VAL_10_BIT_OC NULL
#define OPTION_VAL_12_BIT_OC NULL
#define PCE_CDDAVOLUME_LABEL_OC NULL
#define PCE_CDDAVOLUME_LABEL_CAT_OC NULL
#define PCE_CDDAVOLUME_INFO_0_OC NULL
#define PCE_CDDAVOLUME_INFO_1_OC NULL
#define PCE_ADPCMVOLUME_LABEL_OC NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_OC NULL
#define PCE_CDPSGVOLUME_LABEL_OC NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_OC NULL
#define PCE_NOSPRITELIMIT_LABEL_OC NULL
#define PCE_NOSPRITELIMIT_INFO_0_OC NULL
#define PCE_OCMULTIPLIER_LABEL_OC NULL
#define PCE_OCMULTIPLIER_INFO_0_OC NULL

struct retro_core_option_v2_category option_cats_oc[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_OC,
      CATEGORY_VIDEO_INFO_0_OC
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_OC,
      CATEGORY_AUDIO_INFO_0_OC
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_OC,
      CATEGORY_INPUT_INFO_0_OC
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_OC,
      CATEGORY_HACKS_INFO_0_OC
   },
   {
      "cd",
      CATEGORY_CD_LABEL_OC,
      CATEGORY_CD_INFO_0_OC
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_oc[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_OC,
      NULL,
      PCE_PALETTE_INFO_0_OC,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_OC },
         { "Composite", OPTION_VAL_COMPOSITE_OC },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_OC,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_OC,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_OC },
         { "6:5", OPTION_VAL_6_5_OC },
         { "4:3", OPTION_VAL_4_3_OC },
         { "uncorrected", OPTION_VAL_UNCORRECTED_OC },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_OC,
      NULL,
      /*  Is 'authorize' supposed to mean 'allow'? */
      PCE_SCALING_INFO_0_OC,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_OC },
         { "lores", OPTION_VAL_LORES_OC },
         { "hires", OPTION_VAL_HIRES_OC },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_OC,
      NULL,
      PCE_HIRES_BLEND_INFO_0_OC,
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
      PCE_H_OVERSCAN_LABEL_OC,
      NULL,
      PCE_H_OVERSCAN_INFO_0_OC,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_OC },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_OC,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_OC,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_OC },
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
      PCE_LAST_SCANLINE_LABEL_OC,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_OC,
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
         { "242", OPTION_VAL_242_OC },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_OC,
      NULL,
      PCE_PSGREVISION_INFO_0_OC,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_OC },
         { "HuC6280A", OPTION_VAL_HUC6280A_OC },
         { "auto", OPTION_VAL_AUTO_OC },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_OC,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_OC,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_OC },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_OC,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_OC,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_OC },
         { "0.250", OPTION_VAL_0_250_OC },
         { "0.375", OPTION_VAL_0_375_OC },
         { "0.500", OPTION_VAL_0_500_OC },
         { "0.625", OPTION_VAL_0_625_OC },
         { "0.750", OPTION_VAL_0_750_OC },
         { "0.875", OPTION_VAL_0_875_OC },
         { "1.000", OPTION_VAL_1_000_OC },
         { "1.125", OPTION_VAL_1_125_OC },
         { "1.25", OPTION_VAL_1_25_OC },
         { "1.50", OPTION_VAL_1_50_OC },
         { "1.75", OPTION_VAL_1_75_OC },
         { "2.00", OPTION_VAL_2_00_OC },
         { "2.25", OPTION_VAL_2_25_OC },
         { "2.50", OPTION_VAL_2_50_OC },
         { "2.75", OPTION_VAL_2_75_OC },
         { "3.00", OPTION_VAL_3_00_OC },
         { "3.25", OPTION_VAL_3_25_OC },
         { "3.50", OPTION_VAL_3_50_OC },
         { "3.75", OPTION_VAL_3_75_OC },
         { "4.00", OPTION_VAL_4_00_OC },
         { "4.25", OPTION_VAL_4_25_OC },
         { "4.50", OPTION_VAL_4_50_OC },
         { "4.75", OPTION_VAL_4_75_OC },
         { "5.00", OPTION_VAL_5_00_OC },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_OC,
      NULL,
      PCE_MULTITAP_INFO_0_OC,
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
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_OC,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_OC,
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
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_OC,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_OC,
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
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_OC,
      NULL,
      PCE_TURBO_DELAY_INFO_0_OC,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_OC },
         { "Medium", OPTION_VAL_MEDIUM_OC },
         { "Slow", OPTION_VAL_SLOW_OC },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_OC,
      NULL,
      /*  requires more explanation */
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_OC },
         { "always", OPTION_VAL_ALWAYS_OC },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_OC,
      NULL,
      /*  requires more explanation */
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
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_OC,
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
      PCE_P0_TURBO_II_ENABLE_LABEL_OC,
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
      PCE_P1_TURBO_I_ENABLE_LABEL_OC,
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
      PCE_P1_TURBO_II_ENABLE_LABEL_OC,
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
      PCE_P2_TURBO_I_ENABLE_LABEL_OC,
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
      PCE_P2_TURBO_II_ENABLE_LABEL_OC,
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
      PCE_P3_TURBO_I_ENABLE_LABEL_OC,
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
      PCE_P3_TURBO_II_ENABLE_LABEL_OC,
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
      PCE_P4_TURBO_I_ENABLE_LABEL_OC,
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
      PCE_P4_TURBO_II_ENABLE_LABEL_OC,
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
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_OC,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_OC,
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
      PCE_CDIMAGECACHE_LABEL_OC,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_OC,
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
      PCE_CDBIOS_LABEL_OC,
      NULL,
      PCE_CDBIOS_INFO_0_OC,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_OC },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_OC },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_OC },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_OC },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_OC },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_OC },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_OC,
      NULL,
      PCE_ARCADECARD_INFO_0_OC,
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
      PCE_CDSPEED_LABEL_OC,
      PCE_CDSPEED_LABEL_CAT_OC,
      PCE_CDSPEED_INFO_0_OC,
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
      PCE_ADPCMEXTRAPREC_LABEL_OC,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_OC,
      PCE_ADPCMEXTRAPREC_INFO_0_OC,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_OC },
         { "12-bit", OPTION_VAL_12_BIT_OC },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_OC,
      PCE_CDDAVOLUME_LABEL_CAT_OC,
      PCE_CDDAVOLUME_INFO_0_OC,
      PCE_CDDAVOLUME_INFO_1_OC,
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
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_OC,
      PCE_ADPCMVOLUME_LABEL_CAT_OC,
      PCE_CDDAVOLUME_INFO_0_OC,
      PCE_CDDAVOLUME_INFO_1_OC,
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
      PCE_CDPSGVOLUME_LABEL_OC,
      PCE_CDPSGVOLUME_LABEL_CAT_OC,
      PCE_CDDAVOLUME_INFO_0_OC,
      PCE_CDDAVOLUME_INFO_1_OC,
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
      PCE_NOSPRITELIMIT_LABEL_OC,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_OC,
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
      PCE_OCMULTIPLIER_LABEL_OC,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_OC,
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
struct retro_core_options_v2 options_oc = {
   option_cats_oc,
   option_defs_oc
};

/* RETRO_LANGUAGE_PL */

#define CATEGORY_VIDEO_LABEL_PL NULL
#define CATEGORY_VIDEO_INFO_0_PL NULL
#define CATEGORY_AUDIO_LABEL_PL NULL
#define CATEGORY_AUDIO_INFO_0_PL NULL
#define CATEGORY_INPUT_LABEL_PL NULL
#define CATEGORY_INPUT_INFO_0_PL NULL
#define CATEGORY_HACKS_LABEL_PL NULL
#define CATEGORY_HACKS_INFO_0_PL NULL
#define CATEGORY_CD_LABEL_PL NULL
#define CATEGORY_CD_INFO_0_PL NULL
#define PCE_PALETTE_LABEL_PL NULL
#define PCE_PALETTE_INFO_0_PL NULL
#define OPTION_VAL_RGB_PL NULL
#define OPTION_VAL_COMPOSITE_PL NULL
#define PCE_ASPECT_RATIO_LABEL_PL NULL
#define PCE_ASPECT_RATIO_INFO_0_PL NULL
#define OPTION_VAL_AUTO_PL NULL
#define OPTION_VAL_6_5_PL NULL
#define OPTION_VAL_4_3_PL NULL
#define OPTION_VAL_UNCORRECTED_PL NULL
#define PCE_SCALING_LABEL_PL NULL
#define PCE_SCALING_INFO_0_PL NULL
#define OPTION_VAL_LORES_PL NULL
#define OPTION_VAL_HIRES_PL NULL
#define PCE_HIRES_BLEND_LABEL_PL NULL
#define PCE_HIRES_BLEND_INFO_0_PL NULL
#define PCE_H_OVERSCAN_LABEL_PL NULL
#define PCE_H_OVERSCAN_INFO_0_PL NULL
#define PCE_INITIAL_SCANLINE_LABEL_PL NULL
#define PCE_INITIAL_SCANLINE_INFO_0_PL NULL
#define OPTION_VAL_3_PL NULL
#define PCE_LAST_SCANLINE_LABEL_PL NULL
#define PCE_LAST_SCANLINE_INFO_0_PL NULL
#define OPTION_VAL_242_PL NULL
#define PCE_PSGREVISION_LABEL_PL NULL
#define PCE_PSGREVISION_INFO_0_PL NULL
#define OPTION_VAL_HUC6280_PL NULL
#define OPTION_VAL_HUC6280A_PL NULL
#define PCE_RESAMP_QUALITY_LABEL_PL NULL
#define PCE_RESAMP_QUALITY_INFO_0_PL NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_PL NULL
#define PCE_MOUSE_SENSITIVITY_INFO_0_PL NULL
#define OPTION_VAL_0_125_PL NULL
#define OPTION_VAL_0_250_PL NULL
#define OPTION_VAL_0_375_PL NULL
#define OPTION_VAL_0_500_PL NULL
#define OPTION_VAL_0_625_PL NULL
#define OPTION_VAL_0_750_PL NULL
#define OPTION_VAL_0_875_PL NULL
#define OPTION_VAL_1_000_PL NULL
#define OPTION_VAL_1_125_PL NULL
#define OPTION_VAL_1_25_PL NULL
#define OPTION_VAL_1_50_PL NULL
#define OPTION_VAL_1_75_PL NULL
#define OPTION_VAL_2_00_PL NULL
#define OPTION_VAL_2_25_PL NULL
#define OPTION_VAL_2_50_PL NULL
#define OPTION_VAL_2_75_PL NULL
#define OPTION_VAL_3_00_PL NULL
#define OPTION_VAL_3_25_PL NULL
#define OPTION_VAL_3_50_PL NULL
#define OPTION_VAL_3_75_PL NULL
#define OPTION_VAL_4_00_PL NULL
#define OPTION_VAL_4_25_PL NULL
#define OPTION_VAL_4_50_PL NULL
#define OPTION_VAL_4_75_PL NULL
#define OPTION_VAL_5_00_PL NULL
#define PCE_MULTITAP_LABEL_PL NULL
#define PCE_MULTITAP_INFO_0_PL NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_PL NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_PL NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_PL NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_PL NULL
#define PCE_TURBO_DELAY_LABEL_PL NULL
#define PCE_TURBO_DELAY_INFO_0_PL NULL
#define OPTION_VAL_FAST_PL NULL
#define OPTION_VAL_MEDIUM_PL NULL
#define OPTION_VAL_SLOW_PL NULL
#define PCE_TURBO_TOGGLING_LABEL_PL NULL
#define OPTION_VAL_TOGGLE_PL NULL
#define OPTION_VAL_ALWAYS_PL NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_PL NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_PL NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_PL NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_PL NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_PL NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_PL NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_PL NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_PL NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_PL NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_PL NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_PL NULL
#define PCE_DISABLE_SOFTRESET_LABEL_PL NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_PL NULL
#define PCE_CDIMAGECACHE_LABEL_PL NULL
#define PCE_CDIMAGECACHE_INFO_0_PL NULL
#define PCE_CDBIOS_LABEL_PL NULL
#define PCE_CDBIOS_INFO_0_PL NULL
#define OPTION_VAL_GAMES_EXPRESS_PL NULL
#define OPTION_VAL_SYSTEM_CARD_1_PL NULL
#define OPTION_VAL_SYSTEM_CARD_2_PL NULL
#define OPTION_VAL_SYSTEM_CARD_3_PL NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_PL NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_PL NULL
#define PCE_ARCADECARD_LABEL_PL NULL
#define PCE_ARCADECARD_INFO_0_PL NULL
#define PCE_CDSPEED_LABEL_PL NULL
#define PCE_CDSPEED_LABEL_CAT_PL NULL
#define PCE_CDSPEED_INFO_0_PL NULL
#define PCE_ADPCMEXTRAPREC_LABEL_PL NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_PL NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_PL NULL
#define OPTION_VAL_10_BIT_PL NULL
#define OPTION_VAL_12_BIT_PL NULL
#define PCE_CDDAVOLUME_LABEL_PL NULL
#define PCE_CDDAVOLUME_LABEL_CAT_PL NULL
#define PCE_CDDAVOLUME_INFO_0_PL NULL
#define PCE_CDDAVOLUME_INFO_1_PL NULL
#define PCE_ADPCMVOLUME_LABEL_PL NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_PL NULL
#define PCE_CDPSGVOLUME_LABEL_PL NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_PL NULL
#define PCE_NOSPRITELIMIT_LABEL_PL NULL
#define PCE_NOSPRITELIMIT_INFO_0_PL NULL
#define PCE_OCMULTIPLIER_LABEL_PL NULL
#define PCE_OCMULTIPLIER_INFO_0_PL NULL

struct retro_core_option_v2_category option_cats_pl[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_PL,
      CATEGORY_VIDEO_INFO_0_PL
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_PL,
      CATEGORY_AUDIO_INFO_0_PL
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_PL,
      CATEGORY_INPUT_INFO_0_PL
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_PL,
      CATEGORY_HACKS_INFO_0_PL
   },
   {
      "cd",
      CATEGORY_CD_LABEL_PL,
      CATEGORY_CD_INFO_0_PL
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_pl[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_PL,
      NULL,
      PCE_PALETTE_INFO_0_PL,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_PL },
         { "Composite", OPTION_VAL_COMPOSITE_PL },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_PL,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_PL,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_PL },
         { "6:5", OPTION_VAL_6_5_PL },
         { "4:3", OPTION_VAL_4_3_PL },
         { "uncorrected", OPTION_VAL_UNCORRECTED_PL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_PL,
      NULL,
      /*  Is 'authorize' supposed to mean 'allow'? */
      PCE_SCALING_INFO_0_PL,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_PL },
         { "lores", OPTION_VAL_LORES_PL },
         { "hires", OPTION_VAL_HIRES_PL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_PL,
      NULL,
      PCE_HIRES_BLEND_INFO_0_PL,
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
      PCE_H_OVERSCAN_LABEL_PL,
      NULL,
      PCE_H_OVERSCAN_INFO_0_PL,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_PL },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_PL,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_PL,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_PL },
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
      PCE_LAST_SCANLINE_LABEL_PL,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_PL,
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
         { "242", OPTION_VAL_242_PL },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_PL,
      NULL,
      PCE_PSGREVISION_INFO_0_PL,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_PL },
         { "HuC6280A", OPTION_VAL_HUC6280A_PL },
         { "auto", OPTION_VAL_AUTO_PL },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_PL,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_PL,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_PL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_PL,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_PL,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_PL },
         { "0.250", OPTION_VAL_0_250_PL },
         { "0.375", OPTION_VAL_0_375_PL },
         { "0.500", OPTION_VAL_0_500_PL },
         { "0.625", OPTION_VAL_0_625_PL },
         { "0.750", OPTION_VAL_0_750_PL },
         { "0.875", OPTION_VAL_0_875_PL },
         { "1.000", OPTION_VAL_1_000_PL },
         { "1.125", OPTION_VAL_1_125_PL },
         { "1.25", OPTION_VAL_1_25_PL },
         { "1.50", OPTION_VAL_1_50_PL },
         { "1.75", OPTION_VAL_1_75_PL },
         { "2.00", OPTION_VAL_2_00_PL },
         { "2.25", OPTION_VAL_2_25_PL },
         { "2.50", OPTION_VAL_2_50_PL },
         { "2.75", OPTION_VAL_2_75_PL },
         { "3.00", OPTION_VAL_3_00_PL },
         { "3.25", OPTION_VAL_3_25_PL },
         { "3.50", OPTION_VAL_3_50_PL },
         { "3.75", OPTION_VAL_3_75_PL },
         { "4.00", OPTION_VAL_4_00_PL },
         { "4.25", OPTION_VAL_4_25_PL },
         { "4.50", OPTION_VAL_4_50_PL },
         { "4.75", OPTION_VAL_4_75_PL },
         { "5.00", OPTION_VAL_5_00_PL },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_PL,
      NULL,
      PCE_MULTITAP_INFO_0_PL,
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
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_PL,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_PL,
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
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_PL,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_PL,
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
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_PL,
      NULL,
      PCE_TURBO_DELAY_INFO_0_PL,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_PL },
         { "Medium", OPTION_VAL_MEDIUM_PL },
         { "Slow", OPTION_VAL_SLOW_PL },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_PL,
      NULL,
      /*  requires more explanation */
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_PL },
         { "always", OPTION_VAL_ALWAYS_PL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_PL,
      NULL,
      /*  requires more explanation */
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
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_PL,
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
      PCE_P0_TURBO_II_ENABLE_LABEL_PL,
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
      PCE_P1_TURBO_I_ENABLE_LABEL_PL,
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
      PCE_P1_TURBO_II_ENABLE_LABEL_PL,
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
      PCE_P2_TURBO_I_ENABLE_LABEL_PL,
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
      PCE_P2_TURBO_II_ENABLE_LABEL_PL,
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
      PCE_P3_TURBO_I_ENABLE_LABEL_PL,
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
      PCE_P3_TURBO_II_ENABLE_LABEL_PL,
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
      PCE_P4_TURBO_I_ENABLE_LABEL_PL,
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
      PCE_P4_TURBO_II_ENABLE_LABEL_PL,
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
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_PL,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_PL,
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
      PCE_CDIMAGECACHE_LABEL_PL,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_PL,
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
      PCE_CDBIOS_LABEL_PL,
      NULL,
      PCE_CDBIOS_INFO_0_PL,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_PL },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_PL },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_PL },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_PL },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_PL },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_PL },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_PL,
      NULL,
      PCE_ARCADECARD_INFO_0_PL,
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
      PCE_CDSPEED_LABEL_PL,
      PCE_CDSPEED_LABEL_CAT_PL,
      PCE_CDSPEED_INFO_0_PL,
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
      PCE_ADPCMEXTRAPREC_LABEL_PL,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_PL,
      PCE_ADPCMEXTRAPREC_INFO_0_PL,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_PL },
         { "12-bit", OPTION_VAL_12_BIT_PL },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_PL,
      PCE_CDDAVOLUME_LABEL_CAT_PL,
      PCE_CDDAVOLUME_INFO_0_PL,
      PCE_CDDAVOLUME_INFO_1_PL,
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
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_PL,
      PCE_ADPCMVOLUME_LABEL_CAT_PL,
      PCE_CDDAVOLUME_INFO_0_PL,
      PCE_CDDAVOLUME_INFO_1_PL,
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
      PCE_CDPSGVOLUME_LABEL_PL,
      PCE_CDPSGVOLUME_LABEL_CAT_PL,
      PCE_CDDAVOLUME_INFO_0_PL,
      PCE_CDDAVOLUME_INFO_1_PL,
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
      PCE_NOSPRITELIMIT_LABEL_PL,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_PL,
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
      PCE_OCMULTIPLIER_LABEL_PL,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_PL,
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
struct retro_core_options_v2 options_pl = {
   option_cats_pl,
   option_defs_pl
};

/* RETRO_LANGUAGE_PT_BR */

#define CATEGORY_VIDEO_LABEL_PT_BR NULL
#define CATEGORY_VIDEO_INFO_0_PT_BR NULL
#define CATEGORY_AUDIO_LABEL_PT_BR NULL
#define CATEGORY_AUDIO_INFO_0_PT_BR NULL
#define CATEGORY_INPUT_LABEL_PT_BR NULL
#define CATEGORY_INPUT_INFO_0_PT_BR NULL
#define CATEGORY_HACKS_LABEL_PT_BR NULL
#define CATEGORY_HACKS_INFO_0_PT_BR NULL
#define CATEGORY_CD_LABEL_PT_BR NULL
#define CATEGORY_CD_INFO_0_PT_BR NULL
#define PCE_PALETTE_LABEL_PT_BR NULL
#define PCE_PALETTE_INFO_0_PT_BR NULL
#define OPTION_VAL_RGB_PT_BR NULL
#define OPTION_VAL_COMPOSITE_PT_BR NULL
#define PCE_ASPECT_RATIO_LABEL_PT_BR NULL
#define PCE_ASPECT_RATIO_INFO_0_PT_BR NULL
#define OPTION_VAL_AUTO_PT_BR NULL
#define OPTION_VAL_6_5_PT_BR NULL
#define OPTION_VAL_4_3_PT_BR NULL
#define OPTION_VAL_UNCORRECTED_PT_BR NULL
#define PCE_SCALING_LABEL_PT_BR NULL
#define PCE_SCALING_INFO_0_PT_BR NULL
#define OPTION_VAL_LORES_PT_BR NULL
#define OPTION_VAL_HIRES_PT_BR NULL
#define PCE_HIRES_BLEND_LABEL_PT_BR NULL
#define PCE_HIRES_BLEND_INFO_0_PT_BR NULL
#define PCE_H_OVERSCAN_LABEL_PT_BR NULL
#define PCE_H_OVERSCAN_INFO_0_PT_BR NULL
#define PCE_INITIAL_SCANLINE_LABEL_PT_BR NULL
#define PCE_INITIAL_SCANLINE_INFO_0_PT_BR NULL
#define OPTION_VAL_3_PT_BR NULL
#define PCE_LAST_SCANLINE_LABEL_PT_BR NULL
#define PCE_LAST_SCANLINE_INFO_0_PT_BR NULL
#define OPTION_VAL_242_PT_BR NULL
#define PCE_PSGREVISION_LABEL_PT_BR NULL
#define PCE_PSGREVISION_INFO_0_PT_BR NULL
#define OPTION_VAL_HUC6280_PT_BR NULL
#define OPTION_VAL_HUC6280A_PT_BR NULL
#define PCE_RESAMP_QUALITY_LABEL_PT_BR NULL
#define PCE_RESAMP_QUALITY_INFO_0_PT_BR NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_PT_BR NULL
#define PCE_MOUSE_SENSITIVITY_INFO_0_PT_BR NULL
#define OPTION_VAL_0_125_PT_BR NULL
#define OPTION_VAL_0_250_PT_BR NULL
#define OPTION_VAL_0_375_PT_BR NULL
#define OPTION_VAL_0_500_PT_BR NULL
#define OPTION_VAL_0_625_PT_BR NULL
#define OPTION_VAL_0_750_PT_BR NULL
#define OPTION_VAL_0_875_PT_BR NULL
#define OPTION_VAL_1_000_PT_BR NULL
#define OPTION_VAL_1_125_PT_BR NULL
#define OPTION_VAL_1_25_PT_BR NULL
#define OPTION_VAL_1_50_PT_BR NULL
#define OPTION_VAL_1_75_PT_BR NULL
#define OPTION_VAL_2_00_PT_BR NULL
#define OPTION_VAL_2_25_PT_BR NULL
#define OPTION_VAL_2_50_PT_BR NULL
#define OPTION_VAL_2_75_PT_BR NULL
#define OPTION_VAL_3_00_PT_BR NULL
#define OPTION_VAL_3_25_PT_BR NULL
#define OPTION_VAL_3_50_PT_BR NULL
#define OPTION_VAL_3_75_PT_BR NULL
#define OPTION_VAL_4_00_PT_BR NULL
#define OPTION_VAL_4_25_PT_BR NULL
#define OPTION_VAL_4_50_PT_BR NULL
#define OPTION_VAL_4_75_PT_BR NULL
#define OPTION_VAL_5_00_PT_BR NULL
#define PCE_MULTITAP_LABEL_PT_BR NULL
#define PCE_MULTITAP_INFO_0_PT_BR NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_PT_BR NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_PT_BR NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_PT_BR NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_PT_BR NULL
#define PCE_TURBO_DELAY_LABEL_PT_BR NULL
#define PCE_TURBO_DELAY_INFO_0_PT_BR NULL
#define OPTION_VAL_FAST_PT_BR NULL
#define OPTION_VAL_MEDIUM_PT_BR NULL
#define OPTION_VAL_SLOW_PT_BR NULL
#define PCE_TURBO_TOGGLING_LABEL_PT_BR NULL
#define OPTION_VAL_TOGGLE_PT_BR NULL
#define OPTION_VAL_ALWAYS_PT_BR NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_PT_BR NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_PT_BR NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_PT_BR NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_PT_BR NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_PT_BR NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_PT_BR NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_PT_BR NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_PT_BR NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_PT_BR NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_PT_BR NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_PT_BR NULL
#define PCE_DISABLE_SOFTRESET_LABEL_PT_BR NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_PT_BR NULL
#define PCE_CDIMAGECACHE_LABEL_PT_BR NULL
#define PCE_CDIMAGECACHE_INFO_0_PT_BR NULL
#define PCE_CDBIOS_LABEL_PT_BR NULL
#define PCE_CDBIOS_INFO_0_PT_BR NULL
#define OPTION_VAL_GAMES_EXPRESS_PT_BR NULL
#define OPTION_VAL_SYSTEM_CARD_1_PT_BR NULL
#define OPTION_VAL_SYSTEM_CARD_2_PT_BR NULL
#define OPTION_VAL_SYSTEM_CARD_3_PT_BR NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_PT_BR NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_PT_BR NULL
#define PCE_ARCADECARD_LABEL_PT_BR NULL
#define PCE_ARCADECARD_INFO_0_PT_BR NULL
#define PCE_CDSPEED_LABEL_PT_BR NULL
#define PCE_CDSPEED_LABEL_CAT_PT_BR NULL
#define PCE_CDSPEED_INFO_0_PT_BR NULL
#define PCE_ADPCMEXTRAPREC_LABEL_PT_BR NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_PT_BR NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_PT_BR NULL
#define OPTION_VAL_10_BIT_PT_BR NULL
#define OPTION_VAL_12_BIT_PT_BR NULL
#define PCE_CDDAVOLUME_LABEL_PT_BR NULL
#define PCE_CDDAVOLUME_LABEL_CAT_PT_BR NULL
#define PCE_CDDAVOLUME_INFO_0_PT_BR NULL
#define PCE_CDDAVOLUME_INFO_1_PT_BR NULL
#define PCE_ADPCMVOLUME_LABEL_PT_BR NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_PT_BR NULL
#define PCE_CDPSGVOLUME_LABEL_PT_BR NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_PT_BR NULL
#define PCE_NOSPRITELIMIT_LABEL_PT_BR NULL
#define PCE_NOSPRITELIMIT_INFO_0_PT_BR NULL
#define PCE_OCMULTIPLIER_LABEL_PT_BR NULL
#define PCE_OCMULTIPLIER_INFO_0_PT_BR NULL

struct retro_core_option_v2_category option_cats_pt_br[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_PT_BR,
      CATEGORY_VIDEO_INFO_0_PT_BR
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_PT_BR,
      CATEGORY_AUDIO_INFO_0_PT_BR
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_PT_BR,
      CATEGORY_INPUT_INFO_0_PT_BR
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_PT_BR,
      CATEGORY_HACKS_INFO_0_PT_BR
   },
   {
      "cd",
      CATEGORY_CD_LABEL_PT_BR,
      CATEGORY_CD_INFO_0_PT_BR
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_pt_br[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_PT_BR,
      NULL,
      PCE_PALETTE_INFO_0_PT_BR,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_PT_BR },
         { "Composite", OPTION_VAL_COMPOSITE_PT_BR },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_PT_BR,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_PT_BR,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_PT_BR },
         { "6:5", OPTION_VAL_6_5_PT_BR },
         { "4:3", OPTION_VAL_4_3_PT_BR },
         { "uncorrected", OPTION_VAL_UNCORRECTED_PT_BR },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_PT_BR,
      NULL,
      /*  Is 'authorize' supposed to mean 'allow'? */
      PCE_SCALING_INFO_0_PT_BR,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_PT_BR },
         { "lores", OPTION_VAL_LORES_PT_BR },
         { "hires", OPTION_VAL_HIRES_PT_BR },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_PT_BR,
      NULL,
      PCE_HIRES_BLEND_INFO_0_PT_BR,
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
      PCE_H_OVERSCAN_LABEL_PT_BR,
      NULL,
      PCE_H_OVERSCAN_INFO_0_PT_BR,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_PT_BR },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_PT_BR,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_PT_BR,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_PT_BR },
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
      PCE_LAST_SCANLINE_LABEL_PT_BR,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_PT_BR,
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
         { "242", OPTION_VAL_242_PT_BR },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_PT_BR,
      NULL,
      PCE_PSGREVISION_INFO_0_PT_BR,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_PT_BR },
         { "HuC6280A", OPTION_VAL_HUC6280A_PT_BR },
         { "auto", OPTION_VAL_AUTO_PT_BR },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_PT_BR,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_PT_BR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_PT_BR },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_PT_BR,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_PT_BR,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_PT_BR },
         { "0.250", OPTION_VAL_0_250_PT_BR },
         { "0.375", OPTION_VAL_0_375_PT_BR },
         { "0.500", OPTION_VAL_0_500_PT_BR },
         { "0.625", OPTION_VAL_0_625_PT_BR },
         { "0.750", OPTION_VAL_0_750_PT_BR },
         { "0.875", OPTION_VAL_0_875_PT_BR },
         { "1.000", OPTION_VAL_1_000_PT_BR },
         { "1.125", OPTION_VAL_1_125_PT_BR },
         { "1.25", OPTION_VAL_1_25_PT_BR },
         { "1.50", OPTION_VAL_1_50_PT_BR },
         { "1.75", OPTION_VAL_1_75_PT_BR },
         { "2.00", OPTION_VAL_2_00_PT_BR },
         { "2.25", OPTION_VAL_2_25_PT_BR },
         { "2.50", OPTION_VAL_2_50_PT_BR },
         { "2.75", OPTION_VAL_2_75_PT_BR },
         { "3.00", OPTION_VAL_3_00_PT_BR },
         { "3.25", OPTION_VAL_3_25_PT_BR },
         { "3.50", OPTION_VAL_3_50_PT_BR },
         { "3.75", OPTION_VAL_3_75_PT_BR },
         { "4.00", OPTION_VAL_4_00_PT_BR },
         { "4.25", OPTION_VAL_4_25_PT_BR },
         { "4.50", OPTION_VAL_4_50_PT_BR },
         { "4.75", OPTION_VAL_4_75_PT_BR },
         { "5.00", OPTION_VAL_5_00_PT_BR },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_PT_BR,
      NULL,
      PCE_MULTITAP_INFO_0_PT_BR,
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
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_PT_BR,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_PT_BR,
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
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_PT_BR,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_PT_BR,
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
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_PT_BR,
      NULL,
      PCE_TURBO_DELAY_INFO_0_PT_BR,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_PT_BR },
         { "Medium", OPTION_VAL_MEDIUM_PT_BR },
         { "Slow", OPTION_VAL_SLOW_PT_BR },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_PT_BR,
      NULL,
      /*  requires more explanation */
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_PT_BR },
         { "always", OPTION_VAL_ALWAYS_PT_BR },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_PT_BR,
      NULL,
      /*  requires more explanation */
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
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_PT_BR,
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
      PCE_P0_TURBO_II_ENABLE_LABEL_PT_BR,
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
      PCE_P1_TURBO_I_ENABLE_LABEL_PT_BR,
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
      PCE_P1_TURBO_II_ENABLE_LABEL_PT_BR,
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
      PCE_P2_TURBO_I_ENABLE_LABEL_PT_BR,
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
      PCE_P2_TURBO_II_ENABLE_LABEL_PT_BR,
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
      PCE_P3_TURBO_I_ENABLE_LABEL_PT_BR,
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
      PCE_P3_TURBO_II_ENABLE_LABEL_PT_BR,
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
      PCE_P4_TURBO_I_ENABLE_LABEL_PT_BR,
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
      PCE_P4_TURBO_II_ENABLE_LABEL_PT_BR,
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
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_PT_BR,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_PT_BR,
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
      PCE_CDIMAGECACHE_LABEL_PT_BR,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_PT_BR,
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
      PCE_CDBIOS_LABEL_PT_BR,
      NULL,
      PCE_CDBIOS_INFO_0_PT_BR,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_PT_BR },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_PT_BR },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_PT_BR },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_PT_BR },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_PT_BR },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_PT_BR },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_PT_BR,
      NULL,
      PCE_ARCADECARD_INFO_0_PT_BR,
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
      PCE_CDSPEED_LABEL_PT_BR,
      PCE_CDSPEED_LABEL_CAT_PT_BR,
      PCE_CDSPEED_INFO_0_PT_BR,
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
      PCE_ADPCMEXTRAPREC_LABEL_PT_BR,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_PT_BR,
      PCE_ADPCMEXTRAPREC_INFO_0_PT_BR,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_PT_BR },
         { "12-bit", OPTION_VAL_12_BIT_PT_BR },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_PT_BR,
      PCE_CDDAVOLUME_LABEL_CAT_PT_BR,
      PCE_CDDAVOLUME_INFO_0_PT_BR,
      PCE_CDDAVOLUME_INFO_1_PT_BR,
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
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_PT_BR,
      PCE_ADPCMVOLUME_LABEL_CAT_PT_BR,
      PCE_CDDAVOLUME_INFO_0_PT_BR,
      PCE_CDDAVOLUME_INFO_1_PT_BR,
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
      PCE_CDPSGVOLUME_LABEL_PT_BR,
      PCE_CDPSGVOLUME_LABEL_CAT_PT_BR,
      PCE_CDDAVOLUME_INFO_0_PT_BR,
      PCE_CDDAVOLUME_INFO_1_PT_BR,
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
      PCE_NOSPRITELIMIT_LABEL_PT_BR,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_PT_BR,
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
      PCE_OCMULTIPLIER_LABEL_PT_BR,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_PT_BR,
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
struct retro_core_options_v2 options_pt_br = {
   option_cats_pt_br,
   option_defs_pt_br
};

/* RETRO_LANGUAGE_PT_PT */

#define CATEGORY_VIDEO_LABEL_PT_PT NULL
#define CATEGORY_VIDEO_INFO_0_PT_PT NULL
#define CATEGORY_AUDIO_LABEL_PT_PT NULL
#define CATEGORY_AUDIO_INFO_0_PT_PT NULL
#define CATEGORY_INPUT_LABEL_PT_PT NULL
#define CATEGORY_INPUT_INFO_0_PT_PT NULL
#define CATEGORY_HACKS_LABEL_PT_PT NULL
#define CATEGORY_HACKS_INFO_0_PT_PT NULL
#define CATEGORY_CD_LABEL_PT_PT NULL
#define CATEGORY_CD_INFO_0_PT_PT NULL
#define PCE_PALETTE_LABEL_PT_PT NULL
#define PCE_PALETTE_INFO_0_PT_PT NULL
#define OPTION_VAL_RGB_PT_PT NULL
#define OPTION_VAL_COMPOSITE_PT_PT NULL
#define PCE_ASPECT_RATIO_LABEL_PT_PT NULL
#define PCE_ASPECT_RATIO_INFO_0_PT_PT NULL
#define OPTION_VAL_AUTO_PT_PT NULL
#define OPTION_VAL_6_5_PT_PT NULL
#define OPTION_VAL_4_3_PT_PT NULL
#define OPTION_VAL_UNCORRECTED_PT_PT NULL
#define PCE_SCALING_LABEL_PT_PT NULL
#define PCE_SCALING_INFO_0_PT_PT NULL
#define OPTION_VAL_LORES_PT_PT NULL
#define OPTION_VAL_HIRES_PT_PT NULL
#define PCE_HIRES_BLEND_LABEL_PT_PT NULL
#define PCE_HIRES_BLEND_INFO_0_PT_PT NULL
#define PCE_H_OVERSCAN_LABEL_PT_PT NULL
#define PCE_H_OVERSCAN_INFO_0_PT_PT NULL
#define PCE_INITIAL_SCANLINE_LABEL_PT_PT NULL
#define PCE_INITIAL_SCANLINE_INFO_0_PT_PT NULL
#define OPTION_VAL_3_PT_PT NULL
#define PCE_LAST_SCANLINE_LABEL_PT_PT NULL
#define PCE_LAST_SCANLINE_INFO_0_PT_PT NULL
#define OPTION_VAL_242_PT_PT NULL
#define PCE_PSGREVISION_LABEL_PT_PT NULL
#define PCE_PSGREVISION_INFO_0_PT_PT NULL
#define OPTION_VAL_HUC6280_PT_PT NULL
#define OPTION_VAL_HUC6280A_PT_PT NULL
#define PCE_RESAMP_QUALITY_LABEL_PT_PT NULL
#define PCE_RESAMP_QUALITY_INFO_0_PT_PT NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_PT_PT NULL
#define PCE_MOUSE_SENSITIVITY_INFO_0_PT_PT NULL
#define OPTION_VAL_0_125_PT_PT NULL
#define OPTION_VAL_0_250_PT_PT NULL
#define OPTION_VAL_0_375_PT_PT NULL
#define OPTION_VAL_0_500_PT_PT NULL
#define OPTION_VAL_0_625_PT_PT NULL
#define OPTION_VAL_0_750_PT_PT NULL
#define OPTION_VAL_0_875_PT_PT NULL
#define OPTION_VAL_1_000_PT_PT NULL
#define OPTION_VAL_1_125_PT_PT NULL
#define OPTION_VAL_1_25_PT_PT NULL
#define OPTION_VAL_1_50_PT_PT NULL
#define OPTION_VAL_1_75_PT_PT NULL
#define OPTION_VAL_2_00_PT_PT NULL
#define OPTION_VAL_2_25_PT_PT NULL
#define OPTION_VAL_2_50_PT_PT NULL
#define OPTION_VAL_2_75_PT_PT NULL
#define OPTION_VAL_3_00_PT_PT NULL
#define OPTION_VAL_3_25_PT_PT NULL
#define OPTION_VAL_3_50_PT_PT NULL
#define OPTION_VAL_3_75_PT_PT NULL
#define OPTION_VAL_4_00_PT_PT NULL
#define OPTION_VAL_4_25_PT_PT NULL
#define OPTION_VAL_4_50_PT_PT NULL
#define OPTION_VAL_4_75_PT_PT NULL
#define OPTION_VAL_5_00_PT_PT NULL
#define PCE_MULTITAP_LABEL_PT_PT NULL
#define PCE_MULTITAP_INFO_0_PT_PT NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_PT_PT NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_PT_PT NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_PT_PT NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_PT_PT NULL
#define PCE_TURBO_DELAY_LABEL_PT_PT NULL
#define PCE_TURBO_DELAY_INFO_0_PT_PT NULL
#define OPTION_VAL_FAST_PT_PT NULL
#define OPTION_VAL_MEDIUM_PT_PT NULL
#define OPTION_VAL_SLOW_PT_PT NULL
#define PCE_TURBO_TOGGLING_LABEL_PT_PT NULL
#define OPTION_VAL_TOGGLE_PT_PT NULL
#define OPTION_VAL_ALWAYS_PT_PT NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_PT_PT NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_PT_PT NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_PT_PT NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_PT_PT NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_PT_PT NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_PT_PT NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_PT_PT NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_PT_PT NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_PT_PT NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_PT_PT NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_PT_PT NULL
#define PCE_DISABLE_SOFTRESET_LABEL_PT_PT NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_PT_PT NULL
#define PCE_CDIMAGECACHE_LABEL_PT_PT NULL
#define PCE_CDIMAGECACHE_INFO_0_PT_PT NULL
#define PCE_CDBIOS_LABEL_PT_PT NULL
#define PCE_CDBIOS_INFO_0_PT_PT NULL
#define OPTION_VAL_GAMES_EXPRESS_PT_PT NULL
#define OPTION_VAL_SYSTEM_CARD_1_PT_PT NULL
#define OPTION_VAL_SYSTEM_CARD_2_PT_PT NULL
#define OPTION_VAL_SYSTEM_CARD_3_PT_PT NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_PT_PT NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_PT_PT NULL
#define PCE_ARCADECARD_LABEL_PT_PT NULL
#define PCE_ARCADECARD_INFO_0_PT_PT NULL
#define PCE_CDSPEED_LABEL_PT_PT NULL
#define PCE_CDSPEED_LABEL_CAT_PT_PT NULL
#define PCE_CDSPEED_INFO_0_PT_PT NULL
#define PCE_ADPCMEXTRAPREC_LABEL_PT_PT NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_PT_PT NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_PT_PT NULL
#define OPTION_VAL_10_BIT_PT_PT NULL
#define OPTION_VAL_12_BIT_PT_PT NULL
#define PCE_CDDAVOLUME_LABEL_PT_PT NULL
#define PCE_CDDAVOLUME_LABEL_CAT_PT_PT NULL
#define PCE_CDDAVOLUME_INFO_0_PT_PT NULL
#define PCE_CDDAVOLUME_INFO_1_PT_PT NULL
#define PCE_ADPCMVOLUME_LABEL_PT_PT NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_PT_PT NULL
#define PCE_CDPSGVOLUME_LABEL_PT_PT NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_PT_PT NULL
#define PCE_NOSPRITELIMIT_LABEL_PT_PT NULL
#define PCE_NOSPRITELIMIT_INFO_0_PT_PT NULL
#define PCE_OCMULTIPLIER_LABEL_PT_PT NULL
#define PCE_OCMULTIPLIER_INFO_0_PT_PT NULL

struct retro_core_option_v2_category option_cats_pt_pt[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_PT_PT,
      CATEGORY_VIDEO_INFO_0_PT_PT
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_PT_PT,
      CATEGORY_AUDIO_INFO_0_PT_PT
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_PT_PT,
      CATEGORY_INPUT_INFO_0_PT_PT
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_PT_PT,
      CATEGORY_HACKS_INFO_0_PT_PT
   },
   {
      "cd",
      CATEGORY_CD_LABEL_PT_PT,
      CATEGORY_CD_INFO_0_PT_PT
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_pt_pt[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_PT_PT,
      NULL,
      PCE_PALETTE_INFO_0_PT_PT,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_PT_PT },
         { "Composite", OPTION_VAL_COMPOSITE_PT_PT },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_PT_PT,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_PT_PT,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_PT_PT },
         { "6:5", OPTION_VAL_6_5_PT_PT },
         { "4:3", OPTION_VAL_4_3_PT_PT },
         { "uncorrected", OPTION_VAL_UNCORRECTED_PT_PT },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_PT_PT,
      NULL,
      /*  Is 'authorize' supposed to mean 'allow'? */
      PCE_SCALING_INFO_0_PT_PT,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_PT_PT },
         { "lores", OPTION_VAL_LORES_PT_PT },
         { "hires", OPTION_VAL_HIRES_PT_PT },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_PT_PT,
      NULL,
      PCE_HIRES_BLEND_INFO_0_PT_PT,
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
      PCE_H_OVERSCAN_LABEL_PT_PT,
      NULL,
      PCE_H_OVERSCAN_INFO_0_PT_PT,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_PT_PT },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_PT_PT,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_PT_PT,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_PT_PT },
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
      PCE_LAST_SCANLINE_LABEL_PT_PT,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_PT_PT,
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
         { "242", OPTION_VAL_242_PT_PT },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_PT_PT,
      NULL,
      PCE_PSGREVISION_INFO_0_PT_PT,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_PT_PT },
         { "HuC6280A", OPTION_VAL_HUC6280A_PT_PT },
         { "auto", OPTION_VAL_AUTO_PT_PT },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_PT_PT,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_PT_PT,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_PT_PT },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_PT_PT,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_PT_PT,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_PT_PT },
         { "0.250", OPTION_VAL_0_250_PT_PT },
         { "0.375", OPTION_VAL_0_375_PT_PT },
         { "0.500", OPTION_VAL_0_500_PT_PT },
         { "0.625", OPTION_VAL_0_625_PT_PT },
         { "0.750", OPTION_VAL_0_750_PT_PT },
         { "0.875", OPTION_VAL_0_875_PT_PT },
         { "1.000", OPTION_VAL_1_000_PT_PT },
         { "1.125", OPTION_VAL_1_125_PT_PT },
         { "1.25", OPTION_VAL_1_25_PT_PT },
         { "1.50", OPTION_VAL_1_50_PT_PT },
         { "1.75", OPTION_VAL_1_75_PT_PT },
         { "2.00", OPTION_VAL_2_00_PT_PT },
         { "2.25", OPTION_VAL_2_25_PT_PT },
         { "2.50", OPTION_VAL_2_50_PT_PT },
         { "2.75", OPTION_VAL_2_75_PT_PT },
         { "3.00", OPTION_VAL_3_00_PT_PT },
         { "3.25", OPTION_VAL_3_25_PT_PT },
         { "3.50", OPTION_VAL_3_50_PT_PT },
         { "3.75", OPTION_VAL_3_75_PT_PT },
         { "4.00", OPTION_VAL_4_00_PT_PT },
         { "4.25", OPTION_VAL_4_25_PT_PT },
         { "4.50", OPTION_VAL_4_50_PT_PT },
         { "4.75", OPTION_VAL_4_75_PT_PT },
         { "5.00", OPTION_VAL_5_00_PT_PT },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_PT_PT,
      NULL,
      PCE_MULTITAP_INFO_0_PT_PT,
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
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_PT_PT,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_PT_PT,
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
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_PT_PT,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_PT_PT,
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
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_PT_PT,
      NULL,
      PCE_TURBO_DELAY_INFO_0_PT_PT,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_PT_PT },
         { "Medium", OPTION_VAL_MEDIUM_PT_PT },
         { "Slow", OPTION_VAL_SLOW_PT_PT },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_PT_PT,
      NULL,
      /*  requires more explanation */
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_PT_PT },
         { "always", OPTION_VAL_ALWAYS_PT_PT },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_PT_PT,
      NULL,
      /*  requires more explanation */
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
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_PT_PT,
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
      PCE_P0_TURBO_II_ENABLE_LABEL_PT_PT,
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
      PCE_P1_TURBO_I_ENABLE_LABEL_PT_PT,
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
      PCE_P1_TURBO_II_ENABLE_LABEL_PT_PT,
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
      PCE_P2_TURBO_I_ENABLE_LABEL_PT_PT,
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
      PCE_P2_TURBO_II_ENABLE_LABEL_PT_PT,
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
      PCE_P3_TURBO_I_ENABLE_LABEL_PT_PT,
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
      PCE_P3_TURBO_II_ENABLE_LABEL_PT_PT,
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
      PCE_P4_TURBO_I_ENABLE_LABEL_PT_PT,
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
      PCE_P4_TURBO_II_ENABLE_LABEL_PT_PT,
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
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_PT_PT,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_PT_PT,
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
      PCE_CDIMAGECACHE_LABEL_PT_PT,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_PT_PT,
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
      PCE_CDBIOS_LABEL_PT_PT,
      NULL,
      PCE_CDBIOS_INFO_0_PT_PT,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_PT_PT },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_PT_PT },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_PT_PT },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_PT_PT },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_PT_PT },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_PT_PT },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_PT_PT,
      NULL,
      PCE_ARCADECARD_INFO_0_PT_PT,
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
      PCE_CDSPEED_LABEL_PT_PT,
      PCE_CDSPEED_LABEL_CAT_PT_PT,
      PCE_CDSPEED_INFO_0_PT_PT,
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
      PCE_ADPCMEXTRAPREC_LABEL_PT_PT,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_PT_PT,
      PCE_ADPCMEXTRAPREC_INFO_0_PT_PT,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_PT_PT },
         { "12-bit", OPTION_VAL_12_BIT_PT_PT },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_PT_PT,
      PCE_CDDAVOLUME_LABEL_CAT_PT_PT,
      PCE_CDDAVOLUME_INFO_0_PT_PT,
      PCE_CDDAVOLUME_INFO_1_PT_PT,
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
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_PT_PT,
      PCE_ADPCMVOLUME_LABEL_CAT_PT_PT,
      PCE_CDDAVOLUME_INFO_0_PT_PT,
      PCE_CDDAVOLUME_INFO_1_PT_PT,
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
      PCE_CDPSGVOLUME_LABEL_PT_PT,
      PCE_CDPSGVOLUME_LABEL_CAT_PT_PT,
      PCE_CDDAVOLUME_INFO_0_PT_PT,
      PCE_CDDAVOLUME_INFO_1_PT_PT,
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
      PCE_NOSPRITELIMIT_LABEL_PT_PT,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_PT_PT,
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
      PCE_OCMULTIPLIER_LABEL_PT_PT,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_PT_PT,
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
struct retro_core_options_v2 options_pt_pt = {
   option_cats_pt_pt,
   option_defs_pt_pt
};

/* RETRO_LANGUAGE_RO */

#define CATEGORY_VIDEO_LABEL_RO NULL
#define CATEGORY_VIDEO_INFO_0_RO NULL
#define CATEGORY_AUDIO_LABEL_RO NULL
#define CATEGORY_AUDIO_INFO_0_RO NULL
#define CATEGORY_INPUT_LABEL_RO NULL
#define CATEGORY_INPUT_INFO_0_RO NULL
#define CATEGORY_HACKS_LABEL_RO NULL
#define CATEGORY_HACKS_INFO_0_RO NULL
#define CATEGORY_CD_LABEL_RO NULL
#define CATEGORY_CD_INFO_0_RO NULL
#define PCE_PALETTE_LABEL_RO NULL
#define PCE_PALETTE_INFO_0_RO NULL
#define OPTION_VAL_RGB_RO NULL
#define OPTION_VAL_COMPOSITE_RO NULL
#define PCE_ASPECT_RATIO_LABEL_RO NULL
#define PCE_ASPECT_RATIO_INFO_0_RO NULL
#define OPTION_VAL_AUTO_RO NULL
#define OPTION_VAL_6_5_RO NULL
#define OPTION_VAL_4_3_RO NULL
#define OPTION_VAL_UNCORRECTED_RO NULL
#define PCE_SCALING_LABEL_RO NULL
#define PCE_SCALING_INFO_0_RO NULL
#define OPTION_VAL_LORES_RO NULL
#define OPTION_VAL_HIRES_RO NULL
#define PCE_HIRES_BLEND_LABEL_RO NULL
#define PCE_HIRES_BLEND_INFO_0_RO NULL
#define PCE_H_OVERSCAN_LABEL_RO NULL
#define PCE_H_OVERSCAN_INFO_0_RO NULL
#define PCE_INITIAL_SCANLINE_LABEL_RO NULL
#define PCE_INITIAL_SCANLINE_INFO_0_RO NULL
#define OPTION_VAL_3_RO NULL
#define PCE_LAST_SCANLINE_LABEL_RO NULL
#define PCE_LAST_SCANLINE_INFO_0_RO NULL
#define OPTION_VAL_242_RO NULL
#define PCE_PSGREVISION_LABEL_RO NULL
#define PCE_PSGREVISION_INFO_0_RO NULL
#define OPTION_VAL_HUC6280_RO NULL
#define OPTION_VAL_HUC6280A_RO NULL
#define PCE_RESAMP_QUALITY_LABEL_RO NULL
#define PCE_RESAMP_QUALITY_INFO_0_RO NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_RO NULL
#define PCE_MOUSE_SENSITIVITY_INFO_0_RO NULL
#define OPTION_VAL_0_125_RO NULL
#define OPTION_VAL_0_250_RO NULL
#define OPTION_VAL_0_375_RO NULL
#define OPTION_VAL_0_500_RO NULL
#define OPTION_VAL_0_625_RO NULL
#define OPTION_VAL_0_750_RO NULL
#define OPTION_VAL_0_875_RO NULL
#define OPTION_VAL_1_000_RO NULL
#define OPTION_VAL_1_125_RO NULL
#define OPTION_VAL_1_25_RO NULL
#define OPTION_VAL_1_50_RO NULL
#define OPTION_VAL_1_75_RO NULL
#define OPTION_VAL_2_00_RO NULL
#define OPTION_VAL_2_25_RO NULL
#define OPTION_VAL_2_50_RO NULL
#define OPTION_VAL_2_75_RO NULL
#define OPTION_VAL_3_00_RO NULL
#define OPTION_VAL_3_25_RO NULL
#define OPTION_VAL_3_50_RO NULL
#define OPTION_VAL_3_75_RO NULL
#define OPTION_VAL_4_00_RO NULL
#define OPTION_VAL_4_25_RO NULL
#define OPTION_VAL_4_50_RO NULL
#define OPTION_VAL_4_75_RO NULL
#define OPTION_VAL_5_00_RO NULL
#define PCE_MULTITAP_LABEL_RO NULL
#define PCE_MULTITAP_INFO_0_RO NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_RO NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_RO NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_RO NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_RO NULL
#define PCE_TURBO_DELAY_LABEL_RO NULL
#define PCE_TURBO_DELAY_INFO_0_RO NULL
#define OPTION_VAL_FAST_RO NULL
#define OPTION_VAL_MEDIUM_RO NULL
#define OPTION_VAL_SLOW_RO NULL
#define PCE_TURBO_TOGGLING_LABEL_RO NULL
#define OPTION_VAL_TOGGLE_RO NULL
#define OPTION_VAL_ALWAYS_RO NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_RO NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_RO NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_RO NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_RO NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_RO NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_RO NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_RO NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_RO NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_RO NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_RO NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_RO NULL
#define PCE_DISABLE_SOFTRESET_LABEL_RO NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_RO NULL
#define PCE_CDIMAGECACHE_LABEL_RO NULL
#define PCE_CDIMAGECACHE_INFO_0_RO NULL
#define PCE_CDBIOS_LABEL_RO NULL
#define PCE_CDBIOS_INFO_0_RO NULL
#define OPTION_VAL_GAMES_EXPRESS_RO NULL
#define OPTION_VAL_SYSTEM_CARD_1_RO NULL
#define OPTION_VAL_SYSTEM_CARD_2_RO NULL
#define OPTION_VAL_SYSTEM_CARD_3_RO NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_RO NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_RO NULL
#define PCE_ARCADECARD_LABEL_RO NULL
#define PCE_ARCADECARD_INFO_0_RO NULL
#define PCE_CDSPEED_LABEL_RO NULL
#define PCE_CDSPEED_LABEL_CAT_RO NULL
#define PCE_CDSPEED_INFO_0_RO NULL
#define PCE_ADPCMEXTRAPREC_LABEL_RO NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_RO NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_RO NULL
#define OPTION_VAL_10_BIT_RO NULL
#define OPTION_VAL_12_BIT_RO NULL
#define PCE_CDDAVOLUME_LABEL_RO NULL
#define PCE_CDDAVOLUME_LABEL_CAT_RO NULL
#define PCE_CDDAVOLUME_INFO_0_RO NULL
#define PCE_CDDAVOLUME_INFO_1_RO NULL
#define PCE_ADPCMVOLUME_LABEL_RO NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_RO NULL
#define PCE_CDPSGVOLUME_LABEL_RO NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_RO NULL
#define PCE_NOSPRITELIMIT_LABEL_RO NULL
#define PCE_NOSPRITELIMIT_INFO_0_RO NULL
#define PCE_OCMULTIPLIER_LABEL_RO NULL
#define PCE_OCMULTIPLIER_INFO_0_RO NULL

struct retro_core_option_v2_category option_cats_ro[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_RO,
      CATEGORY_VIDEO_INFO_0_RO
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_RO,
      CATEGORY_AUDIO_INFO_0_RO
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_RO,
      CATEGORY_INPUT_INFO_0_RO
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_RO,
      CATEGORY_HACKS_INFO_0_RO
   },
   {
      "cd",
      CATEGORY_CD_LABEL_RO,
      CATEGORY_CD_INFO_0_RO
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ro[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_RO,
      NULL,
      PCE_PALETTE_INFO_0_RO,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_RO },
         { "Composite", OPTION_VAL_COMPOSITE_RO },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_RO,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_RO,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_RO },
         { "6:5", OPTION_VAL_6_5_RO },
         { "4:3", OPTION_VAL_4_3_RO },
         { "uncorrected", OPTION_VAL_UNCORRECTED_RO },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_RO,
      NULL,
      /*  Is 'authorize' supposed to mean 'allow'? */
      PCE_SCALING_INFO_0_RO,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_RO },
         { "lores", OPTION_VAL_LORES_RO },
         { "hires", OPTION_VAL_HIRES_RO },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_RO,
      NULL,
      PCE_HIRES_BLEND_INFO_0_RO,
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
      PCE_H_OVERSCAN_LABEL_RO,
      NULL,
      PCE_H_OVERSCAN_INFO_0_RO,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_RO },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_RO,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_RO,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_RO },
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
      PCE_LAST_SCANLINE_LABEL_RO,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_RO,
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
         { "242", OPTION_VAL_242_RO },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_RO,
      NULL,
      PCE_PSGREVISION_INFO_0_RO,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_RO },
         { "HuC6280A", OPTION_VAL_HUC6280A_RO },
         { "auto", OPTION_VAL_AUTO_RO },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_RO,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_RO,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_RO },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_RO,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_RO,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_RO },
         { "0.250", OPTION_VAL_0_250_RO },
         { "0.375", OPTION_VAL_0_375_RO },
         { "0.500", OPTION_VAL_0_500_RO },
         { "0.625", OPTION_VAL_0_625_RO },
         { "0.750", OPTION_VAL_0_750_RO },
         { "0.875", OPTION_VAL_0_875_RO },
         { "1.000", OPTION_VAL_1_000_RO },
         { "1.125", OPTION_VAL_1_125_RO },
         { "1.25", OPTION_VAL_1_25_RO },
         { "1.50", OPTION_VAL_1_50_RO },
         { "1.75", OPTION_VAL_1_75_RO },
         { "2.00", OPTION_VAL_2_00_RO },
         { "2.25", OPTION_VAL_2_25_RO },
         { "2.50", OPTION_VAL_2_50_RO },
         { "2.75", OPTION_VAL_2_75_RO },
         { "3.00", OPTION_VAL_3_00_RO },
         { "3.25", OPTION_VAL_3_25_RO },
         { "3.50", OPTION_VAL_3_50_RO },
         { "3.75", OPTION_VAL_3_75_RO },
         { "4.00", OPTION_VAL_4_00_RO },
         { "4.25", OPTION_VAL_4_25_RO },
         { "4.50", OPTION_VAL_4_50_RO },
         { "4.75", OPTION_VAL_4_75_RO },
         { "5.00", OPTION_VAL_5_00_RO },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_RO,
      NULL,
      PCE_MULTITAP_INFO_0_RO,
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
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_RO,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_RO,
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
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_RO,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_RO,
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
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_RO,
      NULL,
      PCE_TURBO_DELAY_INFO_0_RO,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_RO },
         { "Medium", OPTION_VAL_MEDIUM_RO },
         { "Slow", OPTION_VAL_SLOW_RO },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_RO,
      NULL,
      /*  requires more explanation */
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_RO },
         { "always", OPTION_VAL_ALWAYS_RO },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_RO,
      NULL,
      /*  requires more explanation */
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
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_RO,
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
      PCE_P0_TURBO_II_ENABLE_LABEL_RO,
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
      PCE_P1_TURBO_I_ENABLE_LABEL_RO,
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
      PCE_P1_TURBO_II_ENABLE_LABEL_RO,
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
      PCE_P2_TURBO_I_ENABLE_LABEL_RO,
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
      PCE_P2_TURBO_II_ENABLE_LABEL_RO,
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
      PCE_P3_TURBO_I_ENABLE_LABEL_RO,
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
      PCE_P3_TURBO_II_ENABLE_LABEL_RO,
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
      PCE_P4_TURBO_I_ENABLE_LABEL_RO,
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
      PCE_P4_TURBO_II_ENABLE_LABEL_RO,
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
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_RO,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_RO,
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
      PCE_CDIMAGECACHE_LABEL_RO,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_RO,
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
      PCE_CDBIOS_LABEL_RO,
      NULL,
      PCE_CDBIOS_INFO_0_RO,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_RO },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_RO },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_RO },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_RO },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_RO },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_RO },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_RO,
      NULL,
      PCE_ARCADECARD_INFO_0_RO,
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
      PCE_CDSPEED_LABEL_RO,
      PCE_CDSPEED_LABEL_CAT_RO,
      PCE_CDSPEED_INFO_0_RO,
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
      PCE_ADPCMEXTRAPREC_LABEL_RO,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_RO,
      PCE_ADPCMEXTRAPREC_INFO_0_RO,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_RO },
         { "12-bit", OPTION_VAL_12_BIT_RO },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_RO,
      PCE_CDDAVOLUME_LABEL_CAT_RO,
      PCE_CDDAVOLUME_INFO_0_RO,
      PCE_CDDAVOLUME_INFO_1_RO,
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
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_RO,
      PCE_ADPCMVOLUME_LABEL_CAT_RO,
      PCE_CDDAVOLUME_INFO_0_RO,
      PCE_CDDAVOLUME_INFO_1_RO,
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
      PCE_CDPSGVOLUME_LABEL_RO,
      PCE_CDPSGVOLUME_LABEL_CAT_RO,
      PCE_CDDAVOLUME_INFO_0_RO,
      PCE_CDDAVOLUME_INFO_1_RO,
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
      PCE_NOSPRITELIMIT_LABEL_RO,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_RO,
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
      PCE_OCMULTIPLIER_LABEL_RO,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_RO,
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
struct retro_core_options_v2 options_ro = {
   option_cats_ro,
   option_defs_ro
};

/* RETRO_LANGUAGE_RU */

#define CATEGORY_VIDEO_LABEL_RU NULL
#define CATEGORY_VIDEO_INFO_0_RU NULL
#define CATEGORY_AUDIO_LABEL_RU NULL
#define CATEGORY_AUDIO_INFO_0_RU NULL
#define CATEGORY_INPUT_LABEL_RU NULL
#define CATEGORY_INPUT_INFO_0_RU NULL
#define CATEGORY_HACKS_LABEL_RU NULL
#define CATEGORY_HACKS_INFO_0_RU NULL
#define CATEGORY_CD_LABEL_RU NULL
#define CATEGORY_CD_INFO_0_RU NULL
#define PCE_PALETTE_LABEL_RU NULL
#define PCE_PALETTE_INFO_0_RU NULL
#define OPTION_VAL_RGB_RU NULL
#define OPTION_VAL_COMPOSITE_RU NULL
#define PCE_ASPECT_RATIO_LABEL_RU NULL
#define PCE_ASPECT_RATIO_INFO_0_RU NULL
#define OPTION_VAL_AUTO_RU NULL
#define OPTION_VAL_6_5_RU NULL
#define OPTION_VAL_4_3_RU NULL
#define OPTION_VAL_UNCORRECTED_RU NULL
#define PCE_SCALING_LABEL_RU NULL
#define PCE_SCALING_INFO_0_RU NULL
#define OPTION_VAL_LORES_RU NULL
#define OPTION_VAL_HIRES_RU NULL
#define PCE_HIRES_BLEND_LABEL_RU NULL
#define PCE_HIRES_BLEND_INFO_0_RU NULL
#define PCE_H_OVERSCAN_LABEL_RU NULL
#define PCE_H_OVERSCAN_INFO_0_RU NULL
#define PCE_INITIAL_SCANLINE_LABEL_RU NULL
#define PCE_INITIAL_SCANLINE_INFO_0_RU NULL
#define OPTION_VAL_3_RU NULL
#define PCE_LAST_SCANLINE_LABEL_RU NULL
#define PCE_LAST_SCANLINE_INFO_0_RU NULL
#define OPTION_VAL_242_RU NULL
#define PCE_PSGREVISION_LABEL_RU NULL
#define PCE_PSGREVISION_INFO_0_RU NULL
#define OPTION_VAL_HUC6280_RU NULL
#define OPTION_VAL_HUC6280A_RU NULL
#define PCE_RESAMP_QUALITY_LABEL_RU NULL
#define PCE_RESAMP_QUALITY_INFO_0_RU NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_RU NULL
#define PCE_MOUSE_SENSITIVITY_INFO_0_RU NULL
#define OPTION_VAL_0_125_RU NULL
#define OPTION_VAL_0_250_RU NULL
#define OPTION_VAL_0_375_RU NULL
#define OPTION_VAL_0_500_RU NULL
#define OPTION_VAL_0_625_RU NULL
#define OPTION_VAL_0_750_RU NULL
#define OPTION_VAL_0_875_RU NULL
#define OPTION_VAL_1_000_RU NULL
#define OPTION_VAL_1_125_RU NULL
#define OPTION_VAL_1_25_RU NULL
#define OPTION_VAL_1_50_RU NULL
#define OPTION_VAL_1_75_RU NULL
#define OPTION_VAL_2_00_RU NULL
#define OPTION_VAL_2_25_RU NULL
#define OPTION_VAL_2_50_RU NULL
#define OPTION_VAL_2_75_RU NULL
#define OPTION_VAL_3_00_RU NULL
#define OPTION_VAL_3_25_RU NULL
#define OPTION_VAL_3_50_RU NULL
#define OPTION_VAL_3_75_RU NULL
#define OPTION_VAL_4_00_RU NULL
#define OPTION_VAL_4_25_RU NULL
#define OPTION_VAL_4_50_RU NULL
#define OPTION_VAL_4_75_RU NULL
#define OPTION_VAL_5_00_RU NULL
#define PCE_MULTITAP_LABEL_RU NULL
#define PCE_MULTITAP_INFO_0_RU NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_RU NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_RU NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_RU NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_RU NULL
#define PCE_TURBO_DELAY_LABEL_RU NULL
#define PCE_TURBO_DELAY_INFO_0_RU NULL
#define OPTION_VAL_FAST_RU NULL
#define OPTION_VAL_MEDIUM_RU NULL
#define OPTION_VAL_SLOW_RU NULL
#define PCE_TURBO_TOGGLING_LABEL_RU NULL
#define OPTION_VAL_TOGGLE_RU NULL
#define OPTION_VAL_ALWAYS_RU NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_RU NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_RU NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_RU NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_RU NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_RU NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_RU NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_RU NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_RU NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_RU NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_RU NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_RU NULL
#define PCE_DISABLE_SOFTRESET_LABEL_RU NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_RU NULL
#define PCE_CDIMAGECACHE_LABEL_RU NULL
#define PCE_CDIMAGECACHE_INFO_0_RU NULL
#define PCE_CDBIOS_LABEL_RU NULL
#define PCE_CDBIOS_INFO_0_RU NULL
#define OPTION_VAL_GAMES_EXPRESS_RU NULL
#define OPTION_VAL_SYSTEM_CARD_1_RU NULL
#define OPTION_VAL_SYSTEM_CARD_2_RU NULL
#define OPTION_VAL_SYSTEM_CARD_3_RU NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_RU NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_RU NULL
#define PCE_ARCADECARD_LABEL_RU NULL
#define PCE_ARCADECARD_INFO_0_RU NULL
#define PCE_CDSPEED_LABEL_RU NULL
#define PCE_CDSPEED_LABEL_CAT_RU NULL
#define PCE_CDSPEED_INFO_0_RU NULL
#define PCE_ADPCMEXTRAPREC_LABEL_RU NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_RU NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_RU NULL
#define OPTION_VAL_10_BIT_RU NULL
#define OPTION_VAL_12_BIT_RU NULL
#define PCE_CDDAVOLUME_LABEL_RU NULL
#define PCE_CDDAVOLUME_LABEL_CAT_RU NULL
#define PCE_CDDAVOLUME_INFO_0_RU NULL
#define PCE_CDDAVOLUME_INFO_1_RU NULL
#define PCE_ADPCMVOLUME_LABEL_RU NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_RU NULL
#define PCE_CDPSGVOLUME_LABEL_RU NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_RU NULL
#define PCE_NOSPRITELIMIT_LABEL_RU NULL
#define PCE_NOSPRITELIMIT_INFO_0_RU NULL
#define PCE_OCMULTIPLIER_LABEL_RU NULL
#define PCE_OCMULTIPLIER_INFO_0_RU NULL

struct retro_core_option_v2_category option_cats_ru[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_RU,
      CATEGORY_VIDEO_INFO_0_RU
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_RU,
      CATEGORY_AUDIO_INFO_0_RU
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_RU,
      CATEGORY_INPUT_INFO_0_RU
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_RU,
      CATEGORY_HACKS_INFO_0_RU
   },
   {
      "cd",
      CATEGORY_CD_LABEL_RU,
      CATEGORY_CD_INFO_0_RU
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ru[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_RU,
      NULL,
      PCE_PALETTE_INFO_0_RU,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_RU },
         { "Composite", OPTION_VAL_COMPOSITE_RU },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_RU,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_RU,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_RU },
         { "6:5", OPTION_VAL_6_5_RU },
         { "4:3", OPTION_VAL_4_3_RU },
         { "uncorrected", OPTION_VAL_UNCORRECTED_RU },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_RU,
      NULL,
      /*  Is 'authorize' supposed to mean 'allow'? */
      PCE_SCALING_INFO_0_RU,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_RU },
         { "lores", OPTION_VAL_LORES_RU },
         { "hires", OPTION_VAL_HIRES_RU },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_RU,
      NULL,
      PCE_HIRES_BLEND_INFO_0_RU,
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
      PCE_H_OVERSCAN_LABEL_RU,
      NULL,
      PCE_H_OVERSCAN_INFO_0_RU,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_RU },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_RU,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_RU,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_RU },
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
      PCE_LAST_SCANLINE_LABEL_RU,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_RU,
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
         { "242", OPTION_VAL_242_RU },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_RU,
      NULL,
      PCE_PSGREVISION_INFO_0_RU,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_RU },
         { "HuC6280A", OPTION_VAL_HUC6280A_RU },
         { "auto", OPTION_VAL_AUTO_RU },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_RU,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_RU,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_RU },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_RU,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_RU,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_RU },
         { "0.250", OPTION_VAL_0_250_RU },
         { "0.375", OPTION_VAL_0_375_RU },
         { "0.500", OPTION_VAL_0_500_RU },
         { "0.625", OPTION_VAL_0_625_RU },
         { "0.750", OPTION_VAL_0_750_RU },
         { "0.875", OPTION_VAL_0_875_RU },
         { "1.000", OPTION_VAL_1_000_RU },
         { "1.125", OPTION_VAL_1_125_RU },
         { "1.25", OPTION_VAL_1_25_RU },
         { "1.50", OPTION_VAL_1_50_RU },
         { "1.75", OPTION_VAL_1_75_RU },
         { "2.00", OPTION_VAL_2_00_RU },
         { "2.25", OPTION_VAL_2_25_RU },
         { "2.50", OPTION_VAL_2_50_RU },
         { "2.75", OPTION_VAL_2_75_RU },
         { "3.00", OPTION_VAL_3_00_RU },
         { "3.25", OPTION_VAL_3_25_RU },
         { "3.50", OPTION_VAL_3_50_RU },
         { "3.75", OPTION_VAL_3_75_RU },
         { "4.00", OPTION_VAL_4_00_RU },
         { "4.25", OPTION_VAL_4_25_RU },
         { "4.50", OPTION_VAL_4_50_RU },
         { "4.75", OPTION_VAL_4_75_RU },
         { "5.00", OPTION_VAL_5_00_RU },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_RU,
      NULL,
      PCE_MULTITAP_INFO_0_RU,
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
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_RU,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_RU,
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
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_RU,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_RU,
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
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_RU,
      NULL,
      PCE_TURBO_DELAY_INFO_0_RU,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_RU },
         { "Medium", OPTION_VAL_MEDIUM_RU },
         { "Slow", OPTION_VAL_SLOW_RU },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_RU,
      NULL,
      /*  requires more explanation */
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_RU },
         { "always", OPTION_VAL_ALWAYS_RU },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_RU,
      NULL,
      /*  requires more explanation */
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
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_RU,
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
      PCE_P0_TURBO_II_ENABLE_LABEL_RU,
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
      PCE_P1_TURBO_I_ENABLE_LABEL_RU,
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
      PCE_P1_TURBO_II_ENABLE_LABEL_RU,
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
      PCE_P2_TURBO_I_ENABLE_LABEL_RU,
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
      PCE_P2_TURBO_II_ENABLE_LABEL_RU,
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
      PCE_P3_TURBO_I_ENABLE_LABEL_RU,
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
      PCE_P3_TURBO_II_ENABLE_LABEL_RU,
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
      PCE_P4_TURBO_I_ENABLE_LABEL_RU,
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
      PCE_P4_TURBO_II_ENABLE_LABEL_RU,
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
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_RU,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_RU,
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
      PCE_CDIMAGECACHE_LABEL_RU,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_RU,
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
      PCE_CDBIOS_LABEL_RU,
      NULL,
      PCE_CDBIOS_INFO_0_RU,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_RU },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_RU },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_RU },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_RU },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_RU },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_RU },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_RU,
      NULL,
      PCE_ARCADECARD_INFO_0_RU,
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
      PCE_CDSPEED_LABEL_RU,
      PCE_CDSPEED_LABEL_CAT_RU,
      PCE_CDSPEED_INFO_0_RU,
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
      PCE_ADPCMEXTRAPREC_LABEL_RU,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_RU,
      PCE_ADPCMEXTRAPREC_INFO_0_RU,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_RU },
         { "12-bit", OPTION_VAL_12_BIT_RU },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_RU,
      PCE_CDDAVOLUME_LABEL_CAT_RU,
      PCE_CDDAVOLUME_INFO_0_RU,
      PCE_CDDAVOLUME_INFO_1_RU,
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
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_RU,
      PCE_ADPCMVOLUME_LABEL_CAT_RU,
      PCE_CDDAVOLUME_INFO_0_RU,
      PCE_CDDAVOLUME_INFO_1_RU,
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
      PCE_CDPSGVOLUME_LABEL_RU,
      PCE_CDPSGVOLUME_LABEL_CAT_RU,
      PCE_CDDAVOLUME_INFO_0_RU,
      PCE_CDDAVOLUME_INFO_1_RU,
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
      PCE_NOSPRITELIMIT_LABEL_RU,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_RU,
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
      PCE_OCMULTIPLIER_LABEL_RU,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_RU,
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
struct retro_core_options_v2 options_ru = {
   option_cats_ru,
   option_defs_ru
};

/* RETRO_LANGUAGE_SI */

#define CATEGORY_VIDEO_LABEL_SI NULL
#define CATEGORY_VIDEO_INFO_0_SI NULL
#define CATEGORY_AUDIO_LABEL_SI NULL
#define CATEGORY_AUDIO_INFO_0_SI NULL
#define CATEGORY_INPUT_LABEL_SI NULL
#define CATEGORY_INPUT_INFO_0_SI NULL
#define CATEGORY_HACKS_LABEL_SI NULL
#define CATEGORY_HACKS_INFO_0_SI NULL
#define CATEGORY_CD_LABEL_SI NULL
#define CATEGORY_CD_INFO_0_SI NULL
#define PCE_PALETTE_LABEL_SI NULL
#define PCE_PALETTE_INFO_0_SI NULL
#define OPTION_VAL_RGB_SI NULL
#define OPTION_VAL_COMPOSITE_SI NULL
#define PCE_ASPECT_RATIO_LABEL_SI NULL
#define PCE_ASPECT_RATIO_INFO_0_SI NULL
#define OPTION_VAL_AUTO_SI NULL
#define OPTION_VAL_6_5_SI NULL
#define OPTION_VAL_4_3_SI NULL
#define OPTION_VAL_UNCORRECTED_SI NULL
#define PCE_SCALING_LABEL_SI NULL
#define PCE_SCALING_INFO_0_SI NULL
#define OPTION_VAL_LORES_SI NULL
#define OPTION_VAL_HIRES_SI NULL
#define PCE_HIRES_BLEND_LABEL_SI NULL
#define PCE_HIRES_BLEND_INFO_0_SI NULL
#define PCE_H_OVERSCAN_LABEL_SI NULL
#define PCE_H_OVERSCAN_INFO_0_SI NULL
#define PCE_INITIAL_SCANLINE_LABEL_SI NULL
#define PCE_INITIAL_SCANLINE_INFO_0_SI NULL
#define OPTION_VAL_3_SI NULL
#define PCE_LAST_SCANLINE_LABEL_SI NULL
#define PCE_LAST_SCANLINE_INFO_0_SI NULL
#define OPTION_VAL_242_SI NULL
#define PCE_PSGREVISION_LABEL_SI NULL
#define PCE_PSGREVISION_INFO_0_SI NULL
#define OPTION_VAL_HUC6280_SI NULL
#define OPTION_VAL_HUC6280A_SI NULL
#define PCE_RESAMP_QUALITY_LABEL_SI NULL
#define PCE_RESAMP_QUALITY_INFO_0_SI NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_SI NULL
#define PCE_MOUSE_SENSITIVITY_INFO_0_SI NULL
#define OPTION_VAL_0_125_SI NULL
#define OPTION_VAL_0_250_SI NULL
#define OPTION_VAL_0_375_SI NULL
#define OPTION_VAL_0_500_SI NULL
#define OPTION_VAL_0_625_SI NULL
#define OPTION_VAL_0_750_SI NULL
#define OPTION_VAL_0_875_SI NULL
#define OPTION_VAL_1_000_SI NULL
#define OPTION_VAL_1_125_SI NULL
#define OPTION_VAL_1_25_SI NULL
#define OPTION_VAL_1_50_SI NULL
#define OPTION_VAL_1_75_SI NULL
#define OPTION_VAL_2_00_SI NULL
#define OPTION_VAL_2_25_SI NULL
#define OPTION_VAL_2_50_SI NULL
#define OPTION_VAL_2_75_SI NULL
#define OPTION_VAL_3_00_SI NULL
#define OPTION_VAL_3_25_SI NULL
#define OPTION_VAL_3_50_SI NULL
#define OPTION_VAL_3_75_SI NULL
#define OPTION_VAL_4_00_SI NULL
#define OPTION_VAL_4_25_SI NULL
#define OPTION_VAL_4_50_SI NULL
#define OPTION_VAL_4_75_SI NULL
#define OPTION_VAL_5_00_SI NULL
#define PCE_MULTITAP_LABEL_SI NULL
#define PCE_MULTITAP_INFO_0_SI NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_SI NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_SI NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_SI NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_SI NULL
#define PCE_TURBO_DELAY_LABEL_SI NULL
#define PCE_TURBO_DELAY_INFO_0_SI NULL
#define OPTION_VAL_FAST_SI NULL
#define OPTION_VAL_MEDIUM_SI NULL
#define OPTION_VAL_SLOW_SI NULL
#define PCE_TURBO_TOGGLING_LABEL_SI NULL
#define OPTION_VAL_TOGGLE_SI NULL
#define OPTION_VAL_ALWAYS_SI NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_SI NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_SI NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_SI NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_SI NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_SI NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_SI NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_SI NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_SI NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_SI NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_SI NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_SI NULL
#define PCE_DISABLE_SOFTRESET_LABEL_SI NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_SI NULL
#define PCE_CDIMAGECACHE_LABEL_SI NULL
#define PCE_CDIMAGECACHE_INFO_0_SI NULL
#define PCE_CDBIOS_LABEL_SI NULL
#define PCE_CDBIOS_INFO_0_SI NULL
#define OPTION_VAL_GAMES_EXPRESS_SI NULL
#define OPTION_VAL_SYSTEM_CARD_1_SI NULL
#define OPTION_VAL_SYSTEM_CARD_2_SI NULL
#define OPTION_VAL_SYSTEM_CARD_3_SI NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_SI NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_SI NULL
#define PCE_ARCADECARD_LABEL_SI NULL
#define PCE_ARCADECARD_INFO_0_SI NULL
#define PCE_CDSPEED_LABEL_SI NULL
#define PCE_CDSPEED_LABEL_CAT_SI NULL
#define PCE_CDSPEED_INFO_0_SI NULL
#define PCE_ADPCMEXTRAPREC_LABEL_SI NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_SI NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_SI NULL
#define OPTION_VAL_10_BIT_SI NULL
#define OPTION_VAL_12_BIT_SI NULL
#define PCE_CDDAVOLUME_LABEL_SI NULL
#define PCE_CDDAVOLUME_LABEL_CAT_SI NULL
#define PCE_CDDAVOLUME_INFO_0_SI NULL
#define PCE_CDDAVOLUME_INFO_1_SI NULL
#define PCE_ADPCMVOLUME_LABEL_SI NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_SI NULL
#define PCE_CDPSGVOLUME_LABEL_SI NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_SI NULL
#define PCE_NOSPRITELIMIT_LABEL_SI NULL
#define PCE_NOSPRITELIMIT_INFO_0_SI NULL
#define PCE_OCMULTIPLIER_LABEL_SI NULL
#define PCE_OCMULTIPLIER_INFO_0_SI NULL

struct retro_core_option_v2_category option_cats_si[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_SI,
      CATEGORY_VIDEO_INFO_0_SI
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_SI,
      CATEGORY_AUDIO_INFO_0_SI
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_SI,
      CATEGORY_INPUT_INFO_0_SI
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_SI,
      CATEGORY_HACKS_INFO_0_SI
   },
   {
      "cd",
      CATEGORY_CD_LABEL_SI,
      CATEGORY_CD_INFO_0_SI
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_si[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_SI,
      NULL,
      PCE_PALETTE_INFO_0_SI,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_SI },
         { "Composite", OPTION_VAL_COMPOSITE_SI },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_SI,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_SI,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_SI },
         { "6:5", OPTION_VAL_6_5_SI },
         { "4:3", OPTION_VAL_4_3_SI },
         { "uncorrected", OPTION_VAL_UNCORRECTED_SI },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_SI,
      NULL,
      /*  Is 'authorize' supposed to mean 'allow'? */
      PCE_SCALING_INFO_0_SI,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_SI },
         { "lores", OPTION_VAL_LORES_SI },
         { "hires", OPTION_VAL_HIRES_SI },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_SI,
      NULL,
      PCE_HIRES_BLEND_INFO_0_SI,
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
      PCE_H_OVERSCAN_LABEL_SI,
      NULL,
      PCE_H_OVERSCAN_INFO_0_SI,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_SI },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_SI,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_SI,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_SI },
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
      PCE_LAST_SCANLINE_LABEL_SI,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_SI,
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
         { "242", OPTION_VAL_242_SI },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_SI,
      NULL,
      PCE_PSGREVISION_INFO_0_SI,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_SI },
         { "HuC6280A", OPTION_VAL_HUC6280A_SI },
         { "auto", OPTION_VAL_AUTO_SI },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_SI,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_SI,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_SI },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_SI,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_SI,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_SI },
         { "0.250", OPTION_VAL_0_250_SI },
         { "0.375", OPTION_VAL_0_375_SI },
         { "0.500", OPTION_VAL_0_500_SI },
         { "0.625", OPTION_VAL_0_625_SI },
         { "0.750", OPTION_VAL_0_750_SI },
         { "0.875", OPTION_VAL_0_875_SI },
         { "1.000", OPTION_VAL_1_000_SI },
         { "1.125", OPTION_VAL_1_125_SI },
         { "1.25", OPTION_VAL_1_25_SI },
         { "1.50", OPTION_VAL_1_50_SI },
         { "1.75", OPTION_VAL_1_75_SI },
         { "2.00", OPTION_VAL_2_00_SI },
         { "2.25", OPTION_VAL_2_25_SI },
         { "2.50", OPTION_VAL_2_50_SI },
         { "2.75", OPTION_VAL_2_75_SI },
         { "3.00", OPTION_VAL_3_00_SI },
         { "3.25", OPTION_VAL_3_25_SI },
         { "3.50", OPTION_VAL_3_50_SI },
         { "3.75", OPTION_VAL_3_75_SI },
         { "4.00", OPTION_VAL_4_00_SI },
         { "4.25", OPTION_VAL_4_25_SI },
         { "4.50", OPTION_VAL_4_50_SI },
         { "4.75", OPTION_VAL_4_75_SI },
         { "5.00", OPTION_VAL_5_00_SI },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_SI,
      NULL,
      PCE_MULTITAP_INFO_0_SI,
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
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_SI,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_SI,
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
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_SI,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_SI,
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
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_SI,
      NULL,
      PCE_TURBO_DELAY_INFO_0_SI,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_SI },
         { "Medium", OPTION_VAL_MEDIUM_SI },
         { "Slow", OPTION_VAL_SLOW_SI },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_SI,
      NULL,
      /*  requires more explanation */
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_SI },
         { "always", OPTION_VAL_ALWAYS_SI },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_SI,
      NULL,
      /*  requires more explanation */
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
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_SI,
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
      PCE_P0_TURBO_II_ENABLE_LABEL_SI,
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
      PCE_P1_TURBO_I_ENABLE_LABEL_SI,
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
      PCE_P1_TURBO_II_ENABLE_LABEL_SI,
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
      PCE_P2_TURBO_I_ENABLE_LABEL_SI,
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
      PCE_P2_TURBO_II_ENABLE_LABEL_SI,
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
      PCE_P3_TURBO_I_ENABLE_LABEL_SI,
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
      PCE_P3_TURBO_II_ENABLE_LABEL_SI,
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
      PCE_P4_TURBO_I_ENABLE_LABEL_SI,
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
      PCE_P4_TURBO_II_ENABLE_LABEL_SI,
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
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_SI,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_SI,
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
      PCE_CDIMAGECACHE_LABEL_SI,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_SI,
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
      PCE_CDBIOS_LABEL_SI,
      NULL,
      PCE_CDBIOS_INFO_0_SI,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_SI },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_SI },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_SI },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_SI },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_SI },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_SI },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_SI,
      NULL,
      PCE_ARCADECARD_INFO_0_SI,
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
      PCE_CDSPEED_LABEL_SI,
      PCE_CDSPEED_LABEL_CAT_SI,
      PCE_CDSPEED_INFO_0_SI,
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
      PCE_ADPCMEXTRAPREC_LABEL_SI,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_SI,
      PCE_ADPCMEXTRAPREC_INFO_0_SI,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_SI },
         { "12-bit", OPTION_VAL_12_BIT_SI },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_SI,
      PCE_CDDAVOLUME_LABEL_CAT_SI,
      PCE_CDDAVOLUME_INFO_0_SI,
      PCE_CDDAVOLUME_INFO_1_SI,
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
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_SI,
      PCE_ADPCMVOLUME_LABEL_CAT_SI,
      PCE_CDDAVOLUME_INFO_0_SI,
      PCE_CDDAVOLUME_INFO_1_SI,
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
      PCE_CDPSGVOLUME_LABEL_SI,
      PCE_CDPSGVOLUME_LABEL_CAT_SI,
      PCE_CDDAVOLUME_INFO_0_SI,
      PCE_CDDAVOLUME_INFO_1_SI,
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
      PCE_NOSPRITELIMIT_LABEL_SI,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_SI,
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
      PCE_OCMULTIPLIER_LABEL_SI,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_SI,
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
struct retro_core_options_v2 options_si = {
   option_cats_si,
   option_defs_si
};

/* RETRO_LANGUAGE_SK */

#define CATEGORY_VIDEO_LABEL_SK NULL
#define CATEGORY_VIDEO_INFO_0_SK NULL
#define CATEGORY_AUDIO_LABEL_SK NULL
#define CATEGORY_AUDIO_INFO_0_SK NULL
#define CATEGORY_INPUT_LABEL_SK NULL
#define CATEGORY_INPUT_INFO_0_SK NULL
#define CATEGORY_HACKS_LABEL_SK NULL
#define CATEGORY_HACKS_INFO_0_SK NULL
#define CATEGORY_CD_LABEL_SK NULL
#define CATEGORY_CD_INFO_0_SK NULL
#define PCE_PALETTE_LABEL_SK NULL
#define PCE_PALETTE_INFO_0_SK NULL
#define OPTION_VAL_RGB_SK NULL
#define OPTION_VAL_COMPOSITE_SK NULL
#define PCE_ASPECT_RATIO_LABEL_SK NULL
#define PCE_ASPECT_RATIO_INFO_0_SK NULL
#define OPTION_VAL_AUTO_SK NULL
#define OPTION_VAL_6_5_SK NULL
#define OPTION_VAL_4_3_SK NULL
#define OPTION_VAL_UNCORRECTED_SK NULL
#define PCE_SCALING_LABEL_SK NULL
#define PCE_SCALING_INFO_0_SK NULL
#define OPTION_VAL_LORES_SK NULL
#define OPTION_VAL_HIRES_SK NULL
#define PCE_HIRES_BLEND_LABEL_SK NULL
#define PCE_HIRES_BLEND_INFO_0_SK NULL
#define PCE_H_OVERSCAN_LABEL_SK NULL
#define PCE_H_OVERSCAN_INFO_0_SK NULL
#define PCE_INITIAL_SCANLINE_LABEL_SK NULL
#define PCE_INITIAL_SCANLINE_INFO_0_SK NULL
#define OPTION_VAL_3_SK NULL
#define PCE_LAST_SCANLINE_LABEL_SK NULL
#define PCE_LAST_SCANLINE_INFO_0_SK NULL
#define OPTION_VAL_242_SK NULL
#define PCE_PSGREVISION_LABEL_SK NULL
#define PCE_PSGREVISION_INFO_0_SK NULL
#define OPTION_VAL_HUC6280_SK NULL
#define OPTION_VAL_HUC6280A_SK NULL
#define PCE_RESAMP_QUALITY_LABEL_SK NULL
#define PCE_RESAMP_QUALITY_INFO_0_SK NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_SK NULL
#define PCE_MOUSE_SENSITIVITY_INFO_0_SK NULL
#define OPTION_VAL_0_125_SK NULL
#define OPTION_VAL_0_250_SK NULL
#define OPTION_VAL_0_375_SK NULL
#define OPTION_VAL_0_500_SK NULL
#define OPTION_VAL_0_625_SK NULL
#define OPTION_VAL_0_750_SK NULL
#define OPTION_VAL_0_875_SK NULL
#define OPTION_VAL_1_000_SK NULL
#define OPTION_VAL_1_125_SK NULL
#define OPTION_VAL_1_25_SK NULL
#define OPTION_VAL_1_50_SK NULL
#define OPTION_VAL_1_75_SK NULL
#define OPTION_VAL_2_00_SK NULL
#define OPTION_VAL_2_25_SK NULL
#define OPTION_VAL_2_50_SK NULL
#define OPTION_VAL_2_75_SK NULL
#define OPTION_VAL_3_00_SK NULL
#define OPTION_VAL_3_25_SK NULL
#define OPTION_VAL_3_50_SK NULL
#define OPTION_VAL_3_75_SK NULL
#define OPTION_VAL_4_00_SK NULL
#define OPTION_VAL_4_25_SK NULL
#define OPTION_VAL_4_50_SK NULL
#define OPTION_VAL_4_75_SK NULL
#define OPTION_VAL_5_00_SK NULL
#define PCE_MULTITAP_LABEL_SK NULL
#define PCE_MULTITAP_INFO_0_SK NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_SK NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_SK NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_SK NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_SK NULL
#define PCE_TURBO_DELAY_LABEL_SK NULL
#define PCE_TURBO_DELAY_INFO_0_SK NULL
#define OPTION_VAL_FAST_SK NULL
#define OPTION_VAL_MEDIUM_SK NULL
#define OPTION_VAL_SLOW_SK NULL
#define PCE_TURBO_TOGGLING_LABEL_SK NULL
#define OPTION_VAL_TOGGLE_SK NULL
#define OPTION_VAL_ALWAYS_SK NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_SK NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_SK NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_SK NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_SK NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_SK NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_SK NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_SK NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_SK NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_SK NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_SK NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_SK NULL
#define PCE_DISABLE_SOFTRESET_LABEL_SK NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_SK NULL
#define PCE_CDIMAGECACHE_LABEL_SK NULL
#define PCE_CDIMAGECACHE_INFO_0_SK NULL
#define PCE_CDBIOS_LABEL_SK NULL
#define PCE_CDBIOS_INFO_0_SK NULL
#define OPTION_VAL_GAMES_EXPRESS_SK NULL
#define OPTION_VAL_SYSTEM_CARD_1_SK NULL
#define OPTION_VAL_SYSTEM_CARD_2_SK NULL
#define OPTION_VAL_SYSTEM_CARD_3_SK NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_SK NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_SK NULL
#define PCE_ARCADECARD_LABEL_SK NULL
#define PCE_ARCADECARD_INFO_0_SK NULL
#define PCE_CDSPEED_LABEL_SK NULL
#define PCE_CDSPEED_LABEL_CAT_SK NULL
#define PCE_CDSPEED_INFO_0_SK NULL
#define PCE_ADPCMEXTRAPREC_LABEL_SK NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_SK NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_SK NULL
#define OPTION_VAL_10_BIT_SK NULL
#define OPTION_VAL_12_BIT_SK NULL
#define PCE_CDDAVOLUME_LABEL_SK NULL
#define PCE_CDDAVOLUME_LABEL_CAT_SK NULL
#define PCE_CDDAVOLUME_INFO_0_SK NULL
#define PCE_CDDAVOLUME_INFO_1_SK NULL
#define PCE_ADPCMVOLUME_LABEL_SK NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_SK NULL
#define PCE_CDPSGVOLUME_LABEL_SK NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_SK NULL
#define PCE_NOSPRITELIMIT_LABEL_SK NULL
#define PCE_NOSPRITELIMIT_INFO_0_SK NULL
#define PCE_OCMULTIPLIER_LABEL_SK NULL
#define PCE_OCMULTIPLIER_INFO_0_SK NULL

struct retro_core_option_v2_category option_cats_sk[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_SK,
      CATEGORY_VIDEO_INFO_0_SK
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_SK,
      CATEGORY_AUDIO_INFO_0_SK
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_SK,
      CATEGORY_INPUT_INFO_0_SK
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_SK,
      CATEGORY_HACKS_INFO_0_SK
   },
   {
      "cd",
      CATEGORY_CD_LABEL_SK,
      CATEGORY_CD_INFO_0_SK
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_sk[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_SK,
      NULL,
      PCE_PALETTE_INFO_0_SK,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_SK },
         { "Composite", OPTION_VAL_COMPOSITE_SK },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_SK,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_SK,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_SK },
         { "6:5", OPTION_VAL_6_5_SK },
         { "4:3", OPTION_VAL_4_3_SK },
         { "uncorrected", OPTION_VAL_UNCORRECTED_SK },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_SK,
      NULL,
      /*  Is 'authorize' supposed to mean 'allow'? */
      PCE_SCALING_INFO_0_SK,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_SK },
         { "lores", OPTION_VAL_LORES_SK },
         { "hires", OPTION_VAL_HIRES_SK },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_SK,
      NULL,
      PCE_HIRES_BLEND_INFO_0_SK,
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
      PCE_H_OVERSCAN_LABEL_SK,
      NULL,
      PCE_H_OVERSCAN_INFO_0_SK,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_SK },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_SK,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_SK,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_SK },
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
      PCE_LAST_SCANLINE_LABEL_SK,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_SK,
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
         { "242", OPTION_VAL_242_SK },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_SK,
      NULL,
      PCE_PSGREVISION_INFO_0_SK,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_SK },
         { "HuC6280A", OPTION_VAL_HUC6280A_SK },
         { "auto", OPTION_VAL_AUTO_SK },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_SK,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_SK,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_SK },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_SK,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_SK,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_SK },
         { "0.250", OPTION_VAL_0_250_SK },
         { "0.375", OPTION_VAL_0_375_SK },
         { "0.500", OPTION_VAL_0_500_SK },
         { "0.625", OPTION_VAL_0_625_SK },
         { "0.750", OPTION_VAL_0_750_SK },
         { "0.875", OPTION_VAL_0_875_SK },
         { "1.000", OPTION_VAL_1_000_SK },
         { "1.125", OPTION_VAL_1_125_SK },
         { "1.25", OPTION_VAL_1_25_SK },
         { "1.50", OPTION_VAL_1_50_SK },
         { "1.75", OPTION_VAL_1_75_SK },
         { "2.00", OPTION_VAL_2_00_SK },
         { "2.25", OPTION_VAL_2_25_SK },
         { "2.50", OPTION_VAL_2_50_SK },
         { "2.75", OPTION_VAL_2_75_SK },
         { "3.00", OPTION_VAL_3_00_SK },
         { "3.25", OPTION_VAL_3_25_SK },
         { "3.50", OPTION_VAL_3_50_SK },
         { "3.75", OPTION_VAL_3_75_SK },
         { "4.00", OPTION_VAL_4_00_SK },
         { "4.25", OPTION_VAL_4_25_SK },
         { "4.50", OPTION_VAL_4_50_SK },
         { "4.75", OPTION_VAL_4_75_SK },
         { "5.00", OPTION_VAL_5_00_SK },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_SK,
      NULL,
      PCE_MULTITAP_INFO_0_SK,
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
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_SK,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_SK,
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
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_SK,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_SK,
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
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_SK,
      NULL,
      PCE_TURBO_DELAY_INFO_0_SK,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_SK },
         { "Medium", OPTION_VAL_MEDIUM_SK },
         { "Slow", OPTION_VAL_SLOW_SK },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_SK,
      NULL,
      /*  requires more explanation */
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_SK },
         { "always", OPTION_VAL_ALWAYS_SK },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_SK,
      NULL,
      /*  requires more explanation */
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
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_SK,
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
      PCE_P0_TURBO_II_ENABLE_LABEL_SK,
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
      PCE_P1_TURBO_I_ENABLE_LABEL_SK,
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
      PCE_P1_TURBO_II_ENABLE_LABEL_SK,
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
      PCE_P2_TURBO_I_ENABLE_LABEL_SK,
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
      PCE_P2_TURBO_II_ENABLE_LABEL_SK,
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
      PCE_P3_TURBO_I_ENABLE_LABEL_SK,
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
      PCE_P3_TURBO_II_ENABLE_LABEL_SK,
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
      PCE_P4_TURBO_I_ENABLE_LABEL_SK,
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
      PCE_P4_TURBO_II_ENABLE_LABEL_SK,
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
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_SK,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_SK,
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
      PCE_CDIMAGECACHE_LABEL_SK,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_SK,
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
      PCE_CDBIOS_LABEL_SK,
      NULL,
      PCE_CDBIOS_INFO_0_SK,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_SK },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_SK },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_SK },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_SK },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_SK },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_SK },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_SK,
      NULL,
      PCE_ARCADECARD_INFO_0_SK,
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
      PCE_CDSPEED_LABEL_SK,
      PCE_CDSPEED_LABEL_CAT_SK,
      PCE_CDSPEED_INFO_0_SK,
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
      PCE_ADPCMEXTRAPREC_LABEL_SK,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_SK,
      PCE_ADPCMEXTRAPREC_INFO_0_SK,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_SK },
         { "12-bit", OPTION_VAL_12_BIT_SK },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_SK,
      PCE_CDDAVOLUME_LABEL_CAT_SK,
      PCE_CDDAVOLUME_INFO_0_SK,
      PCE_CDDAVOLUME_INFO_1_SK,
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
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_SK,
      PCE_ADPCMVOLUME_LABEL_CAT_SK,
      PCE_CDDAVOLUME_INFO_0_SK,
      PCE_CDDAVOLUME_INFO_1_SK,
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
      PCE_CDPSGVOLUME_LABEL_SK,
      PCE_CDPSGVOLUME_LABEL_CAT_SK,
      PCE_CDDAVOLUME_INFO_0_SK,
      PCE_CDDAVOLUME_INFO_1_SK,
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
      PCE_NOSPRITELIMIT_LABEL_SK,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_SK,
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
      PCE_OCMULTIPLIER_LABEL_SK,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_SK,
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
struct retro_core_options_v2 options_sk = {
   option_cats_sk,
   option_defs_sk
};

/* RETRO_LANGUAGE_SR */

#define CATEGORY_VIDEO_LABEL_SR NULL
#define CATEGORY_VIDEO_INFO_0_SR NULL
#define CATEGORY_AUDIO_LABEL_SR NULL
#define CATEGORY_AUDIO_INFO_0_SR NULL
#define CATEGORY_INPUT_LABEL_SR NULL
#define CATEGORY_INPUT_INFO_0_SR NULL
#define CATEGORY_HACKS_LABEL_SR NULL
#define CATEGORY_HACKS_INFO_0_SR NULL
#define CATEGORY_CD_LABEL_SR NULL
#define CATEGORY_CD_INFO_0_SR NULL
#define PCE_PALETTE_LABEL_SR NULL
#define PCE_PALETTE_INFO_0_SR NULL
#define OPTION_VAL_RGB_SR NULL
#define OPTION_VAL_COMPOSITE_SR NULL
#define PCE_ASPECT_RATIO_LABEL_SR NULL
#define PCE_ASPECT_RATIO_INFO_0_SR NULL
#define OPTION_VAL_AUTO_SR NULL
#define OPTION_VAL_6_5_SR NULL
#define OPTION_VAL_4_3_SR NULL
#define OPTION_VAL_UNCORRECTED_SR NULL
#define PCE_SCALING_LABEL_SR NULL
#define PCE_SCALING_INFO_0_SR NULL
#define OPTION_VAL_LORES_SR NULL
#define OPTION_VAL_HIRES_SR NULL
#define PCE_HIRES_BLEND_LABEL_SR NULL
#define PCE_HIRES_BLEND_INFO_0_SR NULL
#define PCE_H_OVERSCAN_LABEL_SR NULL
#define PCE_H_OVERSCAN_INFO_0_SR NULL
#define PCE_INITIAL_SCANLINE_LABEL_SR NULL
#define PCE_INITIAL_SCANLINE_INFO_0_SR NULL
#define OPTION_VAL_3_SR NULL
#define PCE_LAST_SCANLINE_LABEL_SR NULL
#define PCE_LAST_SCANLINE_INFO_0_SR NULL
#define OPTION_VAL_242_SR NULL
#define PCE_PSGREVISION_LABEL_SR NULL
#define PCE_PSGREVISION_INFO_0_SR NULL
#define OPTION_VAL_HUC6280_SR NULL
#define OPTION_VAL_HUC6280A_SR NULL
#define PCE_RESAMP_QUALITY_LABEL_SR NULL
#define PCE_RESAMP_QUALITY_INFO_0_SR NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_SR NULL
#define PCE_MOUSE_SENSITIVITY_INFO_0_SR NULL
#define OPTION_VAL_0_125_SR NULL
#define OPTION_VAL_0_250_SR NULL
#define OPTION_VAL_0_375_SR NULL
#define OPTION_VAL_0_500_SR NULL
#define OPTION_VAL_0_625_SR NULL
#define OPTION_VAL_0_750_SR NULL
#define OPTION_VAL_0_875_SR NULL
#define OPTION_VAL_1_000_SR NULL
#define OPTION_VAL_1_125_SR NULL
#define OPTION_VAL_1_25_SR NULL
#define OPTION_VAL_1_50_SR NULL
#define OPTION_VAL_1_75_SR NULL
#define OPTION_VAL_2_00_SR NULL
#define OPTION_VAL_2_25_SR NULL
#define OPTION_VAL_2_50_SR NULL
#define OPTION_VAL_2_75_SR NULL
#define OPTION_VAL_3_00_SR NULL
#define OPTION_VAL_3_25_SR NULL
#define OPTION_VAL_3_50_SR NULL
#define OPTION_VAL_3_75_SR NULL
#define OPTION_VAL_4_00_SR NULL
#define OPTION_VAL_4_25_SR NULL
#define OPTION_VAL_4_50_SR NULL
#define OPTION_VAL_4_75_SR NULL
#define OPTION_VAL_5_00_SR NULL
#define PCE_MULTITAP_LABEL_SR NULL
#define PCE_MULTITAP_INFO_0_SR NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_SR NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_SR NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_SR NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_SR NULL
#define PCE_TURBO_DELAY_LABEL_SR NULL
#define PCE_TURBO_DELAY_INFO_0_SR NULL
#define OPTION_VAL_FAST_SR NULL
#define OPTION_VAL_MEDIUM_SR NULL
#define OPTION_VAL_SLOW_SR NULL
#define PCE_TURBO_TOGGLING_LABEL_SR NULL
#define OPTION_VAL_TOGGLE_SR NULL
#define OPTION_VAL_ALWAYS_SR NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_SR NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_SR NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_SR NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_SR NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_SR NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_SR NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_SR NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_SR NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_SR NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_SR NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_SR NULL
#define PCE_DISABLE_SOFTRESET_LABEL_SR NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_SR NULL
#define PCE_CDIMAGECACHE_LABEL_SR NULL
#define PCE_CDIMAGECACHE_INFO_0_SR NULL
#define PCE_CDBIOS_LABEL_SR NULL
#define PCE_CDBIOS_INFO_0_SR NULL
#define OPTION_VAL_GAMES_EXPRESS_SR NULL
#define OPTION_VAL_SYSTEM_CARD_1_SR NULL
#define OPTION_VAL_SYSTEM_CARD_2_SR NULL
#define OPTION_VAL_SYSTEM_CARD_3_SR NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_SR NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_SR NULL
#define PCE_ARCADECARD_LABEL_SR NULL
#define PCE_ARCADECARD_INFO_0_SR NULL
#define PCE_CDSPEED_LABEL_SR NULL
#define PCE_CDSPEED_LABEL_CAT_SR NULL
#define PCE_CDSPEED_INFO_0_SR NULL
#define PCE_ADPCMEXTRAPREC_LABEL_SR NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_SR NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_SR NULL
#define OPTION_VAL_10_BIT_SR NULL
#define OPTION_VAL_12_BIT_SR NULL
#define PCE_CDDAVOLUME_LABEL_SR NULL
#define PCE_CDDAVOLUME_LABEL_CAT_SR NULL
#define PCE_CDDAVOLUME_INFO_0_SR NULL
#define PCE_CDDAVOLUME_INFO_1_SR NULL
#define PCE_ADPCMVOLUME_LABEL_SR NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_SR NULL
#define PCE_CDPSGVOLUME_LABEL_SR NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_SR NULL
#define PCE_NOSPRITELIMIT_LABEL_SR NULL
#define PCE_NOSPRITELIMIT_INFO_0_SR NULL
#define PCE_OCMULTIPLIER_LABEL_SR NULL
#define PCE_OCMULTIPLIER_INFO_0_SR NULL

struct retro_core_option_v2_category option_cats_sr[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_SR,
      CATEGORY_VIDEO_INFO_0_SR
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_SR,
      CATEGORY_AUDIO_INFO_0_SR
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_SR,
      CATEGORY_INPUT_INFO_0_SR
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_SR,
      CATEGORY_HACKS_INFO_0_SR
   },
   {
      "cd",
      CATEGORY_CD_LABEL_SR,
      CATEGORY_CD_INFO_0_SR
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_sr[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_SR,
      NULL,
      PCE_PALETTE_INFO_0_SR,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_SR },
         { "Composite", OPTION_VAL_COMPOSITE_SR },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_SR,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_SR,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_SR },
         { "6:5", OPTION_VAL_6_5_SR },
         { "4:3", OPTION_VAL_4_3_SR },
         { "uncorrected", OPTION_VAL_UNCORRECTED_SR },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_SR,
      NULL,
      /*  Is 'authorize' supposed to mean 'allow'? */
      PCE_SCALING_INFO_0_SR,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_SR },
         { "lores", OPTION_VAL_LORES_SR },
         { "hires", OPTION_VAL_HIRES_SR },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_SR,
      NULL,
      PCE_HIRES_BLEND_INFO_0_SR,
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
      PCE_H_OVERSCAN_LABEL_SR,
      NULL,
      PCE_H_OVERSCAN_INFO_0_SR,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_SR },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_SR,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_SR,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_SR },
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
      PCE_LAST_SCANLINE_LABEL_SR,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_SR,
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
         { "242", OPTION_VAL_242_SR },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_SR,
      NULL,
      PCE_PSGREVISION_INFO_0_SR,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_SR },
         { "HuC6280A", OPTION_VAL_HUC6280A_SR },
         { "auto", OPTION_VAL_AUTO_SR },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_SR,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_SR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_SR },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_SR,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_SR,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_SR },
         { "0.250", OPTION_VAL_0_250_SR },
         { "0.375", OPTION_VAL_0_375_SR },
         { "0.500", OPTION_VAL_0_500_SR },
         { "0.625", OPTION_VAL_0_625_SR },
         { "0.750", OPTION_VAL_0_750_SR },
         { "0.875", OPTION_VAL_0_875_SR },
         { "1.000", OPTION_VAL_1_000_SR },
         { "1.125", OPTION_VAL_1_125_SR },
         { "1.25", OPTION_VAL_1_25_SR },
         { "1.50", OPTION_VAL_1_50_SR },
         { "1.75", OPTION_VAL_1_75_SR },
         { "2.00", OPTION_VAL_2_00_SR },
         { "2.25", OPTION_VAL_2_25_SR },
         { "2.50", OPTION_VAL_2_50_SR },
         { "2.75", OPTION_VAL_2_75_SR },
         { "3.00", OPTION_VAL_3_00_SR },
         { "3.25", OPTION_VAL_3_25_SR },
         { "3.50", OPTION_VAL_3_50_SR },
         { "3.75", OPTION_VAL_3_75_SR },
         { "4.00", OPTION_VAL_4_00_SR },
         { "4.25", OPTION_VAL_4_25_SR },
         { "4.50", OPTION_VAL_4_50_SR },
         { "4.75", OPTION_VAL_4_75_SR },
         { "5.00", OPTION_VAL_5_00_SR },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_SR,
      NULL,
      PCE_MULTITAP_INFO_0_SR,
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
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_SR,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_SR,
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
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_SR,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_SR,
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
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_SR,
      NULL,
      PCE_TURBO_DELAY_INFO_0_SR,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_SR },
         { "Medium", OPTION_VAL_MEDIUM_SR },
         { "Slow", OPTION_VAL_SLOW_SR },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_SR,
      NULL,
      /*  requires more explanation */
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_SR },
         { "always", OPTION_VAL_ALWAYS_SR },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_SR,
      NULL,
      /*  requires more explanation */
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
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_SR,
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
      PCE_P0_TURBO_II_ENABLE_LABEL_SR,
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
      PCE_P1_TURBO_I_ENABLE_LABEL_SR,
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
      PCE_P1_TURBO_II_ENABLE_LABEL_SR,
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
      PCE_P2_TURBO_I_ENABLE_LABEL_SR,
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
      PCE_P2_TURBO_II_ENABLE_LABEL_SR,
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
      PCE_P3_TURBO_I_ENABLE_LABEL_SR,
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
      PCE_P3_TURBO_II_ENABLE_LABEL_SR,
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
      PCE_P4_TURBO_I_ENABLE_LABEL_SR,
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
      PCE_P4_TURBO_II_ENABLE_LABEL_SR,
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
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_SR,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_SR,
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
      PCE_CDIMAGECACHE_LABEL_SR,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_SR,
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
      PCE_CDBIOS_LABEL_SR,
      NULL,
      PCE_CDBIOS_INFO_0_SR,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_SR },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_SR },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_SR },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_SR },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_SR },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_SR },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_SR,
      NULL,
      PCE_ARCADECARD_INFO_0_SR,
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
      PCE_CDSPEED_LABEL_SR,
      PCE_CDSPEED_LABEL_CAT_SR,
      PCE_CDSPEED_INFO_0_SR,
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
      PCE_ADPCMEXTRAPREC_LABEL_SR,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_SR,
      PCE_ADPCMEXTRAPREC_INFO_0_SR,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_SR },
         { "12-bit", OPTION_VAL_12_BIT_SR },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_SR,
      PCE_CDDAVOLUME_LABEL_CAT_SR,
      PCE_CDDAVOLUME_INFO_0_SR,
      PCE_CDDAVOLUME_INFO_1_SR,
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
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_SR,
      PCE_ADPCMVOLUME_LABEL_CAT_SR,
      PCE_CDDAVOLUME_INFO_0_SR,
      PCE_CDDAVOLUME_INFO_1_SR,
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
      PCE_CDPSGVOLUME_LABEL_SR,
      PCE_CDPSGVOLUME_LABEL_CAT_SR,
      PCE_CDDAVOLUME_INFO_0_SR,
      PCE_CDDAVOLUME_INFO_1_SR,
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
      PCE_NOSPRITELIMIT_LABEL_SR,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_SR,
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
      PCE_OCMULTIPLIER_LABEL_SR,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_SR,
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
struct retro_core_options_v2 options_sr = {
   option_cats_sr,
   option_defs_sr
};

/* RETRO_LANGUAGE_SV */

#define CATEGORY_VIDEO_LABEL_SV NULL
#define CATEGORY_VIDEO_INFO_0_SV NULL
#define CATEGORY_AUDIO_LABEL_SV NULL
#define CATEGORY_AUDIO_INFO_0_SV NULL
#define CATEGORY_INPUT_LABEL_SV NULL
#define CATEGORY_INPUT_INFO_0_SV NULL
#define CATEGORY_HACKS_LABEL_SV NULL
#define CATEGORY_HACKS_INFO_0_SV NULL
#define CATEGORY_CD_LABEL_SV NULL
#define CATEGORY_CD_INFO_0_SV NULL
#define PCE_PALETTE_LABEL_SV NULL
#define PCE_PALETTE_INFO_0_SV NULL
#define OPTION_VAL_RGB_SV NULL
#define OPTION_VAL_COMPOSITE_SV NULL
#define PCE_ASPECT_RATIO_LABEL_SV NULL
#define PCE_ASPECT_RATIO_INFO_0_SV NULL
#define OPTION_VAL_AUTO_SV NULL
#define OPTION_VAL_6_5_SV NULL
#define OPTION_VAL_4_3_SV NULL
#define OPTION_VAL_UNCORRECTED_SV NULL
#define PCE_SCALING_LABEL_SV NULL
#define PCE_SCALING_INFO_0_SV NULL
#define OPTION_VAL_LORES_SV NULL
#define OPTION_VAL_HIRES_SV NULL
#define PCE_HIRES_BLEND_LABEL_SV NULL
#define PCE_HIRES_BLEND_INFO_0_SV NULL
#define PCE_H_OVERSCAN_LABEL_SV NULL
#define PCE_H_OVERSCAN_INFO_0_SV NULL
#define PCE_INITIAL_SCANLINE_LABEL_SV NULL
#define PCE_INITIAL_SCANLINE_INFO_0_SV NULL
#define OPTION_VAL_3_SV NULL
#define PCE_LAST_SCANLINE_LABEL_SV NULL
#define PCE_LAST_SCANLINE_INFO_0_SV NULL
#define OPTION_VAL_242_SV NULL
#define PCE_PSGREVISION_LABEL_SV NULL
#define PCE_PSGREVISION_INFO_0_SV NULL
#define OPTION_VAL_HUC6280_SV NULL
#define OPTION_VAL_HUC6280A_SV NULL
#define PCE_RESAMP_QUALITY_LABEL_SV NULL
#define PCE_RESAMP_QUALITY_INFO_0_SV NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_SV NULL
#define PCE_MOUSE_SENSITIVITY_INFO_0_SV NULL
#define OPTION_VAL_0_125_SV NULL
#define OPTION_VAL_0_250_SV NULL
#define OPTION_VAL_0_375_SV NULL
#define OPTION_VAL_0_500_SV NULL
#define OPTION_VAL_0_625_SV NULL
#define OPTION_VAL_0_750_SV NULL
#define OPTION_VAL_0_875_SV NULL
#define OPTION_VAL_1_000_SV NULL
#define OPTION_VAL_1_125_SV NULL
#define OPTION_VAL_1_25_SV NULL
#define OPTION_VAL_1_50_SV NULL
#define OPTION_VAL_1_75_SV NULL
#define OPTION_VAL_2_00_SV NULL
#define OPTION_VAL_2_25_SV NULL
#define OPTION_VAL_2_50_SV NULL
#define OPTION_VAL_2_75_SV NULL
#define OPTION_VAL_3_00_SV NULL
#define OPTION_VAL_3_25_SV NULL
#define OPTION_VAL_3_50_SV NULL
#define OPTION_VAL_3_75_SV NULL
#define OPTION_VAL_4_00_SV NULL
#define OPTION_VAL_4_25_SV NULL
#define OPTION_VAL_4_50_SV NULL
#define OPTION_VAL_4_75_SV NULL
#define OPTION_VAL_5_00_SV NULL
#define PCE_MULTITAP_LABEL_SV NULL
#define PCE_MULTITAP_INFO_0_SV NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_SV NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_SV NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_SV NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_SV NULL
#define PCE_TURBO_DELAY_LABEL_SV NULL
#define PCE_TURBO_DELAY_INFO_0_SV NULL
#define OPTION_VAL_FAST_SV NULL
#define OPTION_VAL_MEDIUM_SV NULL
#define OPTION_VAL_SLOW_SV NULL
#define PCE_TURBO_TOGGLING_LABEL_SV NULL
#define OPTION_VAL_TOGGLE_SV NULL
#define OPTION_VAL_ALWAYS_SV NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_SV NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_SV NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_SV NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_SV NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_SV NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_SV NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_SV NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_SV NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_SV NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_SV NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_SV NULL
#define PCE_DISABLE_SOFTRESET_LABEL_SV NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_SV NULL
#define PCE_CDIMAGECACHE_LABEL_SV NULL
#define PCE_CDIMAGECACHE_INFO_0_SV NULL
#define PCE_CDBIOS_LABEL_SV NULL
#define PCE_CDBIOS_INFO_0_SV NULL
#define OPTION_VAL_GAMES_EXPRESS_SV NULL
#define OPTION_VAL_SYSTEM_CARD_1_SV NULL
#define OPTION_VAL_SYSTEM_CARD_2_SV NULL
#define OPTION_VAL_SYSTEM_CARD_3_SV NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_SV NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_SV NULL
#define PCE_ARCADECARD_LABEL_SV NULL
#define PCE_ARCADECARD_INFO_0_SV NULL
#define PCE_CDSPEED_LABEL_SV NULL
#define PCE_CDSPEED_LABEL_CAT_SV NULL
#define PCE_CDSPEED_INFO_0_SV NULL
#define PCE_ADPCMEXTRAPREC_LABEL_SV NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_SV NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_SV NULL
#define OPTION_VAL_10_BIT_SV NULL
#define OPTION_VAL_12_BIT_SV NULL
#define PCE_CDDAVOLUME_LABEL_SV NULL
#define PCE_CDDAVOLUME_LABEL_CAT_SV NULL
#define PCE_CDDAVOLUME_INFO_0_SV NULL
#define PCE_CDDAVOLUME_INFO_1_SV NULL
#define PCE_ADPCMVOLUME_LABEL_SV NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_SV NULL
#define PCE_CDPSGVOLUME_LABEL_SV NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_SV NULL
#define PCE_NOSPRITELIMIT_LABEL_SV NULL
#define PCE_NOSPRITELIMIT_INFO_0_SV NULL
#define PCE_OCMULTIPLIER_LABEL_SV NULL
#define PCE_OCMULTIPLIER_INFO_0_SV NULL

struct retro_core_option_v2_category option_cats_sv[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_SV,
      CATEGORY_VIDEO_INFO_0_SV
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_SV,
      CATEGORY_AUDIO_INFO_0_SV
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_SV,
      CATEGORY_INPUT_INFO_0_SV
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_SV,
      CATEGORY_HACKS_INFO_0_SV
   },
   {
      "cd",
      CATEGORY_CD_LABEL_SV,
      CATEGORY_CD_INFO_0_SV
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_sv[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_SV,
      NULL,
      PCE_PALETTE_INFO_0_SV,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_SV },
         { "Composite", OPTION_VAL_COMPOSITE_SV },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_SV,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_SV,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_SV },
         { "6:5", OPTION_VAL_6_5_SV },
         { "4:3", OPTION_VAL_4_3_SV },
         { "uncorrected", OPTION_VAL_UNCORRECTED_SV },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_SV,
      NULL,
      /*  Is 'authorize' supposed to mean 'allow'? */
      PCE_SCALING_INFO_0_SV,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_SV },
         { "lores", OPTION_VAL_LORES_SV },
         { "hires", OPTION_VAL_HIRES_SV },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_SV,
      NULL,
      PCE_HIRES_BLEND_INFO_0_SV,
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
      PCE_H_OVERSCAN_LABEL_SV,
      NULL,
      PCE_H_OVERSCAN_INFO_0_SV,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_SV },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_SV,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_SV,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_SV },
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
      PCE_LAST_SCANLINE_LABEL_SV,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_SV,
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
         { "242", OPTION_VAL_242_SV },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_SV,
      NULL,
      PCE_PSGREVISION_INFO_0_SV,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_SV },
         { "HuC6280A", OPTION_VAL_HUC6280A_SV },
         { "auto", OPTION_VAL_AUTO_SV },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_SV,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_SV,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_SV },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_SV,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_SV,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_SV },
         { "0.250", OPTION_VAL_0_250_SV },
         { "0.375", OPTION_VAL_0_375_SV },
         { "0.500", OPTION_VAL_0_500_SV },
         { "0.625", OPTION_VAL_0_625_SV },
         { "0.750", OPTION_VAL_0_750_SV },
         { "0.875", OPTION_VAL_0_875_SV },
         { "1.000", OPTION_VAL_1_000_SV },
         { "1.125", OPTION_VAL_1_125_SV },
         { "1.25", OPTION_VAL_1_25_SV },
         { "1.50", OPTION_VAL_1_50_SV },
         { "1.75", OPTION_VAL_1_75_SV },
         { "2.00", OPTION_VAL_2_00_SV },
         { "2.25", OPTION_VAL_2_25_SV },
         { "2.50", OPTION_VAL_2_50_SV },
         { "2.75", OPTION_VAL_2_75_SV },
         { "3.00", OPTION_VAL_3_00_SV },
         { "3.25", OPTION_VAL_3_25_SV },
         { "3.50", OPTION_VAL_3_50_SV },
         { "3.75", OPTION_VAL_3_75_SV },
         { "4.00", OPTION_VAL_4_00_SV },
         { "4.25", OPTION_VAL_4_25_SV },
         { "4.50", OPTION_VAL_4_50_SV },
         { "4.75", OPTION_VAL_4_75_SV },
         { "5.00", OPTION_VAL_5_00_SV },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_SV,
      NULL,
      PCE_MULTITAP_INFO_0_SV,
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
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_SV,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_SV,
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
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_SV,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_SV,
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
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_SV,
      NULL,
      PCE_TURBO_DELAY_INFO_0_SV,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_SV },
         { "Medium", OPTION_VAL_MEDIUM_SV },
         { "Slow", OPTION_VAL_SLOW_SV },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_SV,
      NULL,
      /*  requires more explanation */
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_SV },
         { "always", OPTION_VAL_ALWAYS_SV },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_SV,
      NULL,
      /*  requires more explanation */
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
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_SV,
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
      PCE_P0_TURBO_II_ENABLE_LABEL_SV,
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
      PCE_P1_TURBO_I_ENABLE_LABEL_SV,
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
      PCE_P1_TURBO_II_ENABLE_LABEL_SV,
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
      PCE_P2_TURBO_I_ENABLE_LABEL_SV,
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
      PCE_P2_TURBO_II_ENABLE_LABEL_SV,
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
      PCE_P3_TURBO_I_ENABLE_LABEL_SV,
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
      PCE_P3_TURBO_II_ENABLE_LABEL_SV,
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
      PCE_P4_TURBO_I_ENABLE_LABEL_SV,
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
      PCE_P4_TURBO_II_ENABLE_LABEL_SV,
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
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_SV,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_SV,
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
      PCE_CDIMAGECACHE_LABEL_SV,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_SV,
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
      PCE_CDBIOS_LABEL_SV,
      NULL,
      PCE_CDBIOS_INFO_0_SV,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_SV },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_SV },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_SV },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_SV },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_SV },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_SV },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_SV,
      NULL,
      PCE_ARCADECARD_INFO_0_SV,
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
      PCE_CDSPEED_LABEL_SV,
      PCE_CDSPEED_LABEL_CAT_SV,
      PCE_CDSPEED_INFO_0_SV,
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
      PCE_ADPCMEXTRAPREC_LABEL_SV,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_SV,
      PCE_ADPCMEXTRAPREC_INFO_0_SV,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_SV },
         { "12-bit", OPTION_VAL_12_BIT_SV },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_SV,
      PCE_CDDAVOLUME_LABEL_CAT_SV,
      PCE_CDDAVOLUME_INFO_0_SV,
      PCE_CDDAVOLUME_INFO_1_SV,
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
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_SV,
      PCE_ADPCMVOLUME_LABEL_CAT_SV,
      PCE_CDDAVOLUME_INFO_0_SV,
      PCE_CDDAVOLUME_INFO_1_SV,
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
      PCE_CDPSGVOLUME_LABEL_SV,
      PCE_CDPSGVOLUME_LABEL_CAT_SV,
      PCE_CDDAVOLUME_INFO_0_SV,
      PCE_CDDAVOLUME_INFO_1_SV,
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
      PCE_NOSPRITELIMIT_LABEL_SV,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_SV,
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
      PCE_OCMULTIPLIER_LABEL_SV,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_SV,
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
struct retro_core_options_v2 options_sv = {
   option_cats_sv,
   option_defs_sv
};

/* RETRO_LANGUAGE_TR */

#define CATEGORY_VIDEO_LABEL_TR NULL
#define CATEGORY_VIDEO_INFO_0_TR NULL
#define CATEGORY_AUDIO_LABEL_TR NULL
#define CATEGORY_AUDIO_INFO_0_TR NULL
#define CATEGORY_INPUT_LABEL_TR NULL
#define CATEGORY_INPUT_INFO_0_TR NULL
#define CATEGORY_HACKS_LABEL_TR NULL
#define CATEGORY_HACKS_INFO_0_TR NULL
#define CATEGORY_CD_LABEL_TR NULL
#define CATEGORY_CD_INFO_0_TR NULL
#define PCE_PALETTE_LABEL_TR NULL
#define PCE_PALETTE_INFO_0_TR NULL
#define OPTION_VAL_RGB_TR NULL
#define OPTION_VAL_COMPOSITE_TR NULL
#define PCE_ASPECT_RATIO_LABEL_TR NULL
#define PCE_ASPECT_RATIO_INFO_0_TR NULL
#define OPTION_VAL_AUTO_TR NULL
#define OPTION_VAL_6_5_TR NULL
#define OPTION_VAL_4_3_TR NULL
#define OPTION_VAL_UNCORRECTED_TR NULL
#define PCE_SCALING_LABEL_TR NULL
#define PCE_SCALING_INFO_0_TR NULL
#define OPTION_VAL_LORES_TR NULL
#define OPTION_VAL_HIRES_TR NULL
#define PCE_HIRES_BLEND_LABEL_TR NULL
#define PCE_HIRES_BLEND_INFO_0_TR NULL
#define PCE_H_OVERSCAN_LABEL_TR NULL
#define PCE_H_OVERSCAN_INFO_0_TR NULL
#define PCE_INITIAL_SCANLINE_LABEL_TR NULL
#define PCE_INITIAL_SCANLINE_INFO_0_TR NULL
#define OPTION_VAL_3_TR NULL
#define PCE_LAST_SCANLINE_LABEL_TR NULL
#define PCE_LAST_SCANLINE_INFO_0_TR NULL
#define OPTION_VAL_242_TR NULL
#define PCE_PSGREVISION_LABEL_TR NULL
#define PCE_PSGREVISION_INFO_0_TR NULL
#define OPTION_VAL_HUC6280_TR NULL
#define OPTION_VAL_HUC6280A_TR NULL
#define PCE_RESAMP_QUALITY_LABEL_TR NULL
#define PCE_RESAMP_QUALITY_INFO_0_TR NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_TR NULL
#define PCE_MOUSE_SENSITIVITY_INFO_0_TR NULL
#define OPTION_VAL_0_125_TR NULL
#define OPTION_VAL_0_250_TR NULL
#define OPTION_VAL_0_375_TR NULL
#define OPTION_VAL_0_500_TR NULL
#define OPTION_VAL_0_625_TR NULL
#define OPTION_VAL_0_750_TR NULL
#define OPTION_VAL_0_875_TR NULL
#define OPTION_VAL_1_000_TR NULL
#define OPTION_VAL_1_125_TR NULL
#define OPTION_VAL_1_25_TR NULL
#define OPTION_VAL_1_50_TR NULL
#define OPTION_VAL_1_75_TR NULL
#define OPTION_VAL_2_00_TR NULL
#define OPTION_VAL_2_25_TR NULL
#define OPTION_VAL_2_50_TR NULL
#define OPTION_VAL_2_75_TR NULL
#define OPTION_VAL_3_00_TR NULL
#define OPTION_VAL_3_25_TR NULL
#define OPTION_VAL_3_50_TR NULL
#define OPTION_VAL_3_75_TR NULL
#define OPTION_VAL_4_00_TR NULL
#define OPTION_VAL_4_25_TR NULL
#define OPTION_VAL_4_50_TR NULL
#define OPTION_VAL_4_75_TR NULL
#define OPTION_VAL_5_00_TR NULL
#define PCE_MULTITAP_LABEL_TR NULL
#define PCE_MULTITAP_INFO_0_TR NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_TR NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_TR NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_TR NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_TR NULL
#define PCE_TURBO_DELAY_LABEL_TR NULL
#define PCE_TURBO_DELAY_INFO_0_TR NULL
#define OPTION_VAL_FAST_TR NULL
#define OPTION_VAL_MEDIUM_TR NULL
#define OPTION_VAL_SLOW_TR NULL
#define PCE_TURBO_TOGGLING_LABEL_TR NULL
#define OPTION_VAL_TOGGLE_TR NULL
#define OPTION_VAL_ALWAYS_TR NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_TR NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_TR NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_TR NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_TR NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_TR NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_TR NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_TR NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_TR NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_TR NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_TR NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_TR NULL
#define PCE_DISABLE_SOFTRESET_LABEL_TR NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_TR NULL
#define PCE_CDIMAGECACHE_LABEL_TR NULL
#define PCE_CDIMAGECACHE_INFO_0_TR NULL
#define PCE_CDBIOS_LABEL_TR NULL
#define PCE_CDBIOS_INFO_0_TR NULL
#define OPTION_VAL_GAMES_EXPRESS_TR NULL
#define OPTION_VAL_SYSTEM_CARD_1_TR NULL
#define OPTION_VAL_SYSTEM_CARD_2_TR NULL
#define OPTION_VAL_SYSTEM_CARD_3_TR NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_TR NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_TR NULL
#define PCE_ARCADECARD_LABEL_TR NULL
#define PCE_ARCADECARD_INFO_0_TR NULL
#define PCE_CDSPEED_LABEL_TR NULL
#define PCE_CDSPEED_LABEL_CAT_TR NULL
#define PCE_CDSPEED_INFO_0_TR NULL
#define PCE_ADPCMEXTRAPREC_LABEL_TR NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_TR NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_TR NULL
#define OPTION_VAL_10_BIT_TR NULL
#define OPTION_VAL_12_BIT_TR NULL
#define PCE_CDDAVOLUME_LABEL_TR NULL
#define PCE_CDDAVOLUME_LABEL_CAT_TR NULL
#define PCE_CDDAVOLUME_INFO_0_TR NULL
#define PCE_CDDAVOLUME_INFO_1_TR NULL
#define PCE_ADPCMVOLUME_LABEL_TR NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_TR NULL
#define PCE_CDPSGVOLUME_LABEL_TR NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_TR NULL
#define PCE_NOSPRITELIMIT_LABEL_TR NULL
#define PCE_NOSPRITELIMIT_INFO_0_TR NULL
#define PCE_OCMULTIPLIER_LABEL_TR NULL
#define PCE_OCMULTIPLIER_INFO_0_TR NULL

struct retro_core_option_v2_category option_cats_tr[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_TR,
      CATEGORY_VIDEO_INFO_0_TR
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_TR,
      CATEGORY_AUDIO_INFO_0_TR
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_TR,
      CATEGORY_INPUT_INFO_0_TR
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_TR,
      CATEGORY_HACKS_INFO_0_TR
   },
   {
      "cd",
      CATEGORY_CD_LABEL_TR,
      CATEGORY_CD_INFO_0_TR
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_tr[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_TR,
      NULL,
      PCE_PALETTE_INFO_0_TR,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_TR },
         { "Composite", OPTION_VAL_COMPOSITE_TR },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_TR,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_TR,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_TR },
         { "6:5", OPTION_VAL_6_5_TR },
         { "4:3", OPTION_VAL_4_3_TR },
         { "uncorrected", OPTION_VAL_UNCORRECTED_TR },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_TR,
      NULL,
      /*  Is 'authorize' supposed to mean 'allow'? */
      PCE_SCALING_INFO_0_TR,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_TR },
         { "lores", OPTION_VAL_LORES_TR },
         { "hires", OPTION_VAL_HIRES_TR },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_TR,
      NULL,
      PCE_HIRES_BLEND_INFO_0_TR,
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
      PCE_H_OVERSCAN_LABEL_TR,
      NULL,
      PCE_H_OVERSCAN_INFO_0_TR,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_TR },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_TR,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_TR,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_TR },
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
      PCE_LAST_SCANLINE_LABEL_TR,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_TR,
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
         { "242", OPTION_VAL_242_TR },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_TR,
      NULL,
      PCE_PSGREVISION_INFO_0_TR,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_TR },
         { "HuC6280A", OPTION_VAL_HUC6280A_TR },
         { "auto", OPTION_VAL_AUTO_TR },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_TR,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_TR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_TR },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_TR,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_TR,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_TR },
         { "0.250", OPTION_VAL_0_250_TR },
         { "0.375", OPTION_VAL_0_375_TR },
         { "0.500", OPTION_VAL_0_500_TR },
         { "0.625", OPTION_VAL_0_625_TR },
         { "0.750", OPTION_VAL_0_750_TR },
         { "0.875", OPTION_VAL_0_875_TR },
         { "1.000", OPTION_VAL_1_000_TR },
         { "1.125", OPTION_VAL_1_125_TR },
         { "1.25", OPTION_VAL_1_25_TR },
         { "1.50", OPTION_VAL_1_50_TR },
         { "1.75", OPTION_VAL_1_75_TR },
         { "2.00", OPTION_VAL_2_00_TR },
         { "2.25", OPTION_VAL_2_25_TR },
         { "2.50", OPTION_VAL_2_50_TR },
         { "2.75", OPTION_VAL_2_75_TR },
         { "3.00", OPTION_VAL_3_00_TR },
         { "3.25", OPTION_VAL_3_25_TR },
         { "3.50", OPTION_VAL_3_50_TR },
         { "3.75", OPTION_VAL_3_75_TR },
         { "4.00", OPTION_VAL_4_00_TR },
         { "4.25", OPTION_VAL_4_25_TR },
         { "4.50", OPTION_VAL_4_50_TR },
         { "4.75", OPTION_VAL_4_75_TR },
         { "5.00", OPTION_VAL_5_00_TR },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_TR,
      NULL,
      PCE_MULTITAP_INFO_0_TR,
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
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_TR,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_TR,
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
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_TR,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_TR,
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
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_TR,
      NULL,
      PCE_TURBO_DELAY_INFO_0_TR,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_TR },
         { "Medium", OPTION_VAL_MEDIUM_TR },
         { "Slow", OPTION_VAL_SLOW_TR },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_TR,
      NULL,
      /*  requires more explanation */
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_TR },
         { "always", OPTION_VAL_ALWAYS_TR },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_TR,
      NULL,
      /*  requires more explanation */
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
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_TR,
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
      PCE_P0_TURBO_II_ENABLE_LABEL_TR,
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
      PCE_P1_TURBO_I_ENABLE_LABEL_TR,
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
      PCE_P1_TURBO_II_ENABLE_LABEL_TR,
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
      PCE_P2_TURBO_I_ENABLE_LABEL_TR,
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
      PCE_P2_TURBO_II_ENABLE_LABEL_TR,
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
      PCE_P3_TURBO_I_ENABLE_LABEL_TR,
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
      PCE_P3_TURBO_II_ENABLE_LABEL_TR,
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
      PCE_P4_TURBO_I_ENABLE_LABEL_TR,
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
      PCE_P4_TURBO_II_ENABLE_LABEL_TR,
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
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_TR,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_TR,
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
      PCE_CDIMAGECACHE_LABEL_TR,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_TR,
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
      PCE_CDBIOS_LABEL_TR,
      NULL,
      PCE_CDBIOS_INFO_0_TR,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_TR },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_TR },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_TR },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_TR },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_TR },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_TR },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_TR,
      NULL,
      PCE_ARCADECARD_INFO_0_TR,
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
      PCE_CDSPEED_LABEL_TR,
      PCE_CDSPEED_LABEL_CAT_TR,
      PCE_CDSPEED_INFO_0_TR,
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
      PCE_ADPCMEXTRAPREC_LABEL_TR,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_TR,
      PCE_ADPCMEXTRAPREC_INFO_0_TR,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_TR },
         { "12-bit", OPTION_VAL_12_BIT_TR },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_TR,
      PCE_CDDAVOLUME_LABEL_CAT_TR,
      PCE_CDDAVOLUME_INFO_0_TR,
      PCE_CDDAVOLUME_INFO_1_TR,
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
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_TR,
      PCE_ADPCMVOLUME_LABEL_CAT_TR,
      PCE_CDDAVOLUME_INFO_0_TR,
      PCE_CDDAVOLUME_INFO_1_TR,
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
      PCE_CDPSGVOLUME_LABEL_TR,
      PCE_CDPSGVOLUME_LABEL_CAT_TR,
      PCE_CDDAVOLUME_INFO_0_TR,
      PCE_CDDAVOLUME_INFO_1_TR,
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
      PCE_NOSPRITELIMIT_LABEL_TR,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_TR,
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
      PCE_OCMULTIPLIER_LABEL_TR,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_TR,
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
struct retro_core_options_v2 options_tr = {
   option_cats_tr,
   option_defs_tr
};

/* RETRO_LANGUAGE_UK */

#define CATEGORY_VIDEO_LABEL_UK NULL
#define CATEGORY_VIDEO_INFO_0_UK NULL
#define CATEGORY_AUDIO_LABEL_UK NULL
#define CATEGORY_AUDIO_INFO_0_UK NULL
#define CATEGORY_INPUT_LABEL_UK NULL
#define CATEGORY_INPUT_INFO_0_UK NULL
#define CATEGORY_HACKS_LABEL_UK NULL
#define CATEGORY_HACKS_INFO_0_UK NULL
#define CATEGORY_CD_LABEL_UK NULL
#define CATEGORY_CD_INFO_0_UK NULL
#define PCE_PALETTE_LABEL_UK NULL
#define PCE_PALETTE_INFO_0_UK NULL
#define OPTION_VAL_RGB_UK NULL
#define OPTION_VAL_COMPOSITE_UK NULL
#define PCE_ASPECT_RATIO_LABEL_UK NULL
#define PCE_ASPECT_RATIO_INFO_0_UK NULL
#define OPTION_VAL_AUTO_UK NULL
#define OPTION_VAL_6_5_UK NULL
#define OPTION_VAL_4_3_UK NULL
#define OPTION_VAL_UNCORRECTED_UK NULL
#define PCE_SCALING_LABEL_UK NULL
#define PCE_SCALING_INFO_0_UK NULL
#define OPTION_VAL_LORES_UK NULL
#define OPTION_VAL_HIRES_UK NULL
#define PCE_HIRES_BLEND_LABEL_UK NULL
#define PCE_HIRES_BLEND_INFO_0_UK NULL
#define PCE_H_OVERSCAN_LABEL_UK NULL
#define PCE_H_OVERSCAN_INFO_0_UK NULL
#define PCE_INITIAL_SCANLINE_LABEL_UK NULL
#define PCE_INITIAL_SCANLINE_INFO_0_UK NULL
#define OPTION_VAL_3_UK NULL
#define PCE_LAST_SCANLINE_LABEL_UK NULL
#define PCE_LAST_SCANLINE_INFO_0_UK NULL
#define OPTION_VAL_242_UK NULL
#define PCE_PSGREVISION_LABEL_UK NULL
#define PCE_PSGREVISION_INFO_0_UK NULL
#define OPTION_VAL_HUC6280_UK NULL
#define OPTION_VAL_HUC6280A_UK NULL
#define PCE_RESAMP_QUALITY_LABEL_UK NULL
#define PCE_RESAMP_QUALITY_INFO_0_UK NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_UK NULL
#define PCE_MOUSE_SENSITIVITY_INFO_0_UK NULL
#define OPTION_VAL_0_125_UK NULL
#define OPTION_VAL_0_250_UK NULL
#define OPTION_VAL_0_375_UK NULL
#define OPTION_VAL_0_500_UK NULL
#define OPTION_VAL_0_625_UK NULL
#define OPTION_VAL_0_750_UK NULL
#define OPTION_VAL_0_875_UK NULL
#define OPTION_VAL_1_000_UK NULL
#define OPTION_VAL_1_125_UK NULL
#define OPTION_VAL_1_25_UK NULL
#define OPTION_VAL_1_50_UK NULL
#define OPTION_VAL_1_75_UK NULL
#define OPTION_VAL_2_00_UK NULL
#define OPTION_VAL_2_25_UK NULL
#define OPTION_VAL_2_50_UK NULL
#define OPTION_VAL_2_75_UK NULL
#define OPTION_VAL_3_00_UK NULL
#define OPTION_VAL_3_25_UK NULL
#define OPTION_VAL_3_50_UK NULL
#define OPTION_VAL_3_75_UK NULL
#define OPTION_VAL_4_00_UK NULL
#define OPTION_VAL_4_25_UK NULL
#define OPTION_VAL_4_50_UK NULL
#define OPTION_VAL_4_75_UK NULL
#define OPTION_VAL_5_00_UK NULL
#define PCE_MULTITAP_LABEL_UK NULL
#define PCE_MULTITAP_INFO_0_UK NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_UK NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_UK NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_UK NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_UK NULL
#define PCE_TURBO_DELAY_LABEL_UK NULL
#define PCE_TURBO_DELAY_INFO_0_UK NULL
#define OPTION_VAL_FAST_UK NULL
#define OPTION_VAL_MEDIUM_UK NULL
#define OPTION_VAL_SLOW_UK NULL
#define PCE_TURBO_TOGGLING_LABEL_UK NULL
#define OPTION_VAL_TOGGLE_UK NULL
#define OPTION_VAL_ALWAYS_UK NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_UK NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_UK NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_UK NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_UK NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_UK NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_UK NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_UK NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_UK NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_UK NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_UK NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_UK NULL
#define PCE_DISABLE_SOFTRESET_LABEL_UK NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_UK NULL
#define PCE_CDIMAGECACHE_LABEL_UK NULL
#define PCE_CDIMAGECACHE_INFO_0_UK NULL
#define PCE_CDBIOS_LABEL_UK NULL
#define PCE_CDBIOS_INFO_0_UK NULL
#define OPTION_VAL_GAMES_EXPRESS_UK NULL
#define OPTION_VAL_SYSTEM_CARD_1_UK NULL
#define OPTION_VAL_SYSTEM_CARD_2_UK NULL
#define OPTION_VAL_SYSTEM_CARD_3_UK NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_UK NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_UK NULL
#define PCE_ARCADECARD_LABEL_UK NULL
#define PCE_ARCADECARD_INFO_0_UK NULL
#define PCE_CDSPEED_LABEL_UK NULL
#define PCE_CDSPEED_LABEL_CAT_UK NULL
#define PCE_CDSPEED_INFO_0_UK NULL
#define PCE_ADPCMEXTRAPREC_LABEL_UK NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_UK NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_UK NULL
#define OPTION_VAL_10_BIT_UK NULL
#define OPTION_VAL_12_BIT_UK NULL
#define PCE_CDDAVOLUME_LABEL_UK NULL
#define PCE_CDDAVOLUME_LABEL_CAT_UK NULL
#define PCE_CDDAVOLUME_INFO_0_UK NULL
#define PCE_CDDAVOLUME_INFO_1_UK NULL
#define PCE_ADPCMVOLUME_LABEL_UK NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_UK NULL
#define PCE_CDPSGVOLUME_LABEL_UK NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_UK NULL
#define PCE_NOSPRITELIMIT_LABEL_UK NULL
#define PCE_NOSPRITELIMIT_INFO_0_UK NULL
#define PCE_OCMULTIPLIER_LABEL_UK NULL
#define PCE_OCMULTIPLIER_INFO_0_UK NULL

struct retro_core_option_v2_category option_cats_uk[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_UK,
      CATEGORY_VIDEO_INFO_0_UK
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_UK,
      CATEGORY_AUDIO_INFO_0_UK
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_UK,
      CATEGORY_INPUT_INFO_0_UK
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_UK,
      CATEGORY_HACKS_INFO_0_UK
   },
   {
      "cd",
      CATEGORY_CD_LABEL_UK,
      CATEGORY_CD_INFO_0_UK
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_uk[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_UK,
      NULL,
      PCE_PALETTE_INFO_0_UK,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_UK },
         { "Composite", OPTION_VAL_COMPOSITE_UK },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_UK,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_UK,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_UK },
         { "6:5", OPTION_VAL_6_5_UK },
         { "4:3", OPTION_VAL_4_3_UK },
         { "uncorrected", OPTION_VAL_UNCORRECTED_UK },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_UK,
      NULL,
      /*  Is 'authorize' supposed to mean 'allow'? */
      PCE_SCALING_INFO_0_UK,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_UK },
         { "lores", OPTION_VAL_LORES_UK },
         { "hires", OPTION_VAL_HIRES_UK },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_UK,
      NULL,
      PCE_HIRES_BLEND_INFO_0_UK,
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
      PCE_H_OVERSCAN_LABEL_UK,
      NULL,
      PCE_H_OVERSCAN_INFO_0_UK,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_UK },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_UK,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_UK,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_UK },
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
      PCE_LAST_SCANLINE_LABEL_UK,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_UK,
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
         { "242", OPTION_VAL_242_UK },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_UK,
      NULL,
      PCE_PSGREVISION_INFO_0_UK,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_UK },
         { "HuC6280A", OPTION_VAL_HUC6280A_UK },
         { "auto", OPTION_VAL_AUTO_UK },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_UK,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_UK,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_UK },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_UK,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_UK,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_UK },
         { "0.250", OPTION_VAL_0_250_UK },
         { "0.375", OPTION_VAL_0_375_UK },
         { "0.500", OPTION_VAL_0_500_UK },
         { "0.625", OPTION_VAL_0_625_UK },
         { "0.750", OPTION_VAL_0_750_UK },
         { "0.875", OPTION_VAL_0_875_UK },
         { "1.000", OPTION_VAL_1_000_UK },
         { "1.125", OPTION_VAL_1_125_UK },
         { "1.25", OPTION_VAL_1_25_UK },
         { "1.50", OPTION_VAL_1_50_UK },
         { "1.75", OPTION_VAL_1_75_UK },
         { "2.00", OPTION_VAL_2_00_UK },
         { "2.25", OPTION_VAL_2_25_UK },
         { "2.50", OPTION_VAL_2_50_UK },
         { "2.75", OPTION_VAL_2_75_UK },
         { "3.00", OPTION_VAL_3_00_UK },
         { "3.25", OPTION_VAL_3_25_UK },
         { "3.50", OPTION_VAL_3_50_UK },
         { "3.75", OPTION_VAL_3_75_UK },
         { "4.00", OPTION_VAL_4_00_UK },
         { "4.25", OPTION_VAL_4_25_UK },
         { "4.50", OPTION_VAL_4_50_UK },
         { "4.75", OPTION_VAL_4_75_UK },
         { "5.00", OPTION_VAL_5_00_UK },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_UK,
      NULL,
      PCE_MULTITAP_INFO_0_UK,
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
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_UK,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_UK,
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
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_UK,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_UK,
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
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_UK,
      NULL,
      PCE_TURBO_DELAY_INFO_0_UK,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_UK },
         { "Medium", OPTION_VAL_MEDIUM_UK },
         { "Slow", OPTION_VAL_SLOW_UK },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_UK,
      NULL,
      /*  requires more explanation */
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_UK },
         { "always", OPTION_VAL_ALWAYS_UK },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_UK,
      NULL,
      /*  requires more explanation */
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
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_UK,
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
      PCE_P0_TURBO_II_ENABLE_LABEL_UK,
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
      PCE_P1_TURBO_I_ENABLE_LABEL_UK,
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
      PCE_P1_TURBO_II_ENABLE_LABEL_UK,
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
      PCE_P2_TURBO_I_ENABLE_LABEL_UK,
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
      PCE_P2_TURBO_II_ENABLE_LABEL_UK,
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
      PCE_P3_TURBO_I_ENABLE_LABEL_UK,
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
      PCE_P3_TURBO_II_ENABLE_LABEL_UK,
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
      PCE_P4_TURBO_I_ENABLE_LABEL_UK,
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
      PCE_P4_TURBO_II_ENABLE_LABEL_UK,
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
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_UK,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_UK,
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
      PCE_CDIMAGECACHE_LABEL_UK,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_UK,
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
      PCE_CDBIOS_LABEL_UK,
      NULL,
      PCE_CDBIOS_INFO_0_UK,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_UK },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_UK },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_UK },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_UK },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_UK },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_UK },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_UK,
      NULL,
      PCE_ARCADECARD_INFO_0_UK,
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
      PCE_CDSPEED_LABEL_UK,
      PCE_CDSPEED_LABEL_CAT_UK,
      PCE_CDSPEED_INFO_0_UK,
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
      PCE_ADPCMEXTRAPREC_LABEL_UK,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_UK,
      PCE_ADPCMEXTRAPREC_INFO_0_UK,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_UK },
         { "12-bit", OPTION_VAL_12_BIT_UK },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_UK,
      PCE_CDDAVOLUME_LABEL_CAT_UK,
      PCE_CDDAVOLUME_INFO_0_UK,
      PCE_CDDAVOLUME_INFO_1_UK,
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
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_UK,
      PCE_ADPCMVOLUME_LABEL_CAT_UK,
      PCE_CDDAVOLUME_INFO_0_UK,
      PCE_CDDAVOLUME_INFO_1_UK,
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
      PCE_CDPSGVOLUME_LABEL_UK,
      PCE_CDPSGVOLUME_LABEL_CAT_UK,
      PCE_CDDAVOLUME_INFO_0_UK,
      PCE_CDDAVOLUME_INFO_1_UK,
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
      PCE_NOSPRITELIMIT_LABEL_UK,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_UK,
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
      PCE_OCMULTIPLIER_LABEL_UK,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_UK,
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
struct retro_core_options_v2 options_uk = {
   option_cats_uk,
   option_defs_uk
};

/* RETRO_LANGUAGE_VN */

#define CATEGORY_VIDEO_LABEL_VN NULL
#define CATEGORY_VIDEO_INFO_0_VN NULL
#define CATEGORY_AUDIO_LABEL_VN NULL
#define CATEGORY_AUDIO_INFO_0_VN NULL
#define CATEGORY_INPUT_LABEL_VN NULL
#define CATEGORY_INPUT_INFO_0_VN NULL
#define CATEGORY_HACKS_LABEL_VN NULL
#define CATEGORY_HACKS_INFO_0_VN NULL
#define CATEGORY_CD_LABEL_VN NULL
#define CATEGORY_CD_INFO_0_VN NULL
#define PCE_PALETTE_LABEL_VN NULL
#define PCE_PALETTE_INFO_0_VN NULL
#define OPTION_VAL_RGB_VN NULL
#define OPTION_VAL_COMPOSITE_VN NULL
#define PCE_ASPECT_RATIO_LABEL_VN NULL
#define PCE_ASPECT_RATIO_INFO_0_VN NULL
#define OPTION_VAL_AUTO_VN NULL
#define OPTION_VAL_6_5_VN NULL
#define OPTION_VAL_4_3_VN NULL
#define OPTION_VAL_UNCORRECTED_VN NULL
#define PCE_SCALING_LABEL_VN NULL
#define PCE_SCALING_INFO_0_VN NULL
#define OPTION_VAL_LORES_VN NULL
#define OPTION_VAL_HIRES_VN NULL
#define PCE_HIRES_BLEND_LABEL_VN NULL
#define PCE_HIRES_BLEND_INFO_0_VN NULL
#define PCE_H_OVERSCAN_LABEL_VN NULL
#define PCE_H_OVERSCAN_INFO_0_VN NULL
#define PCE_INITIAL_SCANLINE_LABEL_VN NULL
#define PCE_INITIAL_SCANLINE_INFO_0_VN NULL
#define OPTION_VAL_3_VN NULL
#define PCE_LAST_SCANLINE_LABEL_VN NULL
#define PCE_LAST_SCANLINE_INFO_0_VN NULL
#define OPTION_VAL_242_VN NULL
#define PCE_PSGREVISION_LABEL_VN NULL
#define PCE_PSGREVISION_INFO_0_VN NULL
#define OPTION_VAL_HUC6280_VN NULL
#define OPTION_VAL_HUC6280A_VN NULL
#define PCE_RESAMP_QUALITY_LABEL_VN NULL
#define PCE_RESAMP_QUALITY_INFO_0_VN NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_VN NULL
#define PCE_MOUSE_SENSITIVITY_INFO_0_VN NULL
#define OPTION_VAL_0_125_VN NULL
#define OPTION_VAL_0_250_VN NULL
#define OPTION_VAL_0_375_VN NULL
#define OPTION_VAL_0_500_VN NULL
#define OPTION_VAL_0_625_VN NULL
#define OPTION_VAL_0_750_VN NULL
#define OPTION_VAL_0_875_VN NULL
#define OPTION_VAL_1_000_VN NULL
#define OPTION_VAL_1_125_VN NULL
#define OPTION_VAL_1_25_VN NULL
#define OPTION_VAL_1_50_VN NULL
#define OPTION_VAL_1_75_VN NULL
#define OPTION_VAL_2_00_VN NULL
#define OPTION_VAL_2_25_VN NULL
#define OPTION_VAL_2_50_VN NULL
#define OPTION_VAL_2_75_VN NULL
#define OPTION_VAL_3_00_VN NULL
#define OPTION_VAL_3_25_VN NULL
#define OPTION_VAL_3_50_VN NULL
#define OPTION_VAL_3_75_VN NULL
#define OPTION_VAL_4_00_VN NULL
#define OPTION_VAL_4_25_VN NULL
#define OPTION_VAL_4_50_VN NULL
#define OPTION_VAL_4_75_VN NULL
#define OPTION_VAL_5_00_VN NULL
#define PCE_MULTITAP_LABEL_VN NULL
#define PCE_MULTITAP_INFO_0_VN NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_VN NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_VN NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_VN NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_VN NULL
#define PCE_TURBO_DELAY_LABEL_VN NULL
#define PCE_TURBO_DELAY_INFO_0_VN NULL
#define OPTION_VAL_FAST_VN NULL
#define OPTION_VAL_MEDIUM_VN NULL
#define OPTION_VAL_SLOW_VN NULL
#define PCE_TURBO_TOGGLING_LABEL_VN NULL
#define OPTION_VAL_TOGGLE_VN NULL
#define OPTION_VAL_ALWAYS_VN NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_VN NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_VN NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_VN NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_VN NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_VN NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_VN NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_VN NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_VN NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_VN NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_VN NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_VN NULL
#define PCE_DISABLE_SOFTRESET_LABEL_VN NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_VN NULL
#define PCE_CDIMAGECACHE_LABEL_VN NULL
#define PCE_CDIMAGECACHE_INFO_0_VN NULL
#define PCE_CDBIOS_LABEL_VN NULL
#define PCE_CDBIOS_INFO_0_VN NULL
#define OPTION_VAL_GAMES_EXPRESS_VN NULL
#define OPTION_VAL_SYSTEM_CARD_1_VN NULL
#define OPTION_VAL_SYSTEM_CARD_2_VN NULL
#define OPTION_VAL_SYSTEM_CARD_3_VN NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_VN NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_VN NULL
#define PCE_ARCADECARD_LABEL_VN NULL
#define PCE_ARCADECARD_INFO_0_VN NULL
#define PCE_CDSPEED_LABEL_VN NULL
#define PCE_CDSPEED_LABEL_CAT_VN NULL
#define PCE_CDSPEED_INFO_0_VN NULL
#define PCE_ADPCMEXTRAPREC_LABEL_VN NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_VN NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_VN NULL
#define OPTION_VAL_10_BIT_VN NULL
#define OPTION_VAL_12_BIT_VN NULL
#define PCE_CDDAVOLUME_LABEL_VN NULL
#define PCE_CDDAVOLUME_LABEL_CAT_VN NULL
#define PCE_CDDAVOLUME_INFO_0_VN NULL
#define PCE_CDDAVOLUME_INFO_1_VN NULL
#define PCE_ADPCMVOLUME_LABEL_VN NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_VN NULL
#define PCE_CDPSGVOLUME_LABEL_VN NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_VN NULL
#define PCE_NOSPRITELIMIT_LABEL_VN NULL
#define PCE_NOSPRITELIMIT_INFO_0_VN NULL
#define PCE_OCMULTIPLIER_LABEL_VN NULL
#define PCE_OCMULTIPLIER_INFO_0_VN NULL

struct retro_core_option_v2_category option_cats_vn[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_VN,
      CATEGORY_VIDEO_INFO_0_VN
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_VN,
      CATEGORY_AUDIO_INFO_0_VN
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_VN,
      CATEGORY_INPUT_INFO_0_VN
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_VN,
      CATEGORY_HACKS_INFO_0_VN
   },
   {
      "cd",
      CATEGORY_CD_LABEL_VN,
      CATEGORY_CD_INFO_0_VN
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_vn[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_VN,
      NULL,
      PCE_PALETTE_INFO_0_VN,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_VN },
         { "Composite", OPTION_VAL_COMPOSITE_VN },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_VN,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_VN,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_VN },
         { "6:5", OPTION_VAL_6_5_VN },
         { "4:3", OPTION_VAL_4_3_VN },
         { "uncorrected", OPTION_VAL_UNCORRECTED_VN },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_VN,
      NULL,
      /*  Is 'authorize' supposed to mean 'allow'? */
      PCE_SCALING_INFO_0_VN,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_VN },
         { "lores", OPTION_VAL_LORES_VN },
         { "hires", OPTION_VAL_HIRES_VN },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_VN,
      NULL,
      PCE_HIRES_BLEND_INFO_0_VN,
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
      PCE_H_OVERSCAN_LABEL_VN,
      NULL,
      PCE_H_OVERSCAN_INFO_0_VN,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_VN },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_VN,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_VN,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_VN },
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
      PCE_LAST_SCANLINE_LABEL_VN,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_VN,
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
         { "242", OPTION_VAL_242_VN },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_VN,
      NULL,
      PCE_PSGREVISION_INFO_0_VN,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_VN },
         { "HuC6280A", OPTION_VAL_HUC6280A_VN },
         { "auto", OPTION_VAL_AUTO_VN },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_VN,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_VN,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_VN },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_VN,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_VN,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_VN },
         { "0.250", OPTION_VAL_0_250_VN },
         { "0.375", OPTION_VAL_0_375_VN },
         { "0.500", OPTION_VAL_0_500_VN },
         { "0.625", OPTION_VAL_0_625_VN },
         { "0.750", OPTION_VAL_0_750_VN },
         { "0.875", OPTION_VAL_0_875_VN },
         { "1.000", OPTION_VAL_1_000_VN },
         { "1.125", OPTION_VAL_1_125_VN },
         { "1.25", OPTION_VAL_1_25_VN },
         { "1.50", OPTION_VAL_1_50_VN },
         { "1.75", OPTION_VAL_1_75_VN },
         { "2.00", OPTION_VAL_2_00_VN },
         { "2.25", OPTION_VAL_2_25_VN },
         { "2.50", OPTION_VAL_2_50_VN },
         { "2.75", OPTION_VAL_2_75_VN },
         { "3.00", OPTION_VAL_3_00_VN },
         { "3.25", OPTION_VAL_3_25_VN },
         { "3.50", OPTION_VAL_3_50_VN },
         { "3.75", OPTION_VAL_3_75_VN },
         { "4.00", OPTION_VAL_4_00_VN },
         { "4.25", OPTION_VAL_4_25_VN },
         { "4.50", OPTION_VAL_4_50_VN },
         { "4.75", OPTION_VAL_4_75_VN },
         { "5.00", OPTION_VAL_5_00_VN },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_VN,
      NULL,
      PCE_MULTITAP_INFO_0_VN,
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
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_VN,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_VN,
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
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_VN,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_VN,
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
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_VN,
      NULL,
      PCE_TURBO_DELAY_INFO_0_VN,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_VN },
         { "Medium", OPTION_VAL_MEDIUM_VN },
         { "Slow", OPTION_VAL_SLOW_VN },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_VN,
      NULL,
      /*  requires more explanation */
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_VN },
         { "always", OPTION_VAL_ALWAYS_VN },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_VN,
      NULL,
      /*  requires more explanation */
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
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_VN,
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
      PCE_P0_TURBO_II_ENABLE_LABEL_VN,
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
      PCE_P1_TURBO_I_ENABLE_LABEL_VN,
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
      PCE_P1_TURBO_II_ENABLE_LABEL_VN,
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
      PCE_P2_TURBO_I_ENABLE_LABEL_VN,
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
      PCE_P2_TURBO_II_ENABLE_LABEL_VN,
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
      PCE_P3_TURBO_I_ENABLE_LABEL_VN,
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
      PCE_P3_TURBO_II_ENABLE_LABEL_VN,
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
      PCE_P4_TURBO_I_ENABLE_LABEL_VN,
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
      PCE_P4_TURBO_II_ENABLE_LABEL_VN,
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
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_VN,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_VN,
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
      PCE_CDIMAGECACHE_LABEL_VN,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_VN,
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
      PCE_CDBIOS_LABEL_VN,
      NULL,
      PCE_CDBIOS_INFO_0_VN,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_VN },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_VN },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_VN },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_VN },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_VN },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_VN },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_VN,
      NULL,
      PCE_ARCADECARD_INFO_0_VN,
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
      PCE_CDSPEED_LABEL_VN,
      PCE_CDSPEED_LABEL_CAT_VN,
      PCE_CDSPEED_INFO_0_VN,
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
      PCE_ADPCMEXTRAPREC_LABEL_VN,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_VN,
      PCE_ADPCMEXTRAPREC_INFO_0_VN,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_VN },
         { "12-bit", OPTION_VAL_12_BIT_VN },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_VN,
      PCE_CDDAVOLUME_LABEL_CAT_VN,
      PCE_CDDAVOLUME_INFO_0_VN,
      PCE_CDDAVOLUME_INFO_1_VN,
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
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_VN,
      PCE_ADPCMVOLUME_LABEL_CAT_VN,
      PCE_CDDAVOLUME_INFO_0_VN,
      PCE_CDDAVOLUME_INFO_1_VN,
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
      PCE_CDPSGVOLUME_LABEL_VN,
      PCE_CDPSGVOLUME_LABEL_CAT_VN,
      PCE_CDDAVOLUME_INFO_0_VN,
      PCE_CDDAVOLUME_INFO_1_VN,
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
      PCE_NOSPRITELIMIT_LABEL_VN,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_VN,
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
      PCE_OCMULTIPLIER_LABEL_VN,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_VN,
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
struct retro_core_options_v2 options_vn = {
   option_cats_vn,
   option_defs_vn
};


#ifdef __cplusplus
}
#endif

#endif
