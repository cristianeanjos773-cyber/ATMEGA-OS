#pragma once

#include "GLOBAL_TYPES.h"

#include <avr/io.h>

#include "Modules/BUZZERS/BUZZER_TASK.h"
#include "Modules/LIGHT_SENSORS/LIGHT_SENSOR_TASK.h"

#include "Modules/SERIAL_FOLDER/USART_TASK.h"

#include "Modules/TEMPERATURE_SENSOR/TEMPERATURE_SENSOR_TASK.h"

#define TOTAL_TASKS 8

extern TASK_CONFIG TASK_SYSTEMS[TOTAL_TASKS]; 

void SCHEDULER_INIT(void);
void SCHEDULER_RUN(void);  
