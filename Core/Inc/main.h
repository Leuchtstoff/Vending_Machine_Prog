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
#include "stm32f1xx_hal.h"

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
#define Code_Stern_Pin GPIO_PIN_4
#define Code_Stern_GPIO_Port GPIOA
#define Code_Raute_Pin GPIO_PIN_5
#define Code_Raute_GPIO_Port GPIOA
#define Code_Program_Pin GPIO_PIN_6
#define Code_Program_GPIO_Port GPIOA
#define LED_1_Pin GPIO_PIN_10
#define LED_1_GPIO_Port GPIOB
#define LED_2_Pin GPIO_PIN_11
#define LED_2_GPIO_Port GPIOB
#define CLOSE_TASTER_Pin GPIO_PIN_12
#define CLOSE_TASTER_GPIO_Port GPIOB
#define OPEN_TASTER_Pin GPIO_PIN_13
#define OPEN_TASTER_GPIO_Port GPIOB
#define Code_9_Pin GPIO_PIN_15
#define Code_9_GPIO_Port GPIOB
#define Code_8_Pin GPIO_PIN_8
#define Code_8_GPIO_Port GPIOA
#define Code_7_Pin GPIO_PIN_9
#define Code_7_GPIO_Port GPIOA
#define Code_6_Pin GPIO_PIN_10
#define Code_6_GPIO_Port GPIOA
#define USB_HELP_Pin GPIO_PIN_15
#define USB_HELP_GPIO_Port GPIOA
#define Code_5_Pin GPIO_PIN_4
#define Code_5_GPIO_Port GPIOB
#define Code_4_Pin GPIO_PIN_5
#define Code_4_GPIO_Port GPIOB
#define Code_3_Pin GPIO_PIN_6
#define Code_3_GPIO_Port GPIOB
#define Code_2_Pin GPIO_PIN_7
#define Code_2_GPIO_Port GPIOB
#define Code_1_Pin GPIO_PIN_8
#define Code_1_GPIO_Port GPIOB
#define Code_0_Pin GPIO_PIN_9
#define Code_0_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
