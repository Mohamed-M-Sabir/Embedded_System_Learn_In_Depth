/*
 * EX_2.c
 *
 *  Created on: Feb 12, 2023
 *      Author: Mohamed Saber
 */


#include<stdio.h>

int main(){

  int num;

  printf("Enter an integer: ");
  fflush(stdout);
  scanf("%d",&num);
  fflush(stdin);
  printf("\nYou entered: %d\n",num);

  return 0;
}
