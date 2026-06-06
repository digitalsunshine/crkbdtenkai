enum combo_events{
ARTSEY_M,
ARTSEY_G,
ARTSEY_O,
ARTSEY_B,
ARTSEY_U,
ARTSEY_R,
ARTSEY_H,
ARTSEY_J,
ARTSEY_S,
ARTSEY_L,
ARTSEY_W,
ARTSEY_Q,
ARTSEY_V,
ARTSEY_Y,
ARTSEY_Z,
ARTSEY_X,
ARTSEY_SLASH,
ARTSEY_BANG,
ARTSEY_QUEST,
ARTSEY_COMMA,
ARTSEY_DOT,
ARTSEY_MINS,
ARTSEY_UNDRSCR,
ARTSEY_SPACE,
ARTSEY_SPACE_2,
ARTSEY_BACKSPACE,
ARTSEY_BACKSPACE_2,
ARTSEY_DEL,
ARTSEY_DEL_2,
ARTSEY_ENTER,
ARTSEY_ENTER_2,
ARTSEY_ESCAPE,
ARTSEY_TAB,
ARTSEY_OS_SHIFT,
ARTSEY_OS_CONTROL,
ARTSEY_OS_ALT,
ARTSEY_OS_GUI,
ARTSEY_CTRL,
ARTSEY_CTRL_2,
ARTSEY_GUI,
ARTSEY_GUI_2,
ARTSEY_ALT,
ARTSEY_ALT_2,
ARTSEY_SHIFT,
ARTSEY_SHIFT2,
ARTSEY_EQL,
ARTSEY_GESC,
ARTSEY_TILDE,
ARTSEY_CIRCUMFLEX,
COMBO_LENGTH
};
uint16_t COMBO_LEN = COMBO_LENGTH;
const uint16_t PROGMEM artsey_m[] = {BASE_1_2,BASE_1_1,COMBO_END};
const uint16_t PROGMEM artsey_g[] = {BASE_1_3,BASE_1_1,COMBO_END};
const uint16_t PROGMEM artsey_o[] = {BASE_1_3,BASE_1_2,COMBO_END};
const uint16_t PROGMEM artsey_b[] = {BASE_1_3,BASE_1_2,BASE_1_1,COMBO_END};
const uint16_t PROGMEM artsey_u[] = {BASE_2_2,BASE_2_1,COMBO_END};
const uint16_t PROGMEM artsey_r[] = {BASE_2_3,BASE_2_1,COMBO_END};
const uint16_t PROGMEM artsey_h[] = {BASE_2_3,BASE_2_2,BASE_2_1,COMBO_END};
const uint16_t PROGMEM artsey_j[] = {BASE_2_4,BASE_2_3,BASE_2_2,COMBO_END};
const uint16_t PROGMEM artsey_s[] = {BASE_2_4,BASE_2_1,COMBO_END};
const uint16_t PROGMEM artsey_l[] = {BASE_2_4,BASE_2_2,COMBO_END};
const uint16_t PROGMEM artsey_w[] = {BASE_2_4,BASE_2_3,BASE_2_1,COMBO_END};
const uint16_t PROGMEM artsey_q[] = {BASE_2_4,BASE_2_2,BASE_2_1,COMBO_END};
const uint16_t PROGMEM artsey_v[] = {BASE_3_2,BASE_3_1,COMBO_END};
const uint16_t PROGMEM artsey_y[] = {BASE_3_3,BASE_3_1,COMBO_END};
const uint16_t PROGMEM artsey_z[] = {BASE_3_3,BASE_3_2,COMBO_END};
const uint16_t PROGMEM artsey_x[] = {BASE_3_3,BASE_3_2,BASE_3_1,COMBO_END};
const uint16_t PROGMEM artsey_slash[] = {BASE_2_2,BASE_3_1,COMBO_END};
const uint16_t PROGMEM artsey_bang[] = {BASE_2_4,BASE_1_1,COMBO_END};
const uint16_t PROGMEM artsey_quest[] = {BASE_2_4,BASE_1_2,COMBO_END};
const uint16_t PROGMEM artsey_comma[] = {BASE_2_4,BASE_3_2,COMBO_END};
const uint16_t PROGMEM artsey_dot[] = {BASE_2_4,BASE_3_1,COMBO_END};
const uint16_t PROGMEM artsey_mins[] = {BASE_2_4,BASE_2_3,COMBO_END};
const uint16_t PROGMEM artsey_undrscr[] = {BASE_2_4,BASE_3_3,COMBO_END};
const uint16_t PROGMEM artsey_space[] = {BASE_2_3,BASE_2_2,COMBO_END};
const uint16_t PROGMEM artsey_space_2[] = {NAV_2_3,NAV_2_2,COMBO_END};
const uint16_t PROGMEM artsey_backspace[] = {BASE_1_2,BASE_2_3,COMBO_END};
const uint16_t PROGMEM artsey_backspace_2[] = {NAV_1_2,NAV_2_3,COMBO_END};
const uint16_t PROGMEM artsey_del[] = {BASE_1_2,BASE_2_1,COMBO_END};
const uint16_t PROGMEM artsey_del_2[] = {NAV_1_2,NAV_2_1,COMBO_END};
const uint16_t PROGMEM artsey_enter[] = {BASE_2_3,BASE_2_2,BASE_3_1,COMBO_END};
const uint16_t PROGMEM artsey_enter_2[] = {NAV_2_3,NAV_2_2,NAV_3_1,COMBO_END};
const uint16_t PROGMEM artsey_escape[] = {BASE_1_3,BASE_1_2,BASE_1_1,BASE_2_4,COMBO_END};
const uint16_t PROGMEM artsey_tab[] = {BASE_1_2,BASE_1_1,BASE_2_4,COMBO_END};
const uint16_t PROGMEM artsey_os_shift[] = {BASE_1_3,BASE_1_2,BASE_2_1,COMBO_END};
const uint16_t PROGMEM artsey_os_control[] = {BASE_1_3,BASE_2_1,COMBO_END};
const uint16_t PROGMEM artsey_os_alt[] = {BASE_1_3,BASE_2_2,COMBO_END};
const uint16_t PROGMEM artsey_os_gui[] = {BASE_1_3,BASE_2_2,BASE_3_1,COMBO_END};
const uint16_t PROGMEM artsey_ctrl[] = {BASE_1_3,BASE_2_1,BASE_2_4,COMBO_END};
const uint16_t PROGMEM artsey_ctrl_2[] = {NAV_1_3,NAV_2_1,NAV_2_4,COMBO_END};
const uint16_t PROGMEM artsey_gui[] = {BASE_1_3,BASE_2_2,BASE_3_1,BASE_2_4,COMBO_END};
const uint16_t PROGMEM artsey_gui_2[] = {NAV_1_3,NAV_2_2,NAV_3_1,NAV_2_4,COMBO_END};
const uint16_t PROGMEM artsey_alt[] = {BASE_1_3,BASE_2_2,BASE_2_4,COMBO_END};
const uint16_t PROGMEM artsey_alt_2[] = {NAV_1_3,NAV_2_2,NAV_2_4,COMBO_END};
const uint16_t PROGMEM artsey_shift[] = {BASE_2_4,BASE_1_3,BASE_1_2,BASE_2_1,COMBO_END};
const uint16_t PROGMEM artsey_shift2[] = {NAV_2_4,NAV_1_3,NAV_1_2,NAV_2_1,COMBO_END};
const uint16_t PROGMEM artsey_eql[] = {PUNC_2_4,PUNC_2_3,PUNC_2_2,COMBO_END};
const uint16_t PROGMEM artsey_gesc[] = {PUNC_1_3,PUNC_2_2,COMBO_END};
const uint16_t PROGMEM artsey_tilde[] = {PUNC_1_3,PUNC_1_2,COMBO_END};
const uint16_t PROGMEM artsey_circumflex[] = {PUNC_2_4,PUNC_1_2,COMBO_END};
combo_t key_combos[] = {
[ARTSEY_M] = COMBO_ACTION(artsey_m),
[ARTSEY_G] = COMBO_ACTION(artsey_g),
[ARTSEY_O] = COMBO_ACTION(artsey_o),
[ARTSEY_B] = COMBO_ACTION(artsey_b),
[ARTSEY_U] = COMBO_ACTION(artsey_u),
[ARTSEY_R] = COMBO_ACTION(artsey_r),
[ARTSEY_H] = COMBO_ACTION(artsey_h),
[ARTSEY_J] = COMBO_ACTION(artsey_j),
[ARTSEY_S] = COMBO_ACTION(artsey_s),
[ARTSEY_L] = COMBO_ACTION(artsey_l),
[ARTSEY_W] = COMBO_ACTION(artsey_w),
[ARTSEY_Q] = COMBO_ACTION(artsey_q),
[ARTSEY_V] = COMBO_ACTION(artsey_v),
[ARTSEY_Y] = COMBO_ACTION(artsey_y),
[ARTSEY_Z] = COMBO_ACTION(artsey_z),
[ARTSEY_X] = COMBO_ACTION(artsey_x),
[ARTSEY_SLASH] = COMBO_ACTION(artsey_slash),
[ARTSEY_BANG] = COMBO_ACTION(artsey_bang),
[ARTSEY_QUEST] = COMBO_ACTION(artsey_quest),
[ARTSEY_COMMA] = COMBO_ACTION(artsey_comma),
[ARTSEY_DOT] = COMBO_ACTION(artsey_dot),
[ARTSEY_MINS] = COMBO_ACTION(artsey_mins),
[ARTSEY_UNDRSCR] = COMBO_ACTION(artsey_undrscr),
[ARTSEY_SPACE] = COMBO_ACTION(artsey_space),
[ARTSEY_SPACE_2] = COMBO_ACTION(artsey_space_2),
[ARTSEY_BACKSPACE] = COMBO_ACTION(artsey_backspace),
[ARTSEY_BACKSPACE_2] = COMBO_ACTION(artsey_backspace_2),
[ARTSEY_DEL] = COMBO_ACTION(artsey_del),
[ARTSEY_DEL_2] = COMBO_ACTION(artsey_del_2),
[ARTSEY_ENTER] = COMBO_ACTION(artsey_enter),
[ARTSEY_ENTER_2] = COMBO_ACTION(artsey_enter_2),
[ARTSEY_ESCAPE] = COMBO_ACTION(artsey_escape),
[ARTSEY_TAB] = COMBO_ACTION(artsey_tab),
[ARTSEY_OS_SHIFT] = COMBO_ACTION(artsey_os_shift),
[ARTSEY_OS_CONTROL] = COMBO_ACTION(artsey_os_control),
[ARTSEY_OS_ALT] = COMBO_ACTION(artsey_os_alt),
[ARTSEY_OS_GUI] = COMBO_ACTION(artsey_os_gui),
[ARTSEY_CTRL] = COMBO_ACTION(artsey_ctrl),
[ARTSEY_CTRL_2] = COMBO_ACTION(artsey_ctrl_2),
[ARTSEY_GUI] = COMBO_ACTION(artsey_gui),
[ARTSEY_GUI_2] = COMBO_ACTION(artsey_gui_2),
[ARTSEY_ALT] = COMBO_ACTION(artsey_alt),
[ARTSEY_ALT_2] = COMBO_ACTION(artsey_alt_2),
[ARTSEY_SHIFT] = COMBO_ACTION(artsey_shift),
[ARTSEY_SHIFT2] = COMBO_ACTION(artsey_shift2),
[ARTSEY_EQL] = COMBO_ACTION(artsey_eql),
[ARTSEY_GESC] = COMBO_ACTION(artsey_gesc),
[ARTSEY_TILDE] = COMBO_ACTION(artsey_tilde),
[ARTSEY_CIRCUMFLEX] = COMBO_ACTION(artsey_circumflex),
};
void process_combo_event(uint16_t combo_index, bool pressed) {
switch(combo_index) {
case ARTSEY_M:
if (pressed) {SEND_STRING("m");}
break;
case ARTSEY_G:
if (pressed) {SEND_STRING("g");}
break;
case ARTSEY_O:
if (pressed) {SEND_STRING("o");}
break;
case ARTSEY_B:
if (pressed) {SEND_STRING("b");}
break;
case ARTSEY_U:
if (pressed) {SEND_STRING("u");}
break;
case ARTSEY_R:
if (pressed) {SEND_STRING("r");}
break;
case ARTSEY_H:
if (pressed) {SEND_STRING("h");}
break;
case ARTSEY_J:
if (pressed) {SEND_STRING("j");}
break;
case ARTSEY_S:
if (pressed) {SEND_STRING("s");}
break;
case ARTSEY_L:
if (pressed) {SEND_STRING("l");}
break;
case ARTSEY_W:
if (pressed) {SEND_STRING("w");}
break;
case ARTSEY_Q:
if (pressed) {SEND_STRING("q");}
break;
case ARTSEY_V:
if (pressed) {SEND_STRING("v");}
break;
case ARTSEY_Y:
if (pressed) {SEND_STRING("y");}
break;
case ARTSEY_Z:
if (pressed) {SEND_STRING("z");}
break;
case ARTSEY_X:
if (pressed) {SEND_STRING("x");}
break;
case ARTSEY_SLASH:
if (pressed) {SEND_STRING("/");}
break;
case ARTSEY_BANG:
if (pressed) {SEND_STRING("!");}
break;
case ARTSEY_QUEST:
if (pressed) {SEND_STRING("?");}
break;
case ARTSEY_COMMA:
if (pressed) {SEND_STRING(",");}
break;
case ARTSEY_DOT:
if (pressed) {SEND_STRING(".");}
break;
case ARTSEY_MINS:
if (pressed) {SEND_STRING("-");}
break;
case ARTSEY_UNDRSCR:
if (pressed) {SEND_STRING("_");}
break;
case ARTSEY_SPACE:
if (pressed) {SEND_STRING(" ");}
break;
case ARTSEY_SPACE_2:
if (pressed) {SEND_STRING(" ");}
break;
case ARTSEY_BACKSPACE:
if (pressed) {SEND_STRING(SS_TAP(X_BSPC));}
break;
case ARTSEY_BACKSPACE_2:
if (pressed) {SEND_STRING(SS_TAP(X_BSPC));}
break;
case ARTSEY_DEL:
if (pressed) {SEND_STRING(SS_TAP(X_DEL));}
break;
case ARTSEY_DEL_2:
if (pressed) {SEND_STRING(SS_TAP(X_DEL));}
break;
case ARTSEY_ENTER:
if (pressed) {SEND_STRING(SS_TAP(X_ENTER));}
break;
case ARTSEY_ENTER_2:
if (pressed) {SEND_STRING(SS_TAP(X_ENTER));}
break;
case ARTSEY_ESCAPE:
if (pressed) {SEND_STRING(SS_TAP(X_ESC));}
break;
case ARTSEY_TAB:
if (pressed) {SEND_STRING(SS_TAP(X_TAB));}
break;
case ARTSEY_OS_SHIFT:
if (pressed) {add_oneshot_mods(MOD_BIT(KC_LSFT));}
break;
case ARTSEY_OS_CONTROL:
if (pressed) {add_oneshot_mods(MOD_BIT(KC_LCTL));}
break;
case ARTSEY_OS_ALT:
if (pressed) {add_oneshot_mods(MOD_BIT(KC_LALT));}
break;
case ARTSEY_OS_GUI:
if (pressed) {add_oneshot_mods(MOD_BIT(KC_LGUI));}
break;
case ARTSEY_CTRL:
if (pressed) {
 if (get_mods() & MOD_MASK_CTRL){
 del_mods(MOD_MASK_CTRL);;
 } else { 
 add_mods(MOD_MASK_CTRL); } ;}
break;
case ARTSEY_CTRL_2:
if (pressed) {
 if (get_mods() & MOD_MASK_CTRL){
 del_mods(MOD_MASK_CTRL);;
 } else { 
 add_mods(MOD_MASK_CTRL); } ;}
break;
case ARTSEY_GUI:
if (pressed) {
 if (get_mods() & MOD_MASK_GUI){
 del_mods(MOD_MASK_GUI);;
 } else { 
 add_mods(MOD_MASK_GUI); } ;}
break;
case ARTSEY_GUI_2:
if (pressed) {
 if (get_mods() & MOD_MASK_GUI){
 del_mods(MOD_MASK_GUI);;
 } else { 
 add_mods(MOD_MASK_GUI); } ;}
break;
case ARTSEY_ALT:
if (pressed) {
 if (get_mods() & MOD_MASK_ALT){
 del_mods(MOD_MASK_ALT);;
 } else { 
 add_mods(MOD_MASK_ALT); } ;}
break;
case ARTSEY_ALT_2:
if (pressed) {
 if (get_mods() & MOD_MASK_ALT){
 del_mods(MOD_MASK_ALT);;
 } else { 
 add_mods(MOD_MASK_ALT); } ;}
break;
case ARTSEY_SHIFT:
if (pressed) {
 if (get_mods() & MOD_MASK_SHIFT){
 del_mods(MOD_MASK_SHIFT);;
 } else { 
 add_mods(MOD_MASK_SHIFT); } ;}
break;
case ARTSEY_SHIFT2:
if (pressed) {
 if (get_mods() & MOD_MASK_SHIFT){
 del_mods(MOD_MASK_SHIFT);;
 } else { 
 add_mods(MOD_MASK_SHIFT); } ;}
break;
case ARTSEY_EQL:
if (pressed) {SEND_STRING("=");}
break;
case ARTSEY_GESC:
if (pressed) {SEND_STRING("`");}
break;
case ARTSEY_TILDE:
if (pressed) {SEND_STRING("~");}
break;
case ARTSEY_CIRCUMFLEX:
if (pressed) {SEND_STRING("^");}
break;
}
}