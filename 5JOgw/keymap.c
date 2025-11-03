#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  HSV_0_255_255,
  HSV_74_255_255,
  HSV_169_255_255,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
  DANCE_6,
  DANCE_7,
  DANCE_8,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    TD(DANCE_0),    KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           TD(DANCE_1),    
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,        
    LT(1, KC_ESCAPE),MT(MOD_LGUI, KC_A),MT(MOD_LALT, KC_S),MT(MOD_LCTL, KC_D),MT(MOD_LSFT, KC_F),KC_G,                                           KC_H,           MT(MOD_RSFT, KC_J),MT(MOD_RCTL, KC_K),MT(MOD_LALT, KC_L),MT(MOD_LGUI, KC_SCLN),LT(3, KC_QUOTE),
    OSL(6),         KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       OSL(6),         
                                                    LT(2, KC_BSPC), LT(4, QK_REPEAT_KEY),                                  LT(4, KC_ENTER),KC_SPACE
  ),
  [1] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          LGUI(KC_EQUAL), KC_7,           KC_8,           KC_9,           KC_KP_SLASH,    KC_AUDIO_VOL_UP,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          LGUI(KC_MINUS), KC_4,           KC_5,           KC_6,           KC_KP_ASTERISK, KC_AUDIO_VOL_DOWN,
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          LGUI(KC_0),     KC_1,           KC_2,           KC_3,           KC_KP_MINUS,    KC_MEDIA_PLAY_PAUSE,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_0,           KC_KP_DOT,      KC_KP_PLUS,     KC_NO,          
                                                    KC_TRANSPARENT, KC_NO,                                          KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    RGB_TOG,        TOGGLE_LAYER_COLOR,RGB_MODE_FORWARD,RGB_SLD,        RGB_VAD,        RGB_VAI,                                        KC_NO,          KC_END,         KC_HOME,        KC_NO,          KC_NO,          TD(DANCE_2),    
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 LALT(KC_LEFT),  KC_PGDN,        KC_PAGE_UP,     LALT(KC_RIGHT), KC_NO,          TD(DANCE_3),    
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, HSV_0_255_255,  HSV_74_255_255, HSV_169_255_255,                                LGUI(KC_LEFT),  KC_NO,          KC_NO,          LGUI(KC_RIGHT), KC_NO,          KC_NO,          
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_CIRC,        KC_PLUS,        KC_LPRN,        KC_RPRN,        KC_PERC,                                        KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F11,         
    KC_TILD,        KC_DLR,         KC_UNDS,        KC_LCBR,        KC_RCBR,        KC_HASH,                                        KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F12,         
    KC_EXLM,        KC_AT,          KC_MINUS,       KC_LBRC,        KC_RBRC,        KC_ASTR,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_AMPR,        KC_LABK,        KC_EQUAL,       KC_RABK,        KC_PIPE,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_DOT,         KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_GRAVE,       KC_QUOTE,                                       KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_F1,          LCTL(LSFT(KC_1)),LCTL(LSFT(KC_2)),LCTL(LSFT(KC_3)),LCTL(LSFT(KC_4)),KC_NO,                                          LALT(LGUI(KC_LEFT)),LALT(LGUI(KC_DOWN)),LALT(LGUI(KC_UP)),LALT(LGUI(KC_RIGHT)),KC_NO,          KC_F12,         
    LGUI(KC_GRAVE), KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          LGUI(KC_LBRC),  LGUI(KC_RBRC),  KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          LCTL(KC_1),     LCTL(KC_2),     LCTL(KC_3),     LCTL(KC_4),     TD(DANCE_4),                                    TD(DANCE_5),    LALT(LCTL(KC_DOWN)),TD(DANCE_6),    TD(DANCE_7),    KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          LCTL(KC_6),     LCTL(KC_7),     KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    LCTL(KC_TAB),   KC_TRANSPARENT,                                 KC_TRANSPARENT, LGUI(KC_LBRC)
  ),
  [5] = LAYOUT_voyager(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           TD(DANCE_8),    
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,        
    KC_LEFT_SHIFT,  KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        MT(MOD_RSFT, KC_QUOTE),
    KC_LEFT_CTRL,   KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         MT(MOD_RALT, KC_SLASH),KC_RIGHT_CTRL,  
                                                    KC_SPACE,       KC_LEFT_ALT,                                    MT(MOD_LSFT, KC_BSPC),KC_SPACE
  ),
  [6] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          LGUI(KC_Q),     LGUI(KC_W),     KC_NO,          LGUI(LSFT(KC_R)),KC_NO,                                          KC_NO,          KC_NO,          LALT(LGUI(KC_I)),KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          LGUI(KC_A),     KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_NO,          KC_NO,                                          KC_NO,          KC_NO
  ),
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT(
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  '*', '*', '*', '*'
);

