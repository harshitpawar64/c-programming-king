#include <stdio.h>

int main(void)
{
    int day, month, year;

    // Asks user for date in MM/DD/YYYY format
    printf("Date (MM/DD/YYYY): ");
    scanf("%d/%d/%d", &month, &day, &year);

    // Output date in YYYYMMDD format
    printf("Date (YYYYMMDD): %.4d%.2d%.2d\n", year, month, day);

    // Return status code '0'
    return 0;
}
