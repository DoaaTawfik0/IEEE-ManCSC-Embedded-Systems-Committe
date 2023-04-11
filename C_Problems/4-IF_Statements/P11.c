/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:IF Statements
Problem(11):
....Write a C program to input week number(1-7) and print the corresponding day of week name using if else.
----------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    /*Variables Decleration*/
    int week;
    /*Asking User to enter week number*/
    printf("Enter week number(1-7): ");
    scanf(" %d",&week);
    /*Implementing IF Else to print the corresponding day of week name*/
    if (week == 1)
    {
        printf("Monday");
    }
    else if (week == 2)
    {
        printf("Tuesday");
    }
    else if (week == 3)
    {
        printf("Wednesday");
    }
    else if(week == 4)
    {
        printf("Thursday");
    }
    else if(week == 5)
    {
        printf("Friday");
    }
    else if(week == 6)
    {
        printf("Saturday");
    }
    else if(week == 7)
    {
        printf("Sunday");
    }
    else
    {
        printf("Invalid Input! Please enter week number between 1-7.");
    }

    return 0;
}
