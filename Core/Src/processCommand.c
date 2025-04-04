#include "processCommand.h"
#include "main.h"
#include "uart_handler.h"
#include <string.h>
#include "amux.h"
#include "dmux.h"

#define START_OF_FRAME 0x5F
#define MAX_PACKET_SIZE 2500 // Define the maximum packet size
#define CMD_AMUX 0x00
#define CMD_DMUX 0x01
#define CMD_LOAD 0x02
#define CMD_RESET 0x03
#define CMD_SET_BRIDGE_CONFIG 0x04
//#define CMD_BRIDGE_ENABLE 0x05
#define CMD_BATT_PSUP_EN 0x06
#define CMD_BATT_SIMM_EN 0x07
#define CMD_BRIDGE_TRANSMIT 0x08
#define CMD_ACK 0x09

extern UART_HandleTypeDef huart1;

uint8_t processCommand(uint8_t *buffer, uint16_t length)
{
    if (length < 7) // Minimum length check
        return 0;

    //uint16_t dataLength = (buffer[1] << 8) | buffer[2];
    uint8_t cmd = buffer[3];
    uint8_t *data = &buffer[4];
    uint8_t value=0;
    switch (cmd)
    {
    case CMD_AMUX:
    	value=AMUX_dir(data[0], data[1],data[2]);
    	return value;
        break;
    case CMD_DMUX:
    	value=DMUX_dir(data[0], data[1],data[2]);
    	return value;
        break;
    case CMD_LOAD:
    	value=handleLoadEnable(data[0], data[1]);
    	return value;
        break;
    case CMD_RESET:
    	perform_software_reset();
        break;
    case CMD_SET_BRIDGE_CONFIG:
        // Implement set bridge config functionality
        break;
    case CMD_BATT_PSUP_EN:
    	value=handleBattPSUPEnable(data[0]);
    	return value;
        break;
    case CMD_BATT_SIMM_EN:
    	value=handleBattSimEnable(data[0]);
    	return value;
        break;
    case CMD_BRIDGE_TRANSMIT:
        // Implement bridge transmit functionality
        break;
    case CMD_ACK:
        // Implement ACK functionality
        break;
    default:
        return 0;
        break;
    }
    return value;
}





uint8_t handleLoadEnable(uint8_t load, uint8_t enable)
{
	  GPIO_TypeDef* Load_Port;
	  uint16_t Load_Pin;

	  switch (load)
	  {
	    case 0:
	    	Load_Port=LOAD_EN0_GPIO_Port;
	    	Load_Pin=LOAD_EN0_Pin;
	        break;
	    case 1:
	    	Load_Port=LOAD_EN1_GPIO_Port;
	    	Load_Pin=LOAD_EN1_Pin;
	    	break;
	    case 2:
	    	Load_Port=LOAD_EN2_GPIO_Port;
	    	Load_Pin=LOAD_EN2_Pin;
	    	break;
	    default:
	    	return 0;
	    	break;
	  }
	switch (enable)
	  {
	    case 1:
	    	HAL_GPIO_WritePin(Load_Port, Load_Pin, GPIO_PIN_SET);
	      	return 1;
	        break;
	    case 0:
	    	HAL_GPIO_WritePin(Load_Port, Load_Pin, GPIO_PIN_RESET);
	    	return 1;
	    	break;
	    default:
	    	return 0;
	    	break;
	  }
}

uint8_t handleBattSimEnable(uint8_t enable)
{
	  switch (enable)
	  {
	    case 1:
	    	HAL_GPIO_WritePin(BON_BATT_EN_GPIO_Port, BON_BATT_EN_Pin, GPIO_PIN_SET);
	      	return 1;
	      	break;
	    case 0:
	    	HAL_GPIO_WritePin(BON_BATT_EN_GPIO_Port, BON_BATT_EN_Pin, GPIO_PIN_RESET);
	    	return 1;
	    	break;
	    default:
	    	return 0;
	    	break;
	  }
}

uint8_t handleBattPSUPEnable(uint8_t enable)
{
	  switch (enable)
	  {
	    case 1:
	    	HAL_GPIO_WritePin(BATTSIM_PSUP_EN_GPIO_Port, BATTSIM_PSUP_EN_Pin, GPIO_PIN_SET);
	    	return 1;
	    	break;
	    case 0:
	    	HAL_GPIO_WritePin(BATTSIM_PSUP_EN_GPIO_Port, BATTSIM_PSUP_EN_Pin, GPIO_PIN_RESET);
	    	return 1;
	    	break;
	    default:
	    	return 0;
	    	break;
	  }
}

void perform_software_reset(void) {
	uint8_t ack_message[] = {0x5F, 0x00, 0x00, 0x09, 0x26, 0xA2, 0xF6, 0xE3};
	HAL_UART_Transmit(&huart1, ack_message, sizeof(ack_message), HAL_MAX_DELAY);
    NVIC_SystemReset();  // Trigger a system reset
}
