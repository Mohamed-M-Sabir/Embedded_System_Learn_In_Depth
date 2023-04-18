/*
 ============================================================================
 Name        : EX_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


/*  EX2: C Program to Add Two Distances (in inch-feet) System Using Structures */

#include <stdio.h>
#include <stdlib.h>


struct sdistance{

	float feet;
	float inch;
};
int main(void) {

	struct sdistance Ldata1,Ldata2,Lsum;
	//Enter information for 1st distance
	printf("Enter feet for 1st distance ");
	fflush(stdout);
	scanf("%f",&Ldata1.feet);
	fflush(stdin);
	printf("Enter inch for 1st distance ");
	fflush(stdout);
	scanf("%f",&Ldata1.inch);
	fflush(stdin);

	//Enter information for 2nd distance

	printf("Enter feet for 2nd distance ");
	fflush(stdout);
	scanf("%f",&Ldata2.feet);
	fflush(stdin);
	printf("Enter inch for 2nd distance ");
	fflush(stdout);
	scanf("%f",&Ldata2.inch);
	fflush(stdin);

	Lsum.feet=Ldata1.feet+Ldata2.feet;
	Lsum.inch=Ldata1.inch+Ldata2.inch;

	for (int i=0 ; Lsum.inch>=12 ; i++){

		Lsum.feet++;
		Lsum.inch-=12;
	}
	printf("Sum of distances=%.2f'-%.2f\" ",Lsum.feet,Lsum.inch);

	return 0;
}
