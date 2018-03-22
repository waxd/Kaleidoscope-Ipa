// Author: David Wax <david.allen.wax@gmail.com>
// See "LICENSE" for license details.

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
    switch (mappedKey.keyCode) {
    case Lowercase_P:
      Unicode.type(0x0070);
      break;
    case Lowercase_B:
      Unicode.type(0x0062);
      break;
    case Lowercase_T:
      Unicode.type(0x0074);
      break;
    case Lowercase_D:
      Unicode.type(0x0064);
      break;
    case RightTail_T:
      Unicode.type(0x0288);
      break;
    case RightTail_D:
      Unicode.type(0x0256);
      break;
    case Lowercase_C:
      Unicode.type(0x0063);
      break;
    case Barred_Dotless_J:
      Unicode.type(0x025F);
      break;
    case Lowercase_K:
      Unicode.type(0x006B);
      break;
    case Opentail_G:
      Unicode.type(0x0261);
      break;
    case Lowercase_Q:
      Unicode.type(0x0071);
      break;
    case Small_Capital_G:
      Unicode.type(0x0262);
      break;
    case Glottal_Stop:
      Unicode.type(0x0294);
      break;
    case Lowercase_M:
      Unicode.type(0x006D);
      break;
    case Meng:
      Unicode.type(0x0271);
      break;
    case Lowercase_N:
      Unicode.type(0x006E);
      break;
    case RightTail_N:
      Unicode.type(0x0273);
      break;
    case LeftTail_N:
      Unicode.type(0x0272);
      break;
    case Eng:
      Unicode.type(0x014B);
      break;
    case Small_Capital_N:
      Unicode.type(0x0274);
      break;
    case Small_Capital_B:
      Unicode.type(0x0299);
      break;
    case Lowercase_R:
      Unicode.type(0x0072);
      break;
    case Small_Capital_R:
      Unicode.type(0x0280);
      break;
    case FishHook_R:
      Unicode.type(0x027E);
      break;
    case RightTail_R:
      Unicode.type(0x027D);
      break;
    case Phi:
      Unicode.type(0x0278);
      break;
    case Beta:
      Unicode.type(0x03B2);
      break;
    case Lowercase_F:
      Unicode.type(0x0066);
      break;
    case Lowercase_V:
      Unicode.type(0x0076);
      break;
    case Theta:
      Unicode.type(0x03B8);
      break;
    case Eth:
      Unicode.type(0x00F0);
      break;
    case Lowercase_S:
      Unicode.type(0x0073);
      break;
    case Lowercase_Z:
      Unicode.type(0x007A);
      break;
    case Esh:
      Unicode.type(0x0283);
      break;
    case Ezh:
      Unicode.type(0x0292);
      break;
    case RightTail_S:
      Unicode.type(0x0282);
      break;
    case RightTail_Z:
      Unicode.type(0x0290);
      break;
    case Cedilla:
      Unicode.type(0x00E7);
      break;
    case CurlyTail_J:
      Unicode.type(0x029D);
      break;
    case Lowercase_X:
      Unicode.type(0x0078);
      break;
    case Gamma:
      Unicode.type(0x0263);
      break;
    case Chi:
      Unicode.type(0x03C7);
      break;
    case Inverted_Small_Capital_R:
      Unicode.type(0x0281);
      break;
    case Barred_H:
      Unicode.type(0x0127);
      break;
    case Reversed_Glottal_Stop:
      Unicode.type(0x0295);
      break;
    case Lowercase_H:
      Unicode.type(0x0068);
      break;
    case Hooktop_H:
      Unicode.type(0x0266);
      break;
    case Belted_L:
      Unicode.type(0x026C);
      break;
    case Lezh:
      Unicode.type(0x026E);
      break;
    case Cursive_V:
      Unicode.type(0x028B);
      break;
    case Turned_R:
      Unicode.type(0x0279);
      break;
    case RightTail_Turned_R:
      Unicode.type(0x027B);
      break;
    case Lowercase_J:
      Unicode.type(0x006A);
      break;
    case RightLeg_Turned_M:
      Unicode.type(0x0270);
      break;
    case Lowercase_L:
      Unicode.type(0x006C);
      break;
    case RightTail_L:
      Unicode.type(0x026D);
      break;
    case Turned_Y:
      Unicode.type(0x028E);
      break;
    case Small_Capital_L:
      Unicode.type(0x029F);
      break;
    case Hooktop_B:
      Unicode.type(0x0253);
      break;
    case Hooktop_D:
      Unicode.type(0x0257);
      break;
    case Hooktop_Barred_Dotless_J:
      Unicode.type(0x0284);
      break;
    case Hooktop_G:
      Unicode.type(0x0260);
      break;
    case Hooktop_Small_Capital_G:
      Unicode.type(0x029B);
      break;
    case Turned_W:
      Unicode.type(0x028D);
      break;
    case Lowercase_W:
      Unicode.type(0x0077);
      break;
    case Turned_H:
      Unicode.type(0x0265);
      break;
    case Small_Capital_H:
      Unicode.type(0x029C);
      break;
    case Barred_Glottal_Stop:
      Unicode.type(0x02A1);
      break;
    case Barred_Reversed_Glottal_Stop:
      Unicode.type(0x02A2);
      break;
    case Hooktop_Heng:
      Unicode.type(0x0267);
      break;
    case Bulls_Eye:
      Unicode.type(0x0298);
      break;
    case Pipe:
      Unicode.type(0x01C0);
      break;
    case Excalmation_Point:
      Unicode.type(0x01C3);
      break;
    case DoubleBarred_Pipe:
      Unicode.type(0x01C2);
      break;
    case Double_Pipe:
      Unicode.type(0x01C1);
      break;
    case Turned_LongLeg_R:
      Unicode.type(0x027A);
      break;
    case CurlyTail_C:
      Unicode.type(0x0255);
      break;
    case CurlyTail_Z:
      Unicode.type(0x0291);
      break;
    case RightHook_V:
      Unicode.type(0x2C71);
      break;
    case Tilde_L:
      Unicode.type(0x026B);
      break;
    case Lowercase_I:
      Unicode.type(0x0069);
      break;
    case Lowercase_E:
      Unicode.type(0x0065);
      break;
    case Epsilon:
      Unicode.type(0x025B);
      break;
    case Lowercase_A:
      Unicode.type(0x0061);
      break;
    case Script_A:
      Unicode.type(0x0251);
      break;
    case Open_O:
      Unicode.type(0x0254);
      break;
    case Lowercase_O:
      Unicode.type(0x006F);
      break;
    case Lowercase_U:
      Unicode.type(0x0075);
      break;
    case Lowercase_Y:
      Unicode.type(0x0079);
      break;
    case Slashed_O:
      Unicode.type(0x00F8);
      break;
    case Lowercase_Ethel:
      Unicode.type(0x0153);
      break;
    case Small_Capital_Ethel:
      Unicode.type(0x0276);
      break;
    case Turned_Script_A:
      Unicode.type(0x0252);
      break;
    case Turned_V:
      Unicode.type(0x028C);
      break;
    case Rams_Horns:
      Unicode.type(0x0264);
      break;
    case Turned_M:
      Unicode.type(0x026F);
      break;
    case Barred_I:
      Unicode.type(0x0268);
      break;
    case Barred_U:
      Unicode.type(0x0289);
      break;
    case Small_Capital_I:
      Unicode.type(0x026A);
      break;
    case Small_Capital_Y:
      Unicode.type(0x028F);
      break;
    case Upsilon:
      Unicode.type(0x028A);
      break;
    case Schwa:
      Unicode.type(0x0259);
      break;
    case Barred_O:
      Unicode.type(0x0275);
      break;
    case Turned_A:
      Unicode.type(0x0250);
      break;
    case Ash:
      Unicode.type(0x00E6);
      break;
    case Reversed_Epsilon:
      Unicode.type(0x025C);
      break;
    case RightHook_Schwa:
      Unicode.type(0x025A);
      break;
    case Closed_Reversed_Epsilon:
      Unicode.type(0x025E);
      break;
    case Reversed_E:
      Unicode.type(0x0258);
      break;
    case Apostrophe:
      Unicode.type(0x02BC);
      break;
    case UnderRing:
      Unicode.type(0x0325);
      break;
    case OverRing:
      Unicode.type(0x030A);
      break;
    case Subscript_Wedge:
      Unicode.type(0x032C);
      break;
    case Superscript_H:
      Unicode.type(0x02B0);
      break;
    case Subscript_Umlaut:
      Unicode.type(0x0324);
      break;
    case Subscript_Tilde:
      Unicode.type(0x0330);
      break;
    case Subscript_Seagull:
      Unicode.type(0x033C);
      break;
    case Subscript_Bridge:
      Unicode.type(0x032A);
      break;
    case Inverted_Subscript_Bridge:
      Unicode.type(0x033A);
      break;
    case Subscript_Square:
      Unicode.type(0x033B);
      break;
    case Subscript_Right_HalfRing:
      Unicode.type(0x0339);
      break;
    case Subscript_Left_HalfRing:
      Unicode.type(0x031C);
      break;
    case Subscript_Plus:
      Unicode.type(0x031F);
      break;
    case UnderBar:
      Unicode.type(0x0320);
      break;
    case Umlaut:
      Unicode.type(0x0308);
      break;
    case OverCross:
      Unicode.type(0x033D);
      break;
    case Advancing_Sign:
      Unicode.type(0x0318);
      break;
    case Retracting_Sign:
      Unicode.type(0x0319);
      break;
    case RightHook:
      Unicode.type(0x02DE);
      break;
    case Superscript_W:
      Unicode.type(0x02B7);
      break;
    case Superscript_J:
      Unicode.type(0x02B2);
      break;
    case Superscript_Gamma:
      Unicode.type(0x02E0);
      break;
    case Superscript_Reversed_Glottal_Stop:
      Unicode.type(0x02E4);
      break;
    case Superscript_Tilde:
      Unicode.type(0x0303);
      break;
    case Superscript_N:
      Unicode.type(0x207F);
      break;
    case Superscript_L:
      Unicode.type(0x02E1);
      break;
    case Corner:
      Unicode.type(0x031A);
      break;
    case Raising_Sign:
      Unicode.type(0x031D);
      break;
    case Lowering_Sign:
      Unicode.type(0x031E);
      break;
    case Syllabicty_Mark:
      Unicode.type(0x0329);
      break;
    case Subscript_Arch:
      Unicode.type(0x032F);
      break;
    case Top_Tie_Bar:
      Unicode.type(0x0361);
      break;
    case Bottom_Tie_Bar:
      Unicode.type(0x035C);
      break;
    case Superior_Vertical_Stroke:
      Unicode.type(0x02C8);
      break;
    case Inferior_Vertical_Stroke:
      Unicode.type(0x02CC);
      break;
    case Length_Mark:
      Unicode.type(0x02D0);
      break;
    case HalfLength_Mark:
      Unicode.type(0x02D1);
      break;
    case Breve:
      Unicode.type(0x0306);
      break;
    case Period:
      Unicode.type(0x002E);
      break;
    case Vertical_Line:
      Unicode.type(0x007C);
      break;
    case Double_Vertical_Line:
      Unicode.type(0x2016);
      break;
    case Upward_Diagonal_Arrow:
      Unicode.type(0x2197);
      break;
    case Downward_Diagonal_Arrow:
      Unicode.type(0x2198);
      break;
    case Double_Acute_Accent:
      Unicode.type(0x030B);
      break;
    case Acute_Accent:
      Unicode.type(0x0301);
      break;
    case Macron:
      Unicode.type(0x0304);
      break;
    case Grave_Accent:
      Unicode.type(0x0300);
      break;
    case Double_Grave_Accent:
      Unicode.type(0x030F);
      break;
    case Down_Arrow:
      Unicode.type(0xA71B);
      break;
    case Up_Arrow:
      Unicode.type(0xA71C);
      break;
    case ExtraHigh_Tone_Letter:
      Unicode.type(0x02E5);
      break;
    case High_Tone_Letter:
      Unicode.type(0x02E6);
      break;
    case Mid_Tone_Letter:
      Unicode.type(0x02E7);
      break;
    case Low_Tone_Letter:
      Unicode.type(0x02E8);
      break;
    case ExtraLow_Tone_Letter:
      Unicode.type(0x02E9);
      break;
    case Wedge:
      Unicode.type(0x030C);
      break;
    case Circumflex:
      Unicode.type(0x0302);
      break;
    case Macron_Acute_Accent:
      Unicode.type(0x1DC4);
      break;
    case Grave_Accent_Macron:
      Unicode.type(0x1DC5);
      break;
    case Grave_Accent_Acute_Accent_Macron:
      Unicode.type(0x1DC8);
      break;
    }
  }

  return Key_NoKey;
}
    
IpaKeys_::IpaKeys_(void) {
}

void IpaKeys_::begin(void) {
  Kaleidoscope.useEventHandlerHook(handleIpaEvent);
}

IpaKeys_ IpaKeys;

