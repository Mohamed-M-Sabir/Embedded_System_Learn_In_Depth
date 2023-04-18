/*
 ============================================================================
 Name        : EX_5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*EX5: C Program to find area of a circle, passing arguments to macros. [Area of circle=piг2]
  */

#define pi 3.14
#define area pi*r*r

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float r;
	printf("please enter the raduis");
	fflush(stdout);
	scanf("%f",&r);

	printf("The area is %f",area);

	return 0;
}
