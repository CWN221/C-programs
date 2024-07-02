/*
    Author: CWN221
    Date: 29/6/2024
    Description: Converting celsius to Fahrenheit
    RegNo: BSE-01-0032/2024
*/
#include <stdio.h>

int main() {
    float centigrade, fahrenheit;


    /*Prompt user to input temperature in degree celsius*/
    printf("Enter the temperature(Celsius): ");
    scanf("%f", &centigrade);

	/*Converting tmperature from celcius to fahrenheit*/
    fahrenheit = (centigrade * 9/5) + 32;

    printf("The temperature in Fahrenheit is %.1f", fahrenheit);

    return 0;
}
