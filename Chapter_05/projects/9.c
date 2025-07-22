#include <stdio.h>

int main(void)
{
    int month1, day1, year1;
    int month2, day2, year2;

    // Asks user for 2 dates
    printf("First date (MM/DD/YY): ");
    scanf("%d/%d/%d", &month1, &day1, &year1);

    printf("Second date (MM/DD/YY): ");
    scanf("%d/%d/%d", &month2, &day2, &year2);

    // Compare dates
    if (year1 < year2)
    {
        printf("%d/%d/%02d is earlier than %d/%d/%02d\n", month1, day1, year1, month2, day2, year2);
    }
    else if (year2 < year1)
    {
        printf("%d/%d/%02d is earlier than %d/%d/%02d\n", month2, day2, year2, month1, day1, year1);
    }
    else // Years are the same
    {
        if (month1 < month2)
        {
            printf("%d/%d/%02d is earlier than %d/%d/%02d\n", month1, day1, year1, month2, day2, year2);
        }
        else if (month2 < month1)
        {
            printf("%d/%d/%02d is earlier than %d/%d/%02d\n", month2, day2, year2, month1, day1, year1);
        }
        else // Months are the same
        {
            if (day1 < day2)
            {
                printf("%d/%d/%02d is earlier than %d/%d/%02d\n", month1, day1, year1, month2, day2, year2);
            }
            else if (day2 < day1)
            {
                printf("%d/%d/%02d is earlier than %d/%d/%02d\n", month2, day2, year2, month1, day1, year1);
            }
            else // Days are also the same
            {
                printf("Both dates are the same.\n");
            }
        }
    }

    // Return status code '0'
    return 0;
}
