
/**
 ******************************************************************************
 * @file    lv_100ask_demo_about.c
 * @author  百问科技
 * @version V1.0
 * @date    2021-11-06
 * @brief	天气
 ******************************************************************************
 * Change Logs:
 * Date           Author          Notes
 * 2021-11-06     zhouyuebiao     First version
 ******************************************************************************
 * @attention
 *
 * Copyright (C) 2008-2021 深圳百问网科技有限公司<https://www.100ask.net/>
 * All rights reserved
 *
 ******************************************************************************
 */
/**
 * @file lv_100ask_demo_about.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "../../lv_100ask_demo.h"

#if LV_USE_100ASK_DEMO_ABOUT_US

#include <stdio.h>
//#include <stdlib.h>
#include "lv_100ask_demo_about.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/


/**********************
 *  STATIC VARIABLES
 **********************/


/**********************
 *  STATIC PROTOTYPES
 **********************/




/**********************
 *   STATIC FUNCTIONS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

/*
 *  函数名：   void lv_100ask_demo_about(void)
 *  输入参数： 无
 *  返回值：   无
 *  函数作用： 应用初始化入口
*/
void lv_100ask_demo_about(void)
{

    lv_obj_t * obj_layout;
    lv_obj_t * info_list1;
    lv_obj_t * info_list2;
    lv_obj_t * info_list3;
    static lv_style_t obj_layout_style;   // 容器的样式

    lv_style_init(&obj_layout_style);
    //lv_style_set_pad_all(&obj_layout_style, 0);
    //lv_style_set_bg_opa(&obj_layout_style, 0);
    //lv_style_set_shadow_opa(&obj_layout_style, 0);
    lv_style_set_border_opa(&obj_layout_style, 0);

    /* Layout Init */
    obj_layout = lv_obj_create(lv_scr_act());
    lv_obj_set_size(obj_layout,  LV_PCT(100), LV_PCT(100));
    lv_obj_set_layout(obj_layout, LV_LAYOUT_FLEX);
    lv_obj_set_style_base_dir(obj_layout, LV_BASE_DIR_RTL, 0);
    lv_obj_set_flex_flow(obj_layout, LV_FLEX_FLOW_COLUMN);
    lv_obj_center(obj_layout);
    lv_obj_add_style(obj_layout, &obj_layout_style, 0);

    /* Create title */
    lv_obj_t * label_title = lv_label_create(obj_layout);
    lv_obj_set_width(label_title, LV_PCT(100));
    lv_obj_set_style_text_font(label_title, &lv_font_montserrat_32, 0);
    lv_obj_set_style_text_align(label_title, LV_TEXT_ALIGN_CENTER, 0);
    //lv_label_set_recolor(label_title, true);                      /*Enable re-coloring by commands in the text*/
    lv_label_set_text(label_title, "ABOUT");
    lv_obj_align(label_title, LV_ALIGN_CENTER, 0, 0); //lv_obj_center(label_title);

#if LV_100ASK_IMX6ULL_PRO
    /* Create info list1 */
    info_list1 = lv_list_create(obj_layout);
    //lv_obj_set_style_text_align(info_list1, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_size(info_list1, LV_PCT(100), LV_PCT(42));
    lv_obj_center(info_list1);

    /* Add buttons to the list */
    lv_list_add_text(info_list1, "Hardware Specifications");
    lv_list_add_btn(info_list1, "\xef""100ASK_IMX6ULL_Pro", "Name");
    lv_list_add_btn(info_list1, "\xef""ARM Cortex-A 800M", "CPU");
    lv_list_add_btn(info_list1, "\xef""512MB DDR3L", "Memory");
    lv_list_add_btn(info_list1, "\xef""4GB EMMC FLASH", "FLASH");
    lv_list_add_btn(info_list1, "\xef""7-inch(1024x600) RGB", "Screen");

    /* Create info list2 */
    info_list2 = lv_list_create(obj_layout);
    //lv_obj_set_style_text_align(info_list2, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_size(info_list2, LV_PCT(100), LV_PCT(42));
    lv_obj_center(info_list2);

    /*Add buttons to the list*/
    lv_list_add_text(info_list2, "Software Specifications");
    lv_list_add_btn(info_list2, "\xef""100ASK Linux GUI(POWER BY LVGL)", "Name");
    lv_list_add_btn(info_list2, "\xef""V2.0", "Version");
    lv_list_add_btn(info_list2, "\xef""2021-11-11", "Updated");
    lv_list_add_btn(info_list2, LV_SYMBOL_EYE_OPEN" https://www.100ask.net", "Source code");
    lv_list_add_btn(info_list2, LV_SYMBOL_WARNING" Copyright @ 2019-2021 Shenzhen Baiwenwang Technology Co., Ltd. All Rights Reserved.", "Copyright");

    /* Create info list3 */
    info_list3 = lv_list_create(obj_layout);
    //lv_obj_set_style_text_align(info_list3, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_size(info_list3, LV_PCT(100), LV_PCT(78));
    lv_obj_center(info_list3);

    /*Add buttons to the list*/
    lv_list_add_text(info_list3, "About the Authors");
    lv_list_add_btn(info_list3, "\xef""Shenzhen Baiwenwang Technology Co., Ltd.(weidongshan)", "Name");
    lv_list_add_btn(info_list3, LV_SYMBOL_CALL" 0755-86200561", "Phone");
    lv_list_add_btn(info_list3, LV_SYMBOL_HOME" https://www.100ask.net", "Official website");
    lv_list_add_btn(info_list3, "\xef""baiwenkeji", "WeChat");
    lv_list_add_btn(info_list3, "\xef""https://download.100ask.org", "Data Download Center");
    lv_list_add_btn(info_list3, "\xef""http://bbs.100ask.net", "Forum");
    lv_list_add_btn(info_list3, "\xef""https://100ask.taobao.com", "Taobao");
    lv_list_add_btn(info_list3, "\xef""https://weidongshan.tmall.com", "Tmall");
    lv_list_add_btn(info_list3, "\xef""https://blog.csdn.net/thisway_diy", "CSDN");
    lv_list_add_btn(info_list3, "\xef""https://space.bilibili.com/275908810", "Bilibili");
#endif // LV_100ASK_IMX6ULL_PRO

    lv_obj_t * spans = lv_spangroup_create(obj_layout);
    lv_obj_set_size(spans, LV_PCT(100), LV_PCT(30));

    lv_spangroup_set_align(spans, LV_TEXT_ALIGN_LEFT);
    lv_spangroup_set_overflow(spans, LV_SPAN_OVERFLOW_CLIP);
    lv_spangroup_set_indent(spans, 20);
    lv_spangroup_set_mode(spans, LV_SPAN_MODE_BREAK);

    lv_span_t * span = lv_spangroup_new_span(spans);
    lv_span_set_text_static(span, "\nhttps://www.100ask.net");
    lv_style_set_text_color(&span->style, lv_palette_main(LV_PALETTE_GREEN));
    lv_style_set_text_decor(&span->style, LV_TEXT_DECOR_UNDERLINE);
    lv_style_set_text_opa(&span->style, LV_OPA_70);

    span = lv_spangroup_new_span(spans);
    lv_span_set_text_static(span, "\nCopyright @ 2019-2021 Shenzhen Baiwenwang Technology Co., Ltd. All Rights Reserved.");
    lv_style_set_text_opa(&span->style, LV_OPA_70);

}


#endif /* LV_USE_100ASK_DEMO_GAME_TRON*/
