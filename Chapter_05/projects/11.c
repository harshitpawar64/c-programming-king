#include <stdio.h>

int main(void)
{
    int num;

    // Asks user for a two-digit number
    printf("Two-digit number: ");
    scanf("%d", &num);

    // Extract digits from `num`
    int tens = num / 10;
    int ones = num % 10;

    // Output the english word for the number
    printf("Number: ");
    if (tens == 1) // Handle special cases from 10 to 19
    {
        switch (num)
        {
        case 19:
            printf("nineteen");
            break;
        case 18:
            printf("eighteen");
            break;
        case 17:
            printf("seventeen");
            break;
        case 16:
            printf("sixteen");
            break;
        case 15:
            printf("fifteen");
            break;
        case 14:
            printf("fourteen");
            break;
        case 13:
            printf("thirteen");
            break;
        case 12:
            printf("twelve");
            break;
        case 11:
            printf("eleven");
            break;
        case 10:
            printf("ten");
            break;
        }
    }
    else
    {
        switch (tens)
        {
        case 9:
            printf("ninety");
            break;
        case 8:
            printf("eighty");
            break;
        case 7:
            printf("seventy");
            break;
        case 6:
            printf("sixty");
            break;
        case 5:
            printf("fifty");
            break;
        case 4:
            printf("forty");
            break;
        case 3:
            printf("thirty");
            break;
        case 2:
            printf("twenty");
            break;
        }

        if (ones != 0)
            printf("-");

        switch (ones)
        {
        case 9:
            printf("nine");
            break;
        case 8:
            printf("eight");
            break;
        case 7:
            printf("seven");
            break;
        case 6:
            printf("six");
            break;
        case 5:
            printf("five");
            break;
        case 4:
            printf("four");
            break;
        case 3:
            printf("three");
            break;
        case 2:
            printf("two");
            break;
        case 1:
            printf("one");
            break;
        }
    }
    printf(".\n");

    // Return status code '0'
    return 0;
}
