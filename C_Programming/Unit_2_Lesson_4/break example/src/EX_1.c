/*
 ============================================================================
 Name        : EX_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>


int main(){
	float num, sum;
	int i,n;
	printf("Maximum no. of inputs \n");
	fflush(stdout);
	scanf("%d",&n);
	fflush(stdin);

	for(i=0;i<n;i++){
		printf("Enter n%d: ",i);
		fflush(stdout);
		scanf("%f",&num);
		fflush(stdin);

		if (num<0)
			break;
		sum=sum+num;
	}

	printf("Average=%.2f", sum/i);
	return 0;
}
