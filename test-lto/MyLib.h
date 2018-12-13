// This sketch & accompanying library were written to demonstrate the avr-gcc LTO compiler error
// Author: Calvin Hass (https://github.com/ImpulseAdventure/Arduino-LTO-Error)

#ifndef _MYLIB_H_
#define _MYLIB_H_

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus


// Forward declaration
typedef struct tsSmall  tsSmall;

// Define structures
typedef struct tsSmall {
  void*     pObj;
} tsSmall;

typedef struct {
  tsSmall*  pSmall;
} tsBig;

// Define functions
void myFunc(tsBig* pBig);


#ifdef __cplusplus
}
#endif // __cplusplus

#endif // _MYLIB_H_
