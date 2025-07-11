/****************************************************
 * Name: broker.c                                   *
 * Purpose: Calculates a broker's commission.       *
 * Author: Harshit Pawar                            *
 * Date: 2025-07-11                                 *
 ****************************************************/

#include <stdio.h>

int main(void)
{
    float value, commission;

    // Asks user for the value of trade
    printf("Value of Trade: $");
    scanf("%f", &value);

    // Determine commision charges based on value of trade
    if (value < 2500.0f)
        commission = 30.0f + (0.017f * value);
    else if (value < 6250.0f)
        commission = 56.0f + (0.0066f * value);
    else if (value < 20000.0f)
        commission = 76.0f + (0.0034f * value);
    else if (value < 50000.0f)
        commission = 100.0f + (0.0022f * value);
    else if (value < 500000.0f)
        commission = 155.0f + (0.0011f * value);
    else
        commission = 255.0f + (0.0009f * value);

    // Minimum charge
    if (commission < 39.00f)
        commission = 39.0f;

    // Output the commision for the value of trade
    printf("Commision: $%.2f\n", commission);

    // Return status code '0'
    return 0;
}
