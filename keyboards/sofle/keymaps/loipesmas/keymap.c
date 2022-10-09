#include QMK_KEYBOARD_H

enum sofle_layers {
    _BASE,
    _NAV,
    _NUM,
    _FUN,
    _MOUSE,
    _SYM,
};

enum custom_keycodes {
    KC_BASE = SAFE_RANGE,
    KC_W1,
    KC_W2,
    KC_W3,
    KC_W4,
    KC_W5,
    KC_W6,
    KC_W7,
    KC_W8,
    KC_W9,
    KC_W0,
    KC_PRVWD,
    KC_NXTWD,
    KC_LSTRT,
    KC_LEND,
    KC_DLINE,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * COLEMAK-DH
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  `   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ESC  |   Q  |   W  |   F  |   P  |   G  |                    |   J  |   L  |   U  |   Y  |   ;  | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | TAB  |   A  |   R  |   S  |   T  |   D  |-------.    ,-------|   H  |   N  |   E  |   I  |   O  |  '   |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   K  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */

/*
[_EMPTY] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                              _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                              _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                              _______, _______, _______, _______,_______, _______,
  _______, _______, _______, _______, _______, _______, _______,         _______,_______, _______, _______, _______, _______, _______,
                       _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______
),
*/
[_BASE] = LAYOUT(
  RGB_MODE_PLAIN,   KC_W1,  KC_W2,   KC_W3,   KC_W4,  KC_W5,                                   KC_W6,    KC_W7,    KC_W8,    KC_W9,    KC_W0,  RGB_TOG,
  RGB_MODE_SWIRL,   KC_Q,   KC_W,    KC_F,    KC_P,    KC_B,                                   KC_J,    KC_L,    KC_U,    KC_Y, KC_QUOT,  RGB_HUI,
  RGB_MODE_GRADIENT, LGUI_T(KC_A),LALT_T(KC_R),LCTL_T(KC_S),LSFT_T(KC_T),KC_G,           KC_M,LSFT_T(KC_N),LCTL_T(KC_E),LALT_T(KC_I),LGUI_T(KC_O),  RGB_SAI,
  KC_LSFT,  KC_Z,   ALGR_T(KC_X),    KC_C,    KC_D,    KC_V, KC_MUTE,               XXXXXXX,KC_K,    KC_H, KC_COMM,  ALGR_T(KC_DOT), KC_SLSH,  RGB_VAI,
        KC_LGUI,LGUI(KC_J),KC_ESC, LT(_NAV, KC_SPC),LT(_MOUSE, KC_TAB),      LT(_SYM,KC_ENT),LT(_NUM, KC_BSPC), LT(_FUN,  KC_DEL ), LGUI(KC_COMM), KC_RGUI
),
[_NUM] = LAYOUT(
  _______,  KC_EQL, KC_MINS, KC_PLUS, KC_LCBR, KC_RCBR,                         KC_LBRC, KC_RBRC, KC_SCLN, KC_COLN, KC_BSLS, _______,
  _______,   KC_LBRC,   KC_7,   KC_8,   KC_9,   KC_RBRC,                       KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,
  KC_GRV,    KC_SCLN,    KC_4,    KC_5,    KC_6,    KC_EQL,                     XXXXXXX, KC_LSFT, KC_LCTL, KC_LALT,KC_LGUI, XXXXXXX,
  _______, KC_GRV,   KC_1,    KC_2,    KC_3, KC_BSLS, _______,         _______,KC_CIRC, KC_AMPR, _______, _______, KC_RPRN, KC_PIPE,
                       _______, _______, KC_LPRN, KC_0, KC_MINS,       _______, _______, _______, _______, _______
),
[_NAV] = LAYOUT(
  _______, _______ , _______ , _______ , _______ , _______,                           _______,  _______  , _______,  _______ ,  _______ ,_______,
  _______,  KC_INS,  KC_PSCR,   KC_APP,  XXXXXXX, XXXXXXX,                        KC_PGUP, KC_PRVWD,   KC_NXTWD,KC_DLINE, KC_BSPC, _______,
  _______, KC_LGUI, KC_LALT,  KC_LCTL,  KC_LSFT,  XXXXXXX,                       CAPSWRD,  KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_BSPC,
  _______,KC_UNDO, KC_CUT, KC_COPY, KC_PASTE, XXXXXXX,  _______,       _______,  XXXXXXX, KC_HOME,  KC_PGUP, KC_PGDN ,KC_LEND,   _______,
                         _______, _______, _______, _______, _______,       KC_ENT, KC_BSPC, KC_DEL, _______, _______
),
[_FUN] = LAYOUT(
  _______,  KC_EQL, KC_MINS, KC_PLUS, KC_LCBR, KC_RCBR,                         KC_LBRC, KC_RBRC, KC_SCLN, KC_COLN, KC_BSLS, _______,
  _______,   KC_F12,   KC_F7,   KC_F8,   KC_F9,   KC_RBRC,                       KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,
  KC_GRV,    KC_F11,    KC_F4,    KC_F5,    KC_F6,    KC_EQL,                     XXXXXXX, KC_LSFT, KC_LCTL, KC_LALT,KC_LGUI, XXXXXXX,
  _______, KC_F10,   KC_F1,    KC_F2,    KC_F3, KC_BSLS, _______,         _______,KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PIPE,
                        _______, _______, KC_APP, KC_SPC, KC_TAB,       _______, _______, _______, _______, _______
),
[_MOUSE] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                              _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                              _______, _______, _______, _______, _______, _______,
  _______, KC_LGUI, KC_LALT,  KC_LCTL,  KC_LSFT,  XXXXXXX,                           XXXXXXX, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_BSPC,
  _______, _______, _______, _______, _______, _______, _______,         _______,_______, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, _______,
                       _______, _______, _______, _______, _______,    KC_BTN1, KC_BTN3, KC_BTN2, _______, _______
),
[_SYM] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_GRV, KC_TILD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LCBR, KC_LBRC, KC_LPRN, KC_QUOT, KC_SLSH, KC_NO, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_NO, KC_NO, KC_RCBR, KC_RBRC, KC_RPRN, KC_DQUO, KC_BSLS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LT, KC_GT, KC_UNDS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
};

#ifdef OLED_ENABLE

static void print_status_narrow(void) {
    oled_write_P(PSTR("\n\n"), false);
    // Print current layer
    oled_write_ln_P(PSTR("LAYER"), false);
    switch (get_highest_layer(layer_state)) {
        case _BASE:
            oled_write_P(PSTR("Base\n"), false);
            break;
        case _NAV:
            oled_write_P(PSTR("Nav\n"), false);
            break;
        case _NUM:
            oled_write_P(PSTR("Num\n"), false);
            break;
        case _FUN:
            oled_write_P(PSTR("Fun\n"), false);
            break;
        case _MOUSE:
            oled_write_P(PSTR("Mouse"), false);
            break;
        case _SYM:
            oled_write_P(PSTR("Sym\n"), false);
            break;
        default:
            oled_write_P(PSTR("Undef"), false);
    }
    oled_write_P(PSTR("\n\n"), false);
    oled_write_ln_P(PSTR("CPWRD"), is_caps_word_on());
    oled_write_P(PSTR("WPM: "), false);
    oled_write(get_u8_str(get_current_wpm(), '0'), false);
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_270;
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        print_status_narrow();
    } else {
        oled_write_ln_P(PSTR("TODO"),false);
    }
    return false;
}

#endif

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_BASE:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_BASE);
            }
            return false;
        case KC_PRVWD:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    register_mods(mod_config(MOD_LALT));
                    register_code(KC_LEFT);
                } else {
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_LEFT);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LALT));
                    unregister_code(KC_LEFT);
                } else {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_LEFT);
                }
            }
            break;
        case KC_NXTWD:
             if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    register_mods(mod_config(MOD_LALT));
                    register_code(KC_RIGHT);
                } else {
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_RIGHT);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LALT));
                    unregister_code(KC_RIGHT);
                } else {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_RIGHT);
                }
            }
            break;
        case KC_LSTRT:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                     //CMD-arrow on Mac, but we have CTL and GUI swapped
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_LEFT);
                } else {
                    register_code(KC_HOME);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_LEFT);
                } else {
                    unregister_code(KC_HOME);
                }
            }
            break;
        case KC_LEND:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    //CMD-arrow on Mac, but we have CTL and GUI swapped
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_RIGHT);
                } else {
                    register_code(KC_END);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_RIGHT);
                } else {
                    unregister_code(KC_END);
                }
            }
            break;
        case KC_DLINE:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_BSPC);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_BSPC);
            }
            break;
        case KC_COPY:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_C);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_C);
            }
            return false;
        case KC_PASTE:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_V);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_V);
            }
            return false;
        case KC_CUT:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_X);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_X);
            }
            return false;
            break;
        case KC_UNDO:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_Z);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_Z);
            }
            return false;
            break;
        case KC_W1:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LGUI));
                register_code(KC_1);
            } else {
                unregister_mods(mod_config(MOD_LGUI));
                unregister_code(KC_1);
            }
            return false;
            break;
        case KC_W2:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LGUI));
                register_code(KC_2);
            } else {
                unregister_mods(mod_config(MOD_LGUI));
                unregister_code(KC_2);
            }
            return false;
            break;
        case KC_W3:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LGUI));
                register_code(KC_3);
            } else {
                unregister_mods(mod_config(MOD_LGUI));
                unregister_code(KC_3);
            }
            return false;
            break;
        case KC_W4:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LGUI));
                register_code(KC_4);
            } else {
                unregister_mods(mod_config(MOD_LGUI));
                unregister_code(KC_4);
            }
            return false;
            break;
        case KC_W5:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LGUI));
                register_code(KC_5);
            } else {
                unregister_mods(mod_config(MOD_LGUI));
                unregister_code(KC_5);
            }
            return false;
            break;
        case KC_W6:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LGUI));
                register_code(KC_6);
            } else {
                unregister_mods(mod_config(MOD_LGUI));
                unregister_code(KC_6);
            }
            return false;
            break;
        case KC_W7:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LGUI));
                register_code(KC_7);
            } else {
                unregister_mods(mod_config(MOD_LGUI));
                unregister_code(KC_7);
            }
            return false;
            break;
        case KC_W8:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LGUI));
                register_code(KC_8);
            } else {
                unregister_mods(mod_config(MOD_LGUI));
                unregister_code(KC_8);
            }
            return false;
            break;
        case KC_W9:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LGUI));
                register_code(KC_9);
            } else {
                unregister_mods(mod_config(MOD_LGUI));
                unregister_code(KC_9);
            }
            return false;
            break;
        case KC_W0:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LGUI));
                register_code(KC_0);
            } else {
                unregister_mods(mod_config(MOD_LGUI));
                unregister_code(KC_0);
            }
            return false;
            break;
    }
    return true;
}

#ifdef ENCODER_ENABLE

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    } else if (index == 1) {
        if (clockwise) {
            tap_code(KC_WH_D);
        } else {
            tap_code(KC_WH_U);
        }
    }
    return true;
}

#endif
