#include <stdio.h>

int main(void)
{
    float shares, price_per_share, value, commission, rival_commission;

    // Asks user for the number of shares
    printf("Number of shares: ");
    scanf("%f", &shares);

    // Asks user for the price per share
    printf("Price per share: $");
    scanf("%f", &price_per_share);

    // Determine value of trade
    value = shares * price_per_share;

    // Determine commission charges based on value of trade
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

    // Minimum commission
    if (commission < 39.00f)
        commission = 39.0f;

    // Determine commission charges based on number of shares by a rival broker
    if (shares >= 2000.0f)
        rival_commission = 33.0f + (0.03f * shares);
    else
        rival_commission = 33.0f + (0.02f * shares);

    // Output the commision for the value of trade by both brokers
    printf("Commission: $%.2f\n", commission);
    printf("Rival Commission: $%.2f\n", rival_commission);

    // Return status code '0'
    return 0;
}
