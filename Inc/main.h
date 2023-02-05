/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
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
#define VOICE1_Pin GPIO_PIN_1
#define VOICE1_GPIO_Port GPIOC
#define VOICE2_Pin GPIO_PIN_2
#define VOICE2_GPIO_Port GPIOC
#define VOICE3_Pin GPIO_PIN_3
#define VOICE3_GPIO_Port GPIOC
#define WATER_PUMP1_Pin GPIO_PIN_11
#define WATER_PUMP1_GPIO_Port GPIOF
#define WATER_PUMP2_Pin GPIO_PIN_12
#define WATER_PUMP2_GPIO_Port GPIOF
#define MOTO1_Pin GPIO_PIN_13
#define MOTO1_GPIO_Port GPIOF
#define MOTO2_Pin GPIO_PIN_14
#define MOTO2_GPIO_Port GPIOF
#define mist_spray_Pin GPIO_PIN_8
#define mist_spray_GPIO_Port GPIOD
#define flame_sensor_Pin GPIO_PIN_10
#define flame_sensor_GPIO_Port GPIOD
#define deleterious_gas_transducer_Pin GPIO_PIN_11
#define deleterious_gas_transducer_GPIO_Port GPIOD
#define LCD_SCK_Pin GPIO_PIN_0
#define LCD_SCK_GPIO_Port GPIOD
#define LCD_SDA_Pin GPIO_PIN_1
#define LCD_SDA_GPIO_Port GPIOD
#define LCD_RST_Pin GPIO_PIN_2
#define LCD_RST_GPIO_Port GPIOD
#define LCD_DC_Pin GPIO_PIN_3
#define LCD_DC_GPIO_Port GPIOD
#define LCD_CS_Pin GPIO_PIN_4
#define LCD_CS_GPIO_Port GPIOD
#define LCD_CS2_Pin GPIO_PIN_5
#define LCD_CS2_GPIO_Port GPIOD
#define LCD_BL_Pin GPIO_PIN_6
#define LCD_BL_GPIO_Port GPIOD

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
