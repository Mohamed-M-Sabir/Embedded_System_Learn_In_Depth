/*
 * EX_7.c
 *
 *  Created on: Feb 12, 2023
 *      Author: Mohamed Saber
 */


#include<stdio.h>

int main(){

  int a,b;

  printf("Enter value of a: ");
  fflush(stdout);
  scanf("%d",&a);
  fflush(stdin);

  printf("Enter value of b: ");
  fflush(stdout);
  scanf("%d",&b);
  fflush(stdin);

  a=a+b;
  b=a-b;
  a=a-b;

  printf("\nAfter swapping value of a = %d\nAfter swapping value of b = %d",a,b);

  return 0;
}
