/*
 ============================================================================
 Name        : EX_6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*EX6: write the output of this program  */

#include <stdio.h>

union job {
	//defining a union
	char name[32];
	float salary;
	int worker_no;
}u;
struct job1 {
	char name[32];
	float salary;
}s;
int worker_no;
int main(){
	printf("size of union = %d",sizeof(u));
	printf("\nsize of structure = %d", sizeof(s));
	return 0;
}

