/*
    Author: CWN221
    Date: 5/6/2024
    RegNo: BSE-01-0032/2024
    Description: Calculation of discount in total amount
*/
#include <stdio.h>

int main() {

    float amount, pay, discount;
    printf("Enter amount purchased:Ksh ");
    scanf("%f", &amount);
    
    if (amount > 5000) {
               discount = 0.1 * amount;
               pay = amount - discount;
               printf("Discount is Ksh %.1f\n",discount);
               printf("Total pay is Ksh %.1f",pay);
               }
    
    else{
         printf("No discount");
         }
         

    return 0;
}
