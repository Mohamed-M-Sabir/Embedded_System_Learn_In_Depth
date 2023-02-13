/*
 * EX_4.c
 *
 *  Created on: Feb 13, 2023
 *      Author: Mohamed Saber
 */


#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    fflush(stdout);
    scanf("%d", &num);
    fflush(stdin);
    if(num > 0)
        printf("%d is positive.", num);

    else if(num<0)
    	printf("%d is negative.", num);
    else
        printf("it's zero.");

    return 0;
}
