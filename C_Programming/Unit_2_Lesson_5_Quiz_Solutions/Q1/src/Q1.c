/*
 ============================================================================
 Name        : Q1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void check_str(char username[],char user_str[],int size);

int main(void) {

	unsigned int x = -400;
	printf("%d",x);
	char username[]="Mohamed M.Saber";
	char user_str[100];
	int size=sizeof(username)/sizeof(char);
	printf("Please Enter your username ");
	fflush(stdout);
	gets(user_str);
	check_str(username,user_str,size);
	return 0;
}



void check_str(char username[],char user_str[],int size)
{
	int i,flag=0;
	for(i=0 ; i<size ; i++)
	{
		if(username[i]!=user_str[i])
		{
			printf("It doesn't match !!!!");
			flag++;
			break;

		}

		else if(flag==0 && i==size-1)
		{
			printf("It matches");

		}
	}
}
