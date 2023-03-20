/*
 ============================================================================
 Name        : Q_9_c.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

void reverse_words(char str[],int size);

int main(void) {

	char str[100];
	printf("Please enter a sentence to reverse: ");
	fflush(stdout);
	gets(str);

	printf("the reversed words is : ");
	reverse_words(str,strlen(str));
	return 0;
}

void reverse_words(char str[],int size)
{
	int i;
	for(i=size-1 ; i>=0 ; i--){

		if(str[i]==' ' || i==0)
		{
			//strcat(rev_str,str+i);

			if(i==0)
			{
				printf(" %s",&str[i]);
				break;

			}
			printf("%s",&str[i]);
			str[i]='\0';
			}

	}

}
