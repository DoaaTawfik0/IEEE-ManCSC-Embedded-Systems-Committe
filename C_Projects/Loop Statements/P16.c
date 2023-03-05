/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:looping statements
Problem(16):
....Write a C program to input a number from user and find reverse of the given number using for loop.
----------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <math.h>

int main()
{
  int digit , counter , Number , Exnumber , ReverseNumber=0;
  printf("Enter any Number: ");
  scanf(" %d",&Number);
  Exnumber = Number;
   while(Number > 0)
   {
       Number /= 10;
       counter++;//counting number of digits
   }
   while(Exnumber > 0)
   {
       digit = Exnumber % 10;
       ReverseNumber += digit * pow (10,counter-1);//way to get reversed number
       Exnumber /= 10;
       counter--;
   }
   printf("Revers of number = %d",ReverseNumber);

    return 0;
}
