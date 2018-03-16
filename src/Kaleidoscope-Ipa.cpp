#include "Kaleidoscope-Ipa.h"

#include <Kaleidoscope-Unicode.h>

byte IpaKeys_::row, IpaKeys_::col;

const uint32_t IpaKeys_::unicode_keymap[] =
      {0x0070, 0x0062, 0x0074, 0x0064, 0x0288};

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
