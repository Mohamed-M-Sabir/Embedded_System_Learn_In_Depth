/*
 ============================================================================
 Name        : EX2(strings).c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	char str[100];
	int i,count=0;

	printf("Please enter string: ");
	fflush(stdout);
	scanf("%s",str);

	for (i=0;str[i]!='\0';i++){

		count+=1;

	}

	printf("the length of the string is %d",count);
	fflush(stdout);
	return 0;
}
