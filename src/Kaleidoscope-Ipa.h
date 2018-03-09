#pragma once

#include <Kaleidoscope-Unicode.h>
#include "IpaKeyDefs.h"

class IpaKeys_ : public KaleidoscopePlugin {
 public:
  IpaChars_(void);

  void begin(void);

}

extern IpaKeys_ IpaKeys;
