/**
 * @file lv_100ask_demo_conf.h
 * Configuration file for v8.1.0-dev
 *
 */
/*
 * COPY THIS FILE AS lv_100ask_demo_conf.h
 */

/* clang-format off */
#if 0 /*Set it to "1" to enable the content*/

#ifndef LV_100ASK_DEMO_CONF_H
#define LV_100ASK_DEMO_CONF_H


/*******************
 * GENERAL SETTING
 *******************/

/*********************
 * DEMO USAGE
 *********************/

/*Show some widget*/

/* [Info] About us 1024x600*/
#define LV_USE_100ASK_DEMO_ABOUT_US        0
#if LV_USE_100ASK_DEMO_ABOUT_US
    #define LV_100ASK_IMX6ULL_PRO          0
    #define LV_100ASK_IMX6ULL_MINI         0
    #define LV_100ASK_STM32MP157_PRO       0
#endif

/* [Game] Memory game demo, optimized for 1024x600*/
#define LV_USE_100ASK_DEMO_GAME_MEMORY      0

/* [Game] 2048 game demo, optimized for 1024x600*/
#define LV_USE_100ASK_DEMO_GAME_2048        0

/* [Game] Snake game demo, optimized for 1024x600*/
#define LV_USE_100ASK_DEMO_GAME_SNAKE       0

/* [Game] Tron game demo, optimized for 1024x600*/
#define LV_USE_100ASK_DEMO_GAME_TILES       0

/* [Efficiency] Calculator demo, optimized for 1024x600*/
#define LV_USE_100ASK_DEMO_EFF_CALC         0

/* [Efficiency(Linux only)] Weather overview 1024x600*/
#define LV_USE_100ASK_DEMO_WEATHER          0



#endif /*LV_100ASK_DEMO_CONF_H*/

#endif /*End of "Content enable"*/

