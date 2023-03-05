/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:looping statements
Problem(15):
....Write a C program to input a number from user and calculate product of its digits.
----------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
int main()
{
   int number , digitsProduct = 1;
   printf("Enter any Number: ");
   scanf(" %d",&number);
   while(number > 0)
   {
     digitsProduct *= number % 10;//to get product of digits
     number /= 10;
   }
   printf("Product of digits is: %d",digitsProduct);//product of all digits
}
