#include <stdio.h>

int main(void)
{
    float principal, roi, monthly_payment, balance;

    // Asks user for amount of loan
    printf("Principal Amount: $");
    scanf("%f", &principal);

    // Asks user for annual Rate Of Interest
    printf("ROI: ");
    scanf("%f", &roi);

    // Asks user for monthly payment
    printf("Monthly payment: $");
    scanf("%f", &monthly_payment);

    // Calculate monthly ROI from annual ROI
    float monthly_roi = roi / 12.0f;

    // 1st payment
    balance = principal * (monthly_roi / 100.0f + 1.0f) - monthly_payment;
    printf("Balance remaining after 1st payment: $%.2f\n", balance);

    // 2nd payment
    balance = balance * (monthly_roi / 100.0f + 1.0f) - monthly_payment;
    printf("Balance remaining after 2nd payment: $%.2f\n", balance);

    // 3rd payment
    balance = balance * (monthly_roi / 100.0f + 1.0f) - monthly_payment;
    printf("Balance remaining after 3rd payment: $%.2f\n", balance);
}
