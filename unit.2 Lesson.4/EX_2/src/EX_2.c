/*
 ============================================================================
 Name        : EX_4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

//This program takes n number of element from user(where, n is specified by user), stores data in an array and calculates the average of those numbers.
#include <stdio.h>

int main(void) {

	int n,arr[100],i,sum=0;
	float ave;
	printf("Please enter the number of elements in the array: ");
	fflush(stdout);
	scanf("%d",&n);
	fflush(stdin);

	for(i=0;i<n;i++){

		printf("Enter the value of arr[%d]: ",i);
		fflush(stdout);
		scanf("%d",&arr[i]);
		fflush(stdin);

		sum+=arr[i];
	}
	ave=(float)sum/i;
	printf("the average of the array is %f ",ave);
	return 0;
}
