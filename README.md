# Kaleidoscope-Ipa

International Phonetic Alphabet support for Kaleidoscope.

The goal of `Kaleidoscope-Ipa` is to supply a simple and easy way to include IPA characters into a keyboard layout. It offers access to 170 Unicode IPA character, through a IPA alias (e.g. `IPA(Lowercase_P)`). It is built off the `Unicode` and `Macros` packages. You can look at a minimal example for an English focused IPA [layout](https://github.com/waxd/Kaleidoscope-Ipa/blob/master/examples/Kaleidoscope-Ipa.ino).

## Using the Plugin

To use this plugin import the library header into your sketch file add IpaKeys to the list of plugins to initialize. Because the Unicode plugin use the IPA keyword to insert IPA letters into your keyboard layout, and 

```c#
#include <Kaleidoscope.h>
#include "Kaleidoscope-Ipa"

// Somewhere in the keymap:
IPA(Lowercase_B), IPA(Voiceless_Bilabial_Plosive), IPA(Meng)

KALEIDOSCOPE_INIT_PLUGINS(IpaKeys);

void setup() {
  Kaleidoscope.setup();
}
```


## Archatectural Overview

The `Kaleidoscope-Ipa` library works by reserving a block of Macros (by default it reserves the Macros numbered 86 to 255). It then adds an event listener that checks for these synthetic key presses and outputs. If the Macro is in the reserved range then the event handler produces the proper key presses for the unicode and returns an non-key press for the remaining listeners.

## Customization

TODO: Write more here

## Trouble Shooting

TODO: Write more here

## Dependencies

* Unicode
* Macros

## Other Configurations

TODO: Write more here
