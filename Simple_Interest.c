
/*SIMPLE INTEREST*/
/*
    Author: CWN221
    Date: 23/05/2024
    RegNo: BSE-01-0032/2024
    Description: C program for calculating Simple Interest
*/

#include <stdio.h>
int main ()
{
    int principle_amount;
    float time;
    double rate;
    float Simple_Interest;
    
    printf("Enter the principle amount:", principle_amount);
    scanf("%d", &principle_amount);
    
    printf("Enter duration (in years):", time);
    scanf("%f", &time);
    
    printf("Enter the rate (in %):", rate);
    scanf("%lf", &rate);
    
    /*Total of Simple Interest*/
    Simple_Interest = (principle_amount * rate * time) /100;
    
    printf("%.1f", Simple_Interest);
    
    
    return 0;
}
