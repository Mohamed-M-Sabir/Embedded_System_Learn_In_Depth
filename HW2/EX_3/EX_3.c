/*
 * EX_3.c
 *
 *  Created on: Feb 12, 2023
 *      Author: Mohamed Saber
 */


#include<stdio.h>

int main(){

	float num1,num2,num3;
	float max;

	printf("Please Enter three numbers: ");
	fflush(stdout);
	scanf("%f %f %f" ,&num1,&num2,&num3);
	fflush(stdin);

	if(num1>num2){
		if(num1>num3){

			max=num1;
		}
		else
			max=num3;
	}
	else{
		if(num2>num3)
			max=num2;

		else
			max=num3;


	}
	printf("the maximum number is %f",max);
	return 0;
}
