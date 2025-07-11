#include <stdio.h>

int main(void)
{
    int type, m1, m2, m3, m4, m5, p1, p2, p3, p4, p5;

    // Asks user for first digit of UPC (Type)
    printf("First digit (Type): ");
    scanf("%1d", &type);

    // Asks user for first group of 5 digits of UPC (Manufacturer Prefix)
    printf("First group of 5 digits (Manufacturer): ");
    scanf("%1d%1d%1d%1d%1d", &m1, &m2, &m3, &m4, &m5);

    // Asks user for second group of 5 digits of UPC (Product Item number)
    printf("Second group of 5 digits (Product): ");
    scanf("%1d%1d%1d%1d%1d", &p1, &p2, &p3, &p4, &p5);

    // Computes UPC check digit
    int first_sum = type + m2 + m4 + p1 + p3 + p5;
    int second_sum = m1 + m3 + m5 + p2 + p4;
    int total = (first_sum * 3) + second_sum;

    // Replaced `9 - (total - 1) % 10` with (10 - (total % 10)) % 10
    int check_digit = (10 - (total % 10)) % 10;

    // Outputs computed UPC check digit
    printf("Check digit: %d\n", check_digit);

    // Return status code '0'
    return 0;
}
