# Arduino-LTO1-Error
Demonstration of Arduino `lto1.exe` compiler error (`splice_child_die` / `dwarf2out.c`)

### Test Setup:
- **IDE**:        Arduino IDE 1.8.7
- **Board Pkg**:  Arduino AVR Boards 1.6.23
- **Device**:     Arduino UNO

### Output:
```
  lto1.exe: internal compiler error: in splice_child_die, at dwarf2out.c:4905
  Please submit a full bug report,
  with preprocessed source if appropriate.
  See <http://gcc.gnu.org/bugs.html> for instructions.
  lto-wrapper.exe: fatal error: C:\Program Files (x86)\Arduino\hardware\tools\avr/bin/avr-gcc returned 1 exit status
```

### Other test results:
- Arduino IDE 1.8.9 + Arduino AVR Boards 1.6.209 (no error)
- Arduino IDE 1.8.9 + Arduino AVR Boards 1.6.23  (fail)
- Arduino IDE 1.8.7 + Arduino AVR Boards 1.6.209 (no error)
- Arduino IDE 1.8.7 + Arduino AVR Boards 1.6.23  (fail)
- Arduino IDE 1.8.7 + Arduino AVR Boards 1.6.22  (fail)
- Arduino IDE 1.8.7 + Arduino AVR Boards 1.6.21  (no error)
- Arduino IDE 1.8.5                              (no error)

- Arduino IDE 1.8.7 + Arduino AVR Boards 1.6.23 + Disable debugger symbols (no error)
  - Remove "-g" option from platform.txt: compiler.c.flags
  
# SOLUTION
The latest gcc 7.3.0 toolchain under consideration for the next Arduino IDE resolves this issue. To test out the new toolchain, please refer to the [instructions for updating gcc to 7.3.0](https://github.com/arduino/Arduino/issues/7949#issuecomment-442969335).

# WORKAROUND
As the newer IDE environment is not available yet, an easy workaround is to backdate the *Arduino AVR Boards* from within the Arduino IDE Board Manager. Please select version 1.6.21 instead of 1.6.22 or 1.6.23.
