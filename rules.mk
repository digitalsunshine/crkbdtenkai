# MCU name
MCU = atmega32u4


# Bootloader selection
#   Teensy       halfkay
#   Pro Micro    caterina
#   Atmel DFU    atmel-dfu
#   LUFA DFU     lufa-dfu
#   QMK DFU      qmk-dfu
#   atmega32a    bootloadHID
BOOTLOADER = caterina


# Build Options
#   change yes to no to disable
#
VIA_ENABLE = yes
LTO_ENABLE = yes
SPLIT_KEYBOARD_ENABLE = no
BOOTMAGIC_ENABLE = no
COMBO_ENABLE = yes
NKRO_ENABLE = yes
OLED_ENABLE = no
RGBLIGHT_ENABLE = no
RGB_MATRIX_ENABLE = no
WPM_ENABLE = no
