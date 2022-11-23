#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_korean.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_lithuanian_azerty.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"
#include "keymap_croatian.h"
#include "keymap_turkish_q.h"
#include "keymap_slovak.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)
#define MOON_LED_LEVEL LED_LEVEL
#define MACRO_DELAY 1

enum custom_keycodes {
    RGB_SLD = ML_SAFE_RANGE,
    ST_MACRO_0,
    ST_MACRO_1,
    ST_MACRO_2,
    ST_MACRO_3,
    ST_MACRO_4,
    ST_MACRO_5,
    ST_MACRO_6,
    ST_MACRO_7,
    ST_MACRO_8,
    ST_MACRO_9,
    ST_MACRO_10,
    ST_MACRO_11,
    ST_MACRO_12,
    ST_MACRO_13,
    ST_MACRO_14,
    ST_MACRO_15,
    ST_MACRO_16,
    ST_MACRO_17,
    ST_MACRO_18,
    ST_MACRO_19,
    ST_MACRO_20,
    ST_MACRO_21,
    ST_MACRO_22,
    ST_MACRO_23,
    ST_MACRO_24,
    ST_MACRO_25,
    ST_MACRO_26,
    ST_MACRO_27,
    ST_MACRO_28,
    ST_MACRO_29,
    ST_MACRO_30,
    ST_MACRO_31,
    ST_MACRO_32,
    ST_MACRO_33,
    ST_MACRO_34,
    ST_MACRO_35,
    ST_MACRO_36,
    ST_MACRO_37,
    ST_MACRO_38,
    ST_MACRO_39,
    ST_MACRO_40,
    ST_MACRO_41,
    ST_MACRO_42,
    ST_MACRO_43,
    ST_MACRO_44,
    ST_MACRO_45,
    ST_MACRO_46,
    ST_MACRO_47,
    ST_MACRO_48,
    ST_MACRO_49,
    ST_MACRO_50,
    ST_MACRO_51,
    ST_MACRO_52,
    ST_MACRO_53,
    ST_MACRO_54,
    ST_MACRO_55,
    ST_MACRO_56,
    ST_MACRO_57,
    ST_MACRO_58,
    ST_MACRO_59,
};

