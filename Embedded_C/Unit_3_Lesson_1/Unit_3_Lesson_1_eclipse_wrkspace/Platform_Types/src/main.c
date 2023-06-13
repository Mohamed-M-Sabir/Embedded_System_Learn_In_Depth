/*
 ============================================================================
 Name        : Platform_Types.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "platform_types.h"

#define max_iterator 20


int main() {


	uint8_t i=0;
	sint16_t num1=-10.5;
	uint16_t num2=30;
	float32_t num3=3000.3334;
	float64_t result;

	for(i=1 ; i<=max_iterator ; i++){

		result=i*(num1+num2+num3);
	}

	printf("result is %lf",result);

	return 0;
}
