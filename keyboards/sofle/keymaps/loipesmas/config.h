#pragma once

/* The way how "handedness" is decided (which half is which),
see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
for more options.
*/

#undef TAPPING_TERM
#define TAPPING_TERM 200

#define NO_MUSIC_MODE

#define RGB_DI_PIN D3
#define RGBLED_NUM 12
#define RGBLED_SPLIT \
    { 6, 6 }
#define RGBLIGHT_EFFECT_STATIC_GRADIENT

// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define TAPPING_FORCE_HOLD

// Auto Shift
#define NO_AUTO_SHIFT_ALPHA
#define AUTO_SHIFT_TIMEOUT TAPPING_TERM
#define AUTO_SHIFT_NO_SETUP

#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
