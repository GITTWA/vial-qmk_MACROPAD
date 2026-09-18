#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        /* RIGA 0 (Attiva - GP2) */
        KC_P7, KC_P8,   KC_P9,   KC_PMNS,
        
        /* RIGA 1 (Attiva - GP3) */
        KC_P4, KC_P5,   KC_P6,   KC_PPLS,
        
        /* RIGA 2 (Attiva - GP4) */
        KC_P1, KC_P2,   KC_P3,   KC_PENT,
        
        /* RIGA 3 (Attiva - GP5) */
        KC_P0, KC_PDOT, KC_BSPC, KC_ESC,
        
        /* RIGA 4 (Predisposta per il futuro - GP6) */
        KC_NO, KC_NO,   KC_NO,   KC_NO,
        
        /* RIGA 5 (Predisposta per il futuro - GP7) */
        KC_NO, KC_NO,   KC_NO,   KC_NO
    )
};
