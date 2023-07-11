#include <stdio.h>
#include <stdlib.h>

int Count_Bits(int* Copy_Register );

int main()
{
    int Local_Register;
    int  Local_Counter = 0;

    printf("Enter Value in register: ");
    scanf("%d",&Local_Register);
    fflush(stdin);

     Local_Counter = Count_Bits(&Local_Register);
    printf("Counter is: %d",Local_Counter);


    return 0;
}

int Count_Bits(int* Copy_Register )
{
   int counter = 0;
   while(*Copy_Register != 0)
   {
       counter += ((*Copy_Register)&1);
       *Copy_Register >>=1;
   }
  return counter;
}
