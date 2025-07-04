/**********************************
 * Name: test.c                   *
 * Purpose: Testing.              *
 * Author: Harshit Pawar          *
 * Date: 2025-07-03               *
 *********************************/

#include <stdio.h>

int main(void)
{
    int height, width, volume;
    float profit;
    printf("Profit: ");
    scanf("%f", &profit);
    printf("Width: ");
    scanf("%d", &width);
    height = 8;
    int length = 12; // Initialized with an "initializer"
    printf("Height: %d\n", height);
    printf("Volume: %i\n", height * length * width);
    printf("Profit: %f\n", profit);   // Forces 6 digits by default after decimal point
    printf("Profit: %.2f\n", profit); // Forces 2 digits and rounds

    return 0;
}
