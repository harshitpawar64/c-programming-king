#include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12;

    // Asks user for first 12 digits of an EAN
    printf("First 12 digits (EAN): ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12);

    // Computes EAN check digit
    int first_sum = n2 + n4 + n6 + n8 + n10 + n12;
    int second_sum = n1 + n3 + n5 + n7 + n9 + n11;
    int total = (first_sum * 3) + second_sum;
    int check_digit = 9 - (total - 1) % 10;

    // Outputs computed EAN check digit
    printf("Check digit: %d\n", check_digit);

    // Return status code '0'
    return 0;
}
