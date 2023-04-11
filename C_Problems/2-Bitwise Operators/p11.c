#include <stdio.h>
  int main()
  {
 /*
  program to count flip all bits of a binary number using bitwise operator
 */
   int number,flippedNumber;
   printf("Enter number: ");
   scanf("%d",&number);
   //take the complement of the number
   flippedNumber = ~number;
   printf("number before bits are flipped  = %d \n", number);
   printf("Number after bits are flipped = %d ", flippedNumber);
   return 0;
  }
