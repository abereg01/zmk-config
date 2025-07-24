#include QMK_KEYBOARD_H
// Test för att se om jag kan skriva i


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
		[0] = LAYOUT(
			KC_ESC,        KC_1,     KC_2,     KC_3,  KC_4,  KC_5,  KC_6,    KC_7,  KC_8,    KC_9,     KC_0,     KC_MINS,  KC_EQL,  KC_BSLS,   KC_DEL,
		    KC_TAB,        KC_Q,     KC_W,     KC_E,  KC_R,  KC_T,  KC_Y,    KC_U,  KC_I,    KC_O,     KC_P,     KC_LBRC,  KC_RBRC, KC_NUBS,   KC_PGUP,
			MT(MOD_LGUI,KC_BSPC),	 KC_A,     KC_S,  KC_D,  KC_F,  KC_G,    KC_H,  KC_J,    KC_K,     KC_L,     KC_SCLN,  KC_QUOT, KC_ENT,    KC_PGDN,
		    LSFT_T(KC_LCTL),       KC_Z,     KC_X,     KC_C,  KC_V,  KC_B,  KC_B,   KC_N,  KC_M,    KC_COMM,  KC_DOT,   KC_SLSH,  OSL(2), KC_UP,
		    KC_LCTL,      MT(MOD_LALT,KC_F12),  LT((1), KC_SPC),      LT((1), KC_SPC),         LT((1), KC_SPC),        MT(MOD_LALT | MOD_RALT,KC_F5),	KC_LEFT, KC_DOWN,   KC_RIGHT),
		[1] = LAYOUT(
			KC_ESC,        KC_F1,    KC_F2,   KC_F3,  KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,  KC_F12,  QK_BOOT,   C(S(KC_ESC)),
		    KC_TRNS,       RGB_TOG,  RGB_MOD, RGB_HUI,RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, KC_TRNS, KC_PSCR,  KC_SCRL,  KC_PAUS, QK_BOOT,    KC_PGUP,
			CTL_T(KC_CAPS),RGB_SPI,  RGB_SPD, KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,          KC_TRNS,  KC_PGDN,
		    KC_LSFT,       KC_TRNS,  KC_TRNS, KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_VOLU, KC_MUTE,
		    KC_TRNS,                 KC_TRNS, KC_TRNS,         KC_TRNS,           KC_TRNS,         KC_TRNS,                    KC_MPRV, KC_VOLD,  KC_MNXT),
		[2] = LAYOUT(
			KC_ESC,        KC_F1,    KC_F2,   KC_F3,  KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,  KC_F12,  QK_BOOT,   C(S(KC_ESC)),
		    KC_TRNS,       RGB_TOG,  RGB_MOD, RGB_HUI,RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, KC_TRNS, KC_PSCR, KC_SCRL,  KC_PAUS, QK_BOOT,    KC_PGUP,
			CTL_T(KC_CAPS),RGB_SPI,  RGB_SPD, KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,          KC_TRNS,  KC_PGDN,
		    KC_LSFT,       KC_TRNS,  KC_TRNS, KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_VOLU, KC_MUTE,
		    KC_TRNS,                 KC_TRNS, KC_TRNS,         KC_TRNS,           KC_TRNS,         KC_TRNS,                    KC_MPRV, KC_VOLD,  KC_MNXT),	
 };
 q