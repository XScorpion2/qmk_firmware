/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x3535
#define PRODUCT_ID      0x3505
#define MANUFACTURER    RGBKB
#define PRODUCT         Mün

#define USB_POLLING_INTERVAL_MS 1

/* Matrix Configuration - Rows are doubled up */
#define MATRIX_ROWS 10
#define MATRIX_ROW_PINS { A1, A3, B3, A13, B15 }
#define MATRIX_COLS 7
#define MATRIX_COL_PINS { A0, B11, B0, B10, B12, B2, A8 }
#define MATRIX_IO_DELAY 5

/* Encoder Configuration */
#define ENCODERS_PAD_A { B8, B9 }
#define ENCODERS_PAD_B { A14, A15 }
#define TOUCH_SEGMENTS 3

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Split Keyboard Configuration */
#define EE_HANDS
#define SPLIT_USB_DETECT
#define SPLIT_TRANSPORT_MIRROR
#define SOFT_SERIAL_PIN A9
#define SERIAL_USART_SPEED (1 * 1024 * 1024)
#define SERIAL_USART_DRIVER SD1
#define SERIAL_USART_TX_PAL_MODE 7
#define SERIAL_USART_TIMEOUT 5

/* RGB LED Configuration */
#define RGB_DI_PIN          B5

#define RGBLED_NUM 98
#define RGBLED_SPLIT { 49, 49 }
#define RGBLIGHT_LIMIT_VAL 120
#define RGBLIGHT_ANIMATIONS

#define DRIVER_LED_TOTAL RGBLED_NUM
#define RGB_MATRIX_SPLIT RGBLED_SPLIT
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS RGBLIGHT_LIMIT_VAL
#define RGB_MATRIX_CENTER { 128, 34 }
#define RGB_MATRIX_LED_FLUSH_LIMIT 33
#define RGB_MATRIX_LED_PROCESS_LIMIT 10
#define RGB_MATRIX_KEYPRESSES
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS

#define WS2812_PWM_DRIVER PWMD3
#define WS2812_PWM_CHANNEL 2
#define WS2812_PWM_PAL_MODE 2
#define WS2812_DMA_STREAM STM32_DMA1_STREAM3
#define WS2812_DMA_CHANNEL 3

#define TOUCH_UPDATE_INTERVAL 33
#define OLED_UPDATE_INTERVAL 33
