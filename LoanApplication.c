/*
    Author: CWN221
    Date: 6/06/2024
    RegNo: BSE-01-0032/2024
    Description: C program to determine if you qualify to apply for a loan
*/

#include <stdio.h>

int main() {

    int age, income;
    printf("Please enter age:\n ");
    scanf("%d", &age);
    
    printf("Please enter income:\n ");
    scanf("%d", &income);
    
    if (age > 21 && income >= 21000) {
               printf("Congratulations you qualify  for a loan");
               }
    
    else{
         printf("Unfortunately we are not able to give you a loan at this time.");
         }
         

    return 0;
}
