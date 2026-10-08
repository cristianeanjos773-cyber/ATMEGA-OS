#include "LIGHT_SENSOR_TASK.h"


void LIGHT_SENSOR_TASK(void) {
    //char ADC_STRING_BUFFER[10]; 
    uint16_t ADC_BYTE = ADC_READ(LIGHT_SENSOR_PIN);  
    // 0000 0000 0000 0000
    uint8_t MOST_MEANINGFUL_BYTE = (ADC_BYTE >> 8) & 0xFF; 
    uint8_t LEAST_MEANINGFUL_BYTE = ADC_BYTE & 0xFF;        
    
    //ITOA(ADC_BYTE, ADC_STRING_BUFFER);
    //USART_SEND_STRING(ADC_STRING_BUFFER);  // These things are commented so when these bug, i can just do an ITOA thing amnd find the buug 

    /*
    *When lain iwakura ATmega328P bot reads the character 'L' coming, it will expect the next sequence of incoming bytes in the Serial port to be 
    *The 10 bits light message  
    */

    USART_SEND(LIGHT_MESSAGE); 
    USART_SEND(MOST_MEANINGFUL_BYTE); 
    USART_SEND(LEAST_MEANINGFUL_BYTE); 

}