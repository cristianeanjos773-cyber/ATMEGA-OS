#ifndef ControlDDR_H  
#define ControlDDR_H
#include <stdint.h> 
#include "avr/io.h"

static inline void SET_PIN_AS_OUTPUT(volatile uint8_t *DDR_ID,  uint8_t PIN_ID) {
  *DDR_ID |= (1 << PIN_ID); 
}
static inline void SET_PIN_AS_INPUT(volatile uint8_t *DDR_ID, uint8_t PIN_ID) {
  *DDR_ID &= ~(1 << PIN_ID);
}

#endif 