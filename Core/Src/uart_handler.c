#include "uart_handler.h"
#include "main.h"
#include "usart.h"
#include <string.h>
#include <stdbool.h>
#define Max_Buffer_Size 256
uint8_t rxBuffer[Max_Buffer_Size];
uint16_t rxIndex = 0;
uint16_t dataLen = 0;
bool sofReceived = false;
uint8_t START_OF_FRAME = 0x5F;

void UART_Receive_Handler(void)
{
    uint8_t rxByte,ack_received;
    uint8_t ack_message[] = {0x5F, 0x00, 0x00, 0x09, 0x26, 0xA2, 0xF6, 0xE3};


    if (HAL_UART_Receive(&huart1, &rxByte, 1, HAL_MAX_DELAY) == HAL_OK)
    {
        rxBuffer[rxIndex++] = rxByte;

        if (rxIndex == 1 && rxBuffer[0] == START_OF_FRAME)
        {
            sofReceived = true;
        } else if(rxIndex == 1 && rxBuffer[0] != START_OF_FRAME) {
        	sofReceived = true;
        	rxIndex = 0;
        }
        else if (sofReceived && rxIndex == 3)
        {
            dataLen = (rxBuffer[1] << 8) | rxBuffer[2];
            if(dataLen>Max_Buffer_Size) {
            	sofReceived = false;
            }
        }
        else if (sofReceived && rxIndex >= (4 + dataLen + 4)) // +4 for CRC32
        {
            sofReceived = false;

            // Extract the received CRC32 value
            uint32_t receivedCRC = (rxBuffer[4 + dataLen] << 24) | (rxBuffer[4 + dataLen + 1] << 16) |
                                   (rxBuffer[4 + dataLen + 2] << 8) | rxBuffer[4 + dataLen + 3];

            // Calculate the CRC32 for the received data
            uint32_t calculatedCRC = calculateCRC(rxBuffer, 4 + dataLen);

            if (calculatedCRC == receivedCRC)
            {
            	ack_received=processCommand(rxBuffer, rxIndex);
                if (ack_received == 1) {
                    HAL_UART_Transmit(&huart1, ack_message, sizeof(ack_message), HAL_MAX_DELAY);
                }
                rxIndex = 0;
                memset(rxBuffer, 0, sizeof(rxBuffer));
            }
            else
            {
                rxIndex = 0;
            	memset(rxBuffer, 0, sizeof(rxBuffer));
            }


        }

        else if (rxIndex >= sizeof(rxBuffer))
        {
            sofReceived = false;
            memset(rxBuffer, 0, rxIndex);
            rxIndex = 0;
        }
    }
}


// CRC32-MPEG-2
// Useful page to calculate CRC32 https://crccalc.com/?crc=5F%2000%2002%2002%2000%2001%200000&method=crc-32/mp&datatype=hex&outtype=hex
// In case the buffer length is not a multiple of 4. The progrm does zero padding to perform the CRC32
uint32_t calculateCRC(uint8_t *buffer, uint16_t length)
{
    CRC_HandleTypeDef hcrc;
    hcrc.Instance = CRC;



    // Calculate the number of 32-bit words needed
    uint16_t paddedLength = (length + 3) & ~3; // Round up to the nearest multiple of 4

    // Create a temporary buffer to hold the data
    uint32_t tempBuffer[64]; // Adjust size as needed
    memset(tempBuffer, 0, sizeof(tempBuffer));

    // Copy the data into the temporary buffer
    for (uint16_t i = 0; i < length; i += 4)
    {
        uint32_t word = 0;
        for (uint16_t j = 0; j < 4 && (i + j) < length; ++j)
        {
            word |= buffer[i + j] << (8 * (3 - j));
        }
        tempBuffer[i / 4] = word;
    }


    // Calculate the CRC32
    uint32_t crc = HAL_CRC_Calculate(&hcrc, tempBuffer, paddedLength / 4);

    return crc;
}


