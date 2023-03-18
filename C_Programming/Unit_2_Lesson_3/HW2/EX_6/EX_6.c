/*
 * EX_6.c
 *
 *  Created on: Feb 13, 2023
 *      Author: Mohamed Saber
 */


#include <stdio.h>
int main() {
	int num,sum=0;
	int i;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d", &num);
	fflush(stdin);

	for(i=0;i<=num;i++){

		sum+=i;
	}

	printf("sum =%d", sum);



	return 0;
}
