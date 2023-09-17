// Copyright 2022 yuchi
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define VENDOR_ID    0x1209 //pid.codes
#define PRODUCT_ID   0x5800
#define DEVICE_VER   0x0001
#define MANUFACTURER liliums
#define PRODUCT      Lily58_RP2040

#define MATRIX_COLS 6
#define MATRIX_ROWS 10

#define MATRIX_COL_PINS { GP10,GP11,GP12,GP13,GP14,GP15 }
#define MATRIX_COL_PINS_RIGHT { GP15,GP14,GP13,GP12,GP11,GP10 }
#define MATRIX_ROW_PINS { GP22,GP21,GP20,GP19,GP18 }
#define MATRIX_ROW_PINS_RIGHT { GP18,GP19,GP20,GP21,GP22 }


#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP25
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U

#define DEBOUNCE 5
#define SERIAL_USART_FULL_DUPLEX   // Enable full duplex operation mode.
#define SERIAL_USART_TX_PIN GP0     // USART TX pin
#define SERIAL_USART_RX_PIN GP1     // USART RX pin

#define I2C_DRIVER I2CD2
#define I2C1_SDA_PIN GP2
#define I2C1_SCL_PIN GP3

#define ENCODERS_PAD_A { GP18 }
#define ENCODERS_PAD_B { GP19 }

#define RGB_DI_PIN GP17
#define RGBLED_NUM 12

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
