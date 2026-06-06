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

enum layers {
  _ART_BASE,
  _ART_NUM,
  _ART_CUS,
  _ART_PUNC,
  _ART_NAV,
  _ART_FUNC,
  _ART_MAC,
};

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
