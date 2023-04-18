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


/* EX3: C Program to Add Two Complex Numbers by Passing Structure to a Function */

struct scomplex add(struct scomplex Lnum1,struct scomplex Lnum2);

struct scomplex{

	float real;
	float imaginary;
};
int main(void) {

	struct scomplex Lnum1,Lnum2,Lsum;
	//Enter information for 1st distance
	printf("Enter real part for 1st number ");
	fflush(stdout);
	scanf("%f",&Lnum1.real);
	fflush(stdin);
	printf("Enter imaginary part for 1st number ");
	fflush(stdout);
	scanf("%f",&Lnum1.imaginary);
	fflush(stdin);

	//Enter information for 2nd distance

	printf("Enter real part for 2nd number ");
	fflush(stdout);
	scanf("%f",&Lnum2.real);
	fflush(stdin);
	printf("Enter imaginary part for 2nd number ");
	fflush(stdout);
	scanf("%f",&Lnum2.imaginary);
	fflush(stdin);


	Lsum=add(Lnum1,Lnum2);

	printf("Sum =%.2f-%.2fi ",Lsum.real,Lsum.imaginary);

	return 0;
}


struct scomplex add(struct scomplex Lnum1,struct scomplex Lnum2){

	struct scomplex sum;

	sum.real=Lnum1.real+Lnum2.real;
	sum.imaginary=Lnum1.imaginary+Lnum2.imaginary;
	return sum;

}
