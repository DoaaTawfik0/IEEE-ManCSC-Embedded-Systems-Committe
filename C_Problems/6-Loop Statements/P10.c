/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:looping statements
Problem(10):
....Write a C program to input a number from user and count number of digits in the given integer using loop.
----------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
int main()
{
   int number , digit , counter;
   printf("Enter any Number: ");
   scanf(" %d",&number);
   while(number > 0)
   {
       digit = number % 10;//to get last digit in number
       counter++;
       number /= 10;//update number after deleting last digit
   }
   printf("Number of Digits = %d ",counter);
}
