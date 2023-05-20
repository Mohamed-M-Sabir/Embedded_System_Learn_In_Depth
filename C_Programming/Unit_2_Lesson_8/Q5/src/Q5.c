/*
 ============================================================================
 Name        : Q5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct semployee{

	char name[50];
	int id;
};

void print_employee_data(struct semployee *op);


int main() {

	struct semployee emp1={"mohamed",1000};
	struct semployee emp2={"adam",1001};
	struct semployee emp3={"alex",1002};

	struct semployee *(arr[3])={&emp1,&emp2,&emp3};   //array of 3 element each element is poitner to struct semployee

	print_employee_data(arr[2]);    //emp3

	return 0;
}


void print_employee_data(struct semployee* op){

	printf("\n the name of employee is :%s ",op->name);
	fflush(stdout);
	printf("\n the id of the employee is :%d ",op->id);
	fflush(stdout);

}
