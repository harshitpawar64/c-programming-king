#include <stdio.h>

// Value of 𝜋
const float PI = 3.1415926535f;

int main(void)
{
    // Radius of sphere
    int radius;
    printf("Radius: ");
    scanf("%d", &radius);

    // Compute volume of sphere --> v = 4/3 * 𝜋 * r^3
    float volume = (4.0f / 3.0f) * PI * (radius * radius * radius);

    // Output computed volume
    printf("Volume: %.2f", volume);

    // Return status code '0'
    return 0;
}
