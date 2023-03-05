#include <stdio.h>
  int main()
  {
 /*
  C program to find power of any number using for loop
 */
    int base,exponent,power=1;
    printf("Enter base: ");
    scanf("%d",&base);
    printf("Enter Exponent: ");
    scanf("%d",&exponent);
    for(int x=1;x<=exponent;x++)
    {
        power=power*base;

    }
    printf("%d ^ %d = %d",base,exponent,power);


   return 0;
  }