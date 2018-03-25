// Author: David Wax <david.allen.wax@gmail.com>
// See "LICENSE" for license details.

#pragma once

#include <Kaleidoscope-Macros.h>

// The number of keys defined in this file.
#define IPA_KEY_COUNT 170

// The IPA offset can be used to assign the block
//   of Unicode keys to a seperate set of macros.
#ifndef IPA_KEY_OFFSET
#define IPA_KEY_OFFSET 256 - IPA_KEY_COUNT
#endif

// Used to apply a key in a keyboard layout.
// e.g. IPA(Eng)
#define IPA(n)   (Key){ n, KEY_FLAGS|SYNTHETIC|IS_MACRO}


#define Lowercase_P IPA_KEY_OFFSET + 0  // p
#define Lowercase_B IPA_KEY_OFFSET + 1  // b
#define Lowercase_T IPA_KEY_OFFSET + 2  // t
#define Lowercase_D IPA_KEY_OFFSET + 3  // d
#define RightTail_T IPA_KEY_OFFSET + 4  // ʈ
#define RightTail_D IPA_KEY_OFFSET + 5  // ɖ
#define Lowercase_C IPA_KEY_OFFSET + 6  // c
#define Barred_Dotless_J IPA_KEY_OFFSET + 7  // ɟ
#define Lowercase_K IPA_KEY_OFFSET + 8  // k
#define Opentail_G IPA_KEY_OFFSET + 9  // ɡ
#define Lowercase_Q IPA_KEY_OFFSET + 10  // q
#define Small_Capital_G IPA_KEY_OFFSET + 11  // ɢ
#define Glottal_Stop IPA_KEY_OFFSET + 12  // ʔ
#define Lowercase_M IPA_KEY_OFFSET + 13  // m
#define Meng IPA_KEY_OFFSET + 14  // ɱ
#define Lowercase_N IPA_KEY_OFFSET + 15  // n
#define RightTail_N IPA_KEY_OFFSET + 16  // ɳ
#define LeftTail_N IPA_KEY_OFFSET + 17  // ɲ
#define Eng IPA_KEY_OFFSET + 18  // ŋ
#define Small_Capital_N IPA_KEY_OFFSET + 19  // ɴ
#define Small_Capital_B IPA_KEY_OFFSET + 20  // ʙ
#define Lowercase_R IPA_KEY_OFFSET + 21  // r
#define Small_Capital_R IPA_KEY_OFFSET + 22  // ʀ
#define FishHook_R IPA_KEY_OFFSET + 23  // ɾ
#define RightTail_R IPA_KEY_OFFSET + 24  // ɽ
#define Phi IPA_KEY_OFFSET + 25  // ɸ
#define Beta IPA_KEY_OFFSET + 26  // β
#define Lowercase_F IPA_KEY_OFFSET + 27  // f
#define Lowercase_V IPA_KEY_OFFSET + 28  // v
#define Theta IPA_KEY_OFFSET + 29  // θ
#define Eth IPA_KEY_OFFSET + 30  // ð
#define Lowercase_S IPA_KEY_OFFSET + 31  // s
#define Lowercase_Z IPA_KEY_OFFSET + 32  // z
#define Esh IPA_KEY_OFFSET + 33  // ʃ
#define Ezh IPA_KEY_OFFSET + 34  // ʒ
#define RightTail_S IPA_KEY_OFFSET + 35  // ʂ
#define RightTail_Z IPA_KEY_OFFSET + 36  // ʐ
#define Cedilla IPA_KEY_OFFSET + 37  // ç
#define CurlyTail_J IPA_KEY_OFFSET + 38  // ʝ
#define Lowercase_X IPA_KEY_OFFSET + 39  // x
#define Gamma IPA_KEY_OFFSET + 40  // ɣ
#define Chi IPA_KEY_OFFSET + 41  // χ
#define Inverted_Small_Capital_R IPA_KEY_OFFSET + 42  // ʁ
#define Barred_H IPA_KEY_OFFSET + 43  // ħ
#define Reversed_Glottal_Stop IPA_KEY_OFFSET + 44  // ʕ
#define Lowercase_H IPA_KEY_OFFSET + 45  // h
#define Hooktop_H IPA_KEY_OFFSET + 46  // ɦ
#define Belted_L IPA_KEY_OFFSET + 47  // ɬ
#define Lezh IPA_KEY_OFFSET + 48  // ɮ
#define Cursive_V IPA_KEY_OFFSET + 49  // ʋ
#define Turned_R IPA_KEY_OFFSET + 50  // ɹ
#define RightTail_Turned_R IPA_KEY_OFFSET + 51  // ɻ
#define Lowercase_J IPA_KEY_OFFSET + 52  // j
#define RightLeg_Turned_M IPA_KEY_OFFSET + 53  // ɰ
#define Lowercase_L IPA_KEY_OFFSET + 54  // l
#define RightTail_L IPA_KEY_OFFSET + 55  // ɭ
#define Turned_Y IPA_KEY_OFFSET + 56  // ʎ
#define Small_Capital_L IPA_KEY_OFFSET + 57  // ʟ
#define Hooktop_B IPA_KEY_OFFSET + 58  // ɓ
#define Hooktop_D IPA_KEY_OFFSET + 59  // ɗ
#define Hooktop_Barred_Dotless_J IPA_KEY_OFFSET + 60  // ʄ
#define Hooktop_G IPA_KEY_OFFSET + 61  // ɠ
#define Hooktop_Small_Capital_G IPA_KEY_OFFSET + 62  // ʛ
#define Turned_W IPA_KEY_OFFSET + 63  // ʍ
#define Lowercase_W IPA_KEY_OFFSET + 64  // w
#define Turned_H IPA_KEY_OFFSET + 65  // ɥ
#define Small_Capital_H IPA_KEY_OFFSET + 66  // ʜ
#define Barred_Glottal_Stop IPA_KEY_OFFSET + 67  // ʡ
#define Barred_Reversed_Glottal_Stop IPA_KEY_OFFSET + 68  // ʢ
#define Hooktop_Heng IPA_KEY_OFFSET + 69  // ɧ
#define Bulls_Eye IPA_KEY_OFFSET + 70  // ʘ
#define Pipe IPA_KEY_OFFSET + 71  // ǀ
#define Excalmation_Point IPA_KEY_OFFSET + 72  // ǃ
#define DoubleBarred_Pipe IPA_KEY_OFFSET + 73  // ǂ
#define Double_Pipe IPA_KEY_OFFSET + 74  // ǁ
#define Turned_LongLeg_R IPA_KEY_OFFSET + 75  // ɺ
#define CurlyTail_C IPA_KEY_OFFSET + 76  // ɕ
#define CurlyTail_Z IPA_KEY_OFFSET + 77  // ʑ
#define RightHook_V IPA_KEY_OFFSET + 78  // ⱱ
#define Tilde_L IPA_KEY_OFFSET + 79  // ɫ
#define Lowercase_I IPA_KEY_OFFSET + 80  // i
#define Lowercase_E IPA_KEY_OFFSET + 81  // e
#define Epsilon IPA_KEY_OFFSET + 82  // ɛ
#define Lowercase_A IPA_KEY_OFFSET + 83  // a
#define Script_A IPA_KEY_OFFSET + 84  // ɑ
#define Open_O IPA_KEY_OFFSET + 85  // ɔ
#define Lowercase_O IPA_KEY_OFFSET + 86  // o
#define Lowercase_U IPA_KEY_OFFSET + 87  // u
#define Lowercase_Y IPA_KEY_OFFSET + 88  // y
#define Slashed_O IPA_KEY_OFFSET + 89  // ø
#define Lowercase_Ethel IPA_KEY_OFFSET + 90  // œ
#define Small_Capital_Ethel IPA_KEY_OFFSET + 91  // ɶ
#define Turned_Script_A IPA_KEY_OFFSET + 92  // ɒ
#define Turned_V IPA_KEY_OFFSET + 93  // ʌ
#define Rams_Horns IPA_KEY_OFFSET + 94  // ɤ
#define Turned_M IPA_KEY_OFFSET + 95  // ɯ
#define Barred_I IPA_KEY_OFFSET + 96  // ɨ
#define Barred_U IPA_KEY_OFFSET + 97  // ʉ
#define Small_Capital_I IPA_KEY_OFFSET + 98  // ɪ
#define Small_Capital_Y IPA_KEY_OFFSET + 99  // ʏ
#define Upsilon IPA_KEY_OFFSET + 100  // ʊ
#define Schwa IPA_KEY_OFFSET + 101  // ə
#define Barred_O IPA_KEY_OFFSET + 102  // ɵ
#define Turned_A IPA_KEY_OFFSET + 103  // ɐ
#define Ash IPA_KEY_OFFSET + 104  // æ
#define Reversed_Epsilon IPA_KEY_OFFSET + 105  // ɜ
#define RightHook_Schwa IPA_KEY_OFFSET + 106  // ɚ
#define Closed_Reversed_Epsilon IPA_KEY_OFFSET + 107  // ɞ
#define Reversed_E IPA_KEY_OFFSET + 108  // ɘ
#define Apostrophe IPA_KEY_OFFSET + 109  // ʼ
#define UnderRing IPA_KEY_OFFSET + 110  // ̥
#define OverRing IPA_KEY_OFFSET + 111  // ̊
#define Subscript_Wedge IPA_KEY_OFFSET + 112  // ̬
#define Superscript_H IPA_KEY_OFFSET + 113  // ʰ
#define Subscript_Umlaut IPA_KEY_OFFSET + 114  // ̤
#define Subscript_Tilde IPA_KEY_OFFSET + 115  // ̰
#define Subscript_Seagull IPA_KEY_OFFSET + 116  // ̼
#define Subscript_Bridge IPA_KEY_OFFSET + 117  // ̪
#define Inverted_Subscript_Bridge IPA_KEY_OFFSET + 118  // ̺
#define Subscript_Square IPA_KEY_OFFSET + 119  // ̻
#define Subscript_Right_HalfRing IPA_KEY_OFFSET + 120  // ̹
#define Subscript_Left_HalfRing IPA_KEY_OFFSET + 121  // ̜
#define Subscript_Plus IPA_KEY_OFFSET + 122  // ̟
#define UnderBar IPA_KEY_OFFSET + 123  // ̠
#define Umlaut IPA_KEY_OFFSET + 124  // ̈
#define OverCross IPA_KEY_OFFSET + 125  // ̽
#define Advancing_Sign IPA_KEY_OFFSET + 126  // ̘
#define Retracting_Sign IPA_KEY_OFFSET + 127  // ̙
#define RightHook IPA_KEY_OFFSET + 128  // ˞
#define Superscript_W IPA_KEY_OFFSET + 129  // ʷ
#define Superscript_J IPA_KEY_OFFSET + 130  // ʲ
#define Superscript_Gamma IPA_KEY_OFFSET + 131  // ˠ
#define Superscript_Reversed_Glottal_Stop IPA_KEY_OFFSET + 132  // ˤ
#define Superscript_Tilde IPA_KEY_OFFSET + 133  // ̃
#define Superscript_N IPA_KEY_OFFSET + 134  // ⁿ
#define Superscript_L IPA_KEY_OFFSET + 135  // ˡ
#define Corner IPA_KEY_OFFSET + 136  // ̚
#define Raising_Sign IPA_KEY_OFFSET + 137  // ̝
#define Lowering_Sign IPA_KEY_OFFSET + 138  // ̞
#define Syllabicty_Mark IPA_KEY_OFFSET + 139  // ̩
#define Subscript_Arch IPA_KEY_OFFSET + 140  // ̯
#define Top_Tie_Bar IPA_KEY_OFFSET + 141  // ͡
#define Bottom_Tie_Bar IPA_KEY_OFFSET + 142  // ͜
#define Superior_Vertical_Stroke IPA_KEY_OFFSET + 143  // ˈ
#define Inferior_Vertical_Stroke IPA_KEY_OFFSET + 144  // ˌ
#define Length_Mark IPA_KEY_OFFSET + 145  // ː
#define HalfLength_Mark IPA_KEY_OFFSET + 146  // ˑ
#define Breve IPA_KEY_OFFSET + 147  // ̆
#define Period IPA_KEY_OFFSET + 148  // .
#define Vertical_Line IPA_KEY_OFFSET + 149  // |
#define Double_Vertical_Line IPA_KEY_OFFSET + 150  // ‖
#define Upward_Diagonal_Arrow IPA_KEY_OFFSET + 151  // ↗
#define Downward_Diagonal_Arrow IPA_KEY_OFFSET + 152  // ↘
#define Double_Acute_Accent IPA_KEY_OFFSET + 153  // ̋
#define Acute_Accent IPA_KEY_OFFSET + 154  // ́
#define Macron IPA_KEY_OFFSET + 155  // ̄
#define Grave_Accent IPA_KEY_OFFSET + 156  // ̀
#define Double_Grave_Accent IPA_KEY_OFFSET + 157  // ̏
#define Down_Arrow IPA_KEY_OFFSET + 158  // ꜛ
#define Up_Arrow IPA_KEY_OFFSET + 159  // ꜜ
#define ExtraHigh_Tone_Letter IPA_KEY_OFFSET + 160  // ˥
#define High_Tone_Letter IPA_KEY_OFFSET + 161  // ˦
#define Mid_Tone_Letter IPA_KEY_OFFSET + 162  // ˧
#define Low_Tone_Letter IPA_KEY_OFFSET + 163  // ˨
#define ExtraLow_Tone_Letter IPA_KEY_OFFSET + 164  // ˩
#define Wedge IPA_KEY_OFFSET + 165  // ̌
#define Circumflex IPA_KEY_OFFSET + 166  // ̂
#define Macron_Acute_Accent IPA_KEY_OFFSET + 167  // ᷄
#define Grave_Accent_Macron IPA_KEY_OFFSET + 168  // ᷅
#define Grave_Accent_Acute_Accent_Macron IPA_KEY_OFFSET + 169  // ᷈
