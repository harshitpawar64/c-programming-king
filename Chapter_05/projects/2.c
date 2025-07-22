#include <stdio.h>

int main(void)
{
    int hours, minutes;

    // Asks user for time in 24-hour format
    printf("24-hour time: ");
    scanf("%d :%d", &hours, &minutes);

    // Output equivalent time in 12-hour format
    printf("12-hour time: ");
    if (hours == 0)
        printf("12:%.2d AM\n", minutes);
    else if (hours == 12)
        printf("%d:%.2d PM\n", hours, minutes);
    else if (hours > 12)
        printf("%d:%.2d PM\n", hours - 12, minutes);
    else
        printf("%d:%.2d AM\n", hours, minutes);

    // Return status code '0'
    return 0;
}
