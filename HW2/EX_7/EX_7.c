/*
 * EX_7.c
 *
 *  Created on: Feb 13, 2023
 *      Author: Mohamed Saber
 */


#include <stdio.h>
int main() {
	int num,fact=1;
	int i;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d", &num);
	fflush(stdin);

	if(num<0)
		printf("Error !!! factorial of negative number doesn't exist");
	else{
		for(i=1;i<=num;i++){

			fact*=i;
		}

		printf("fact =%d", fact);
	}


	return 0;
}
