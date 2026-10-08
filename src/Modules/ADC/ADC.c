#include "ADC.h"


void ADC_INIT(void) {
    
    ADMUX |= (1 << REFS0);
    
    ADCSRA |= (1 << ADEN);  
    ADCSRA |= (1 << ADPS2) | (1 << ADPS1) | (1 << ADPS0);
    DIDR0 |= (1 << ADC0D);

}


uint16_t ADC_READ(uint8_t ANALOG_CANAL) {
    
    if (ANALOG_CANAL > 7) {
        ANALOG_CANAL = 7;  
    } 

    ADMUX = (ADMUX & 0xF0) | ANALOG_CANAL;
    ADCSRA |= (1 << ADSC); 

    while (ADCSRA & (1 << ADSC)); 

    return ADC; 

} 