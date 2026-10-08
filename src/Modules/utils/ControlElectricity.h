#ifndef  ControlElectricity_H
#define ControlElectricity_H
#include "avr/io.h"

#include <stdint.h>

static inline uint8_t CHECK_ELECTRICITY(volatile uint8_t *PIN_STATUS_REGISTER, uint8_t PIN_ID) {
  
  if (*PIN_STATUS_REGISTER & (1 << PIN_ID)) {
    return 1; 
  }

  else {
    return 0; 
  }

}

static inline void REMOVE_ELECTRICITY(volatile uint8_t *PORT_ID, uint8_t PIN_ID) {

  if (!(CHECK_ELECTRICITY(PORT_ID, PIN_ID))) {
    return; 
  }

  *PORT_ID &= ~(1 << PIN_ID); 

}

static inline void PUT_ELECTRICITY(volatile uint8_t *PORT_ID, uint8_t PIN_ID) {

  if (CHECK_ELECTRICITY(PORT_ID, PIN_ID)) {
    return; 
  }

  *PORT_ID |= (1 << PIN_ID); 

}

static inline void INVERT_ELECTRICITY(volatile uint8_t *PORT_ID, uint8_t PIN_ID) {
  *PORT_ID ^= (1 << PIN_ID); 
} 

#endif 