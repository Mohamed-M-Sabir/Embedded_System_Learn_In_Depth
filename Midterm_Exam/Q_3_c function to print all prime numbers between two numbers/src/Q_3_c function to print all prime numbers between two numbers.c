/*
 ============================================================================
 Name        : Q_3_c.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void prime_numbers(int num1,int num2);

int main(void) {

	int num1,num2;
	printf("Please enter two numbers: ");
	fflush(stdout);
	scanf("%d %d",&num1,&num2);
	fflush(stdin);

	printf("\nthe prime numbers are: ");
	fflush(stdout);
    prime_numbers(num1,num2);

	return 0;
}



void prime_numbers(int num1,int num2)
{

	int i,j,flag;

	for (i=num1 ; i<=num2 ; i++)
	{
		flag=-1;

		for(j=1 ; j<i ; j++)
		{
			if(i%j==0)
			{
				flag++;

			}

		}


		if(flag==0)
		{
			printf(" %d ",i);
		}
	}




}
