/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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

#include QMK_KEYBOARD_H
#include "aliases.c"
#include "combos.c"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_ART_BASE] = LAYOUT_single_3x5_3(
    BASE_1_4,		BASE_1_3,			BASE_1_2,			BASE_1_1,			KC_TRNS,	
    BASE_2_4,		BASE_2_3,			BASE_2_2,			BASE_2_1,			KC_TRNS,
    BASE_3_4,		BASE_3_3,			BASE_3_2,			BASE_3_1,			KC_TRNS,  
    KC_TRNS,		KC_TRNS,			KC_TRNS			
),

[_ART_NUM] = LAYOUT_single_3x5_3(
    NUM_1_4,		NUM_1_3,			NUM_1_2,			NUM_1_1,			KC_TRNS,	
    NUM_2_4,		NUM_2_3,			NUM_2_2,			NUM_2_1,			KC_TRNS,	
    NUM_3_4,		NUM_3_3,			NUM_3_2,			NUM_3_1,			KC_TRNS,	
    KC_TRNS,		KC_TRNS,			KC_TRNS
),

[_ART_CUS] = LAYOUT_single_3x5_3(
    CUS_1_4,		CUS_1_3,			CUS_1_2,			CUS_1_1,			KC_TRNS,	
    CUS_2_4,		CUS_2_3,			CUS_2_2,			CUS_2_1,			KC_TRNS,	
    CUS_3_4,		CUS_3_3,			CUS_3_2,			CUS_3_1,			KC_TRNS,	
    KC_TRNS,		KC_TRNS,			KC_TRNS
),

[_ART_PUNC] = LAYOUT_single_3x5_3(
    PUNC_1_4,		PUNC_1_3,			PUNC_1_2,			PUNC_1_1,			KC_TRNS,	
    PUNC_2_4,		PUNC_2_3,			PUNC_2_2,			PUNC_2_1,			KC_TRNS,	
    PUNC_3_4,		PUNC_3_3,			PUNC_3_2,			PUNC_3_1,			KC_TRNS,	
    KC_TRNS,		KC_TRNS,			KC_TRNS
),


[_ART_NAV] = LAYOUT_single_3x5_3(
    NAV_1_4,		NAV_1_3,			NAV_1_2,			NAV_1_1,			KC_TRNS,	
    NAV_2_4,		NAV_2_3,			NAV_2_2,			NAV_2_1,			KC_TRNS,	
    NAV_3_4,		NAV_3_3,			NAV_3_2,			NAV_3_1,			KC_TRNS,	
    KC_TRNS,		KC_TRNS,			KC_TRNS
),

[_ART_FUNC] = LAYOUT_single_3x5_3(
    FUNC_1_4,		FUNC_1_3,			FUNC_1_2,			FUNC_1_1,			KC_TRNS,	
    FUNC_2_4,		FUNC_2_3,			FUNC_2_2,			FUNC_2_1,			KC_TRNS,	
    FUNC_3_4,		FUNC_3_3,			FUNC_3_2,			FUNC_3_1,			KC_TRNS,	
    KC_TRNS,		KC_TRNS,			KC_TRNS
),

[_ART_MAC] = LAYOUT_single_3x5_3(
    KC_TRNS,		KC_TRNS,			KC_TRNS,			KC_TRNS,			KC_TRNS,	
    KC_TRNS,		KC_TRNS,			KC_TRNS,			KC_TRNS,			KC_TRNS,	
    KC_TRNS,		KC_TRNS,			KC_TRNS,			KC_TRNS,			KC_TRNS,	
    KC_TRNS,		KC_TRNS,			KC_TRNS
)
};

// 1. Define custom keycodes for your 12 macros
enum custom_keycodes {
    MACRO0 = SAFE_RANGE,
    MACRO1,
    MACRO2,
    MACRO3,
    MACRO4,
    MACRO5,
    MACRO6,
    MACRO7,
    MACRO8,
    MACRO9,
    MACRO10,
    MACRO11
};

// 2. Logic to process the macros
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case MACRO0:
                SEND_STRING("Macro 0 content");
                return false;
            case MACRO1:
                // Add your second macro here
                return false;
            // ... continue for all 12 cases
        }
    }
    return true;
}

#include "oled_driver.h"

// Define your layer names
const char *get_layer_name(uint8_t layer) {
    static const char *layer_names[] = {
        [0] = "DEFAULT",
        [1] = "NUMBERS",
        [2] = "MEDIA",
        [3] = "SYMBOL",
        [4] = "ARROW",
        [5] = "FUNCTION",
        [6] = "MACRO",
        [7] = "USER1",
        [8] = "USER2",
        [9] = "USER3"
    };

    if (layer < 10) {
        return layer_names[layer];
    }
    return "UNKNOWN";
}

bool oled_task_user(void) {
    // Row 1: Layer Name
    oled_write_P(PSTR("Layer: "), false);
    oled_write(get_layer_name(get_highest_layer(layer_state)), false);
    oled_write_P(PSTR("\n"), false); // Move to Row 2

    // Row 2: Modifier Status
    uint8_t mods = get_mods() | get_oneshot_mods();
    bool capslock = host_keyboard_led_state().caps_lock;

    // First print the prefix label
    oled_write_P(PSTR("modifier:"), false);

    // Check if absolutely no modifiers or locks are active
    if (mods == 0 && !capslock) {
        oled_write_P(PSTR("nothing"), false);
    } else {
        // Evaluate active modifiers one by one
        if (mods & MOD_MASK_SHIFT) {
            oled_write_P(PSTR(" shift"), false);
        }
        if (mods & MOD_MASK_CTRL) {
            oled_write_P(PSTR(" ctrl"), false);
        }
        if (mods & MOD_MASK_ALT) {
            oled_write_P(PSTR(" alt"), false);
        }
        if (mods & MOD_MASK_GUI) {
            oled_write_P(PSTR(" gui"), false);
        }
        if (capslock) {
            oled_write_P(PSTR(" caps"), false);
        }
    }

    return false;
}