const uint16_t PROGMEM combo0[] = { KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_M, KC_COMMA, COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_H, MT(MOD_RSFT, KC_J), COMBO_END};
const uint16_t PROGMEM combo4[] = { MT(MOD_RSFT, KC_J), MT(MOD_LSFT, KC_F), COMBO_END};
const uint16_t PROGMEM combo5[] = { MT(MOD_LSFT, KC_F), KC_G, COMBO_END};
const uint16_t PROGMEM combo6[] = { KC_V, KC_B, COMBO_END};
const uint16_t PROGMEM combo7[] = { KC_6, KC_7, COMBO_END};
const uint16_t PROGMEM combo8[] = { KC_Y, KC_U, COMBO_END};
const uint16_t PROGMEM combo9[] = { MT(MOD_LGUI, KC_SCLN), LT(3, KC_QUOTE), COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, LCTL(KC_A)),
    COMBO(combo1, LGUI(KC_SPACE)),
    COMBO(combo2, LGUI(KC_TAB)),
    COMBO(combo3, LGUI(KC_T)),
    COMBO(combo4, CW_TOGG),
    COMBO(combo5, LGUI(KC_C)),
    COMBO(combo6, LGUI(KC_V)),
    COMBO(combo7, KC_AUDIO_VOL_UP),
    COMBO(combo8, KC_AUDIO_VOL_DOWN),
    COMBO(combo9, KC_MEDIA_PLAY_PAUSE),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MT(MOD_LSFT, KC_F):
            return TAPPING_TERM -55;
        case MT(MOD_RSFT, KC_J):
            return TAPPING_TERM -55;
        case LT(3, KC_QUOTE):
            return TAPPING_TERM -55;
        default:
            return TAPPING_TERM;
    }
}


extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,252,176}, {132,253,175}, {132,253,175}, {132,253,175}, {187,253,175}, {54,253,175}, {0,252,176}, {132,253,175}, {132,253,175}, {132,253,175}, {187,253,175}, {54,253,175}, {0,252,176}, {132,253,175}, {132,253,175}, {132,253,175}, {187,253,175}, {0,0,0}, {0,0,0}, {0,0,0}, {132,253,175}, {187,253,175}, {187,253,175}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {219,255,201}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {169,255,255}, {169,255,255}, {169,255,255}, {34,255,255}, {34,255,255}, {169,255,255}, {169,255,255}, {95,255,123}, {169,255,255}, {34,255,255}, {34,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {34,255,255}, {34,255,255}, {169,255,255}, {0,0,0}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {219,255,201}, {219,255,201}, {237,218,204}, {237,218,204}, {237,218,204}, {237,218,204}, {237,218,204}, {237,218,204}, {237,218,204}, {237,218,204}, {237,218,204}, {237,218,204}, {237,218,204}, {237,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {0,0,0}, {20,218,204}, {20,218,204}, {20,218,204}, {20,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {219,255,201}, {0,0,0}, {20,218,204}, {20,218,204}, {20,218,204}, {20,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {20,218,204}, {20,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {20,218,204} },

    [5] = { {27,205,242}, {206,183,227}, {206,183,227}, {206,183,227}, {206,183,227}, {206,183,227}, {27,205,242}, {43,183,227}, {125,183,227}, {43,183,227}, {73,184,228}, {73,184,228}, {27,205,242}, {125,183,227}, {125,183,227}, {125,183,227}, {73,184,228}, {73,184,228}, {27,205,242}, {73,184,228}, {73,184,228}, {73,184,228}, {73,184,228}, {73,184,228}, {73,184,228}, {73,184,228}, {73,184,228}, {73,184,228}, {73,184,228}, {73,184,228}, {73,184,228}, {0,218,204}, {73,184,228}, {73,184,228}, {73,184,228}, {73,184,228}, {73,184,228}, {73,184,228}, {73,184,228}, {73,184,228}, {73,184,228}, {73,184,228}, {73,184,228}, {73,184,228}, {73,184,228}, {73,184,228}, {73,184,228}, {73,184,228}, {73,184,228}, {73,184,228}, {73,184,228}, {73,184,228} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (!keyboard_config.disable_layer_led) { 
    switch (biton32(layer_state)) {
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
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  return true;
}



typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[9];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_V));
        tap_code16(LGUI(KC_V));
        tap_code16(LGUI(KC_V));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_V));
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_V)); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_C)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_V)); register_code16(LGUI(KC_V));
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_V)); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_C)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_V)); break;
    }
    dance_state[0].step = 0;
}
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case DOUBLE_TAP: layer_move(5); break;
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_DELETE);
        tap_code16(KC_DELETE);
        tap_code16(KC_DELETE);
    }
    if(state->count > 3) {
        tap_code16(KC_DELETE);
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(KC_DELETE); break;
        case DOUBLE_TAP: register_code16(LALT(KC_DELETE)); break;
        case DOUBLE_HOLD: register_code16(LGUI(KC_DELETE)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_DELETE); register_code16(KC_DELETE);
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(KC_DELETE); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_DELETE)); break;
        case DOUBLE_HOLD: unregister_code16(LGUI(KC_DELETE)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_DELETE); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_BSPC);
        tap_code16(KC_BSPC);
        tap_code16(KC_BSPC);
    }
    if(state->count > 3) {
        tap_code16(KC_BSPC);
    }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(KC_BSPC); break;
        case DOUBLE_TAP: register_code16(LALT(KC_BSPC)); break;
        case DOUBLE_HOLD: register_code16(LGUI(KC_BSPC)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_BSPC); register_code16(KC_BSPC);
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(KC_BSPC); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_BSPC)); break;
        case DOUBLE_HOLD: unregister_code16(LGUI(KC_BSPC)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_BSPC); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(tap_dance_state_t *state, void *user_data);
