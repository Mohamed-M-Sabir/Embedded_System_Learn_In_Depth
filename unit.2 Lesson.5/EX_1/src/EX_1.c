/*
 ============================================================================
 Name        : EX_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void prime(int a, int b);
int main(void) {

	int num1 , num2;
	printf("Please Enter two numbers ");
	fflush(stdout);
	scanf("%d %d",&num1,&num2);
	fflush(stdin);


	printf("prime numbers between %d and %d are:  ",num1,num2);
	prime(num1,num2);

	return 0;
}


void prime(int a, int b)
{
	int counter1,counter2,flag=0;
	for (counter1=a ; counter1<b ; counter1++)     //looping from num1 to num2
	{
		for(counter2=1 ; counter2<counter1 ; counter2++)  //looping from 2 to the current number in loop1
		{
			if (counter1 % counter2 == 0)
			{
				flag++;
			}

		}

		if(flag==1){

			printf("%d ",counter1);
		}

		else
		{
			flag=0;
		}

	}


}
