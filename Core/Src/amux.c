#include "amux.h"
//returns 1 if function sets the corresponding values, and returns 0 if the parameters were not correct
uint8_t AMUX_dir(uint8_t Amux_ID, uint8_t Amux_InSelect, uint8_t EN)
{
  GPIO_TypeDef* A0_Port;
  GPIO_TypeDef* A1_Port;
  GPIO_TypeDef* A2_Port;
  GPIO_TypeDef* EN_Port;
  uint16_t A0_Pin, A1_Pin, A2_Pin, EN_Pin;
  switch (Amux_ID)
  {
    case 0:
      A0_Port = AMUX0_A0_GPIO_Port;
      A0_Pin = AMUX0_A0_Pin;
      A1_Port = AMUX0_A1_GPIO_Port;
      A1_Pin = AMUX0_A1_Pin;
      A2_Port = AMUX0_A2_GPIO_Port;
      A2_Pin = AMUX0_A2_Pin;
      EN_Port = AMUX0_EN_GPIO_Port;
      EN_Pin = AMUX0_EN_Pin;
      break;
    case 1:
      A0_Port = AMUX1_A0_GPIO_Port;
      A0_Pin = AMUX1_A0_Pin;
      A1_Port = AMUX1_A1_GPIO_Port;
      A1_Pin = AMUX1_A1_Pin;
      A2_Port = AMUX1_A2_GPIO_Port;
      A2_Pin = AMUX1_A2_Pin;
      EN_Port = AMUX1_EN_GPIO_Port;
      EN_Pin = AMUX1_EN_Pin;
      break;
    case 2:
      A0_Port = AMUX2_A0_GPIO_Port;
      A0_Pin = AMUX2_A0_Pin;
      A1_Port = AMUX2_A1_GPIO_Port;
      A1_Pin = AMUX2_A1_Pin;
      A2_Port = AMUX2_A2_GPIO_Port;
      A2_Pin = AMUX2_A2_Pin;
      EN_Port = AMUX2_EN_GPIO_Port;
      EN_Pin = AMUX2_EN_Pin;
      break;
    case 3:
      A0_Port = AMUX3_A0_GPIO_Port;
      A0_Pin = AMUX3_A0_Pin;
      A1_Port = AMUX3_A1_GPIO_Port;
      A1_Pin = AMUX3_A1_Pin;
      A2_Port = AMUX3_A2_GPIO_Port;
      A2_Pin = AMUX3_A2_Pin;
      EN_Port = AMUX3_EN_GPIO_Port;
      EN_Pin = AMUX3_EN_Pin;
      break;
    case 4:
      A0_Port = AMUX4_A0_GPIO_Port;
      A0_Pin = AMUX4_A0_Pin;
      A1_Port = AMUX4_A1_GPIO_Port;
      A1_Pin = AMUX4_A1_Pin;
      A2_Port = AMUX4_A2_GPIO_Port;
      A2_Pin = AMUX4_A2_Pin;
      EN_Port = AMUX4_EN_GPIO_Port;
      EN_Pin = AMUX4_EN_Pin;
      break;
    case 5:
      A0_Port = AMUX5_A0_GPIO_Port;
      A0_Pin = AMUX5_A0_Pin;
      A1_Port = AMUX5_A1_GPIO_Port;
      A1_Pin = AMUX5_A1_Pin;
      A2_Port = AMUX5_A2_GPIO_Port;
      A2_Pin = AMUX5_A2_Pin;
      EN_Port = AMUX5_EN_GPIO_Port;
      EN_Pin = AMUX5_EN_Pin;
      break;
    case 6:
      A0_Port = AMUX6_A0_GPIO_Port;
      A0_Pin = AMUX6_A0_Pin;
      A1_Port = AMUX6_A1_GPIO_Port;
      A1_Pin = AMUX6_A1_Pin;
      A2_Port = AMUX6_A2_GPIO_Port;
      A2_Pin = AMUX6_A2_Pin;
      EN_Port = AMUX6_EN_GPIO_Port;
      EN_Pin = AMUX6_EN_Pin;
      break;
    case 7:
      A0_Port = AMUX7_A0_GPIO_Port;
      A0_Pin = AMUX7_A0_Pin;
      A1_Port = AMUX7_A1_GPIO_Port;
      A1_Pin = AMUX7_A1_Pin;
      A2_Port = AMUX7_A2_GPIO_Port;
      A2_Pin = AMUX7_A2_Pin;
      EN_Port = AMUX7_EN_GPIO_Port;
      EN_Pin = AMUX7_EN_Pin;
      break;
    default:
      return 0;
  }



  switch (EN)
  {
    case 1:
        // Set the address pins based on Amux_InSelect
        HAL_GPIO_WritePin(A0_Port, A0_Pin, (Amux_InSelect & 0x01) ? GPIO_PIN_SET : GPIO_PIN_RESET);
        HAL_GPIO_WritePin(A1_Port, A1_Pin, (Amux_InSelect & 0x02) ? GPIO_PIN_SET : GPIO_PIN_RESET);
        HAL_GPIO_WritePin(A2_Port, A2_Pin, (Amux_InSelect & 0x04) ? GPIO_PIN_SET : GPIO_PIN_RESET);
        // Set the enable pin based on EN
        HAL_GPIO_WritePin(EN_Port, EN_Pin, GPIO_PIN_RESET);
        return 1;
    case 0:
        // Set the address pins based on Amux_InSelect
        HAL_GPIO_WritePin(A0_Port, A0_Pin, (Amux_InSelect & 0x01) ? GPIO_PIN_SET : GPIO_PIN_RESET);
        HAL_GPIO_WritePin(A1_Port, A1_Pin, (Amux_InSelect & 0x02) ? GPIO_PIN_SET : GPIO_PIN_RESET);
        HAL_GPIO_WritePin(A2_Port, A2_Pin, (Amux_InSelect & 0x04) ? GPIO_PIN_SET : GPIO_PIN_RESET);
        // Set the enable pin based on EN
        HAL_GPIO_WritePin(EN_Port, EN_Pin, GPIO_PIN_SET);
        return 1;
    default:
    	return 0;
  }

}
