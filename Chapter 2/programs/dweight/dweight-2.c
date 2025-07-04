/**********************************************************************************************
 * Name: dweight.c                                                                            *
 * Purpose: Computes the dimensional weight of a box by the dimensions provided by the user.  *
 * Author: Harshit Pawar                                                                      *
 * Date: 2025-07-03                                                                           *
 **********************************************************************************************/

#include <stdio.h>

// Dimensional Weight Factor
const int DIM_FACTOR = 166;

/*
 * #define DIM_FACTOR 166
 *
 * This approach uses a preprocessor macro definition.
 */

int main(void)
{
    // Dimensions
    int length, width, height;

    printf("Length: ");
    scanf("%d", &length);

    printf("Width: ");
    scanf("%d", &width);

    printf("Height: ");
    scanf("%d", &height);

    // Calculate volume
    int volume = height * length * width;

    // Calculate dimensional weight, rounding up
    int weight = (volume + DIM_FACTOR - 1) / DIM_FACTOR;

    // Output computed data
    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic meters): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    // Return status code '0'
    return 0;
}
