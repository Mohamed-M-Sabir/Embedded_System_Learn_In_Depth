/*
 ============================================================================
 Name        : Q8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int last(int arr[],int num,int arr_size);

int main(void) {

	int arr[100],size,number,last_occur;
	printf("Please Enter a number");
	fflush(stdout);
	scanf("%d",&number);
	fflush(stdin);

	printf("Please Enter the size of the array");
	fflush(stdout);
	scanf("%d",&size);
	fflush(stdin);

	printf("Please Enter the values of the array");
	fflush(stdout);
	for(int i=0 ; i<size ; i++)
		{
			scanf("%d",&arr[i]);

		}

	last_occur=last(arr,number,size);
	printf("the last occurence of the number %d in the array is index : %d",number,last_occur);
	return 0;
}


int last(int arr[],int num,int arr_size)
{
	int i,flag;
	for(i=0 ; i<arr_size ; i++)
	{
		if (arr[i]==num)
		{
			flag=i;
		}


	}
	return flag;
}
