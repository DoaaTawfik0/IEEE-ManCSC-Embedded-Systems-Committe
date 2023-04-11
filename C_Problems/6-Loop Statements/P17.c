/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:looping statements
Problem(17):
....Write a C program to input number from user and check number is palindrome or not using loop.
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
   Number = Exnumber ;//returning number to its previous value
   while(Exnumber > 0)
   {
       digit = Exnumber % 10;
       ReverseNumber += digit * pow (10,counter-1);//way to get reversed number
       Exnumber /= 10;
       counter--;
   }
   if(Number == ReverseNumber)
   {
       printf("Number %d is palindrome",Number);
   }
   else
   {
       printf("Number %d is not palindrome",Number);
   }

    return 0;
}
