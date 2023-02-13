/*
 * EX_5.c
 *
 *  Created on: Feb 13, 2023
 *      Author: Mohamed Saber
 */


#include <stdio.h>
int main() {
    char c;
    printf("Enter a character: ");
    fflush(stdout);
    scanf("%c", &c);
    fflush(stdin);

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        printf("%c is an alphabet.", c);
    else
        printf("%c is not an alphabet.", c);

    return 0;
}
