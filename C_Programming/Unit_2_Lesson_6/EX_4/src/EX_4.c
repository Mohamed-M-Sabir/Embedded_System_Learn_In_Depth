/*
 ============================================================================
 Name        : EX_4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/* EX4: C Program to Store Information of Students Using Structure */

#include <stdio.h>
#include <stdlib.h>

struct student{

	char name[100];
	int roll;
	float marks;

}s[10];

int main(void) {

	int i;

	for(i=1 ; i<=10 ; i++){
	// Enter information of students:
	printf("please enter the name ");
	fflush(stdout);
	gets(s[i].name);
	printf("please enter roll number ");
	fflush(stdout);
	scanf("%i",&s[i].roll);
	fflush(stdin);
	printf("please enter the marks ");
	fflush(stdout);
	scanf("%f",&s[i].marks);
	fflush(stdin);
	}
	printf("\n\n----------------------------\n\n");

	// Displaying Information
	for(i=1 ; i<=10 ; i++){
	printf(" name%i: %s\n roll%i:%d\n marks%i:%.2f\n",i,s[i].name,i,s[i].roll,i,s[i].marks);
	}
}
