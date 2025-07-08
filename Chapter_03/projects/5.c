#include <stdio.h>

int main(void)
{
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, num12, num13, num14, num15, num16;

    // Asks user for 16 numbers in the range [1, 16]
    printf("Enter 16 numbers in the range [1, 16]:\n");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num10, &num11, &num12, &num13, &num14, &num15, &num16);

    // Outputs numbers in a 4x4 arrangement
    printf("\n%d %d %d %d\n", num1, num2, num3, num4);
    printf("%d %d %d %d\n", num5, num6, num7, num8);
    printf("%d %d %d %d\n", num9, num10, num11, num12);
    printf("%d %d %d %d\n", num13, num14, num15, num16);

    // Calculates row sums
    int rowsum1 = num1 + num2 + num3 + num4;
    int rowsum2 = num5 + num6 + num7 + num8;
    int rowsum3 = num9 + num10 + num11 + num12;
    int rowsum4 = num13 + num14 + num15 + num16;

    // Calculates column sums
    int colsum1 = num1 + num5 + num9 + num13;
    int colsum2 = num2 + num6 + num10 + num14;
    int colsum3 = num3 + num7 + num11 + num15;
    int colsum4 = num4 + num8 + num12 + num16;

    // Calculates diagonal sums
    int diagsum1 = num1 + num6 + num11 + num16;
    int diagsum2 = num4 + num7 + num10 + num13;

    // Output calculated data
    printf("\nRow sums: %d %d %d %d\n", rowsum1, rowsum2, rowsum3, rowsum4);
    printf("Column sums: %d %d %d %d\n", colsum1, colsum2, colsum3, colsum4);
    printf("Diagonal sums: %d %d\n", diagsum1, diagsum2);

    // Return status code '0'
    return 0;
}