void dance_4_finished(tap_dance_state_t *state, void *user_data);
void dance_4_reset(tap_dance_state_t *state, void *user_data);

void on_dance_4(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_5));
        tap_code16(LCTL(KC_5));
        tap_code16(LCTL(KC_5));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_5));
    }
}

void dance_4_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_5)); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_8)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_5)); register_code16(LCTL(KC_5));
    }
}

void dance_4_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_5)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_8)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_5)); break;
    }
    dance_state[4].step = 0;
}
void on_dance_5(tap_dance_state_t *state, void *user_data);
void dance_5_finished(tap_dance_state_t *state, void *user_data);
void dance_5_reset(tap_dance_state_t *state, void *user_data);

void on_dance_5(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LCTL(KC_LEFT)));
        tap_code16(LALT(LCTL(KC_LEFT)));
        tap_code16(LALT(LCTL(KC_LEFT)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LCTL(KC_LEFT)));
    }
}

void dance_5_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(LALT(LCTL(KC_LEFT))); break;
        case DOUBLE_TAP: register_code16(LALT(LCTL(LGUI(KC_LEFT)))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LCTL(KC_LEFT))); register_code16(LALT(LCTL(KC_LEFT)));
    }
}

void dance_5_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(LALT(LCTL(KC_LEFT))); break;
        case DOUBLE_TAP: unregister_code16(LALT(LCTL(LGUI(KC_LEFT)))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LCTL(KC_LEFT))); break;
    }
    dance_state[5].step = 0;
}
void on_dance_6(tap_dance_state_t *state, void *user_data);
void dance_6_finished(tap_dance_state_t *state, void *user_data);
void dance_6_reset(tap_dance_state_t *state, void *user_data);

void on_dance_6(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LCTL(KC_UP)));
        tap_code16(LALT(LCTL(KC_UP)));
        tap_code16(LALT(LCTL(KC_UP)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LCTL(KC_UP)));
    }
}

void dance_6_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = dance_step(state);
    switch (dance_state[6].step) {
        case SINGLE_TAP: register_code16(LALT(LCTL(KC_UP))); break;
        case DOUBLE_TAP: register_code16(LALT(LCTL(KC_ENTER))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LCTL(KC_UP))); register_code16(LALT(LCTL(KC_UP)));
    }
}

void dance_6_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[6].step) {
        case SINGLE_TAP: unregister_code16(LALT(LCTL(KC_UP))); break;
        case DOUBLE_TAP: unregister_code16(LALT(LCTL(KC_ENTER))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LCTL(KC_UP))); break;
    }
    dance_state[6].step = 0;
}
void on_dance_7(tap_dance_state_t *state, void *user_data);
void dance_7_finished(tap_dance_state_t *state, void *user_data);
void dance_7_reset(tap_dance_state_t *state, void *user_data);

void on_dance_7(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LCTL(KC_RIGHT)));
        tap_code16(LALT(LCTL(KC_RIGHT)));
        tap_code16(LALT(LCTL(KC_RIGHT)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LCTL(KC_RIGHT)));
    }
}

void dance_7_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[7].step = dance_step(state);
    switch (dance_state[7].step) {
        case SINGLE_TAP: register_code16(LALT(LCTL(KC_RIGHT))); break;
        case DOUBLE_TAP: register_code16(LALT(LCTL(LGUI(KC_RIGHT)))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LCTL(KC_RIGHT))); register_code16(LALT(LCTL(KC_RIGHT)));
    }
}

void dance_7_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[7].step) {
        case SINGLE_TAP: unregister_code16(LALT(LCTL(KC_RIGHT))); break;
        case DOUBLE_TAP: unregister_code16(LALT(LCTL(LGUI(KC_RIGHT)))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LCTL(KC_RIGHT))); break;
    }
    dance_state[7].step = 0;
}
void dance_8_finished(tap_dance_state_t *state, void *user_data);
void dance_8_reset(tap_dance_state_t *state, void *user_data);

void dance_8_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[8].step = dance_step(state);
    switch (dance_state[8].step) {
        case DOUBLE_TAP: layer_move(0); break;
    }
}

void dance_8_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[8].step) {
    }
    dance_state[8].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
        [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_5, dance_5_finished, dance_5_reset),
        [DANCE_6] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_6, dance_6_finished, dance_6_reset),
        [DANCE_7] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_7, dance_7_finished, dance_7_reset),
        [DANCE_8] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_8_finished, dance_8_reset),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case HSV_0_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(0,255,255);
      }
      return false;
    case HSV_74_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(74,255,255);
      }
      return false;
    case HSV_169_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(169,255,255);
      }
      return false;
  }
  return true;
}
