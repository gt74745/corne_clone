// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │Tab│ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │Bsp│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Esc│ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │ ' │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Sft│ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │Sft│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │Ctl├───┐           ┌───┤Alt│
      *               └───┤GUI├───┐   ┌───┤   ├───┘
      *                   └───┤TG1│   │Ent├───┘
      *                       └───┘   └───┘
      */
    [0] = LAYOUT_split_3x6_3(
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_TAB, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                               KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                                            KC_LCTL, KC_LGUI, MO(1),           KC_ENT,  KC_SPC,  KC_RALT
    ),

    [1] = LAYOUT_split_3x6_3(
        KC_GRV, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,                               KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   _______,
        _______,_______,_______,_______,KC_MINS,KC_EQL,                             KC_LEFT,KC_DOWN,KC_UP  ,KC_RGHT,_______,_______,
        _______,_______,_______,_______,_______,KC_LBRC,                            KC_RBRC,_______,_______,_______,_______,_______,
                                        _______,_______,_______,            _______,_______,TG(2)
    ),

    [2] = LAYOUT_split_3x6_3(
        KC_ESC, KC_TAB, KC_Q,   KC_W,   KC_E,   KC_R,                               KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   TG(2)  ,
        KC_TAB, KC_T,    KC_A,   KC_S,   KC_D,   KC_F,                               KC_LEFT,KC_DOWN,KC_UP  ,KC_RGHT,_______,_______,
        KC_LCTL,KC_LSFT,KC_Z,   KC_X,   KC_C,   KC_V,                               _______,_______,_______,_______,_______,_______,
                                        _______,MO(3),  KC_SPC,            _______,_______,_______
    ),

    [3] = LAYOUT_split_3x6_3(
        _______,KC_1,   KC_2,   KC_3,   KC_4,   KC_5,                               _______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,                            _______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,                            _______,_______,_______,_______,_______,_______,
                                        _______,_______,_______,            _______,_______,_______
    )
};
