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

int main() {

	int number=29;
	int *pnum=&number;
	printf("address of pointer is %p",pnum);
	fflush(stdout);
	printf("\n content of pointer is %d",*pnum);
	fflush(stdout);

	number = 5;

	printf("\n address of pointer is %p",pnum);
	fflush(stdout);
	printf("\n content of pointer is %d",*pnum);
	fflush(stdout);

	return 0;
}
