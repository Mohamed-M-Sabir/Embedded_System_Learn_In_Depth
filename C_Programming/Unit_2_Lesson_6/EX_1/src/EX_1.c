/*
 ============================================================================
 Name        : EX_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*  EX1: C Program to Store Information(name, roll and marks) of a Student Using Structure  */

#include <stdio.h>
#include <stdlib.h>

struct student{

	char name[100];
	int roll;
	float marks;

}s;

int main(void) {


	// Enter information of students:
	printf("please enter the name ");
	fflush(stdout);
	gets(s.name);
	printf("please enter roll number ");
	fflush(stdout);
	scanf("%i",&s.roll);
	fflush(stdin);
	printf("please enter the marks ");
	fflush(stdout);
	scanf("%f",&s.marks);
	fflush(stdin);

	printf("\n----------------------------\n");

	// Displaying Information

	printf(" name: %s\n roll:%d\n marks:%.2f",s.name,s.roll,s.marks);
}
