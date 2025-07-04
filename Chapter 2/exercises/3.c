#include <stdio.h>

int main(void)
{
    // Dimensions
    int height = 8, length = 12, width = 10;

    // Calculate volume
    int volume = height * length * width;

    // Output computed data
    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic meters): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", (volume + 166 - 1) / 166); // Calculate dimensional weight, rounding up

    // Return status code '0'
    return 0;
}
