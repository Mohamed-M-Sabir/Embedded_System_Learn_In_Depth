/*
 ============================================================================
 Name        : EX_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

//Write a C program to find the product of 4 integers entered by a user. If user enters 0 skip it.


#include<stdio.h>


int main(){
	int i,num,product=1;

	for(i=0;i<4;i++){
		printf("Enter n%d: ",i);
		fflush(stdout);
		scanf("%d",&num);
		fflush(stdin);

		if (num==0)
			continue;
		product=product*num;
	}

	printf("Product=%d", product);
	return 0;
}
