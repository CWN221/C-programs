/*User Input*/
/*
    Author: CWN221
    Date: 23/05/2024
    RegNo: BSE-01-0032/2024
    Description: C program requirng users to input data
*/

#include <stdio.h>

int main() {
    
    int age;
    float salary;
    double budget;
    char a;
    
    printf("please enter the values of age:");
    scanf("%d", &age);
    
    printf("Enter the value of salary:");
    scanf("%f",&salary);
    
    printf("Enter the value of budget:");
    scanf("%lf",&budget);
    
    printf("Enter the value of a:");
    scanf("%s",&a);
    

    return 0;
}
