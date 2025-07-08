/******************************************************************
 * Name: tprintf.c                                                *
 * Purpose: Print int and float values in various formats.        *
 * Author: Harshit Pawar                                          *
 * Date: 2025-07-05                                               *
 ******************************************************************/

#include <stdio.h>

int main(void)
{
    int i = 40;
    float x = 839.21f;

    // Output int and float values in various formats
    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);

    // Return status code '0'
    return 0;
}
