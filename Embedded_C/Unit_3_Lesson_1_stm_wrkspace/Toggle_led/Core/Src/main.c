/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/

#include "Platform_Types.h"
#include "Bit_Math.h"
/*register addresses*/

#define RCC_BASE		0x40021000
#define GPIOA_BASE		0x40010800
#define RCC_APB2NR		*((vuint32_t *)(RCC_BASE + 0x18))     /*APB2NR is a register inside RCC, RCC_APB2NR is the value stored in the address of APB2NR */
#define GPIOA_CRH		*((vuint32_t *)(GPIOA_BASE + 0x4)) 	 /*CRH is a register inside GPIOA, GPIOA_CRH is the value stored in the address of CRH*/
#define GPIOA_ODR		*((vuint32_t *)(GPIOA_BASE + 0x0c))	/*ODR is a register inside GPIOA, GPIOA_ODR is the value stored in the address of ODR*/

int main()
{

	SET_BIT(RCC_APB2NR,2);
	GPIOA_CRH &=0XFF0FFFFF;
	GPIOA_CRH |=0X00200000;

	while(1){

		SET_BIT(GPIOA_ODR,13);
		for(int i=0 ; i<=10000 ; i++);
		CLR_BIT(GPIOA_ODR,13);
		for(int i=0 ; i<=10000 ; i++);



	}
	return 0;
}
