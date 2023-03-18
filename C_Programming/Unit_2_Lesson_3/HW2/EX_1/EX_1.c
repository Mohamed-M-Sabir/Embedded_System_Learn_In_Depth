/*
 * EX_1.c
 *
 *  Created on: Feb 12, 2023
 *      Author: Mohamed Saber
 */


#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    fflush(stdout);
    scanf("%d", &num);
    fflush(stdin);
    if(num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);

    return 0;
}
