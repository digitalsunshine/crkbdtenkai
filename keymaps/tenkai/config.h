/*
This is the c configuration file for the keymap

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

// Allow VIA to support up to 10 layers 
#define DYNAMIC_KEYMAP_LAYER_COUNT 10

// Define which physical half of the Corne you are plugging the USB cable into
#define MASTER_LEFT

#pragma once

#define DYNAMIC_KEYMAP_LAYER_COUNT 10
#define MASTER_LEFT

// Combo Boundaries
#define COMBO_COUNT 60          // Tells QMK you will only use exactly  combos total
#define COMBO_MAX_SIZE 4        // Restricts combos to 4-key chord combinations maximum
#define COMBO_TERM 200          // Increase the combo window so they register more slowly (default is 50)
#define COMBO_CHORD_TIMEOUT 80  // Force QMK to wait until all keys are pressed before processing
#define COMBO_ALLOW_ACTION_KEYS // Allow processing of heavier chords (default is 2 if not declared)

//#define USE_MATRIX_I2C

//#define QUICK_TAP_TERM 0
//#define TAPPING_TERM 100

#ifdef RGBLIGHT_ENABLE
    #define RGBLIGHT_EFFECT_BREATHING
    #define RGBLIGHT_EFFECT_RAINBOW_MOOD
    #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
    #define RGBLIGHT_EFFECT_SNAKE
    #define RGBLIGHT_EFFECT_KNIGHT
    #define RGBLIGHT_EFFECT_CHRISTMAS
    #define RGBLIGHT_EFFECT_STATIC_GRADIENT
    #define RGBLIGHT_EFFECT_RGB_TEST
    #define RGBLIGHT_EFFECT_ALTERNATING
    #define RGBLIGHT_EFFECT_TWINKLE
    #define RGBLIGHT_LIMIT_VAL 120
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17
#endif
