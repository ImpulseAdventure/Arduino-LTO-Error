// This sketch & accompanying library were written to demonstrate the avr-gcc LTO compiler error
// Author: Calvin Hass (https://github.com/ImpulseAdventure/Arduino-LTO-Error)
//
// Test Setup:
// - IDE:        Arduino IDE 1.8.7
// - Board Pkg:  Arduino AVR Boards 1.6.23
// - Device:     Arduino UNO
//
// Output:
//   lto1.exe: internal compiler error: in splice_child_die, at dwarf2out.c:4905
//   Please submit a full bug report,
//   with preprocessed source if appropriate.
//   See <http://gcc.gnu.org/bugs.html> for instructions.
//   lto-wrapper.exe: fatal error: C:\Program Files (x86)\Arduino\hardware\tools\avr/bin/avr-gcc returned 1 exit status
//
// Other test results:
// - Arduino IDE 1.8.7 + Arduino AVR Boards 1.6.23  (fail)
// - Arduino IDE 1.8.7 + Arduino AVR Boards 1.6.22  (fail)
// - Arduino IDE 1.8.7 + Arduino AVR Boards 1.6.21  (no error)
// - Arduino IDE 1.8.5                              (no error)
//
// - Arduino IDE 1.8.7 + Arduino AVR Boards 1.6.23 + Disable debugger symbols (no error)
//   - Remove "-g" option from platform.txt: compiler.c.flags
//

#include "MyLib.h"

tsBig                  m_Big;

void setup()
{
  myFunc(&m_Big);
}

void loop() { }
