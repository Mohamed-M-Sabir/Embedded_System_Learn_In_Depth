/*
 ============================================================================
 Name        : Q_1_c.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int sum_digits(int number);

int main(void) {

	int number;
	printf("Please enter an integer number: ");
	fflush(stdout);
	scanf("%d",&number);

	printf("the sum of digits is : %d",sum_digits(number));
	return 0;
}


int sum_digits(int number)
{
	int digit,sum=0;
	while(number!=0)
	{
		digit=number%10;
		sum+=digit;
		number=number/10;


	}

	return sum;
}
