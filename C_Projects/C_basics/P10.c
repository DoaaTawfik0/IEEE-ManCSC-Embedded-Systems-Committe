/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:C Basics
Problem(10):
....Write a C program to input number of days from user and convert it to years, weeks and days.
----------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
 int days,weeks,years,Remaining_Days;
 /*take number of dasys from user*/
 printf("Enter Number of Days: ");
 scanf("%d",&days);
 /*calculating years and weeks*/
 years=days / 365;
 weeks= (days - (years * 365)) / 7;
 Remaining_Days = days - ((years * 365) + (weeks * 7));
 /*OUTPUT*/
 printf("years: %d\n",years);
 printf("weeks: %d\n",weeks);
 printf("Remaining_Days :%d\n",Remaining_Days);

 return 0;
}
