/*
 ============================================================================
 Name        : Q4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	int arr[100];
	int revarr[100];
	int size;
	int *ptr=arr;
	printf("Input the number of elements to store in the array (max 15) : ");
	fflush(stdout);
	scanf("%d",&size);
	fflush(stdin);

	printf("\nInput 5 number of elements in the array : ");
	for(int i=0 ; i<size ; i++){
		printf("\n element - %d : ",i);
		fflush(stdout);
		scanf("%d",ptr+i);
		fflush(stdin);

	}

	for(int x=0 ; x<size ; x++){

		revarr[x]=*(ptr+size-1-x);
	}

	printf("\n The elements of array in reverse order are : ");
	fflush(stdout);

	for(int x=0 ; x<size ; x++){

		printf("\n element - %d : %d",x,revarr[x]);
		fflush(stdout);

	}
	return 0;
}
