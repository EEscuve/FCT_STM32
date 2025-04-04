/*
 * dmux.c
 *
 *  Created on: 6 mar. 2025
 *      Author: EEV-Work
 */
#include "dmux.h"
//returns 1 if function sets the corresponding values, and returns 0 if the parameters were not correct
uint8_t DMUX_dir(uint8_t Dmux_ID, uint8_t Dmux_InSelect, uint8_t EN)
{
  GPIO_TypeDef* A0_Port;
  GPIO_TypeDef* A1_Port;
  GPIO_TypeDef* EN_Port;
  uint16_t A0_Pin, A1_Pin, EN_Pin;

  switch (Dmux_ID)
  {
    case 0:
      A0_Port = DMUX0_A0_GPIO_Port;
      A0_Pin = DMUX0_A0_Pin;
      A1_Port = DMUX0_A1_GPIO_Port;
      A1_Pin = DMUX0_A1_Pin;
      EN_Port = DMUX0_EN_GPIO_Port;
      EN_Pin = DMUX0_EN_Pin;
      break;
    case 1:
      A0_Port = DMUX1_A0_GPIO_Port;
      A0_Pin = DMUX1_A0_Pin;
      A1_Port = DMUX1_A1_GPIO_Port;
      A1_Pin = DMUX1_A1_Pin;
      EN_Port = DMUX1_EN_GPIO_Port;
      EN_Pin = DMUX1_EN_Pin;
      break;
    case 2:
      A0_Port = DMUX2_A0_GPIO_Port;
      A0_Pin = DMUX2_A0_Pin;
      A1_Port = DMUX2_A1_GPIO_Port;
      A1_Pin = DMUX2_A1_Pin;
      EN_Port = DMUX2_EN_GPIO_Port;
      EN_Pin = DMUX2_EN_Pin;
      break;
    case 3:
      A0_Port = DMUX3_A0_GPIO_Port;
      A0_Pin = DMUX3_A0_Pin;
      A1_Port = DMUX3_A1_GPIO_Port;
      A1_Pin = DMUX3_A1_Pin;
      EN_Port = DMUX3_EN_GPIO_Port;
      EN_Pin = DMUX3_EN_Pin;
      break;
    case 4:
      A0_Port = DMUX4_A0_GPIO_Port;
      A0_Pin = DMUX4_A0_Pin;
      A1_Port = DMUX4_A1_GPIO_Port;
      A1_Pin = DMUX4_A1_Pin;
      EN_Port = DMUX4_EN_GPIO_Port;
      EN_Pin = DMUX4_EN_Pin;
      break;
    case 5:
      A0_Port = DMUX5_A0_GPIO_Port;
      A0_Pin = DMUX5_A0_Pin;
      A1_Port = DMUX5_A1_GPIO_Port;
      A1_Pin = DMUX5_A1_Pin;
      EN_Port = DMUX5_EN_GPIO_Port;
      EN_Pin = DMUX5_EN_Pin;
      break;
    case 6:
      A0_Port = DMUX6_A0_GPIO_Port;
      A0_Pin = DMUX6_A0_Pin;
      A1_Port = DMUX6_A1_GPIO_Port;
      A1_Pin = DMUX6_A1_Pin;
      EN_Port = DMUX6_EN_GPIO_Port;
      EN_Pin = DMUX6_EN_Pin;
      break;
    case 7:
      A0_Port = DMUX7_A0_GPIO_Port;
      A0_Pin = DMUX7_A0_Pin;
      A1_Port = DMUX7_A1_GPIO_Port;
      A1_Pin = DMUX7_A1_Pin;
      EN_Port = DMUX7_EN_GPIO_Port;
      EN_Pin = DMUX7_EN_Pin;
      break;
    case 8:
      A0_Port = DMUX8_A0_GPIO_Port;
      A0_Pin = DMUX8_A0_Pin;
      A1_Port = DMUX8_A1_GPIO_Port;
      A1_Pin = DMUX8_A1_Pin;
      EN_Port = DMUX8_EN_GPIO_Port;
      EN_Pin = DMUX8_EN_Pin;
      break;
    case 9:
      A0_Port = DMUX9_A0_GPIO_Port;
      A0_Pin = DMUX9_A0_Pin;
      A1_Port = DMUX9_A1_GPIO_Port;
      A1_Pin = DMUX9_A1_Pin;
      EN_Port = DMUX9_EN_GPIO_Port;
      EN_Pin = DMUX9_EN_Pin;
      break;
    case 10:
      A0_Port = DMUX10_A0_GPIO_Port;
      A0_Pin = DMUX10_A0_Pin;
      A1_Port = DMUX10_A1_GPIO_Port;
      A1_Pin = DMUX10_A1_Pin;
      EN_Port = DMUX10_EN_GPIO_Port;
      EN_Pin = DMUX10_EN_Pin;
      break;
    case 11:
      A0_Port = DMUX11_A0_GPIO_Port;
      A0_Pin = DMUX11_A0_Pin;
      A1_Port = DMUX11_A1_GPIO_Port;
      A1_Pin = DMUX11_A1_Pin;
      EN_Port = DMUX11_EN_GPIO_Port;
      EN_Pin = DMUX11_EN_Pin;
      break;
    case 12:
      A0_Port = DMUX12_A0_GPIO_Port;
      A0_Pin = DMUX12_A0_Pin;
      A1_Port = DMUX12_A1_GPIO_Port;
      A1_Pin = DMUX12_A1_Pin;
      EN_Port = DMUX12_EN_GPIO_Port;
      EN_Pin = DMUX12_EN_Pin;
      break;
    default:
      return 0;
  }

  switch (EN)
  {
    case 1:
    	  // Set the address pins based on Dmux_InSelect
    	  HAL_GPIO_WritePin(A0_Port, A0_Pin, (Dmux_InSelect & 0x01) ? GPIO_PIN_SET : GPIO_PIN_RESET);
    	  HAL_GPIO_WritePin(A1_Port, A1_Pin, (Dmux_InSelect & 0x02) ? GPIO_PIN_SET : GPIO_PIN_RESET);
    	  // Set the enable pin based on EN
    	  HAL_GPIO_WritePin(EN_Port, EN_Pin, GPIO_PIN_SET);
    	  return 1;
    case 0:
    	  // Set the address pins based on Dmux_InSelect
    	  HAL_GPIO_WritePin(A0_Port, A0_Pin, (Dmux_InSelect & 0x01) ? GPIO_PIN_SET : GPIO_PIN_RESET);
    	  HAL_GPIO_WritePin(A1_Port, A1_Pin, (Dmux_InSelect & 0x02) ? GPIO_PIN_SET : GPIO_PIN_RESET);
    	  // Set the enable pin based on EN
    	  HAL_GPIO_WritePin(EN_Port, EN_Pin, GPIO_PIN_RESET);
    	  return 1;
    default:
    	return 0;
  }
}