enum tap_dance_codes {
    DANCE_0,
    DANCE_1,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_moonlander(KC_DOT, KC_1, KC_2, KC_3, KC_4, KC_5, TD(DANCE_0), KC_DOT, KC_6, KC_7, KC_8, KC_9, KC_0, KC_DOT, KC_LBRACKET, KC_Q, KC_W, KC_F, KC_P, KC_B, KC_TRANSPARENT, TO(2), KC_J, KC_L, KC_U, KC_Y, KC_SCOLON, KC_RBRACKET, KC_EQUAL, KC_A, KC_R, KC_S, KC_T, KC_G, KC_DELETE, KC_ESCAPE, KC_M, KC_N, KC_E, KC_I, KC_O, KC_MINUS, KC_BSLASH, KC_Z, KC_X, KC_C, KC_D, KC_V, KC_K, KC_H, KC_COMMA, KC_DOT, KC_SLASH, KC_QUOTE, KC_TRANSPARENT, KC_GRAVE, KC_TRANSPARENT, OSM(MOD_LGUI), KC_BSPACE, KC_MEH, KC_MEH, OSL(1), OSM(MOD_LGUI), KC_TRANSPARENT, OSL(5), KC_TRANSPARENT, OSM(MOD_LSFT), MT(MOD_LCTL, KC_TAB), OSL(4), OSL(2), MT(MOD_LALT, KC_ENTER), MT(MOD_RCTL, KC_SPACE)),
    [1] = LAYOUT_moonlander(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, TO(0), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_NO, KC_NO, KC_NO, KC_NO, KC_ASTR, KC_CIRC, KC_AMPR, KC_NO, KC_EQUAL, KC_LBRACKET, KC_RBRACKET, KC_LPRN, KC_RPRN, KC_NO, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO, KC_NO, KC_EXLM, KC_PLUS, KC_BSLASH, KC_MINUS, KC_BSLASH, KC_PERC, KC_GRAVE, KC_LCBR, KC_RCBR, KC_NO, KC_NO, KC_NO, KC_PIPE, KC_TILD, KC_SLASH, KC_QUOTE, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
    [2] = LAYOUT_moonlander(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, TO(0), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MS_WH_UP, KC_NO, TO(0), KC_PGUP, KC_MS_BTN1, KC_MS_BTN2, KC_MS_BTN3, KC_NO, KC_NO, KC_NO, KC_NO, KC_MS_LEFT, KC_MS_UP, KC_MS_RIGHT, KC_MS_WH_DOWN, KC_TRANSPARENT, TO(0), KC_PGDOWN, KC_LEFT, KC_UP, KC_RIGHT, KC_NO, KC_NO, KC_NO, KC_NO, KC_MS_WH_LEFT, KC_MS_DOWN, KC_MS_WH_RIGHT, KC_NO, KC_NO, KC_HOME, KC_DOWN, KC_END, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO, KC_TRANSPARENT, KC_NO, KC_NO, KC_NO, KC_TRANSPARENT, KC_TRANSPARENT, OSL(4), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT),
    [3] = LAYOUT_moonlander(KC_ESCAPE, KC_5, KC_1, KC_2, KC_3, KC_4, TO(0), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_Y, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_H, KC_LCTRL, KC_A, KC_S, KC_D, KC_F, KC_G, TO(0), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_B, KC_LSHIFT, KC_Z, KC_X, KC_C, KC_V, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_U, KC_I, KC_N, KC_M, KC_BSPACE, KC_LGUI, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_SPACE, KC_LALT, LT(4, KC_ENTER), TD(DANCE_1), KC_NO, KC_NO),
    [4] = LAYOUT_moonlander(RESET, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, TO(0), KC_PSCREEN, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F12, KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_NO, KC_NO, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_NO, KC_MY_COMPUTER, KC_NO, KC_MEDIA_PLAY_PAUSE, KC_AUDIO_VOL_UP, KC_AUDIO_MUTE, KC_NO, TO(0), RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, RGB_MOD, KC_NO, KC_MAIL, KC_MEDIA_PREV_TRACK, KC_MEDIA_NEXT_TRACK, KC_AUDIO_VOL_DOWN, KC_NO, TOGGLE_LAYER_COLOR, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, RGB_SLD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRANSPARENT, KC_NO, KC_NO, KC_NO),
    [5] = LAYOUT_moonlander(KC_NO, ST_MACRO_0, ST_MACRO_1, ST_MACRO_2, ST_MACRO_3, KC_NO, TO(0), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, ST_MACRO_7, ST_MACRO_8, ST_MACRO_9, ST_MACRO_10, KC_NO, KC_NO, ST_MACRO_4, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, TO(0), KC_NO, ST_MACRO_11, ST_MACRO_12, ST_MACRO_13, ST_MACRO_14, KC_NO, KC_NO, ST_MACRO_5, KC_NO, ST_MACRO_6, KC_NO, KC_NO, KC_NO, ST_MACRO_15, ST_MACRO_16, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, OSL(6), KC_NO, KC_NO, KC_NO, KC_NO, OSL(7)),
    [6] = LAYOUT_moonlander(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, TO(0), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, ST_MACRO_20, ST_MACRO_21, ST_MACRO_22, ST_MACRO_23, KC_NO, KC_NO, ST_MACRO_17, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, TO(0), KC_NO, ST_MACRO_24, ST_MACRO_25, ST_MACRO_26, ST_MACRO_27, KC_NO, KC_NO, ST_MACRO_18, KC_NO, ST_MACRO_19, KC_NO, KC_NO, KC_NO, ST_MACRO_28, ST_MACRO_29, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, OSL(8)),
    [7] = LAYOUT_moonlander(KC_NO, ST_MACRO_30, ST_MACRO_31, ST_MACRO_32, ST_MACRO_33, KC_NO, TO(0), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, ST_MACRO_37, ST_MACRO_38, ST_MACRO_39, ST_MACRO_40, KC_NO, KC_NO, ST_MACRO_34, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, TO(0), KC_NO, ST_MACRO_41, ST_MACRO_42, ST_MACRO_43, ST_MACRO_44, KC_NO, KC_NO, ST_MACRO_35, KC_NO, ST_MACRO_36, KC_NO, KC_NO, KC_NO, ST_MACRO_45, ST_MACRO_46, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, OSL(8), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
    [8] = LAYOUT_moonlander(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, TO(0), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, ST_MACRO_50, ST_MACRO_51, ST_MACRO_52, ST_MACRO_53, KC_NO, KC_NO, ST_MACRO_47, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, TO(0), KC_NO, ST_MACRO_54, ST_MACRO_55, ST_MACRO_56, ST_MACRO_57, KC_NO, KC_NO, ST_MACRO_48, KC_NO, ST_MACRO_49, KC_NO, KC_NO, KC_NO, ST_MACRO_58, ST_MACRO_59, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
    rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = {{169, 255, 237}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {147, 255, 237}, {147, 255, 237}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {147, 255, 237}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {147, 255, 237}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {169, 255, 237}, {147, 255, 237}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {21, 255, 243}, {147, 255, 237}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {21, 255, 243}, {169, 255, 237}, {21, 255, 243}, {0, 0, 136}, {0, 0, 136}, {169, 255, 237}, {0, 0, 136},
           {169, 255, 237}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {147, 255, 237}, {147, 255, 237}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {147, 255, 237}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {147, 255, 237}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {169, 255, 237}, {147, 255, 237}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {21, 255, 243}, {147, 255, 237}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {21, 255, 243}, {169, 255, 237}, {21, 255, 243}, {0, 0, 136}, {0, 0, 136}, {169, 255, 237}, {0, 0, 136}},

    [1] = {{169, 255, 237}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {169, 255, 237}, {0, 0, 136}, {147, 255, 237}, {21, 255, 243}, {21, 255, 243}, {0, 0, 136}, {0, 0, 136}, {147, 255, 237}, {21, 255, 243}, {21, 255, 243}, {0, 0, 136}, {0, 0, 136}, {147, 255, 237}, {21, 255, 243}, {21, 255, 243}, {0, 0, 136}, {0, 0, 136}, {147, 255, 237}, {21, 255, 243}, {21, 255, 243}, {169, 255, 237}, {0, 0, 136}, {147, 255, 237}, {21, 255, 243}, {21, 255, 243}, {21, 255, 243}, {0, 0, 136}, {147, 255, 237}, {0, 0, 136}, {0, 0, 136}, {169, 255, 237}, {0, 0, 136},
           {169, 255, 237}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {169, 255, 237}, {0, 0, 136}, {147, 255, 237}, {21, 255, 243}, {21, 255, 243}, {0, 0, 136}, {0, 0, 136}, {147, 255, 237}, {21, 255, 243}, {21, 255, 243}, {0, 0, 136}, {0, 0, 136}, {147, 255, 237}, {21, 255, 243}, {21, 255, 243}, {0, 0, 136}, {0, 0, 136}, {147, 255, 237}, {21, 255, 243}, {21, 255, 243}, {169, 255, 237}, {0, 0, 136}, {147, 255, 237}, {21, 255, 243}, {21, 255, 243}, {21, 255, 243}, {0, 0, 136}, {147, 255, 237}, {0, 0, 136}, {0, 0, 136}, {169, 255, 237}, {0, 0, 136}},

    [2] = {{0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {169, 255, 237}, {93, 255, 252}, {147, 255, 237}, {0, 0, 136}, {0, 0, 136}, {169, 255, 237}, {93, 255, 252}, {93, 255, 252}, {147, 255, 237}, {0, 0, 136}, {169, 255, 237}, {93, 255, 252}, {147, 255, 237}, {21, 255, 243}, {0, 0, 136}, {147, 255, 237}, {147, 255, 237}, {0, 0, 136}, {93, 255, 252}, {0, 0, 136}, {21, 255, 243}, {169, 255, 237}, {169, 255, 237}, {21, 255, 243}, {0, 0, 136},
           {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {169, 255, 237}, {93, 255, 252}, {147, 255, 237}, {0, 0, 136}, {0, 0, 136}, {169, 255, 237}, {93, 255, 252}, {93, 255, 252}, {147, 255, 237}, {0, 0, 136}, {169, 255, 237}, {93, 255, 252}, {147, 255, 237}, {21, 255, 243}, {0, 0, 136}, {147, 255, 237}, {147, 255, 237}, {0, 0, 136}, {93, 255, 252}, {0, 0, 136}, {21, 255, 243}, {169, 255, 237}, {169, 255, 237}, {21, 255, 243}, {0, 0, 136}},

    [3] = {{119, 255, 188}, {63, 255, 255}, {38, 255, 255}, {63, 255, 255}, {119, 255, 188}, {63, 255, 255}, {38, 255, 255}, {18, 255, 255}, {38, 255, 255}, {63, 255, 255}, {38, 255, 255}, {18, 255, 255}, {0, 255, 218}, {18, 255, 255}, {38, 255, 255}, {18, 255, 255}, {0, 255, 218}, {0, 255, 218}, {18, 255, 255}, {38, 255, 255}, {38, 255, 255}, {18, 255, 255}, {0, 255, 218}, {18, 255, 255}, {38, 255, 255}, {63, 255, 255}, {38, 255, 255}, {18, 255, 255}, {38, 255, 255}, {119, 255, 188}, {63, 255, 255}, {38, 255, 255}, {63, 255, 255}, {119, 255, 188}, {179, 218, 204}, {63, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},

    [4] = {{0, 255, 255},   {169, 255, 237}, {36, 255, 236}, {36, 255, 236}, {0, 0, 136}, {0, 0, 136}, {169, 255, 237}, {36, 255, 236}, {36, 255, 236}, {0, 0, 136}, {0, 0, 136}, {169, 255, 237}, {36, 255, 236}, {36, 255, 236}, {0, 0, 136}, {0, 0, 136}, {169, 255, 237}, {36, 255, 236}, {36, 255, 236}, {0, 0, 136}, {0, 0, 136}, {169, 255, 237}, {36, 255, 236}, {40, 255, 237}, {0, 0, 136}, {0, 0, 136}, {169, 255, 237}, {40, 255, 237}, {40, 255, 237}, {36, 255, 236}, {36, 255, 236}, {169, 255, 237}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136},
           {169, 255, 237}, {169, 255, 237}, {36, 255, 236}, {40, 255, 237}, {0, 0, 136}, {0, 0, 136}, {169, 255, 237}, {36, 255, 236}, {36, 255, 236}, {0, 0, 136}, {0, 0, 136}, {169, 255, 237}, {36, 255, 236}, {36, 255, 236}, {0, 0, 136}, {0, 0, 136}, {169, 255, 237}, {36, 255, 236}, {36, 255, 236}, {0, 0, 136}, {0, 0, 136}, {169, 255, 237}, {40, 255, 237}, {35, 255, 252}, {0, 0, 136}, {0, 0, 136}, {169, 255, 237}, {36, 255, 236}, {40, 255, 237}, {36, 255, 236}, {36, 255, 236}, {169, 255, 237}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}},

    [5] = {{0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {146, 213, 255}, {146, 213, 255}, {146, 213, 255}, {146, 213, 255}, {0, 0, 136}, {146, 213, 255}, {146, 213, 255}, {146, 213, 255}, {146, 213, 255}, {0, 0, 136}, {146, 213, 255}, {146, 213, 255}, {146, 213, 255}, {146, 213, 255}, {0, 0, 136}, {146, 213, 255}, {146, 213, 255}, {146, 213, 255}, {146, 213, 255}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {21, 255, 243}, {0, 0, 136}, {169, 255, 237}, {21, 255, 243}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136},
           {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {146, 213, 255}, {146, 213, 255}, {146, 213, 255}, {146, 213, 255}, {0, 0, 136}, {146, 213, 255}, {146, 213, 255}, {146, 213, 255}, {146, 213, 255}, {0, 0, 136}, {146, 213, 255}, {146, 213, 255}, {146, 213, 255}, {146, 213, 255}, {0, 0, 136}, {146, 213, 255}, {146, 213, 255}, {146, 213, 255}, {146, 213, 255}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {21, 255, 243}, {0, 0, 136}, {169, 255, 237}, {21, 255, 243}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}},

    [6] = {{0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {147, 255, 240}, {147, 255, 240}, {147, 255, 240}, {0, 0, 136}, {0, 0, 136}, {147, 255, 240}, {147, 255, 240}, {147, 255, 240}, {0, 0, 136}, {0, 0, 136}, {147, 255, 240}, {147, 255, 240}, {147, 255, 240}, {0, 0, 136}, {0, 0, 136}, {147, 255, 240}, {147, 255, 240}, {147, 255, 240}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {21, 255, 243}, {0, 0, 136}, {169, 255, 237}, {21, 255, 243}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136},
           {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {147, 255, 240}, {147, 255, 240}, {147, 255, 240}, {0, 0, 136}, {0, 0, 136}, {147, 255, 240}, {147, 255, 240}, {147, 255, 240}, {0, 0, 136}, {0, 0, 136}, {147, 255, 240}, {147, 255, 240}, {147, 255, 240}, {0, 0, 136}, {0, 0, 136}, {147, 255, 240}, {147, 255, 240}, {147, 255, 240}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {21, 255, 243}, {0, 0, 136}, {169, 255, 237}, {21, 255, 243}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}},

    [7] = {{0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {180, 174, 254}, {180, 174, 254}, {180, 174, 254}, {180, 174, 254}, {0, 0, 136}, {180, 174, 254}, {180, 174, 254}, {180, 174, 254}, {180, 174, 254}, {0, 0, 136}, {180, 174, 254}, {180, 174, 254}, {180, 174, 254}, {180, 174, 254}, {0, 0, 136}, {180, 174, 254}, {180, 174, 254}, {180, 174, 254}, {180, 174, 254}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {21, 255, 243}, {0, 0, 136}, {169, 255, 237}, {21, 255, 243}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136},
           {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {180, 174, 254}, {180, 174, 254}, {180, 174, 254}, {180, 174, 254}, {0, 0, 136}, {180, 174, 254}, {180, 174, 254}, {180, 174, 254}, {180, 174, 254}, {0, 0, 136}, {180, 174, 254}, {180, 174, 254}, {180, 174, 254}, {180, 174, 254}, {0, 0, 136}, {180, 174, 254}, {180, 174, 254}, {180, 174, 254}, {180, 174, 254}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {21, 255, 243}, {0, 0, 136}, {169, 255, 237}, {21, 255, 243}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}},

    [8] = {{0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {174, 212, 246}, {174, 212, 246}, {174, 212, 246}, {0, 0, 136}, {0, 0, 136}, {174, 212, 246}, {174, 212, 246}, {174, 212, 246}, {0, 0, 136}, {0, 0, 136}, {174, 212, 246}, {174, 212, 246}, {174, 212, 246}, {0, 0, 136}, {0, 0, 136}, {174, 212, 246}, {174, 212, 246}, {174, 212, 246}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {21, 255, 243}, {0, 0, 136}, {169, 255, 237}, {21, 255, 243}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136},
           {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {174, 212, 246}, {174, 212, 246}, {182, 97, 253},  {0, 0, 136}, {0, 0, 136}, {174, 212, 246}, {174, 212, 246}, {182, 97, 253},  {0, 0, 136}, {0, 0, 136}, {174, 212, 246}, {174, 212, 246}, {174, 212, 246}, {0, 0, 136}, {0, 0, 136}, {174, 212, 246}, {174, 212, 246}, {174, 212, 246}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}, {21, 255, 243}, {0, 0, 136}, {169, 255, 237}, {21, 255, 243}, {0, 0, 136}, {0, 0, 136}, {0, 0, 136}},

};

void set_layer_color(int layer) {
    for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
        HSV hsv = {
            .h = pgm_read_byte(&ledmap[layer][i][0]),
            .s = pgm_read_byte(&ledmap[layer][i][1]),
            .v = pgm_read_byte(&ledmap[layer][i][2]),
        };
        if (!hsv.h && !hsv.s && !hsv.v) {
            rgb_matrix_set_color(i, 0, 0, 0);
        } else {
            RGB   rgb = hsv_to_rgb(hsv);
            float f   = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
            rgb_matrix_set_color(i, f * rgb.r, f * rgb.g, f * rgb.b);
        }
    }
}

void rgb_matrix_indicators_user(void) {
    if (keyboard_config.disable_layer_led) {
        return;
    }
    switch (biton32(layer_state)) {
        case 0:
            set_layer_color(0);
            break;
        case 1:
            set_layer_color(1);
            break;
        case 2:
            set_layer_color(2);
            break;
        case 3:
            set_layer_color(3);
            break;
        case 4:
            set_layer_color(4);
            break;
        case 5:
            set_layer_color(5);
            break;
        case 6:
            set_layer_color(6);
            break;
        case 7:
            set_layer_color(7);
            break;
        case 8:
            set_layer_color(8);
            break;
        default:
            if (rgb_matrix_get_flags() == LED_FLAG_NONE) rgb_matrix_set_color_all(0, 0, 0);
            break;
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case ST_MACRO_0:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(MACRO_DELAY) SS_TAP(X_B) SS_DELAY(MACRO_DELAY) SS_TAP(X_0) SS_DELAY(MACRO_DELAY) SS_TAP(X_ENTER));
            }
            break;
        case ST_MACRO_1:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(MACRO_DELAY) SS_TAP(X_B) SS_DELAY(MACRO_DELAY) SS_TAP(X_2) SS_DELAY(MACRO_DELAY) SS_TAP(X_ENTER));
            }
            break;
        case ST_MACRO_2:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(MACRO_DELAY) SS_TAP(X_B) SS_DELAY(MACRO_DELAY) SS_TAP(X_3) SS_DELAY(MACRO_DELAY) SS_TAP(X_ENTER));
            }
            break;
        case ST_MACRO_3:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(MACRO_DELAY) SS_TAP(X_2) SS_DELAY(MACRO_DELAY) SS_TAP(X_0) SS_DELAY(MACRO_DELAY) SS_TAP(X_A) SS_DELAY(MACRO_DELAY) SS_TAP(X_C) SS_DELAY(MACRO_DELAY) SS_TAP(X_ENTER));
            }
            break;
        case ST_MACRO_4:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(MACRO_DELAY) SS_TAP(X_E) SS_DELAY(MACRO_DELAY) SS_TAP(X_0) SS_DELAY(MACRO_DELAY) SS_TAP(X_ENTER));
            }
            break;
        case ST_MACRO_5:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(MACRO_DELAY) SS_TAP(X_E) SS_DELAY(MACRO_DELAY) SS_TAP(X_2) SS_DELAY(MACRO_DELAY) SS_TAP(X_ENTER));
            }
            break;
        case ST_MACRO_6:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(MACRO_DELAY) SS_TAP(X_E) SS_DELAY(MACRO_DELAY) SS_TAP(X_7) SS_DELAY(MACRO_DELAY) SS_TAP(X_ENTER));
            }
            break;
        case ST_MACRO_7:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(MACRO_DELAY) SS_TAP(X_F) SS_DELAY(MACRO_DELAY) SS_TAP(X_9) SS_DELAY(MACRO_DELAY) SS_TAP(X_ENTER));
            }
            break;
        case ST_MACRO_8:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(MACRO_DELAY) SS_TAP(X_F) SS_DELAY(MACRO_DELAY) SS_TAP(X_B) SS_DELAY(MACRO_DELAY) SS_TAP(X_ENTER));
            }
            break;
        case ST_MACRO_9:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(MACRO_DELAY) SS_TAP(X_E) SS_DELAY(MACRO_DELAY) SS_TAP(X_F) SS_DELAY(MACRO_DELAY) SS_TAP(X_ENTER));
            }
            break;
        case ST_MACRO_10:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(MACRO_DELAY) SS_TAP(X_1) SS_DELAY(MACRO_DELAY) SS_TAP(X_5) SS_DELAY(MACRO_DELAY) SS_TAP(X_3) SS_DELAY(MACRO_DELAY) SS_TAP(X_ENTER));
            }
            break;
        case ST_MACRO_11:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(MACRO_DELAY) SS_TAP(X_E) SS_DELAY(MACRO_DELAY) SS_TAP(X_8) SS_DELAY(MACRO_DELAY) SS_TAP(X_ENTER));
            }
            break;
        case ST_MACRO_12:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(MACRO_DELAY) SS_TAP(X_E) SS_DELAY(MACRO_DELAY) SS_TAP(X_9) SS_DELAY(MACRO_DELAY) SS_TAP(X_ENTER));
            }
            break;
        case ST_MACRO_13:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(MACRO_DELAY) SS_TAP(X_E) SS_DELAY(MACRO_DELAY) SS_TAP(X_E) SS_DELAY(MACRO_DELAY) SS_TAP(X_ENTER));
            }
            break;
        case ST_MACRO_14:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(MACRO_DELAY) SS_TAP(X_F) SS_DELAY(MACRO_DELAY) SS_TAP(X_4) SS_DELAY(MACRO_DELAY) SS_TAP(X_ENTER));
            }
            break;
        case ST_MACRO_15:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(MACRO_DELAY) SS_TAP(X_E) SS_DELAY(MACRO_DELAY) SS_TAP(X_B) SS_DELAY(MACRO_DELAY) SS_TAP(X_ENTER));
            }
            break;
        case ST_MACRO_16:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(MACRO_DELAY) SS_TAP(X_E) SS_DELAY(MACRO_DELAY) SS_TAP(X_A) SS_DELAY(MACRO_DELAY) SS_TAP(X_ENTER));
            }
            break;
        case ST_MACRO_17:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(MACRO_DELAY) SS_TAP(X_C) SS_DELAY(MACRO_DELAY) SS_TAP(X_0) SS_DELAY(MACRO_DELAY) SS_TAP(X_ENTER));
            }
            break;
        case ST_MACRO_18:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(MACRO_DELAY) SS_TAP(X_C) SS_DELAY(MACRO_DELAY) SS_TAP(X_2) SS_DELAY(MACRO_DELAY) SS_TAP(X_ENTER));
            }
            break;
        case ST_MACRO_19:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(MACRO_DELAY) SS_TAP(X_C) SS_DELAY(MACRO_DELAY) SS_TAP(X_7) SS_DELAY(MACRO_DELAY) SS_TAP(X_ENTER));
            }
            break;
        case ST_MACRO_20:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(MACRO_DELAY) SS_TAP(X_D) SS_DELAY(MACRO_DELAY) SS_TAP(X_9) SS_DELAY(MACRO_DELAY) SS_TAP(X_ENTER));
            }
            break;
        case ST_MACRO_21:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(MACRO_DELAY) SS_TAP(X_D) SS_DELAY(MACRO_DELAY) SS_TAP(X_B) SS_DELAY(MACRO_DELAY) SS_TAP(X_ENTER));
            }
            break;
        case ST_MACRO_22:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(MACRO_DELAY) SS_TAP(X_C) SS_DELAY(MACRO_DELAY) SS_TAP(X_F) SS_DELAY(MACRO_DELAY) SS_TAP(X_ENTER));
            }
            break;
        case ST_MACRO_23:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(MACRO_DELAY) SS_TAP(X_1) SS_DELAY(MACRO_DELAY) SS_TAP(X_5) SS_DELAY(MACRO_DELAY) SS_TAP(X_2) SS_DELAY(MACRO_DELAY) SS_TAP(X_ENTER));
            }
            break;
        case ST_MACRO_24:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(MACRO_DELAY) SS_TAP(X_C) SS_DELAY(MACRO_DELAY) SS_TAP(X_8) SS_DELAY(MACRO_DELAY) SS_TAP(X_ENTER));
            }
            break;
        case ST_MACRO_25:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(MACRO_DELAY) SS_TAP(X_C) SS_DELAY(MACRO_DELAY) SS_TAP(X_9) SS_DELAY(MACRO_DELAY) SS_TAP(X_ENTER));
            }
            break;
        case ST_MACRO_26:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(MACRO_DELAY) SS_TAP(X_C) SS_DELAY(MACRO_DELAY) SS_TAP(X_E) SS_DELAY(MACRO_DELAY) SS_TAP(X_ENTER));
            }
            break;
        case ST_MACRO_27:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(MACRO_DELAY) SS_TAP(X_D) SS_DELAY(MACRO_DELAY) SS_TAP(X_4) SS_DELAY(MACRO_DELAY) SS_TAP(X_ENTER));
            }
            break;
        case ST_MACRO_28:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(MACRO_DELAY) SS_TAP(X_C) SS_DELAY(MACRO_DELAY) SS_TAP(X_B) SS_DELAY(MACRO_DELAY) SS_TAP(X_ENTER));
            }
            break;
        case ST_MACRO_29:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(MACRO_DELAY) SS_TAP(X_C) SS_DELAY(MACRO_DELAY) SS_TAP(X_A) SS_DELAY(MACRO_DELAY) SS_TAP(X_ENTER));
            }
            break;
        case ST_MACRO_30:
            if (record->event.pressed) {
                SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_7) SS_TAP(X_KP_6)));
            }
            break;
        case ST_MACRO_31:
            if (record->event.pressed) {
                SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_7) SS_TAP(X_KP_8)));
            }
            break;
        case ST_MACRO_32:
            if (record->event.pressed) {
                SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_7) SS_TAP(X_KP_9)));
            }
            break;
        case ST_MACRO_33:
            if (record->event.pressed) {
                SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_2) SS_TAP(X_KP_8)));
            }
            break;
        case ST_MACRO_34:
            if (record->event.pressed) {
                SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_2) SS_TAP(X_KP_4)));
            }
            break;
        case ST_MACRO_35:
            if (record->event.pressed) {
                SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_2) SS_TAP(X_KP_6)));
            }
            break;
        case ST_MACRO_36:
            if (record->event.pressed) {
                SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_3) SS_TAP(X_KP_1)));
            }
            break;
        case ST_MACRO_37:
            if (record->event.pressed) {
                SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_4) SS_TAP(X_KP_9)));
            }
            break;
        case ST_MACRO_38:
            if (record->event.pressed) {
                SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_5) SS_TAP(X_KP_1)));
            }
            break;
        case ST_MACRO_39:
            if (record->event.pressed) {
                SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_3) SS_TAP(X_KP_9)));
            }
            break;
        case ST_MACRO_40:
            if (record->event.pressed) {
                SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_5) SS_TAP(X_KP_6)));
            }
            break;
        case ST_MACRO_41:
            if (record->event.pressed) {
                SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_3) SS_TAP(X_KP_2)));
            }
            break;
        case ST_MACRO_42:
            if (record->event.pressed) {
                SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_3) SS_TAP(X_KP_3)));
            }
            break;
        case ST_MACRO_43:
            if (record->event.pressed) {
                SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_3) SS_TAP(X_KP_8)));
            }
            break;
        case ST_MACRO_44:
            if (record->event.pressed) {
                SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_4) SS_TAP(X_KP_4)));
            }
            break;
        case ST_MACRO_45:
            if (record->event.pressed) {
                SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_3) SS_TAP(X_KP_5)));
            }
            break;
        case ST_MACRO_46:
            if (record->event.pressed) {
                SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_3) SS_TAP(X_KP_4)));
            }
            break;
        case ST_MACRO_47:
            if (record->event.pressed) {
                SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_9) SS_TAP(X_KP_2)));
            }
            break;
        case ST_MACRO_48:
            if (record->event.pressed) {
                SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_9) SS_TAP(X_KP_4)));
            }
            break;
        case ST_MACRO_49:
            if (record->event.pressed) {
                SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_9) SS_TAP(X_KP_9)));
            }
            break;
        case ST_MACRO_50:
            if (record->event.pressed) {
                SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_1) SS_TAP(X_KP_7)));
            }
            break;
        case ST_MACRO_51:
            if (record->event.pressed) {
                SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_1) SS_TAP(X_KP_9)));
            }
            break;
        case ST_MACRO_52:
            if (record->event.pressed) {
                SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_0) SS_TAP(X_KP_7)));
            }
            break;
        case ST_MACRO_53:
            if (record->event.pressed) {
                SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_4) SS_TAP(X_KP_0)));
            }
            break;
        case ST_MACRO_54:
            if (record->event.pressed) {
                SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_0) SS_TAP(X_KP_0)));
            }
            break;
        case ST_MACRO_55:
            if (record->event.pressed) {
                SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_0) SS_TAP(X_KP_1)));
            }
            break;
        case ST_MACRO_56:
            if (record->event.pressed) {
                SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_0) SS_TAP(X_KP_6)));
            }
            break;
        case ST_MACRO_57:
            if (record->event.pressed) {
                SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_1) SS_TAP(X_KP_2)));
            }
            break;
        case ST_MACRO_58:
            if (record->event.pressed) {
                SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_0) SS_TAP(X_KP_3)));
            }
            break;
        case ST_MACRO_59:
            if (record->event.pressed) {
                SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_0) SS_TAP(X_KP_2)));
            }
            break;
        case RGB_SLD:
            if (record->event.pressed) {
                rgblight_mode(1);
            }
            return false;
    }
    return true;
}

