/*
 ============================================================================
 Name        : EX_5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	int i,arr[100],n,number;

	printf("Enter the number of elements: ");
	fflush(stdout);
	scanf("%d",&n);
	fflush(stdin);

	printf("Enter the elements of the array \n");
	fflush(stdout);

	for(i=0;i<n;i++){

		printf("enter the value of arr[%d]",i);
		fflush(stdout);
		scanf("%d",&arr[i]);
		fflush(stdin);
	}

	printf("Please enter the you want to search for:  ");
	fflush(stdout);
	scanf("%d",&number);
	fflush(stdin);

	for(i=0;i<n;i++){

		if (arr[i]==number){
			printf("the number is found in the array and its location is %d",i);
			fflush(stdout);
		}
		else if(arr[i]!=number && arr[i]==arr[n]){
			printf("the number not found in the array");
			fflush(stdout);
		}

	}
	return 0;
}
