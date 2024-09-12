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
#include "stm32wlxx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */
#define USE_BSP_DRIVER
/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);
void MX_GPIO_Init(void);
void MX_DMA_Init(void);
void MX_I2C2_Init(void);
void MX_SUBGHZ_Init(void);
void MX_USART1_UART_Init(void);
void MX_USART2_UART_Init(void);
void MX_ADC_Init(void);
void MX_RTC_Init(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define RTC_PREDIV_A ((1 << (15-RTC_N_PREDIV_S))-1)
#define RTC_N_PREDIV_S 10
#define RTC_PREDIV_S ((1 << RTC_N_PREDIV_S)-1)
#define Slot_Select_1_Pin GPIO_PIN_3
#define Slot_Select_1_GPIO_Port GPIOB
#define Slot_Select_2_Pin GPIO_PIN_4
#define Slot_Select_2_GPIO_Port GPIOB
#define AUX3_Pin GPIO_PIN_5
#define AUX3_GPIO_Port GPIOB
#define SPI_CS_A0_Pin GPIO_PIN_0
#define SPI_CS_A0_GPIO_Port GPIOA
#define SPI_CS_A1_Pin GPIO_PIN_1
#define SPI_CS_A1_GPIO_Port GPIOA
#define AUX1_Pin GPIO_PIN_8
#define AUX1_GPIO_Port GPIOA
#define AUX2_Pin GPIO_PIN_9
#define AUX2_GPIO_Port GPIOA
#define Slot_Select_3_Pin GPIO_PIN_2
#define Slot_Select_3_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
