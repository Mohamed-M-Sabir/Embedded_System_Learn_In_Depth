/*
 * EX_6.c
 *
 *  Created on: Feb 12, 2023
 *      Author: Mohamed Saber
 */


#include<stdio.h>

int main(){

  int a,b,temp;

  printf("Enter value of a: ");
  fflush(stdout);
  scanf("%d",&a);
  fflush(stdin);

  printf("Enter value of b: ");
  fflush(stdout);
  scanf("%d",&b);
  fflush(stdin);
  temp=a;
  a=b;
  b=temp;
  printf("\nAfter swapping value of a = %d\nAfter swapping value of b = %d",a,b);

  return 0;
}
