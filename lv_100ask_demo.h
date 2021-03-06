/**
 * @file lv_100ask_demo.h
 *
 */

#ifndef LV_100ASK_DEMO_H
#define LV_100ASK_DEMO_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#else
#include "../lvgl/lvgl.h"
#endif

#if defined(LV_100ASK_DEMO_CONF_PATH)
#define __LV_TO_STR_AUX(x) #x
#define __LV_TO_STR(x) __LV_TO_STR_AUX(x)
#include __LV_TO_STR(LV_100ASK_DEMO_CONF_PATH)
#undef __LV_TO_STR_AUX
#undef __LV_TO_STR
#elif defined(LV_100ASK_DEMO_CONF_INCLUDE_SIMPLE)
#include "lv_100ask_demo_conf.h"
#else
#include "../lv_100ask_demo_conf.h"
#endif

#include "src/lv_100ask_demo_memory/lv_100ask_demo_memory.h"
#include "src/lv_100ask_demo_2048/lv_100ask_demo_2048.h"
#include "src/lv_100ask_demo_snake/lv_100ask_demo_snake.h"
#include "src/lv_100ask_demo_tiles/lv_100ask_demo_tiles.h"
#include "src/lv_100ask_demo_calc/lv_100ask_demo_calc.h"
#include "src/lv_100ask_demo_weather/lv_100ask_demo_weather.h"
#include "src/lv_100ask_demo_about/lv_100ask_demo_about.h"
#include "src/lv_100ask_demo_qrcode/lv_100ask_demo_qrcode.h"


/*********************
 *      DEFINES
 *********************/
/*Test  lvgl version*/
#if LV_VERSION_CHECK(8, 0, 0) == 0
#error "lv_100ask_demo: Wrong lvgl version"
#endif

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/


/**********************
 *      MACROS
 **********************/


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /*LV_100ASK_DEMO_H*/
