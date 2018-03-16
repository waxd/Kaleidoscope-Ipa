#pragma once

#include "IpaKeyDefs.h"

#include <Kaleidoscope.h>

class IpaKeys_ : public KaleidoscopePlugin {
 public:
  IpaKeys_(void);

  void begin(void);

  static byte row, col;
  const static uint32_t unicode_keymap[];

};

extern IpaKeys_ IpaKeys;
