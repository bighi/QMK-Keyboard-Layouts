#include QMK_KEYBOARD_H

////////////////////////////////////////////
//// COMBOS (generated via combos.def) //////
////////////////////////////////////////////

/* Generate the PROGMEM combo arrays from combos.def */
#define X(name, out, ...) const uint16_t PROGMEM name##_combo[] = { __VA_ARGS__, COMBO_END };
#include "combos.def"
#undef X

/* Generate the combo id enum from combos.def */
enum combos {
#define X(name, out, ...) name,
#include "combos.def"
#undef X
};

/* Generate the combo mapping table from combos.def */
combo_t key_combos[] = {
#define X(name, out, ...) [name] = COMBO(name##_combo, out),
#include "combos.def"
#undef X
};


////////////////////////////////////////////
//// TAP DANCE /////////////////////////////
////////////////////////////////////////////

enum {
    TD_OPEN = 0,
    TD_CLOSE
};

tap_dance_action_t tap_dance_actions[] = {
    [TD_OPEN] = ACTION_TAP_DANCE_DOUBLE(KC_LPRN, KC_LCBR),
    [TD_CLOSE] = ACTION_TAP_DANCE_DOUBLE(KC_RPRN, KC_RCBR),
};
