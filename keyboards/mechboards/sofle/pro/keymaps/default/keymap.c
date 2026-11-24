// Copyright 2025 Dasky (@daskygit)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// https://github.com/qmk/qmk_firmware/blob/master/quantum/keymap_extras/keymap_swedish.h
#include "keymap_swedish.h"

// clang-format off

/*

58 Keys Sofle v2
╭──────────────────╮     ╭──────────────────╮
│ 0  1  2  3  4  5 │     │  6  7  8  9 10 11│
│12 13 14 15 16 17 │     │ 18 19 20 21 22 23│
│24 25 26 27 28 29 │     │ 30 31 32 33 34 35│
│36 37 38 40 41 42 ╰─╮ ╭─╯ 43 44 45 46 47 48│
╰─────╮49 50 51 52 53│ │54 55 56 57 58╭─────╯
      ╰──────────────╯ ╰──────────────╯

Legend:
  ⎋ Escape · ⇥ Tab · ⇧ Shift · ⌃ Ctrl · ⌥ Alt · ⌘ GUI/Super · ↓ Lower · ↑ Raise · ␣ Space · ↵ Enter
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* Default layer
  ╭──────────────────╮     ╭───────────────────╮
  │ ⎋  1  2  3  4  5 │     │  6  7  8  9  0  ? │
  │ ⇥  Q  W  E  R  T │     │  Y  U  I  O  P  Å │
  │ ⇧  A  S  D  F  G │     │  H  J  K  L  Ö  Ä │
  │ ⌃  Z  X  C  V  B ╰─╮ ╭─╯ M  N  ,  .  -  '* │
  ╰─────╮ ⌥  ⌘  ↓  ␣   │ │  ↵  ↑  ⌘  ⌥  ╭──────╯
        ╰──────────────╯ ╰──────────────╯
  */
  [0] = LAYOUT(
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                             KC_6,    KC_7,    KC_8,    KC_9,   KC_0,    SE_QUES,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                             KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,    SE_ARNG,
    KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                             KC_H,    KC_J,    KC_K,    KC_L,   SE_ODIA, SE_ADIA,
    KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_MUTE,        KC_MPLY, KC_N,    KC_M,    KC_COMM, KC_DOT, SE_MINS, SE_QUOT,
                      KC_NO,   KC_LALT, KC_LGUI, MO(1),   KC_SPC,         KC_ENT,  MO(2),   KC_BSPC, KC_RALT, KC_NO
  ),

  /* Code layer
  ╭──────────────────╮     ╭─────────────────────╮
  │    F1 F2 F3 F4 F5│     │ F6 F7 F8 F9 F10 F11 │
  │    1  2  3  4  5 │     │  6  7  8  9  0  F12 │
  │    !  @  #  $  % │     │  &  /  (  )  =  ~   │
  │ <  >  ^  `  {  } ╰─╮ ╭─╯ [  ]  ;  :  \  |    │
  ╰─────╮              │ │              ╭────────╯
        ╰──────────────╯ ╰──────────────╯

  */
  [1] = LAYOUT(
    _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                            KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
    _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                             KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_F12,
    _______, SE_EXLM, SE_AT,   SE_HASH, SE_DLR,  SE_PERC,                          SE_AMPR, SE_SLSH, SE_RPRN, SE_LPRN, SE_PLUS, SE_TILD,
    SE_LABK, SE_RABK, SE_CIRC, KC_PLUS, SE_LCBR, SE_RCBR, _______,        _______, SE_LBRC, SE_RBRC, SE_SCLN, SE_COLN, SE_BSLS, SE_PIPE,
                      _______, _______, _______, _______, _______,        _______, MO(3),   _______, _______, _______
  ),

  /* Navigation layer
  ╭─────────────────────────╮ ╭─────────────────────────╮
  │                         │ │                         │
  │    INS  PSCR GUI        │ │ PGUP    ↑ END          │
  │    ALT  CTRL SHIFT      │ │ PGDN  ←  ↓  →  DEL BKSPC│
  │    UNDO CUT  COPY PASTE │ │                         │
  ╰─────╮                   │ │                   ╭─────╯
        ╰───────────────────╯ ╰───────────────────╯
  */
  [2] = LAYOUT(
    _______, _______, _______, _______, _______, _______,                          _______, _______, _______, _______, _______ ,_______,
    _______, KC_INS,  KC_PSCR, KC_APP,  XXXXXXX, XXXXXXX,                          KC_PGUP, KC_HOME, KC_UP,   KC_END,  XXXXXXX, XXXXXXX,
    _______, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX, KC_CAPS,                          KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_DEL,  XXXXXXX,
    _______, C(KC_Z), C(KC_X), C(KC_C), C(KC_V), XXXXXXX, _______,        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
                      _______, _______, _______, MO(3),   _______,        _______, _______, _______, _______, _______
  ),

  /* Settings layer
  ╭─────────────────────────────────────────────────╮     ╭─────────────────────────╮
  │                                                 │     │                         │
  │ QK_BOOT                                         │     │                         │
  │ RM_TOGG RM_HUEU RM_SATU RM_VALU LM_SPDU LM_NEXT │     │ KC_VOLD KC_MUTE KC_VOLU │
  │ UG_TOGG RM_HUED RM_SATD RM_VALD LM_SPDD LM_PREV ╰─╮ ╭─╯                         │
  ╰─────────────────────────────────────╮             │ │             ╭─────────────╯
                                        ╰─────────────╯ ╰─────────────╯
  */
  [3] = LAYOUT(
    XXXXXXX, XXXXXXX, XXXXXXX ,XXXXXXX, XXXXXXX, XXXXXXX,                          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    RM_TOGG, RM_HUEU, RM_SATU, RM_VALU, RM_SPDU, RM_NEXT,                          XXXXXXX, KC_VOLD, KC_MUTE, KC_VOLU, XXXXXXX, XXXXXXX,
    UG_TOGG, RM_HUED, RM_SATD, RM_VALD, RM_SPDD, RM_PREV, XXXXXXX,        XXXXXXX, XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX, XXXXXXX,
                      _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______
  )
};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
[0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_PGDN, KC_PGUP)},
[1] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS)},
[2] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS)},
[3] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS)}
};
#endif
// clang-format on
