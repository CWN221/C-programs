/*COMPOUND INTEREST*/
/*
    Author: CWN221
    Date: 23/05/2024
    RegNo: BSE-01-0032/2024
    Description: C program for calculating Compound Interest
*/
#include<stdio.h>
#include<math.h>
int main ()
{
    float Compound_Interest;
    float principle_amount;
    float rate;
    float time;
    
    
    printf("Enter the principle amount:", principle_amount);
    scanf("%f", &principle_amount);
    
    printf("Enter the rate (%):", rate);
    scanf("%f", &rate);
    
    printf("Enter the number of years:", time);
    scanf("%f", &time);
    
    /*Total of Compound Interest*/
    Compound_Interest = principle_amount * (pow((1 + rate / 100),time));
    
    printf("%.1f", Compound_Interest);
    
    
    return 0;
}
