#include <stdio.h>

int main(void)
{
    float wind_speed;

    // Asks user for wind speed in knots
    printf("Wind speed (knots): ");
    scanf("%f", &wind_speed);

    // Output corresponding description for wind speed
    printf("Description: ");
    if (wind_speed > 63)
        printf("Hurricane\n");
    else if (wind_speed >= 48)
        printf("Storm\n");
    else if (wind_speed >= 28)
        printf("Gale\n");
    else if (wind_speed >= 4)
        printf("Breeze\n");
    else if (wind_speed >= 1)
        printf("Light air\n");
    else
        printf("Calm\n");

    // Return status code '0'
    return 0;
}
