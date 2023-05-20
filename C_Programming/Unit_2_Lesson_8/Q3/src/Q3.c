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

int main(void) {

	char str[50];
	char revstr[50];
	char *ptr=str;
	int size;
	printf("Please Enter a string\n");
	fflush(stdout);
	scanf("%s",str);
	fflush(stdin);

	for(int i=0 ; str[i]!='\0' ; i++){

		size=i;
	}

	for (int i=size ; i>=0 ; i--){

		revstr[size-i]=*(ptr+i);
	}
	printf("the string after reverse is : %s",revstr);

	return 0;
}
