/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    gpio.c
  * @brief   This file provides code for the configuration
  *          of all used GPIO pins.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "gpio.h"

/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/*----------------------------------------------------------------------------*/
/* Configure GPIO                                                             */
/*----------------------------------------------------------------------------*/
/* USER CODE BEGIN 1 */

/* USER CODE END 1 */

/** Configure pins as
        * Analog
        * Input
        * Output
        * EVENT_OUT
        * EXTI
     PA4   ------> SPI1_NSS
     PA5   ------> SPI1_SCK
     PA6   ------> SPI1_MISO
     PA7   ------> SPI1_MOSI
     PB12   ------> SPI2_NSS
     PB13   ------> SPI2_SCK
     PB14   ------> SPI2_MISO
     PB15   ------> SPI2_MOSI
     PD8   ------> USART3_TX
     PD9   ------> USART3_RX
     PC6   ------> USART6_TX
     PC7   ------> USART6_RX
     PC10   ------> UART4_TX
     PC11   ------> UART4_RX
     PC12   ------> UART5_TX
     PD2   ------> UART5_RX
     PD5   ------> USART2_TX
     PD6   ------> USART2_RX
     PB6   ------> I2C1_SCL
     PB7   ------> I2C1_SDA
*/
void MX_GPIO_Init(void)
{

  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOE_CLK_ENABLE();
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOF_CLK_ENABLE();
  __HAL_RCC_GPIOH_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();
  __HAL_RCC_GPIOG_CLK_ENABLE();
  __HAL_RCC_GPIOD_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOE, AMUX1_A0_Pin|AMUX2_EN_Pin|AMUX2_A2_Pin|AMUX2_A1_Pin
                          |AMUX2_A0_Pin|DMUX9_A1_Pin|DMUX8_A1_Pin|DMUX9_EN_Pin
                          |DMUX10_A0_Pin|DMUX10_EN_Pin|DMUX10_A1_Pin|DMUX11_A1_Pin
                          |DMUX11_A0_Pin|DMUX11_EN_Pin|AMUX0_A1_Pin|AMUX0_A0_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOC, AMUX3_EN_Pin|AMUX3_A2_Pin|AMUX3_A1_Pin|DMUX4_EN_Pin
                          |DMUX4_A1_Pin|BATTSIM_PSUP_EN_Pin|BON_BATT_EN_Pin|DMUX5_A0_Pin
                          |DMUX6_A1_Pin|DMUX1_A0_Pin|DMUX0_EN_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOF, AMUX1_A1_Pin|AMUX3_A0_Pin|AMUX4_EN_Pin|AMUX4_A2_Pin
                          |AMUX4_A1_Pin|AMUX4_A0_Pin|AMUX1_A2_Pin|AMUX1_EN_Pin
                          |AMUX7_A0_Pin|DMUX3_EN_Pin|DMUX4_A0_Pin|DMUX7_A0_Pin
                          |DMUX6_A0_Pin|DMUX7_A1_Pin|DMUX8_EN_Pin|DMUX7_EN_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, LOAD_EN2_Pin|LOAD_EN1_Pin|LOAD_EN0_Pin|DMUX1_A1_Pin
                          |DMUX0_A1_Pin|DMUX0_A0_Pin|UART2_SELECT_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, DMUX5_A1_Pin|DMUX6_EN_Pin|DMUX5_EN_Pin|DMUX12_A1_Pin
                          |DMUX12_A0_Pin|AMUX7_A1_Pin|AMUX6_EN_Pin|AMUX0_EN_Pin
                          |AMUX0_A2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOG, DMUX9_A0_Pin|DMUX8_A0_Pin|DEVLED_RED_Pin|UART2_EN0_Pin
                          |DEVLED_GREEN_Pin|DMUX3_A1_Pin|DMUX3_A0_Pin|DMUX2_EN_Pin
                          |DMUX2_A1_Pin|AMUX6_A1_Pin|AMUX5_A2_Pin|AMUX6_A0_Pin
                          |AMUX5_A1_Pin|AMUX7_EN_Pin|AMUX5_A0_Pin|AMUX7_A2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOD, UART3_SELECT_Pin|UART3_EN0_Pin|UART3_EN1_Pin|DMUX12_EN_Pin
                          |UART2_EN1_Pin|UART_SELECTOR_6_7_Pin|DMUX2_A0_Pin|DMUX1_EN_Pin
                          |AMUX6_A2_Pin|AMUX5_EN_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : PEPin PEPin PEPin PEPin
                           PEPin PEPin PEPin PEPin
                           PEPin PEPin PEPin PEPin
                           PEPin PEPin PEPin PEPin */
  GPIO_InitStruct.Pin = AMUX1_A0_Pin|AMUX2_EN_Pin|AMUX2_A2_Pin|AMUX2_A1_Pin
                          |AMUX2_A0_Pin|DMUX9_A1_Pin|DMUX8_A1_Pin|DMUX9_EN_Pin
                          |DMUX10_A0_Pin|DMUX10_EN_Pin|DMUX10_A1_Pin|DMUX11_A1_Pin
                          |DMUX11_A0_Pin|DMUX11_EN_Pin|AMUX0_A1_Pin|AMUX0_A0_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOE, &GPIO_InitStruct);

  /*Configure GPIO pins : PCPin PCPin PCPin PCPin
                           PCPin PCPin PCPin PCPin
                           PCPin PCPin PCPin */
  GPIO_InitStruct.Pin = AMUX3_EN_Pin|AMUX3_A2_Pin|AMUX3_A1_Pin|DMUX4_EN_Pin
                          |DMUX4_A1_Pin|BATTSIM_PSUP_EN_Pin|BON_BATT_EN_Pin|DMUX5_A0_Pin
                          |DMUX6_A1_Pin|DMUX1_A0_Pin|DMUX0_EN_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pins : PFPin PFPin PFPin PFPin
                           PFPin PFPin PFPin PFPin
                           PFPin PFPin PFPin PFPin
                           PFPin PFPin PFPin PFPin */
  GPIO_InitStruct.Pin = AMUX1_A1_Pin|AMUX3_A0_Pin|AMUX4_EN_Pin|AMUX4_A2_Pin
                          |AMUX4_A1_Pin|AMUX4_A0_Pin|AMUX1_A2_Pin|AMUX1_EN_Pin
                          |AMUX7_A0_Pin|DMUX3_EN_Pin|DMUX4_A0_Pin|DMUX7_A0_Pin
                          |DMUX6_A0_Pin|DMUX7_A1_Pin|DMUX8_EN_Pin|DMUX7_EN_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOF, &GPIO_InitStruct);

  /*Configure GPIO pins : PAPin PAPin PAPin PAPin
                           PAPin PAPin PAPin */
  GPIO_InitStruct.Pin = LOAD_EN2_Pin|LOAD_EN1_Pin|LOAD_EN0_Pin|DMUX1_A1_Pin
                          |DMUX0_A1_Pin|DMUX0_A0_Pin|UART2_SELECT_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : PAPin PAPin PA6 PA7 */
  GPIO_InitStruct.Pin = SPI1_CS_Pin|SPI1_SCLK_Pin|GPIO_PIN_6|GPIO_PIN_7;
  GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
  GPIO_InitStruct.Alternate = GPIO_AF5_SPI1;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : PBPin PBPin PBPin PBPin
                           PBPin PBPin PBPin PBPin
                           PBPin */
  GPIO_InitStruct.Pin = DMUX5_A1_Pin|DMUX6_EN_Pin|DMUX5_EN_Pin|DMUX12_A1_Pin
                          |DMUX12_A0_Pin|AMUX7_A1_Pin|AMUX6_EN_Pin|AMUX0_EN_Pin
                          |AMUX0_A2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pins : PGPin PGPin PGPin PGPin
                           PGPin PGPin PGPin PGPin
                           PGPin PGPin PGPin PGPin
                           PGPin PGPin PGPin PGPin */
  GPIO_InitStruct.Pin = DMUX9_A0_Pin|DMUX8_A0_Pin|DEVLED_RED_Pin|UART2_EN0_Pin
                          |DEVLED_GREEN_Pin|DMUX3_A1_Pin|DMUX3_A0_Pin|DMUX2_EN_Pin
                          |DMUX2_A1_Pin|AMUX6_A1_Pin|AMUX5_A2_Pin|AMUX6_A0_Pin
                          |AMUX5_A1_Pin|AMUX7_EN_Pin|AMUX5_A0_Pin|AMUX7_A2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOG, &GPIO_InitStruct);

  /*Configure GPIO pins : PBPin PBPin PB14 PB15 */
  GPIO_InitStruct.Pin = SPI2_CS_Pin|SPI2_SCLK_Pin|GPIO_PIN_14|GPIO_PIN_15;
  GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
  GPIO_InitStruct.Alternate = GPIO_AF5_SPI2;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pins : PDPin PDPin */
  GPIO_InitStruct.Pin = STM_UART3_TX_Pin|STM_UART3_RX_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
  GPIO_InitStruct.Alternate = GPIO_AF7_USART3;
  HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);

  /*Configure GPIO pins : PDPin PDPin PDPin PDPin
                           PDPin PDPin PDPin PDPin
                           PDPin PDPin */
  GPIO_InitStruct.Pin = UART3_SELECT_Pin|UART3_EN0_Pin|UART3_EN1_Pin|DMUX12_EN_Pin
                          |UART2_EN1_Pin|UART_SELECTOR_6_7_Pin|DMUX2_A0_Pin|DMUX1_EN_Pin
                          |AMUX6_A2_Pin|AMUX5_EN_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);

  /*Configure GPIO pins : PCPin PCPin */
  GPIO_InitStruct.Pin = STM_UART6_TX_Pin|STM_UART6_RX_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
  GPIO_InitStruct.Alternate = GPIO_AF8_USART6;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pins : PCPin PCPin */
  GPIO_InitStruct.Pin = STM_UART4_TX_Pin|STM_UART4_RX_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
  GPIO_InitStruct.Alternate = GPIO_AF8_UART4;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pin : PtPin */
  GPIO_InitStruct.Pin = STM_UART5_TX_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
  GPIO_InitStruct.Alternate = GPIO_AF8_UART5;
  HAL_GPIO_Init(STM_UART5_TX_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pin : PtPin */
  GPIO_InitStruct.Pin = DEV_SW_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(DEV_SW_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pin : PtPin */
  GPIO_InitStruct.Pin = STM_UART5_RX_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
  GPIO_InitStruct.Alternate = GPIO_AF8_UART5;
  HAL_GPIO_Init(STM_UART5_RX_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pins : PDPin PDPin */
  GPIO_InitStruct.Pin = STM_UART2_TX_Pin|STM_UART2_RX_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
  GPIO_InitStruct.Alternate = GPIO_AF7_USART2;
  HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);

  /*Configure GPIO pins : PB6 PB7 */
  GPIO_InitStruct.Pin = GPIO_PIN_6|GPIO_PIN_7;
  GPIO_InitStruct.Mode = GPIO_MODE_AF_OD;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
  GPIO_InitStruct.Alternate = GPIO_AF4_I2C1;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

}

/* USER CODE BEGIN 2 */

/* USER CODE END 2 */
