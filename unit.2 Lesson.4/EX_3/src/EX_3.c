/*
 ============================================================================
 Name        : EX_5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int matrix[3][3],t_matrix[3][3],i,j,size;

	printf("Please enter the size of the matrix ");
	fflush(stdout);
	scanf("%d",&size);
	fflush(stdin);

	printf("Please Enter the elements of matrix \n");
	for(i=1;i<=2;i++){

		for(j=1;j<=2;j++){

			printf("\nEnter the value of a%d%d: ",i,j);
			fflush(stdout);
			scanf("%d",&matrix[i][j]);
			fflush(stdin);
		}
	}



	for(i=1;i<=2;i++){

		for(j=1;j<=2;j++){

			t_matrix[i][j]=matrix[j][i];
		}
	}


	printf("the matrix after transpose is\n ");
	fflush(stdout);
	for(i=1;i<=2;i++){

		for(j=1;j<=2;j++){

			printf("%d\t",t_matrix[i][j]);
			fflush(stdout);

		}
		printf("\n");
		fflush(stdout);
	}

	return 0;
}
