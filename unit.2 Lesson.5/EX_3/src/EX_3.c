/*
 ============================================================================
 Name        : EX_3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void reverse_sentence(char str[]);


int main(void) {

	char str[100];
	printf("Please enter a sentence to reverse ");
	fflush(stdout);
	fgets(str, sizeof(str), stdin);
	reverse_sentence(str);
	return 0;
}



void reverse_sentence(char str[])
{
	int i,count=0;
	char rev_str[100];
	for (i=0 ; str[i]!='\0' ; i++)
	{
		count=i;

	}

	for( i=0 ; i<count ; i++)
	{
		rev_str[i]=str[count-i-1];


	}

	printf("the reversed sentence is: ");
	for( i=0 ; i<count ; i++)
		{
		printf("%c",rev_str[i]);

		}

}
