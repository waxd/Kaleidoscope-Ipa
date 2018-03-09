#include "Kaleidoscope-Ipa.h"

#include <Kaleidoscope-Unicode.h>

byte IpaKeys_::row, IpaKeys_::col;

static Key handleIpaEvent(Key mappedKey, byte row, byte col, uint8_t keyState) {
  if (mappedKey.flags != (SYNTHETIC | IS_MACRO))
    return mappedKey;

  if (mappedKey.keyCode < 99)
    return mappedKey;
  
  IpaKeys_::row = row;
  IpaKeys_::col = col;

  switch (mappedKey.keyCode) {

  case Esh:
    Unicode.type(0x0283);
    break;
  }
}
    
IpaKeys_::IpaKeys_(void) {
}

void IpaKeys_::begin(void) {
  Kaleidoscope.useEventHandlerHook(handleIpaEvent);
}

IpaKeys_ IpaKeys;
