/******************************************************************
 * Name: celsius.c                                                *
 * Purpose: Converts temperature from Fahrenheit to Celsius.      *
 * Author: Harshit Pawar                                          *
 * Date: 2025-07-03                                               *
 ******************************************************************/

#include <stdio.h>

// Constants for temperature conversion
const float FREEZING_POINT = 32.0f;       // Freezing point of water in °F
const float SCALE_FACTOR = (5.0f / 9.0f); // Factor to convert °F difference to °C

int main(void)
{
    float fahrenheit, celsius;

    // Asks user for temperature in °F
    printf("Temperature (°F): ");
    scanf("%f", &fahrenheit);

    // Convert temperature from °F to °C
    celsius = (fahrenheit - FREEZING_POINT) * SCALE_FACTOR;

    // Output temperature in °C
    printf("Temperature (°C): %.2f\n", celsius);

    // Return status code '0'
    return 0;
}
