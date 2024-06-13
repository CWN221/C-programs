/*
Author: CWN221
Date: 6/6/2024
RegNo: BSE-01-0032/2024
Description: C program to determine if you are eligible for voting
*/
#include <stdio.h>

int main() {
    int age;
    char ans;
    
    printf("Are you a Kenyan citizen(Y/N): ");
    scanf("%c", &ans);
    printf("Enter age: ");
    scanf("%d", &age);
    
    if ((ans == 'Y' || ans =='y') && age >= 18){
        printf("You are qualified to vote");
    }
    else {
        printf("You are not eligible to vote");
    }

    return 0;
}
