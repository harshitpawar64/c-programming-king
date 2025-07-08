#include <stdio.h>

int main(void)
{
    int area_code, exchange_code, station_code;
    // Asks user for phone number in (xxx) xxx-xxxx format
    printf("Phone number [(xxx) xxx-xxxx]: ");
    scanf(" (%d) %d-%d", &area_code, &exchange_code, &station_code);

    // Output phone number in xxx.xxx.xxxx format
    printf("%d.%d.%d\n", area_code, exchange_code, station_code);

    // Return status code '0'
    return 0;
}
