/*
 * EX8.c
 *
 *  Created on: Feb 13, 2023
 *      Author: Mohamed Saber
 */


/*
 * EX_8.c
 *
 *  Created on: Feb 13, 2023
 *      Author: Mohamed Saber
 */


#include<stdio.h>

int main(){

	float num1,num2,sum;
	char op;

	printf("please enter two operands: ");
	fflush(stdout);
	scanf("%f %f",&num1,&num2);
	fflush(stdin);
	printf("please enter the operator: ");
	fflush(stdout);
	scanf("%c",&op);
	fflush(stdin);

	switch(op){

	case('+'):
			sum=num1+num2;
	        printf("%f %c %f = %f",num1,op,num2,sum);
	        break;

	case('-'):
			sum=num1-num2;
			printf("%f %c %f = %f",num1,op,num2,sum);
			break;


	case('*'):
				sum=num1*num2;
				printf("%f %c %f = %f",num1,op,num2,sum);
				break;


	case('/'):

				if(num2==0)
					printf("Error you can't divide by zero");
				else{
					sum=num1/num2;
					printf("%f %c %f = %f",num1,op,num2,sum);
					break;
		}
	}
	return 0;
}
