/*
 ============================================================================
 Name        : Q_7_c.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int sum_numbers(int n);

int main(void) {

	printf("the sum of numbers is : %d",sum_numbers(100));
	fflush(stdout);
	return 0;
}



int sum_numbers(int n)
{

	if(n!=0)
	{
		return n+sum_numbers(n-1);

	}
	else
		return 0;

}
