#pragma once 
#include "stdint.h"

#include <avr/io.h>

#include "Modules/utils/ControlElectricity.h"
#include "Modules/SERIAL_FOLDER/USART_DRIVE.h"

#include "Modules/SERIAL_FOLDER/USART_TASK.h"

#include "Modules/SERIAL_FOLDER/USART_TASK_MESSAGES.h" 

#include "Modules/GLOBAL/PINS_DEFINITIONS.h"

#include "Modules/ADC/ADC.h"

void LIGHT_SENSOR_INIT(void);
void LIGHT_SENSOR_TASK(void);  