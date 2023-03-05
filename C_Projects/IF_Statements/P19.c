/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:IF Statements
Problem(19):
....Write a C program to enter student marks and find percentage and grade
----------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    /*Variables Decleration*/
    int Physics,Chemistry,Biology,Mathematics,Computer;
    float percentage;
    /*Asking User to enter student marks*/
    printf("Enter marks of five subjects: ");
    scanf("%d%d%d%d%d",&Physics,&Chemistry,&Biology,&Mathematics,&Computer);
    /*Calculating percentage*/
    percentage=((Physics+Chemistry+Biology+Mathematics+Computer) / 5.0);
    printf("Percentage = %.2f\n ",percentage);
    /*Implementing IF Else to enter student marks and find percentage and grade*/
    if(percentage >= 90)
    {
        printf("Grade A");
    }
    else if(percentage >= 80)
    {
        printf("Grade B");
    }
    else if(percentage >= 70)
    {
        printf("Grade C");
    }
    else if(percentage >= 60)
    {
        printf("Grade D");
    }
    else if(percentage >= 40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
    return 0;
}
