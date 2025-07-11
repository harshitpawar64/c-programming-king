#include <stdio.h>

int main(void)
{
    int type, m1, m2, m3, m4, m5, p1, p2, p3, p4, p5;

    // Asks user for first 11 digits of a UPC
    printf("First 11 digits (UPC): ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &type, &m1, &m2, &m3, &m4, &m5, &p1, &p2, &p3, &p4, &p5);

    // Computes UPC check digit
    int first_sum = type + m2 + m4 + p1 + p3 + p5;
    int second_sum = m1 + m3 + m5 + p2 + p4;
    int total = (first_sum * 3) + second_sum;
    int check_digit = 9 - (total - 1) % 10;

    // Outputs computed UPC check digit
    printf("Check digit: %d\n", check_digit);

    // Return status code '0'
    return 0;
}
