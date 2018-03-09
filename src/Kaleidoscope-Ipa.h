#pragma once

#include <Kaleidoscope-Unicode.h>
#include "IpaKeyDefs.h"

class IpaKeys_ : public KaleidoscopePlugin {
 public:
  IpaKeys_(void);

  void begin(void);

}

extern IpaKeys_ IpaKeys;
