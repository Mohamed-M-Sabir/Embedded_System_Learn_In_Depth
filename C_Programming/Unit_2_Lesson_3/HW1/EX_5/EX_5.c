/*
 * EX_5.c
 *
 *  Created on: Feb 12, 2023
 *      Author: Mohamed Saber
 */


#include<stdio.h>

int main(){

  char x;

  printf("Enter a character: ");
  fflush(stdout);
  scanf("%c",&x);
  fflush(stdin);
  printf("\nASCII value of %c = %d\n",x,x);

  return 0;
}
