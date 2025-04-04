#ifndef UART_HANDLER_H
#define UART_HANDLER_H

#include "stm32f4xx_hal.h" // Include the HAL header for STM32F446ZET


void UART_Receive_Handler(void);
uint8_t processCommand(uint8_t *buffer, uint16_t length);
uint32_t calculateCRC(uint8_t *buffer, uint16_t length); // Declare calculateCRC here


#endif // UART_HANDLER_H
