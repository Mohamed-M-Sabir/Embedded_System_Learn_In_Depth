/*
 ============================================================================
 Name        : EX_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int fact(int num);

int main(void) {

	int factorial,num;
	printf("Enter a number: ");
	fflush(stdout);
    scanf("%d",&num);
	fflush(stdin);
	factorial=fact(num);
	printf("the factorial is %d ",factorial);
	fflush(stdout);
	return 0;
}



int fact(int num)
{


	if (num!=0)
	{
		return num*fact(num-1) ;
	}

	else
	{
		return 1;
	}



}
