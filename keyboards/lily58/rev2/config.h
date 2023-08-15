// Copyright 2023 yuchi
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define MATRIX_COLS 6
#define MATRIX_ROWS 10

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP25
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U

#define DEBOUNCE 5
#define SERIAL_USART_FULL_DUPLEX   // Enable full duplex operation mode.
#define SERIAL_USART_TX_PIN GP0     // USART TX pin
#define SERIAL_USART_RX_PIN GP1     // USART RX pin

#define I2C_DRIVER I2CD1 // I2C1 = I2CD1
#define I2C1_SDA_PIN GP18
#define I2C1_SCL_PIN GP19

#define ENCODERS_PAD_A { GP3 }
#define ENCODERS_PAD_B { GP2 }

#define SERIAL_DEBUG

#define WS2812_PIO_USE_PIO1
#define WS2812_DI_PIN GP11

#ifdef WS2812_DI_PIN
  #define RGBLED_NUM 58
  #define RGBLIGHT_SPLIT
  #define RGBLED_SPLIT { 29,29 }
  #define RGBLIGHT_HUE_STEP 8
  #define RGBLIGHT_SAT_STEP 8
  #define RGBLIGHT_VAL_STEP 8
  #define RGBLIGHT_LIMIT_VAL 32
  #define RGBLIGHT_SLEEP
  #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#endif

#define SPLIT_HAND_PIN GP21

#define OLED_FONT_H "lib/glcdfont_lily.c"
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
