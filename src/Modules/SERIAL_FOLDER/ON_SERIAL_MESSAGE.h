#pragma once 
#include <avr/io.h>
#include <Modules/utils/ControlElectricity.h>
#include <Modules/GLOBAL/PINS_DEFINITIONS.h>
#include "Modules/LED/LEDCOMMAND.h"
#include "Modules/SERIAL_FOLDER/SERIAL_COMMANDS_RECEIVED.h"
#include "Modules/MiniGames/LedGame/LedGame.h"

void ON_SERIAL_MESSAGE(char MESSAGE); 