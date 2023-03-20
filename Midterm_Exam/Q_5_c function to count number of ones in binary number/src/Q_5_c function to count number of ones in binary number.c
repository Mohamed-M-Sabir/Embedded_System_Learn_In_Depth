/*
 ============================================================================
 Name        : Q_5_c.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int count_ones(int number);

int main(void) {


	int number;
	printf("Please enter an integer number: ");
	fflush(stdout);
	scanf("%d",&number);

	printf("the number of ones is : %d",count_ones(number));

	return 0;
}



int count_ones(int number)
{

	int counter=0,ones=0;

	while((1<<counter)<=number){

		if((number & (1<<counter)) > 0)
		{
			ones++;
		}
		counter++;
	}


	return ones;
}
