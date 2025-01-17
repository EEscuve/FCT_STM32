/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
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

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define AMUX1_A0_Pin GPIO_PIN_2
#define AMUX1_A0_GPIO_Port GPIOE
#define AMUX2_EN_Pin GPIO_PIN_3
#define AMUX2_EN_GPIO_Port GPIOE
#define AMUX2_A2_Pin GPIO_PIN_4
#define AMUX2_A2_GPIO_Port GPIOE
#define AMUX2_A1_Pin GPIO_PIN_5
#define AMUX2_A1_GPIO_Port GPIOE
#define AMUX2_A0_Pin GPIO_PIN_6
#define AMUX2_A0_GPIO_Port GPIOE
#define AMUX3_EN_Pin GPIO_PIN_13
#define AMUX3_EN_GPIO_Port GPIOC
#define AMUX3_A2_Pin GPIO_PIN_14
#define AMUX3_A2_GPIO_Port GPIOC
#define AMUX3_A1_Pin GPIO_PIN_15
#define AMUX3_A1_GPIO_Port GPIOC
#define AMUX1_A1_Pin GPIO_PIN_0
#define AMUX1_A1_GPIO_Port GPIOF
#define AMUX3_A0_Pin GPIO_PIN_1
#define AMUX3_A0_GPIO_Port GPIOF
#define AMUX4_EN_Pin GPIO_PIN_2
#define AMUX4_EN_GPIO_Port GPIOF
#define AMUX4_A2_Pin GPIO_PIN_3
#define AMUX4_A2_GPIO_Port GPIOF
#define AMUX4_A1_Pin GPIO_PIN_4
#define AMUX4_A1_GPIO_Port GPIOF
#define AMUX4_A0_Pin GPIO_PIN_5
#define AMUX4_A0_GPIO_Port GPIOF
#define AMUX1_A2_Pin GPIO_PIN_6
#define AMUX1_A2_GPIO_Port GPIOF
#define AMUX1_EN_Pin GPIO_PIN_7
#define AMUX1_EN_GPIO_Port GPIOF
#define AMUX7_A0_Pin GPIO_PIN_8
#define AMUX7_A0_GPIO_Port GPIOF
#define DMUX3_EN_Pin GPIO_PIN_9
#define DMUX3_EN_GPIO_Port GPIOF
#define DMUX4_A0_Pin GPIO_PIN_10
#define DMUX4_A0_GPIO_Port GPIOF
#define DMUX4_EN_Pin GPIO_PIN_0
#define DMUX4_EN_GPIO_Port GPIOC
#define DMUX4_A1_Pin GPIO_PIN_1
#define DMUX4_A1_GPIO_Port GPIOC
#define BATTSIM_PSUP_EN_Pin GPIO_PIN_2
#define BATTSIM_PSUP_EN_GPIO_Port GPIOC
#define BON_BATT_EN_Pin GPIO_PIN_3
#define BON_BATT_EN_GPIO_Port GPIOC
#define LOAD_EN2_Pin GPIO_PIN_0
#define LOAD_EN2_GPIO_Port GPIOA
#define LOAD_EN1_Pin GPIO_PIN_1
#define LOAD_EN1_GPIO_Port GPIOA
#define LOAD_EN0_Pin GPIO_PIN_2
#define LOAD_EN0_GPIO_Port GPIOA
#define SPI1_CS_Pin GPIO_PIN_4
#define SPI1_CS_GPIO_Port GPIOA
#define SPI1_SCLK_Pin GPIO_PIN_5
#define SPI1_SCLK_GPIO_Port GPIOA
#define DMUX5_A0_Pin GPIO_PIN_4
#define DMUX5_A0_GPIO_Port GPIOC
#define DMUX6_A1_Pin GPIO_PIN_5
#define DMUX6_A1_GPIO_Port GPIOC
#define DMUX5_A1_Pin GPIO_PIN_0
#define DMUX5_A1_GPIO_Port GPIOB
#define DMUX6_EN_Pin GPIO_PIN_1
#define DMUX6_EN_GPIO_Port GPIOB
#define DMUX5_EN_Pin GPIO_PIN_2
#define DMUX5_EN_GPIO_Port GPIOB
#define DMUX7_A0_Pin GPIO_PIN_11
#define DMUX7_A0_GPIO_Port GPIOF
#define DMUX6_A0_Pin GPIO_PIN_12
#define DMUX6_A0_GPIO_Port GPIOF
#define DMUX7_A1_Pin GPIO_PIN_13
#define DMUX7_A1_GPIO_Port GPIOF
#define DMUX8_EN_Pin GPIO_PIN_14
#define DMUX8_EN_GPIO_Port GPIOF
#define DMUX7_EN_Pin GPIO_PIN_15
#define DMUX7_EN_GPIO_Port GPIOF
#define DMUX9_A0_Pin GPIO_PIN_0
#define DMUX9_A0_GPIO_Port GPIOG
#define DMUX8_A0_Pin GPIO_PIN_1
#define DMUX8_A0_GPIO_Port GPIOG
#define DMUX9_A1_Pin GPIO_PIN_7
#define DMUX9_A1_GPIO_Port GPIOE
#define DMUX8_A1_Pin GPIO_PIN_8
#define DMUX8_A1_GPIO_Port GPIOE
#define DMUX9_EN_Pin GPIO_PIN_9
#define DMUX9_EN_GPIO_Port GPIOE
#define DMUX10_A0_Pin GPIO_PIN_10
#define DMUX10_A0_GPIO_Port GPIOE
#define DMUX10_EN_Pin GPIO_PIN_11
#define DMUX10_EN_GPIO_Port GPIOE
#define DMUX10_A1_Pin GPIO_PIN_12
#define DMUX10_A1_GPIO_Port GPIOE
#define DMUX11_A1_Pin GPIO_PIN_13
#define DMUX11_A1_GPIO_Port GPIOE
#define DMUX11_A0_Pin GPIO_PIN_14
#define DMUX11_A0_GPIO_Port GPIOE
#define DMUX11_EN_Pin GPIO_PIN_15
#define DMUX11_EN_GPIO_Port GPIOE
#define DMUX12_A1_Pin GPIO_PIN_10
#define DMUX12_A1_GPIO_Port GPIOB
#define DMUX12_A0_Pin GPIO_PIN_11
#define DMUX12_A0_GPIO_Port GPIOB
#define SPI2_CS_Pin GPIO_PIN_12
#define SPI2_CS_GPIO_Port GPIOB
#define SPI2_SCLK_Pin GPIO_PIN_13
#define SPI2_SCLK_GPIO_Port GPIOB
#define STM_UART3_TX_Pin GPIO_PIN_8
#define STM_UART3_TX_GPIO_Port GPIOD
#define STM_UART3_RX_Pin GPIO_PIN_9
#define STM_UART3_RX_GPIO_Port GPIOD
#define UART3_SELECT_Pin GPIO_PIN_10
#define UART3_SELECT_GPIO_Port GPIOD
#define UART3_EN0_Pin GPIO_PIN_11
#define UART3_EN0_GPIO_Port GPIOD
#define UART3_EN1_Pin GPIO_PIN_12
#define UART3_EN1_GPIO_Port GPIOD
#define DMUX12_EN_Pin GPIO_PIN_13
#define DMUX12_EN_GPIO_Port GPIOD
#define UART2_EN1_Pin GPIO_PIN_14
#define UART2_EN1_GPIO_Port GPIOD
#define UART_SELECTOR_6_7_Pin GPIO_PIN_15
#define UART_SELECTOR_6_7_GPIO_Port GPIOD
#define DEVLED_RED_Pin GPIO_PIN_2
#define DEVLED_RED_GPIO_Port GPIOG
#define UART2_EN0_Pin GPIO_PIN_3
#define UART2_EN0_GPIO_Port GPIOG
#define DEVLED_GREEN_Pin GPIO_PIN_4
#define DEVLED_GREEN_GPIO_Port GPIOG
#define DMUX3_A1_Pin GPIO_PIN_5
#define DMUX3_A1_GPIO_Port GPIOG
#define DMUX3_A0_Pin GPIO_PIN_6
#define DMUX3_A0_GPIO_Port GPIOG
#define DMUX2_EN_Pin GPIO_PIN_7
#define DMUX2_EN_GPIO_Port GPIOG
#define DMUX2_A1_Pin GPIO_PIN_8
#define DMUX2_A1_GPIO_Port GPIOG
#define STM_UART6_TX_Pin GPIO_PIN_6
#define STM_UART6_TX_GPIO_Port GPIOC
#define STM_UART6_RX_Pin GPIO_PIN_7
#define STM_UART6_RX_GPIO_Port GPIOC
#define DMUX1_A0_Pin GPIO_PIN_8
#define DMUX1_A0_GPIO_Port GPIOC
#define DMUX0_EN_Pin GPIO_PIN_9
#define DMUX0_EN_GPIO_Port GPIOC
#define DMUX1_A1_Pin GPIO_PIN_8
#define DMUX1_A1_GPIO_Port GPIOA
#define STM_UART1_TX_Pin GPIO_PIN_9
#define STM_UART1_TX_GPIO_Port GPIOA
#define STM_UART1_RX_Pin GPIO_PIN_10
#define STM_UART1_RX_GPIO_Port GPIOA
#define DMUX0_A1_Pin GPIO_PIN_11
#define DMUX0_A1_GPIO_Port GPIOA
#define DMUX0_A0_Pin GPIO_PIN_12
#define DMUX0_A0_GPIO_Port GPIOA
#define UART2_SELECT_Pin GPIO_PIN_15
#define UART2_SELECT_GPIO_Port GPIOA
#define STM_UART4_TX_Pin GPIO_PIN_10
#define STM_UART4_TX_GPIO_Port GPIOC
#define STM_UART4_RX_Pin GPIO_PIN_11
#define STM_UART4_RX_GPIO_Port GPIOC
#define STM_UART5_TX_Pin GPIO_PIN_12
#define STM_UART5_TX_GPIO_Port GPIOC
#define DEV_SW_Pin GPIO_PIN_0
#define DEV_SW_GPIO_Port GPIOD
#define DMUX2_A0_Pin GPIO_PIN_1
#define DMUX2_A0_GPIO_Port GPIOD
#define STM_UART5_RX_Pin GPIO_PIN_2
#define STM_UART5_RX_GPIO_Port GPIOD
#define DMUX1_EN_Pin GPIO_PIN_3
#define DMUX1_EN_GPIO_Port GPIOD
#define AMUX6_A2_Pin GPIO_PIN_4
#define AMUX6_A2_GPIO_Port GPIOD
#define STM_UART2_TX_Pin GPIO_PIN_5
#define STM_UART2_TX_GPIO_Port GPIOD
#define STM_UART2_RX_Pin GPIO_PIN_6
#define STM_UART2_RX_GPIO_Port GPIOD
#define AMUX5_EN_Pin GPIO_PIN_7
#define AMUX5_EN_GPIO_Port GPIOD
#define AMUX6_A1_Pin GPIO_PIN_9
#define AMUX6_A1_GPIO_Port GPIOG
#define AMUX5_A2_Pin GPIO_PIN_10
#define AMUX5_A2_GPIO_Port GPIOG
#define AMUX6_A0_Pin GPIO_PIN_11
#define AMUX6_A0_GPIO_Port GPIOG
#define AMUX5_A1_Pin GPIO_PIN_12
#define AMUX5_A1_GPIO_Port GPIOG
#define AMUX7_EN_Pin GPIO_PIN_13
#define AMUX7_EN_GPIO_Port GPIOG
#define AMUX5_A0_Pin GPIO_PIN_14
#define AMUX5_A0_GPIO_Port GPIOG
#define AMUX7_A2_Pin GPIO_PIN_15
#define AMUX7_A2_GPIO_Port GPIOG
#define AMUX7_A1_Pin GPIO_PIN_4
#define AMUX7_A1_GPIO_Port GPIOB
#define AMUX6_EN_Pin GPIO_PIN_5
#define AMUX6_EN_GPIO_Port GPIOB
#define AMUX0_EN_Pin GPIO_PIN_8
#define AMUX0_EN_GPIO_Port GPIOB
#define AMUX0_A2_Pin GPIO_PIN_9
#define AMUX0_A2_GPIO_Port GPIOB
#define AMUX0_A1_Pin GPIO_PIN_0
#define AMUX0_A1_GPIO_Port GPIOE
#define AMUX0_A0_Pin GPIO_PIN_1
#define AMUX0_A0_GPIO_Port GPIOE
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
