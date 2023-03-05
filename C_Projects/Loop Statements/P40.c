#include <stdio.h>
#include <math.h>
  int main()
  {
 /*
  C program to convert binary number system to decimal number system
 */
 int lastDigit,decimalNum=0,x;
    int number;
    printf("Enter 16 bits: ");
    scanf("%d",&number);x=0;
    while(number!=0)
    {
        //find last digit value
        lastDigit=number%10;
        //calculate decimal value of last digit using this formula
        decimalNum=decimalNum+lastDigit*(pow(2,x));
        //remove LSB
        number /= 10;
        x++;
    }
    printf(" decimal value  %d ",decimalNum);


   return 0;
  }