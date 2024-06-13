/*
    Author: CWN221
    Date: 13/6/2024
    RegNo: BSE-01-0032/2024
    Description: ElectricityBill System
*/
#include<stdio.h>
int main() {

    int customer_id;
    char customer_name1[15];
    char customer_name2[15];
    int units_consumed;
    float bill;
    float Total_bill;
    float Surcharge_amount;
    

	/*User Input*/
    printf("Customer ID: ", customer_id);
    scanf("%d", &customer_id);

    printf("Customer Name(First Name): ", customer_name1);
    scanf("%s", &customer_name1);
    
    printf("Customer Name(Surname): ", customer_name2);
    scanf("%s", &customer_name2);

    printf("Units Consumed: ", units_consumed);
    scanf("%d", &units_consumed);

	/*Calculation of Total Bill*/
    if(units_consumed >=1 && units_consumed <=199) {
        bill = 1.20 * units_consumed;
    } 
    else if (units_consumed >=200 && units_consumed <400) {
        bill = 1.50 * units_consumed;
    } 
    else if (units_consumed >=400 && units_consumed <600) {
        bill = 1.80 * units_consumed;
    }
    else if(units_consumed > 600) {
        bill = 2.00 * units_consumed;
    }
    
    /*Surcharge amount*/
    if (bill > 400) {
    Surcharge_amount = (0.15 * bill);
	}
    
	
    
    /*Minimum bill should be ksh.100*/
    if (bill < 100) {
		bill = 100;
	}
	
	/*Total bill with 15% surcharge amount included*/
	Total_bill = Surcharge_amount + bill;
    
    
    printf("ID: %d \n", customer_id);
    printf("Dear %s %s,\n", customer_name1, customer_name2);
    printf("Your total units consumption is %d units\n", units_consumed);
    printf("Bill: %.1f \n", bill);
    printf("Surcharge amount :%.1f \n", Surcharge_amount);
    printf("Your total bill is Ksh.%.1f", Total_bill);
    
	return 0; 

}
