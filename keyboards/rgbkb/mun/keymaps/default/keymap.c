#include QMK_KEYBOARD_H

enum mun_layers {
    _QWERTY,
    _COLEMAK,
    _DVORAK,

    _FN,
    _ADJUST
};

enum mun_keycodes {
    QWERTY = SAFE_RANGE,
    COLEMAK,
    DVORAK
};

#define FN      MO(_FN)
#define ADJUST  MO(_ADJUST)

#define FN_ESC  LT(_FN, KC_ESC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* QWERTY
     * .--------------------------------------------------------------.  .--------------------------------------------------------------.
     * | `~     | 1      | 2      | 3      | 4      | 5      |        |  |        | 6      | 7      | 8      | 9      | 0      | Bckspc |
     * |--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
     * | Tab    | Q      | W      | E      | R      | T      |        |  |        | Y      | U      | I      | O      | P      | \      |
     * |--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
     * | Esc/FN | A      | S      | D      | F      | G      |        |  |        | H      | J      | K      | L      | :      | '      |
     * |--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
     * | Shift( | Z      | X      | C      | V      | B      |        |  |        | N      | M      | ,      | .      | /      | )Shift |
     * |--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
     * | Ctrl   | Win    | Alt    | RGBTOG | FN     | Space  | Bksp   |  | Enter  | Space  | Space  | FN     | Alt    | Win    | Ctrl   |
     * '--------+--------+--------+--------+--------+--------+--------'  '--------+--------+--------+--------+--------+--------+--------'
     */
    [_QWERTY] = LAYOUT(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_NO,   KC_NO,   KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_NO,   KC_NO,   KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_QUOT,
        FN_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_NO,   KC_NO,   KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,
        KC_LSPO, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_NO,   KC_NO,   KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        KC_LCTL, KC_LGUI, KC_LALT, RGB_TOG, FN,      KC_SPC,  KC_BSPC, KC_ENT,  KC_SPC,  KC_SPC,  FN,      KC_RALT, KC_RGUI, KC_RCTL
    ),

    [_COLEMAK] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,    _______, _______, KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, _______,
        _______, KC_A,    KC_R,    KC_S,    KC_T,    KC_D,    _______, _______, KC_H,    KC_N,    KC_E,    KC_I,    KC_O,    _______,
        _______, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    _______, _______, KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),

    [_DVORAK] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,    _______, _______, KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    _______,
        _______, KC_A,    KC_O,    KC_E,    KC_U,    KC_I,    _______, _______, KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    _______,
        _______, KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,    _______, _______, KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,    _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),

    [_FN] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, RGB_SAD, RGB_VAI, RGB_SAI,   RESET, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, RGB_HUD, RGB_VAD, RGB_HUI, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, RGB_SPD, RGB_SPI, RGB_MOD, RGB_RMOD, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),

    [_ADJUST] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),
};

#if defined(RGB_MATRIX_ENABLE) || defined(RGBLIGHT_ENABLE)
typedef void (*rgb_f)(void);
const rgb_f rgb_functions[TOUCH_SEGMENTS] = { rgblight_step, rgblight_toggle, rgblight_step_reverse };

void touch_encoder_tapped_user(uint8_t index, uint8_t section)
{
    xprintf("tap %d, %d\n", index, section);
    (*rgb_functions[section])();
}

void touch_encoder_update_user(uint8_t index, bool clockwise)
{
    xprintf("slide %d, %d\n", index, clockwise);
    // The rgb functions write to eeprom, which takes 3-4ms on avr.
    if (clockwise)
        rgblight_increase_hue();
    else
        rgblight_decrease_hue();
}
#endif

#if defined(OLED_DRIVER_ENABLE)
uint16_t ovalue = 0;
uint32_t mcounter = 0;
uint32_t mvalue = 0;
uint16_t sec_timer = 1000;

void do_counters(void) {
    mcounter++;
    uint16_t now = sync_timer_read();
    if (timer_expired(now, sec_timer))
    {
        sec_timer += 1000;
        ovalue++;
        mvalue = (mvalue + mcounter) / 2;
        mcounter = 0;
    }
}

void matrix_scan_user(void) {
    do_counters();
}

void matrix_slave_scan_user(void) {
    do_counters();
}

void oled_task_user(void) {
    // Host Keyboard Layer Status
    oled_write_P(PSTR("Layer: "), false);

    switch (get_highest_layer(layer_state)) {
        case _QWERTY:
            oled_write_P(PSTR("Default\n"), false);
            break;
        case _FN:
            oled_write_P(PSTR("FN\n"), false);
            break;
        case _ADJUST:
            oled_write_P(PSTR("ADJ\n"), false);
            break;
        default:
            // Or use the write_ln shortcut over adding '\n' to the end of your string
            oled_write_ln_P(PSTR("Undefined"), false);
    }

    // Host Keyboard LED Status
    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
    oled_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
    oled_write_ln_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);

    static char buffer[6] = {0};
    snprintf(buffer, sizeof(buffer), "%5d", ovalue);
    oled_write_P(PSTR("\nTimer: "), false);
    oled_write_ln_P(buffer, false);

    snprintf(buffer, sizeof(buffer), "%5d", mvalue);
    oled_write_P(PSTR("\nScans: "), false);
    oled_write_ln_P(buffer, false);
}
#endif
