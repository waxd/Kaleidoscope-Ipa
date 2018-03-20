// -*- mode: c++ -*-
#define KALEIDOSCOPE_HOSTOS_GUESSER 1

#include <Kaleidoscope.h>
#include <Kaleidoscope-HostOS.h>
#include <Kaleidoscope/HostOS-select.h>
#include "Kaleidoscope-Ipa.h"

enum { QWERTY, IPA, IPA_SHIFT };

/* This comment temporarily turns off astyle's indent enforcement
 *   so we can make the keymaps actually resemble the physical key layout better
 */
// *INDENT-OFF*

const Key keymaps[][ROWS][COLS] PROGMEM = {

  [QWERTY] = KEYMAP_STACKED
  (___,          Key_1, Key_2, Key_3, Key_4, Key_5, ___,
   Key_Backtick, Key_Q, Key_W, Key_E, Key_R, Key_T, Key_Tab,
   Key_PageUp,   Key_A, Key_S, Key_D, Key_F, Key_G,
   Key_PageDown, Key_Z, Key_X, Key_C, Key_V, Key_B, Key_Escape,
   Key_LeftControl, Key_Backspace, Key_LeftGui, Key_LeftShift,
   ___,

   ___,           Key_6, Key_7, Key_8,     Key_9,         Key_0,         ___,
   Key_Enter,     Key_Y, Key_U, Key_I,     Key_O,         Key_P,         Key_Equals,
                  Key_H, Key_J, Key_K,     Key_L,         Key_Semicolon, Key_Quote,
   Key_RightAlt,  Key_N, Key_M, Key_Comma, Key_Period,    Key_Slash,     Key_Minus,
   Key_RightShift, Key_LeftAlt, Key_Spacebar, Key_RightControl,
   ___),

   [IPA] =  KEYMAP_STACKED
   (___, ___,              ___,               ___,              ___,              ___,              ___,
    ___, IPA(Ash),         IPA(Lowercase_W),  IPA(Lowercase_E), IPA(Turned_R),    IPA(Lowercase_T), ___,
    ___, IPA(Script_A),    IPA(Lowercase_S),  IPA(Lowercase_D), IPA(Lowercase_F), IPA(Opentail_G),
    ___, IPA(Lowercase_Z), IPA(Glottal_Stop), IPA(Schwa),       IPA(Lowercase_V), IPA(Lowercase_B), ___,
    ___, ___, ___, ShiftToLayer(IPA_SHIFT),
    ___,

    ___,  ___,              ___,              ___,              ___,              ___,              ___,
    ___,  IPA(Epsilon),     IPA(Lowercase_U), IPA(Lowercase_I), IPA(Lowercase_O), IPA(Lowercase_P), ___,
          IPA(Lowercase_H), IPA(Lowercase_J), IPA(Lowercase_K), IPA(Lowercase_L), IPA(Length_Mark), IPA(Superior_Vertical_Stroke),
    ___,  IPA(Lowercase_N), IPA(Lowercase_M), IPA(Top_Tie_Bar), IPA(Period),      Key_Slash,        ___,
    ShiftToLayer(IPA_SHIFT), ___, ___, ___,
    ___),

   [IPA_SHIFT] =  KEYMAP_STACKED
   (___, ___,                  ___,              ___,                  ___,                   ___,            ___,
    ___, IPA(Lowercase_A),     IPA(Turned_W),    IPA(RightHook),       IPA(Lowercase_R),      IPA(Theta),     ___,
    ___, IPA(Turned_Script_A), IPA(Esh),         IPA(Eth),             IPA(Subscript_Bridge), IPA(OverRing),
    ___, IPA(Ezh),             IPA(Lowercase_X), IPA(RightHook_Schwa), IPA(Turned_V),         IPA(UnderRing), ___,
    ___, ___, ___, ___,
    ___,

    ___, ___,                   ___,          ___,                  ___,           ___,                  ___,
    ___, IPA(Reversed_Epsilon), IPA(Upsilon), IPA(Small_Capital_I), IPA(Open_O),   IPA(Superscript_W),   ___,
         IPA(Superscript_H),    IPA(Umlaut),  IPA(Subscript_Arch),  IPA(Belted_L), IPA(HalfLength_Mark), IPA(Inferior_Vertical_Stroke),
    ___, IPA(Eng),              IPA(Meng),    IPA(Bottom_Tie_Bar),  IPA(Breve),    ___,                  ___,
    ___, ___, ___, ___,
    ___)
};

/* Re-enable astyle's indent enforcement */
// *INDENT-ON*

void setup() {
  Kaleidoscope.setup();
  
  Kaleidoscope.use(&IpaKeys);

  HostOS.os(kaleidoscope::hostos::WINDOWS);
}

void loop() {
  Kaleidoscope.loop();
}
