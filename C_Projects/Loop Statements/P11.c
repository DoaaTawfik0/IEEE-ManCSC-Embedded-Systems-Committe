/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:looping statements
Problem(11):
....Write a C program to input a number from user and find first and last digit of number using loop.
----------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
int main()
{
   int number , firstDigit , counter ,lastDigit;
   printf("Enter any Number: ");
   scanf(" %d",&number);
   firstDigit = number % 10;//to get first digit
   number /= 10;//to remove digit
   while(number > 0)
   {
     lastDigit = number % 10;//to get last digit
     number /= 10;

   }
   printf("First Digit : %d \n",firstDigit);
   printf("Last Digit : %d ",lastDigit);
}
