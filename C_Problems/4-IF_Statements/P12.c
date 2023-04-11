/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:IF Statements
Problem(12):
....Write a C program to enter month number between(1-12) and print number of days in month using if else.
----------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    /*Variables Decleration*/
    int Month;
    /*Asking User to enter week number*/
    printf("Enter Month number(1-12): ");
    scanf(" %d",&Month);
    /*Implementing IF Else to print the corresponding day of week name*/
    if(Month == 1 || Month == 3 || Month == 5 || Month == 7 || Month == 8 || Month == 10 || Month == 12)
    {
        printf("It contains 31 days\n");
    }
    else if(Month == 4 || Month == 6 || Month == 9 || Month == 11)
    {
        printf("It contains 30 days\n");
    }
    else if(Month == 2)
    {
        printf("It contains 28/29 days\n");
    }
    else
    {
        printf("Invalid Input! Please enter Month number between 1-12");
    }

    return 0;
}
