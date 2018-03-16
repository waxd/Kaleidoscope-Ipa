#include "Kaleidoscope-Ipa.h"

#include <Kaleidoscope-Unicode.h>

byte IpaKeys_::row, IpaKeys_::col;

static Key handleIpaEvent(Key mappedKey, byte row, byte col, uint8_t keyState) {
  if (mappedKey.flags != (SYNTHETIC | IS_MACRO))
    return mappedKey;

  if (mappedKey.keyCode < IPA_KEY_OFFSET)
    return mappedKey;  

  IpaKeys_::row = row;
  IpaKeys_::col = col;

  if (keyToggledOn(keyState)) {
    Unicode.type(IpaKeys_::unicode_keymap[mappedKey.keyCode]);
  }

  return Key_NoKey;
}
    
IpaKeys_::IpaKeys_(void) {
}

void IpaKeys_::begin(void) {
  Kaleidoscope.useEventHandlerHook(handleIpaEvent);
}

IpaKeys_ IpaKeys;

const uint32_t IpaKeys_::unicode_keymap[] =
  {
    0x0070,  // Lowercase_P
    0x0062,  // Lowercase_B
    0x0074,  // Lowercase_T
    0x0064,  // Lowercase_D
    0x0288,  // RightTail_T
    0x0256,  // RightTail_D
    0x0063,  // Lowercase_C
    0x025F,  // Barred_Dotless_J
    0x006B,  // Lowercase_K
    0x0261,  // Opentail_G
    0x0071,  // Lowercase_Q
    0x0262,  // Small_Capital_G
    0x0294,  // Glottal_Stop
    0x006D,  // Lowercase_M
    0x0271,  // Meng
    0x006E,  // Lowercase_N
    0x0273,  // RightTail_N
    0x0272,  // LeftTail_N
    0x014B,  // Eng
    0x0274,  // Small_Capital_N
    0x0299,  // Small_Capital_B
    0x0072,  // Lowercase_R
    0x0280,  // Small_Capital_R
    0x027E,  // FishHook_R
    0x027D,  // RightTail_R
    0x0278,  // Phi
    0x03B2,  // Beta
    0x0066,  // Lowercase_F
    0x0076,  // Lowercase_V
    0x03B8,  // Theta
    0x00F0,  // Eth
    0x0073,  // Lowercase_S
    0x007A,  // Lowercase_Z
    0x0283,  // Esh
    0x0292,  // Ezh
    0x0282,  // RightTail_S
    0x0290,  // RightTail_Z
    0x00E7,  // Cedilla
    0x029D,  // CurlyTail_J
    0x0078,  // Lowercase_X
    0x0263,  // Gamma
    0x03C7,  // Chi
    0x0281,  // Inverted_Small_Capital_R
    0x0127,  // Barred_H
    0x0295,  // Reversed_Glottal_Stop
    0x0068,  // Lowercase_H
    0x0266,  // Hooktop_H
    0x026C,  // Belted_L
    0x026E,  // Lezh
    0x028B,  // Cursive_V
    0x0279,  // Turned_R
    0x027B,  // RightTail_Turned_R
    0x006A,  // Lowercase_J
    0x0270,  // RightLeg_Turned_M
    0x006C,  // Lowercase_L
    0x026D,  // RightTail_L
    0x028E,  // Turned_Y
    0x029F,  // Small_Capital_L
    0x0253,  // Hooktop_B
    0x0257,  // Hooktop_D
    0x0284,  // Hooktop_Barred_Dotless_J
    0x0260,  // Hooktop_G
    0x029B,  // Hooktop_Small_Capital_G
    0x028D,  // Turned_W
    0x0077,  // Lowercase_W
    0x0265,  // Turned_H
    0x029C,  // Small_Capital_H
    0x02A1,  // Barred_Glottal_Stop
    0x02A2,  // Barred_Reversed_Glottal_Stop
    0x0267,  // Hooktop_Heng
    0x0298,  // Bulls_Eye
    0x01C0,  // Pipe
    0x01C3,  // Excalmation_Point
    0x01C2,  // DoubleBarred_Pipe
    0x01C1,  // Double_Pipe
    0x027A,  // Turned_LongLeg_R
    0x0255,  // CurlyTail_C
    0x0291,  // CurlyTail_Z
    0x2C71,  // RightHook_V
    0x026B,  // Tilde_L
    0x0069,  // Lowercase_I
    0x0065,  // Lowercase_E
    0x025B,  // Epsilon
    0x0061,  // Lowercase_A
    0x0251,  // Script_A
    0x0254,  // Open_O
    0x006F,  // Lowercase_O
    0x0075,  // Lowercase_U
    0x0079,  // Lowercase_Y
    0x00F8,  // Slashed_O
    0x0153,  // Lowercase_Ethel
    0x0276,  // Small_Capital_Ethel
    0x0252,  // Turned_Script_A
    0x028C,  // Turned_V
    0x0264,  // Rams_Horns
    0x026F,  // Turned_M
    0x0268,  // Barred_I
    0x0289,  // Barred_U
    0x026A,  // Small_Capital_I
    0x028F,  // Small_Capital_Y
    0x028A,  // Upsilon
    0x0259,  // Schwa
    0x0275,  // Barred_O
    0x0250,  // Turned_A
    0x00E6,  // Ash
    0x025C,  // Reversed_Epsilon
    0x025A,  // RightHook_Schwa
    0x025E,  // Closed_Reversed_Epsilon
    0x0258,  // Reversed_E
    0x02BC,  // Apostrophe
    0x0325,  // UnderRing
    0x030A,  // OverRing
    0x032C,  // Subscript_Wedge
    0x02B0,  // Superscript_H
    0x0324,  // Subscript_Umlaut
    0x0330,  // Subscript_Tilde
    0x033C,  // Subscript_Seagull
    0x032A,  // Subscript_Bridge
    0x033A,  // Inverted_Subscript_Bridge
    0x033B,  // Subscript_Square
    0x0339,  // Subscript_Right_HalfRing
    0x031C,  // Subscript_Left_HalfRing
    0x031F,  // Subscript_Plus
    0x0320,  // UnderBar
    0x0308,  // Umlaut
    0x033D,  // OverCross
    0x0318,  // Advancing_Sign
    0x0319,  // Retracting_Sign
    0x02DE,  // RightHook
    0x02B7,  // Superscript_W
    0x02B2,  // Superscript_J
    0x02E0,  // Superscript_Gamma
    0x02E4,  // Superscript_Reversed_Glottal_Stop
    0x0303,  // Superscript_Tilde
    0x207F,  // Superscript_N
    0x02E1,  // Superscript_L
    0x031A,  // Corner
    0x031D,  // Raising_Sign
    0x031E,  // Lowering_Sign
    0x0329,  // Syllabicty_Mark
    0x032F,  // Subscript_Arch
    0x0361,  // Top_Tie_Bar
    0x035C,  // Bottom_Tie_Bar
    0x02C8,  // Superior_Vertical_Stroke
    0x02CC,  // Inferior_Vertical_Stroke
    0x02D0,  // Length_Mark
    0x02D1,  // HalfLength_Mark
    0x0306,  // Breve
    0x002E,  // Period
    0x007C,  // Vertical_Line
    0x2016,  // Double_Vertical_Line
    0x2197,  // Upward_Diagonal_Arrow
    0x2198,  // Downward_Diagonal_Arrow
    0x030B,  // Double_Acute_Accent
    0x0301,  // Acute_Accent
    0x0304,  // Macron
    0x0300,  // Grave_Accent
    0x030F,  // Double_Grave_Accent
    0xA71B,  // Down_Arrow
    0xA71C,  // Up_Arrow
    0x02E5,  // ExtraHigh_Tone_Letter
    0x02E6,  // High_Tone_Letter
    0x02E7,  // Mid_Tone_Letter
    0x02E8,  // Low_Tone_Letter
    0x02E9,  // ExtraLow_Tone_Letter
    0x030C,  // Wedge
    0x0302,  // Circumflex
    0x1DC4,  // Macron_Acute_Accent
    0x1DC5,  // Grave_Accent_Macron
    0x1DC8,  // Grave_Accent_Acute_Accent_Macron
  };

