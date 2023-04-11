/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:looping statements
Problem(14):
....Write a C program to input a number and calculate sum of digits using for loop.
----------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
int main()
{
   int number , digitsSum = 0;
   printf("Enter any Number: ");
   scanf(" %d",&number);
   while(number > 0)
   {
     digitsSum += number % 10;//to get sum of digits
     number /= 10;
   }
   printf("Sum of digits is: %d",digitsSum);//sum of all digits
}