typedef struct {
    bool    is_press_action;
    uint8_t step;
} tap;

enum { SINGLE_TAP = 1, SINGLE_HOLD, DOUBLE_TAP, DOUBLE_HOLD, DOUBLE_SINGLE_TAP, MORE_TAPS };

static tap dance_state[2];

uint8_t dance_step(qk_tap_dance_state_t *state);

uint8_t dance_step(qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed)
            return SINGLE_TAP;
        else
            return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted)
            return DOUBLE_SINGLE_TAP;
        else if (state->pressed)
            return DOUBLE_HOLD;
        else
            return DOUBLE_TAP;
    }
    return MORE_TAPS;
}

void dance_0_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_0_reset(qk_tap_dance_state_t *state, void *user_data);

void dance_0_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case DOUBLE_TAP:
            layer_move(3);
            break;
    }
}

void dance_0_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {}
    dance_state[0].step = 0;
}
void dance_1_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_1_reset(qk_tap_dance_state_t *state, void *user_data);

void dance_1_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case DOUBLE_TAP:
            layer_move(0);
            break;
    }
}

void dance_1_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {}
    dance_state[1].step = 0;
}

qk_tap_dance_action_t tap_dance_actions[] = {
    [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_0_finished, dance_0_reset),
    [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_1_finished, dance_1_reset),
};
