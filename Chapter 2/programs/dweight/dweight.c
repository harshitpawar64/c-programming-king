/***************************************************************************
 * Name: dweight.c                                                         *
 * Purpose: Computes the dimensional weight of a 12" x 10" x 8" box.       *
 * Author: Harshit Pawar                                                   *
 * Date: 2025-07-03                                                        *
 ***************************************************************************/

#include <stdio.h>

// Dimensional Weight Factor
const int DIM_FACTOR = 166;

int main(void)
{
    // Dimensions
    int length = 12;
    int width = 10;
    int height = 8;

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
