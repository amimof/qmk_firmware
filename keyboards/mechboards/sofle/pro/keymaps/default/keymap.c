// Copyright 2025 Dasky (@daskygit)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // Default layer
  [0] = LAYOUT(
    KC_ESC,   KC_1,         KC_2,         KC_3,         KC_4,         KC_5,                             KC_6,    KC_7,         KC_8,         KC_9,         KC_0,            KC_MINS,
    KC_TAB,   KC_Q,         KC_W,         KC_E,         KC_R,         KC_T,                             KC_Y,    KC_U,         KC_I,         KC_O,         KC_P,            KC_LBRC,
    KC_LSFT,  LGUI_T(KC_A), LALT_T(KC_S), LSFT_T(KC_D), LCTL_T(KC_F), KC_G,                             KC_H,    RCTL_T(KC_J), RSFT_T(KC_K), RALT_T(KC_L), RGUI_T(KC_SCLN), KC_QUOT,
    KC_LCTL,  KC_Z,         KC_X,         KC_C,         KC_V,         KC_B,    KC_MUTE,        KC_MPLY, KC_N,    KC_M,         KC_COMM,      KC_DOT,       KC_SLSH,         KC_BSLS,
                            KC_LALT,      KC_LGUI,      KC_LCTL,      MO(1),   KC_SPC,         KC_ENT,  MO(2),   KC_BSPC,      KC_RALT,      KC_RGUI
  ),

  // Code layer
  [1] = LAYOUT(
    _______, KC_F1,           KC_F2,           KC_F3,            KC_F4,           KC_F5,                               KC_F6,         KC_F7,         KC_F8,   KC_F9,     KC_F10,  KC_F11,
    KC_GRV,  KC_1,            KC_2,            KC_3,             RALT(KC_4),      RALT(KC_RBRC),                       KC_6,          KC_7,          KC_8,    KC_9,      KC_0,    KC_F12,
    _______, LGUI_T(KC_EXLM), LALT_T(KC_AT),   LSFT_T(KC_HASH),  LCTL_T(KC_DLR),  KC_PERC,                             KC_CIRC,       KC_AMPR,       KC_ASTR, KC_LPRN,   KC_RPRN, KC_PIPE,
    _______, KC_EQL,          KC_RCBR,         KC_PLUS,          RALT(KC_8),      RALT(KC_9), _______,        _______, S(RALT(KC_8)), S(RALT(KC_9)), KC_GRV,  S(KC_GRV), KC_BSLS, _______,
                              _______,         _______,          _______,         _______,    _______,        _______, MO(3),         _______,       _______, _______
  ),

  // Navigation layer
  [2] = LAYOUT(
    _______, _______, _______, _______, _______, _______,                          _______, _______, _______, _______, _______ ,_______,
    _______, XXXXXXX,  KC_PSCR, KC_APP,  XXXXXXX, XXXXXXX,                         XXXXXXX, KC_PGUP, KC_UP,   KC_PGDN, XXXXXXX, KC_BSPC,
    _______, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX, KC_CAPS,                          KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END,  XXXXXXX,
    _______, C(KC_Z), C(KC_X), C(KC_C), C(KC_V), XXXXXXX, _______,        _______, KC_INS,  KC_DEL,  XXXXXXX, XXXXXXX, XXXXXXX, _______,
                      _______, _______, _______, MO(3),   _______,        _______, _______, _______, _______, _______
  ),

  // RGB layer
  [3] = LAYOUT(
    QK_BOOT, XXXXXXX, XXXXXXX ,XXXXXXX, XXXXXXX, XXXXXXX,                          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    RM_TOGG, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    RM_PREV, RM_HUEU, RM_SATU, RM_VALU, RM_SPDU, TG(4),                            XXXXXXX, KC_VOLD, KC_MUTE, KC_VOLU, XXXXXXX, XXXXXXX,
    RM_NEXT, RM_HUED, RM_SATD, RM_VALD, RM_SPDD, UG_TOGG, XXXXXXX,        XXXXXXX, XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX, XXXXXXX,
                      _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______
  ),

  // Game mode layer
  [4] = LAYOUT(
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                             KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                             KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,
    KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    _______,                          KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    _______,        _______, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_BSLS,
                      _______, _______, _______, MO(3),   _______,        _______, MO(2),   _______, _______, _______
  ),
};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
[0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT)},
[1] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS)},
[2] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS)},
[3] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS)},
[4] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS)}
};
#endif
// clang-format on
