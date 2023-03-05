#include <stdio.h>
  int main()
  {
 /*
  C program to check even or odd number using bitwise operator
 */
   int number,LSB;
   printf("Enter number: ");
   scanf("%d",&number);
   //bitwise AND number with 1
   LSB=number&1;

  if(LSB==1)
  {
      //if LSB==1 it means that number is odd
      printf("number %d is odd\n",number);
  }
  else
  {
      //if LSB==0 it means that number is even
      printf("number %d is even\n",number);
  }
   return 0;
  }

