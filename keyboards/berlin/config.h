// Copyright 2023 Paul Vierkorn (@9hax)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once
#include "display/display.h"

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

#define DIP_SWITCH_PINS { D9, E6 }

#define SLIDER_PIN_A A2
#define SLIDER_PIN_B A1
#define SLIDER_PIN_C A0

#define LED_NUM_LOCK_PIN D0
#define LED_CAPS_LOCK_PIN D1
#define LED_SCROLL_LOCK_PIN D2

#define WS2812_DI_PIN D8
#define RGBLED_NUM 127

//LED Driver Timings, aka black magic
#define WS2812_TRST_US 100
#define WS2812_TIMING 1250
#define WS2812_T0L WS2812_TIMING-WS2812_T0H
#define WS2812_T0H 350
#define WS2812_T1L WS2812_TIMING-WS2812_T1H
#define WS2812_T1H 750