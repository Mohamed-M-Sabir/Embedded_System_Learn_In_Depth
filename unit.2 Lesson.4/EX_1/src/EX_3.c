/*
 ============================================================================
 Name        : EX_3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

//Write a C program to find sum of two matrix of order 2*2 using multidimensional arrays where, elements of matrix are entered by user.

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int matrix_a[3][3],matrix_b[3][3],matrix_sum[3][3],i,j;

	printf("Please Enter the elements of matrix A\n");
	for(i=1;i<=2;i++){

		for(j=1;j<=2;j++){

			printf("\nEnter the value of a%d%d: ",i,j);
			fflush(stdout);
			scanf("%d",&matrix_a[i][j]);
			fflush(stdin);
		}
	}

	printf("Please Enter the elements of matrix B\n");
	for(i=1;i<=2;i++){

		for(j=1;j<=2;j++){

			printf("\nEnter the value of b%d%d: ",i,j);
			fflush(stdout);
			scanf("%d",&matrix_b[i][j]);
			fflush(stdin);
		}
	}

	for(i=1;i<=2;i++){

		for(j=1;j<=2;j++){

			matrix_sum[i][j]=matrix_a[i][j]+matrix_b[i][j];
		}
	}


	for(i=1;i<=2;i++){

		for(j=1;j<=2;j++){

			printf("%d\t",matrix_sum[i][j]);
		}

	}

	return 0;
}
