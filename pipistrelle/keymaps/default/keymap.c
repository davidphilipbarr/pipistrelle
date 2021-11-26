#include QMK_KEYBOARD_H
#include "keymap_steno.h"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  LAYOUT(
         STN_S1,  STN_TL,  STN_PL,  STN_HL,  STN_ST1,  STN_FR,  STN_PR,  STN_LR,  STN_TR,  STN_DR ,
          STN_S2,  STN_KL,  STN_WL,  STN_RL,  STN_ST2,  STN_RR,  STN_BR,  STN_GR,  STN_SR,  STN_ZR ,
                            STN_A,   STN_O,  STN_N1,  STN_E,    STN_U ),

 };


// {
//     LAYOUT(
//     
//     KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,     KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,
//     KC_A,    KC_S,    KC_D,    KC_F,    KC_G,     KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
//  KC_C,    KC_V,    KC_1, KC_N,    KC_M),
//  };


 void matrix_init_user() {
   steno_set_mode(STENO_MODE_GEMINI); // or STENO_MODE_BOLT
 }

