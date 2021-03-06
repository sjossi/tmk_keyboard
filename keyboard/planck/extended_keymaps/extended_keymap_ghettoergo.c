#include "extended_keymap_common.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = { /* Base ghetto ergo */
  {KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_TAB,  KC_BSPC, KC_Y,    KC_U,    KC_I,    KC_O,   KC_P    },
  {KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_ESC,  KC_ENT,  KC_H,    KC_J,    KC_K,    KC_L,   KC_SCLN },
  {KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    FUNC(5), KC_QUOT, KC_N,    KC_M,    KC_COMM, KC_DOT, KC_SLSH },
  {KC_LCTL, BL_STEP, KC_LALT, KC_LGUI, KC_SPC,  FUNC(2), FUNC(1), KC_LSFT,  KC_LEFT, KC_DOWN, KC_UP,  KC_RGHT }
},
[1] = { /* NumPad */
  {KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P7,   KC_P8,   KC_P9,   KC_PSLS, KC_PMNS},
  {KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P4,   KC_P5,   KC_P6,   KC_PAST, KC_PPLS},
  {KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P1,   KC_P2,   KC_P3,   KC_PDOT, KC_PENT},
  {KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P0,   KC_TRNS, KC_TRNS, KC_TRNS}
},
[2] = { /* RAISE */
  {KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_TRNS},
  {FUNC(11), FUNC(12), FUNC(13), RESET, KC_TRNS, KC_TRNS, KC_TRNS, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS},
  {FUNC(11), FUNC(12), FUNC(13) , FUNC(14), KC_TRNS, KC_F14,  KC_F15,  KC_F16,  KC_F17,  KC_F18,  KC_F19, KC_TRNS},
  {KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, FUNC(1),  KC_TRNS,   KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY}
},
[3] = { /* LOWER */
  {S(KC_GRV),  S(KC_1),    S(KC_2),    S(KC_3),    S(KC_4),    S(KC_5),    S(KC_6),    S(KC_7),    S(KC_8),    S(KC_9),    S(KC_0), KC_BSPC},
  {KC_TRNS, FUNC(3), FUNC(4), RESET,  KC_INS, KC_TRNS, KC_TRNS, S(KC_MINS), S(KC_EQL),  S(KC_LBRC), S(KC_RBRC), S(KC_BSLS)},
  {KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_TRNS},
  {KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, FUNC(2), KC_TRNS,   KC_TRNS, KC_HOME, KC_PGDN, KC_PGUP, KC_END}
},
[11] = { /* Super layer 1 */
  {KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P7,   KC_P8,   KC_P9,   KC_PSLS, KC_PMNS},
  {KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P4,   KC_P5,   KC_P6,   KC_PAST, KC_PPLS},
  {KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P1,   KC_P2,   KC_P3,   KC_PDOT, KC_PENT},
  {KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P0,   KC_TRNS, KC_TRNS, KC_TRNS}
},
[12] = { /* Super layer 2 */
  {KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RESET},
  {KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO},
  {KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO},
  {KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO}
},
[13] = { /* Super layer 3 */
  {KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO},
  {KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO},
  {KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO},
  {KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO}
},
[14] = { /* Super layer 4 */
  {KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO},
  {KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO},
  {KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO},
  {KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO}
}
};


const uint16_t PROGMEM fn_actions[] = {
    [1] = ACTION_LAYER_MOMENTARY(2),  // to Fn overlay
    [2] = ACTION_LAYER_MOMENTARY(3),  // to Fn overlay

    [11] = ACTION_LAYER_MOMENTARY(11),
    [12] = ACTION_LAYER_MOMENTARY(12),
    [13] = ACTION_LAYER_MOMENTARY(13),
    [14] = ACTION_LAYER_MOMENTARY(14)

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) 
{
  // MACRODOWN only works in this function
    switch(id) {
      case 0:
        return MACRODOWN(T(CM_T), END);
      break;
    } 
    return MACRO_NONE;
};
