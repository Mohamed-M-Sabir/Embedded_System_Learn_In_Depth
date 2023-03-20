/*
 ============================================================================
 Name        : Q.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

double square_root(double number);

int main(void) {

	double number;
	printf("Please enter a number: ");
	fflush(stdout);
	scanf("%lf",&number);

	printf("the square root is : %lf",square_root(number));
	return 0;
}

double square_root(double number)
{
	double new_num=0,remainder=0;
	for(int i=1 ; i<=number ; i++)
	{
		if(i*i==number)
		{
			return i;
		}

	}

	while(1){
		new_num=number-1;
		remainder++;
		for(int j=1 ; j<=new_num ; j++)
		{
			if(j*j==new_num){

				return (remainder/j/2)+j;
			}

		}
	}
}
