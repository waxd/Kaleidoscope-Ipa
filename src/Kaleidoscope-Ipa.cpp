#include "Kaleidoscope-Ipa.h"

#include <Kaleidoscope-Unicode.h>

static Key handleMacroEvent(Key mappedKey, byte row, byte col, uint8_t keyState) {
  if (mappedKey.flags != (SYNTHETIC | IS_MACRO))
    return mappedKey;

  if (mappedKey.keyCode < 99)
    return mappedKey;
  
  IpaChars_::row = row;
  IpaChars_::col = col;

  switch (mappedKey.keyCode) {

  case Esh:
    unicode(0x0283, keyState);
    break;

IpaKeys_::IpaKeys_(void) {
}

void IpaKeys_::begin(void) {
  Kaleidoscope.useEventHandlerHook(handleIpaEvent);
}

IpaKeys_ IpaKeys;
