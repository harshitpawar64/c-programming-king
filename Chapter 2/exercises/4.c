#include <stdio.h>

int main(void)
{
    // Declares variables without initializing them
    int x, y, z;
    float a, b, c;

    // Output "garbage values" of uninitialized variables
    printf("Integers: %d, %d, %d\n", x, y, z);
    printf("Floats: %f, %f, %f", a, b, c);

    // Return status code '0'
    return 0;
}
