/*
    Author: CWN221
    Date: 13/6/2024
    Description: C program to manage a Library System and calculate fine
*/

#include <stdio.h>

int main() {
    int book_id;
    int return_date;
    int due_date;
    int days_overdue;
    int fine;
    
    printf("Enter Book ID: ");
    scanf("%d", &book_id);
    
    printf("Enter Return Date: ");
    scanf("%d", &return_date);
    
    printf("Enter Due Date: ");
    scanf("%d", &due_date);
    
    days_overdue = return_date - due_date;

    if (days_overdue >=1 && days_overdue <=7 ) {
        fine = days_overdue * 20;
    }
    
    else if (days_overdue >=8 && days_overdue <=14 ) {
        fine = days_overdue * 50;
    }
    
    else if (days_overdue >=15) {
        fine = days_overdue * 100;
    }
    
    printf("The days overdue is/are %d\n", days_overdue);
    printf("The fine is Ksh. %d", fine);

    return 0;
}
