/*
    Author: CWN221
    Date: 4/07/2024
    RegNo: BSE-01-0032/2024
    Description: Using structures in C
*/

#include <stdio.h>
#include <string.h>

struct Student {
    char firstName[20];
    char lastName[20];
    char email[50];
    char RegNo[20];
    char DOB[15];
    int age;
    char phoneNumber[20];
}Student;

int main() {
    //Student 1
    struct Student s1;

    strcpy(s1.firstName, "Carlos");
    strcpy(s1.lastName, "Nduhiu");
    strcpy(s1.email, "nduhiucarlos@zetech.ac.ke");
    strcpy(s1.RegNo, "BSE-01-0032/2024");
    strcpy(s1.DOB, "08-09-2005");
    s1.age = 18;
    strcpy(s1.phoneNumber, "+254719435626");

    //Results
    printf("Student 1 \n");
    printf("First Name:%s \n",s1.firstName);
    printf("Last Name:%s \n",s1.lastName);
    printf("Email:%s \n",s1.email);
    printf("Registration No.: %s \n", s1.RegNo);
    printf("DOB: %s \n", s1.DOB);
    printf("Age:%d \n",s1.age);
    printf("Phone Number:%s \n",s1.phoneNumber);
    
    printf("\n");
    
    //Student 2
    struct Student s2;

    strcpy(s2.firstName, "Charles");
    strcpy(s2.lastName, "Wamai");
    strcpy(s2.email, "wamaicharles@zetech.ac.ke");
    strcpy(s2.RegNo, "BSE-01-0033/2024");
    strcpy(s2.DOB, "08-09-2004");
    s2.age = 19;
    strcpy(s2.phoneNumber, "+25478765432");

    //Results
    printf("Student 2 \n");
    printf("First Name:%s \n",s2.firstName);
    printf("Last Name:%s \n",s2.lastName);
    printf("Email:%s \n",s2.email);
    printf("Registration No.: %s \n", s2.RegNo);
    printf("DOB: %s \n", s2.DOB);
    printf("Age:%d \n",s2.age);
    printf("Phone Number:%s \n",s2.phoneNumber);


    return 0;
}
