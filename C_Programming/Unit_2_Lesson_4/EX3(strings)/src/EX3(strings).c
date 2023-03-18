/*
 ============================================================================
 Name        : EX3(string
s).c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	char str[100],reversed_str[100];
	int i,count=0;

	printf("Please enter string: ");
	fflush(stdout);
	scanf("%s",str);

	for (i=0;str[i]!='\0';i++){

		count+=1;

	}


	for (i=count-1;i>=0;i--){

		reversed_str[count-i-1]=str[i];
	}
	reversed_str[count]='\0';
	printf("the length of the string is %d\n",count);
	fflush(stdout);
	printf("the string  is %s\n",str);
	fflush(stdout);
	printf("the string after reverse is %s",reversed_str);
	fflush(stdout);
	return 0;
}
