/*
 ============================================================================
 Name        : EX1(strings).c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

//This program asks user to enter a string and a character and this program checks how many times that character is repeated in the string entered by user.
#include <stdio.h>
#include <string.h>
int main(void) {

	char st[100],c;
	int i,freq;
	printf("Please enter string\n");
	fflush(stdout);
	gets(st);
	printf("%s",st);
	fflush(stdout);
	printf("Enter a character to find frequency:");
	fflush(stdout);

	scanf("%c",&c);
	fflush(stdin);

	for(i=0;i<strlen(st);i++){

		if (c==st[i])
			freq+=1;
	}

	printf("Frequency of %c:%d",c,freq);
	fflush(stdout);

	return 0;
}
