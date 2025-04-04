/*
 * processCommand.h
 *
 *  Created on: 13 mar. 2025
 *      Author: EEV-Work
 */

#ifndef PROCESSCOMMAND_H
#define PROCESSCOMMAND_H

#include <stdint.h>

#define CMD_GREEN_LED 0x01
#define CMD_RED_LED 0x02

uint8_t processCommand(uint8_t *command, uint16_t length);
uint8_t handleLoadEnable(uint8_t load, uint8_t enable);
uint8_t handleBattSimEnable(uint8_t enable);
uint8_t handleBattPSUPEnable(uint8_t enable);
void perform_software_reset(void);

#endif // PROCESSCOMMAND_H
