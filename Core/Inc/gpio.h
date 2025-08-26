/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    gpio.h
  * @brief   This file contains all the function prototypes for
  *          the gpio.c file
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
#ifndef __GPIO_H__
#define __GPIO_H__

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* USER CODE BEGIN Includes */


//#define LED_1_ON  LL_GPIO_SetOutputPin(led_GPIO_Port, led_Pin)
//#define LED_1_OFF LL_GPIO_ResetOutputPin(led_GPIO_Port, led_Pin)

#define HEATER_PIN_ON  LL_GPIO_SetOutputPin(heater_GPIO_Port, heater_Pin);
#define HEATER_PIN_OFF LL_GPIO_ResetOutputPin(heater_GPIO_Port, heater_Pin);



//#define MICRO_SWITCH_STATE LL_GPIO_IsInputPinSet(u_switch_GPIO_Port,u_switch_Pin); //OPEN=1 CLOSE=0

/* USER CODE END Includes */

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

void MX_GPIO_Init(void);

/* USER CODE BEGIN Prototypes */

void MX_GPIO_Capacitive_Measure(void);

/* USER CODE END Prototypes */

#ifdef __cplusplus
}
#endif
#endif /*__ GPIO_H__ */

