#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Flight Data
    // Flight 1: 8:00 a.m. -> 10:16 a.m.
    int dep_h1 = 8, dep_m1 = 0;
    int arr_h1 = 10, arr_m1 = 16;
    // Flight 2: 9:43 a.m. -> 11:52 a.m.
    int dep_h2 = 9, dep_m2 = 43;
    int arr_h2 = 11, arr_m2 = 52;
    // Flight 3: 11:19 a.m. -> 1:31 p.m.
    int dep_h3 = 11, dep_m3 = 19;
    int arr_h3 = 13, arr_m3 = 31;
    // Flight 4: 12:47 p.m. -> 3:00 p.m.
    int dep_h4 = 12, dep_m4 = 47;
    int arr_h4 = 15, arr_m4 = 0;
    // Flight 5: 2:00 p.m. -> 4:08 p.m.
    int dep_h5 = 14, dep_m5 = 0;
    int arr_h5 = 16, arr_m5 = 8;
    // Flight 6: 3:45 p.m. -> 5:55 p.m.
    int dep_h6 = 15, dep_m6 = 45;
    int arr_h6 = 17, arr_m6 = 55;
    // Flight 7: 7:00 p.m. -> 9:20 p.m.
    int dep_h7 = 19, dep_m7 = 0;
    int arr_h7 = 21, arr_m7 = 20;
    // Flight 8: 9:45 p.m. -> 11:58 p.m.
    int dep_h8 = 21, dep_m8 = 45;
    int arr_h8 = 23, arr_m8 = 58;

    int input_hour, input_minute;

    printf("24-hour time: ");
    scanf("%d: %d", &input_hour, &input_minute);

    // Convert input time to minutes since midnight
    int input_minutes = input_hour * 60 + input_minute;

    // Variables to store the closest flight's details
    int closest_dep_h, closest_dep_m;
    int closest_arr_h, closest_arr_m;
    int min_diff = 24 * 60 + 1;

    // Calculate departure times in minutes since midnight
    int dep_m_1 = dep_h1 * 60 + dep_m1;
    int dep_m_2 = dep_h2 * 60 + dep_m2;
    int dep_m_3 = dep_h3 * 60 + dep_m3;
    int dep_m_4 = dep_h4 * 60 + dep_m4;
    int dep_m_5 = dep_h5 * 60 + dep_m5;
    int dep_m_6 = dep_h6 * 60 + dep_m6;
    int dep_m_7 = dep_h7 * 60 + dep_m7;
    int dep_m_8 = dep_h8 * 60 + dep_m8;

    // Compare with each flight
    int current_diff;

    // Flight 1
    current_diff = abs(input_minutes - dep_m_1);
    if (current_diff < min_diff)
    {
        min_diff = current_diff;
        closest_dep_h = dep_h1;
        closest_dep_m = dep_m1;
        closest_arr_h = arr_h1;
        closest_arr_m = arr_m1;
    }

    // Flight 2
    current_diff = abs(input_minutes - dep_m_2);
    if (current_diff < min_diff)
    {
        min_diff = current_diff;
        closest_dep_h = dep_h2;
        closest_dep_m = dep_m2;
        closest_arr_h = arr_h2;
        closest_arr_m = arr_m2;
    }

    // Flight 3
    current_diff = abs(input_minutes - dep_m_3);
    if (current_diff < min_diff)
    {
        min_diff = current_diff;
        closest_dep_h = dep_h3;
        closest_dep_m = dep_m3;
        closest_arr_h = arr_h3;
        closest_arr_m = arr_m3;
    }

    // Flight 4
    current_diff = abs(input_minutes - dep_m_4);
    if (current_diff < min_diff)
    {
        min_diff = current_diff;
        closest_dep_h = dep_h4;
        closest_dep_m = dep_m4;
        closest_arr_h = arr_h4;
        closest_arr_m = arr_m4;
    }

    // Flight 5
    current_diff = abs(input_minutes - dep_m_5);
    if (current_diff < min_diff)
    {
        min_diff = current_diff;
        closest_dep_h = dep_h5;
        closest_dep_m = dep_m5;
        closest_arr_h = arr_h5;
        closest_arr_m = arr_m5;
    }

    // Flight 6
    current_diff = abs(input_minutes - dep_m_6);
    if (current_diff < min_diff)
    {
        min_diff = current_diff;
        closest_dep_h = dep_h6;
        closest_dep_m = dep_m6;
        closest_arr_h = arr_h6;
        closest_arr_m = arr_m6;
    }

    // Flight 7
    current_diff = abs(input_minutes - dep_m_7);
    if (current_diff < min_diff)
    {
        min_diff = current_diff;
        closest_dep_h = dep_h7;
        closest_dep_m = dep_m7;
        closest_arr_h = arr_h7;
        closest_arr_m = arr_m7;
    }

    // Flight 8
    current_diff = abs(input_minutes - dep_m_8);
    if (current_diff < min_diff)
    {
        min_diff = current_diff;
        closest_dep_h = dep_h8;
        closest_dep_m = dep_m8;
        closest_arr_h = arr_h8;
        closest_arr_m = arr_m8;
    }

    // Output the closest departure time
    printf("Closest departure time is ");
    if (closest_dep_h == 0)
    {
        printf("12:%02d a.m.", closest_dep_m);
    }
    else if (closest_dep_h == 12)
    {
        printf("12:%02d p.m.", closest_dep_m);
    }
    else if (closest_dep_h > 12)
    {
        printf("%d:%02d p.m.", closest_dep_h - 12, closest_dep_m);
    }
    else
    {
        printf("%d:%02d a.m.", closest_dep_h, closest_dep_m);
    }

    // Output the arrival time
    printf(", arriving at ");
    if (closest_arr_h == 0)
    {
        printf("12:%02d a.m.\n", closest_arr_m);
    }
    else if (closest_arr_h > 0 && closest_arr_h < 12)
    {
        printf("%d:%02d a.m.\n", closest_arr_h, closest_arr_m);
    }
    else if (closest_arr_h == 12)
    {
        printf("12:%02d p.m.\n", closest_arr_m);
    }
    else
    {
        printf("%d:%02d p.m.\n", closest_arr_h - 12, closest_arr_m);
    }

    // Return status code '0'
    return 0;
}
