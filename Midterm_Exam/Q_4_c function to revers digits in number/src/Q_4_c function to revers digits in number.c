/*
 ============================================================================
 Name        : Q_4_c.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int reverse_digits(int number);

int main(void) {

	int number;
	printf("Please enter an integer number: ");
	fflush(stdout);
	scanf("%d",&number);

	printf("the sum of digits is : %d",reverse_digits(number));
	return 0;
}


int reverse_digits(int number)
{
	int digit,reversed_number=0;



	while(number!=0)
	{

		digit=number%10;
		reversed_number=reversed_number*10+digit;
		number=number/10;


	}

	return reversed_number;
}
