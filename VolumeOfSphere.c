/*
    Author: CWN221
    Date: 2/7/2024
    Description: Calculation of volume a sphere
    RegNo: BSE-01-0032/2024
*/

#include <stdio.h>
#include <math.h>

#define PI 3.142

int main() {

    float radius, volume;

    /*Prompt the user to enter radius*/
    printf("Enter radius: ");
    scanf("%f", &radius);

    /*Formula for volume of a sphere*/
    volume = (4.0 / 3.0) * PI * pow(radius, 3);

    /*Result*/
    printf("The volume of the sphere is %.2f", volume);

    return 0;

}
