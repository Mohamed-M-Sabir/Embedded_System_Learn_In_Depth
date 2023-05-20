/*
 ============================================================================
 Name        : Q2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {


	int alph=65;
	int *ptr=&alph;
	for(int i=0 ; i<26 ; i++){

		printf("%c ",(*ptr)++);
	}
	return 0;
}
