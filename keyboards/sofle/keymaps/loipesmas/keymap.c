#include QMK_KEYBOARD_H

enum sofle_layers {
    _BASE,
    _NAV,
    _NUM,
    _FUN,
    _MOUSE,
    _SYM,
    _GAMER,
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

// keymaps generated from the_keymap.json
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(RGB_M_P, KC_W1, KC_W2, KC_W3, KC_W4, KC_W5, KC_W6, KC_W7, KC_W8, KC_W9, KC_W0, UG_TOGG, RGB_M_SW, KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_QUOT, UG_HUEU, RGB_M_G, LGUI_T(KC_A), LALT_T(KC_R), LCTL_T(KC_S), LSFT_T(KC_T), KC_G, KC_M, LSFT_T(KC_N), LCTL_T(KC_E), LALT_T(KC_I), LGUI_T(KC_O), UG_SATU, TG(6), KC_Z, ALGR_T(KC_X), KC_C, KC_D, KC_V, KC_NO, KC_NO, KC_K, KC_H, KC_COMM, ALGR_T(KC_DOT), KC_SLSH, UG_VALU, KC_LGUI, LGUI(KC_J), KC_ESC, LT(1,KC_SPC), LT(4,KC_TAB), LT(5,KC_ENT), LT(2,KC_BSPC), LT(3,KC_DEL), LGUI(KC_COMM), KC_RGUI),
    [1] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_INS, KC_PSCR, KC_APP, KC_NO, KC_NO, KC_PGUP, KC_PRVWD, KC_NXTWD, KC_DLINE, KC_BSPC, KC_TRNS, KC_TRNS, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO, CW_TOGG, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_BSPC, KC_TRNS, KC_UNDO, KC_CUT, KC_COPY, KC_PSTE, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_HOME, KC_PGDN, KC_PGUP, KC_LEND, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_ENT, KC_BSPC, KC_DEL, KC_TRNS, KC_TRNS),
    [2] = LAYOUT(KC_TRNS, KC_EQL, KC_MINS, KC_PLUS, KC_LCBR, KC_RCBR, KC_LBRC, KC_RBRC, KC_SCLN, KC_COLN, KC_BSLS, KC_TRNS, KC_TRNS, KC_LBRC, KC_7, KC_8, KC_9, KC_RBRC, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_GRV, KC_SCLN, KC_4, KC_5, KC_6, KC_EQL, KC_NO, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_NO, KC_TRNS, KC_GRV, KC_1, KC_2, KC_3, KC_BSLS, KC_TRNS, KC_TRNS, KC_CIRC, KC_AMPR, KC_TRNS, KC_TRNS, KC_RPRN, KC_PIPE, KC_TRNS, KC_TRNS, KC_LPRN, KC_0, KC_MINS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    [3] = LAYOUT(KC_TRNS, KC_EQL, KC_MINS, KC_PLUS, KC_LCBR, KC_RCBR, KC_LBRC, KC_RBRC, KC_SCLN, KC_COLN, KC_BSLS, KC_TRNS, KC_TRNS, KC_F12, KC_F7, KC_F8, KC_F9, KC_RBRC, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_GRV, KC_F11, KC_F4, KC_F5, KC_F6, KC_EQL, KC_NO, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_NO, KC_TRNS, KC_F10, KC_F1, KC_F2, KC_F3, KC_BSLS, KC_TRNS, KC_TRNS, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PIPE, KC_TRNS, KC_TRNS, KC_APP, KC_SPC, KC_TAB, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    [4] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LGUI, MS_BTN1, MS_BTN3, MS_BTN2, KC_NO, KC_NO, MS_LEFT, MS_DOWN, MS_UP, MS_RGHT, KC_BSPC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MS_WHLL, MS_WHLD, MS_WHLU, MS_WHLR, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MS_BTN1, MS_BTN3, MS_BTN2, KC_TRNS, KC_TRNS),
    [5] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_GRV, KC_TILD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LCBR, KC_LBRC, KC_LPRN, KC_QUOT, KC_SLSH, KC_NO, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_NO, KC_NO, KC_RCBR, KC_RBRC, KC_RPRN, KC_DQUO, KC_BSLS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LT, KC_GT, KC_UNDS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
    [6] = LAYOUT(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_GRV, KC_ESC, KC_Q, KC_E, KC_W, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, KC_TAB, KC_F, KC_A, KC_S, KC_D, KC_G, KC_H, KC_1, KC_2, KC_3, KC_SCLN, KC_QUOT, TG(6), KC_Z, KC_X, KC_C, KC_V, KC_B, KC_NO, KC_NO, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_LGUI, KC_LCTL, KC_ESC, KC_SPC, KC_LSFT, KC_ENT, KC_BSPC, KC_RCTL, KC_RALT, KC_RGUI)
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
        case _GAMER:
            oled_write_P(PSTR("Gamer"), false);
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
    if (is_keyboard_master()) {
        return OLED_ROTATION_270;
    }
    return rotation;

}

static void print_image(void) {
    static const char PROGMEM image[] = {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xc0, 0xe0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x80, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xfc, 0xfe, 0xfe,
        0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08,
        0x1c, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xe0, 0xf8,
        0xff, 0x3f, 0x0f, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0xfc, 0xfe, 0xce, 0x8e, 0x0e, 0x0e, 0x0e, 0x0e,
        0xee, 0xfe, 0xff, 0x3f, 0x1f, 0x1c, 0x1c, 0x1c, 0x9c, 0x1c, 0x1c, 0x1e, 0xff, 0xff, 0xff, 0x01,
        0x00, 0x00, 0x00, 0xf8, 0xfc, 0xfe, 0x3f, 0x7f, 0x77, 0x77, 0x77, 0x7f, 0x7e, 0x3c, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x3c, 0x1c, 0x1c, 0x1e, 0xce, 0xff, 0xfe, 0x78, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x1e, 0x1f, 0x0f, 0x03,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x0f, 0x0e, 0x1c, 0x1f,
        0x0f, 0x03, 0x01, 0x00, 0x00, 0x00, 0x06, 0x0f, 0x1f, 0x1f, 0x1e, 0x0e, 0x0f, 0x07, 0x03, 0x00,
        0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x0f, 0x0e, 0x1e, 0x1c, 0x1c, 0x1c, 0x1e, 0x0c, 0x00, 0x00,
        0x00, 0x02, 0x07, 0x0f, 0x0e, 0x1e, 0x3c, 0x1c, 0x1e, 0x0f, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x0e, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    };
    oled_write_raw_P(image, sizeof(image));
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        print_status_narrow();
    } else {
        print_image();
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
            tap_code(KC_WH_D);
        } else {
            tap_code(KC_WH_U);
        }
    } else if (index == 1) {
        if (clockwise) {
            tap_code(KC_VOLD);
        } else {
            tap_code(KC_VOLU);
        }
    }
    return false;
}

#endif
