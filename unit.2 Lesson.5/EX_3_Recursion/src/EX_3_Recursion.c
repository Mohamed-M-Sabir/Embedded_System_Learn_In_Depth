/*
 ============================================================================
 Name        : EX_3_Recursion.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

void reverse();

int main()
{
    printf("Please enter a sentence: ");
    fflush(stdout);
    reverse();

return 0;
}

void reverse()
{
    char c;
    scanf("%c", &c);
    fflush(stdin);

    if (c != '\n') {
        reverse();
        printf("%c", c);
        fflush(stdout);

    }
}
