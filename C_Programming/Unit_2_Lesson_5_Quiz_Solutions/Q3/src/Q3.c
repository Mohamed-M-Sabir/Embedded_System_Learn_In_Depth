/*
 ============================================================================
 Name        : Q3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


void rev(int arrA[],int size);

int main(void) {
	int arrA[7]={1,2,3,4,5,6,7};
	int size=7;
	rev(arrA,size);
	return 0;
}



void rev(int arrA[],int size)
{
	int rev_arr[size],i;

	for (i=0 ; i<size ; i++)
	{
		rev_arr[i]=arrA[size-i-1];


	}

	printf("arrA after reversing is : ");
	fflush(stdout);
	for (i=0 ; i<size ; i++)
	{
		printf("%d",rev_arr[i]);
	}


}
