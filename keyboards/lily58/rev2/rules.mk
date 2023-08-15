# This file intentionally left blank
# MCU name
MCU = RP2040
# Bootloader selection
BOOTLOADER = rp2040

# BOARD = GENERIC_RP_RP2040

SPLIT_KEYBOARD = yes
VIA_ENABLE = yes
SERIAL_DRIVER = vendor
OLED_ENABLE = yes
OLED_DRIVER = SSD1306

BACKLIGHT_ENABLE = no
RGBLIGHT_ENABLE = yes
WS2812_DRIVER = vendor

# BOOTMAGIC_ENABLE = no       # Enable Bootmagic Lite
# MOUSEKEY_ENABLE = no        # Mouse keys(+4700)
# EXTRAKEY_ENABLE = no        # Audio control and System control(+450)
# CONSOLE_ENABLE = no         # Console for debug(+400)
# COMMAND_ENABLE = no         # Commands for debug and configuration
# NKRO_ENABLE = no            # Nkey Rollover - if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
# BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
# MIDI_ENABLE = no            # MIDI controls
# AUDIO_ENABLE = no           # Audio output on port C6
# UNICODE_ENABLE = no         # Unicode
# BLUETOOTH_ENABLE = no       # Enable Bluetooth with the Adafruit EZ-Key HID
# SWAP_HANDS_ENABLE = no      # Enable one-hand typing
