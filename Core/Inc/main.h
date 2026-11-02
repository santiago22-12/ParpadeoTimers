/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Cabecera de main.c - ParpadeoTimers
  ******************************************************************************
  */
/* USER CODE END Header */

#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

#include "stm32f4xx_hal.h"

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* USER CODE BEGIN EM */

/* USER CODE END EM */

void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LUZ_PRINCIPAL_Pin GPIO_PIN_12
#define LUZ_PRINCIPAL_GPIO_Port GPIOB
#define LUZ_RAPIDA_Pin GPIO_PIN_14
#define LUZ_RAPIDA_GPIO_Port GPIOB
#define LUZ_LENTA_Pin GPIO_PIN_15
#define LUZ_LENTA_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
