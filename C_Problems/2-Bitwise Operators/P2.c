#include<math.h>
#include <stdlib.h>

int main()
{
 /*
  C program to check Most Significant Bit (MSB) of a number using bitwise operator
 */
    int number,BitsNumber,MSB;
    printf("Enter the Number: ");
    scanf("%d",&number);
    //calculating number of bits
    BitsNumber=sizeof(int)*8;
    MSB=1<<(BitsNumber-1);
    if((number&MSB))
    {
     printf("Most Significant Bit of %d is set (1)\n",number);
    }
   else
    {
     printf("Most Significant Bit of %d is set (0)\n",number);
    }


    return 0;
}
