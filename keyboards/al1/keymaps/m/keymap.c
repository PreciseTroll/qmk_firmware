#include QMK_KEYBOARD_H

// Helpful defines
#define _______ KC_TRNS

// Macros
enum {
    M_EMAIL = SAFE_RANGE,
    M_GH,
    M_PT,
    M_ADDRESS,
    M_TEL,
  };


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_PSCR, KC_NUMLOCK, KC_PSLS, KC_PAST, KC_PMNS, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL, KC_P7, KC_P8, KC_P9, KC_PPLS, LT(1, KC_CAPS), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_P4, KC_P5, KC_P6, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_LSFT, MO(1), KC_UP, KC_P1, KC_P2, KC_P3, KC_ENT, KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_RALT, KC_RGUI, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT, KC_P0, KC_PDOT),
	[1] = LAYOUT(KC_TILDE, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LSCR, KC_NO, KC_NO, KC_NO, TG(2), KC_NO, KC_NO, KC_UP, M_EMAIL, RESET, M_TEL, KC_NO, M_ADDRESS, KC_NO, KC_NO, M_PT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_LEFT, KC_DOWN, KC_RIGHT, M_GH, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),

	[2] = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_PSCR, KC_NUMLOCK, KC_PSLS, KC_PAST, KC_PMNS, KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_G, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL, KC_P7, KC_P8, KC_P9, KC_PPLS, LT(3, KC_CAPS), KC_A, KC_R, KC_S, KC_T, KC_D, KC_H, KC_N, KC_E, KC_I, KC_O, KC_QUOT, KC_ENT, KC_P4, KC_P5, KC_P6, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_K, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_LSFT, MO(3), KC_UP, KC_P1, KC_P2, KC_P3, KC_ENT, KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_RALT, KC_RGUI, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT, KC_P0, KC_PDOT),

	[3] = LAYOUT(KC_TILDE, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LSCR, KC_NO, KC_NO, KC_NO, TG(2), KC_NO, KC_NO, KC_UP, M_EMAIL, RESET, M_TEL, KC_NO, M_ADDRESS, KC_NO, KC_NO, M_PT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_LEFT, KC_DOWN, KC_RIGHT, M_GH, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),

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
	      SEND_STRING("201 W University Ave Floor 1 Champaign, IL 61820");
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
