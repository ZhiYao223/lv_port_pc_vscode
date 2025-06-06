// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.2
// LVGL version: 9.2.2
// Project name: SquareLine_Project

#ifndef _SQUARELINE_PROJECT_UI_H
#define _SQUARELINE_PROJECT_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl/lvgl.h"

#include "ui_helpers.h"
#include "ui_events.h"


///////////////////// SCREENS ////////////////////

#include "screens/ui_Screen1.h"
#include "screens/ui_Screen2.h"
#include "screens/ui_Screen3.h"

///////////////////// VARIABLES ////////////////////


// EVENTS

extern lv_obj_t * ui____initial_actions0;

// IMAGES AND IMAGE SETS
LV_IMG_DECLARE(ui_img_1_png);    // assets/1.png
LV_IMG_DECLARE(ui_img_switch_png);    // assets/Switch.png
LV_IMG_DECLARE(ui_img_22_png);    // assets/22.png
LV_IMG_DECLARE(ui_img_11_png);    // assets/11.png

// UI INIT
void SquareLine_ui_init(void);
void ui_destroy(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
