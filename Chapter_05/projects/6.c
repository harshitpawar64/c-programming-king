#include <stdio.h>

int main(void)
{
    int type, m1, m2, m3, m4, m5, p1, p2, p3, p4, p5, check_digit;

    // Asks user for UPC
    printf("UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &type, &m1, &m2, &m3, &m4, &m5, &p1, &p2, &p3, &p4, &p5, &check_digit);

    // Validates UPC using check digit
    int first_sum = type + m2 + m4 + p1 + p3 + p5;
    int second_sum = m1 + m3 + m5 + p2 + p4;
    int total = (first_sum * 3) + second_sum;

    if (check_digit == (9 - (total - 1) % 10))
        printf("VALID\n");
    else
        printf("NOT VALID\n");

    // Return status code '0'
    return 0;
}
