#include <stdio.h>

int main(void)
{
    float price;
    int item, month, date, year;

    // Asks user for item number
    printf("Item number: ");
    scanf("%d", &item);

    // Asks user for unit price
    printf("Unit price: ");
    scanf("%f", &price);

    // Asks user for purchase date in MM/DD/YYYY format
    printf("Purchase date (MM/DD/YYYY): ");
    scanf("%d /%d /%d", &month, &date, &year);

    printf("\nItem\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");
    printf("%-d\t\t$%7.2f\t%.2d/%.2d/%.4d\n", item, price, month, date, year);

    // Return status code '0'
    return 0;
}
