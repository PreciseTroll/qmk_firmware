/*
Copyright 2017 Luiz Ribeiro <luizribeiro@gmail.com>

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

// Macros
enum {
    M_EMAIL = SAFE_RANGE,
    M_GH,
    M_PT,
    M_ADDRESS,
    M_TEL,
  };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_ESC,     KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,  KC_NO,\
        KC_PGUP,    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,          \
        KC_DELETE,  LT(1, KC_CAPS),   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,  \
                    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, MO(1),            \
                    KC_LCTRL,         KC_LALT,          KC_SPC, KC_LGUI,         KC_SPC,          KC_RALT,                           KC_RCTL           \
    ),
    [1] = LAYOUT(
        _______,    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, \
        _______,    _______, _______, _______, M_EMAIL, _______, M_TEL, _______, _______, _______, _______,  M_PT, _______, _______, _______,          \
        _______,    _______, M_ADDRESS, _______, _______, M_GH, _______, KC_LEFT, KC_DOWN,   KC_UP, KC_RIGHT,  _______, _______,          _______,          \
                    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, KC_DOWN, _______, _______,          \
                    _______,          _______,          _______, _______,          _______,          _______,                             _______           \
    ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch(keycode) {
            case M_EMAIL:
              SEND_STRING("electronic-mail@email.com");
              return false; break;
	    case M_GH:
	      SEND_STRING("forumusername");
              return false; break;
	    case M_ADDRESS:
	      SEND_STRING("201 W University Ave Floor 1");
              return false; break;
	    case M_TEL:
	      SEND_STRING("7733091337");
	      return false; break;
	    case M_PT:
	      SEND_STRING("precisetroll");
	      return false; break;
        }
      }
      return true;
    };