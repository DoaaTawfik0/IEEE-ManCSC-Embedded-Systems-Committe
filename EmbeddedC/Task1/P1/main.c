#include <stdio.h>
#include <stdlib.h>



#include "Error_State.h"

ES_t Set_Bit(int* Copy_Register , int Copy_Bit);
ES_t Get_Bit(int* Copy_Register , int Copy_Bit);
ES_t Clear_Bit(int* Copy_Register , int Copy_Bit);
ES_t Toggle_Bit(int* Copy_Register , int Copy_Bit);

int main()
{
    int Local_Register;
    int  Local_BitNumber , Local_Choice;

    printf("Enter Value in register: ");
    scanf("%d",&Local_Register);
    fflush(stdin);
    printf("Enter bit number: ");
    scanf("%d",&Local_BitNumber);
    fflush(stdin);
    printf("1.to set bit  2.to clear bit\n");
    printf("3.to get bit  4.to toggle bit\n");
    scanf("%d",&Local_Choice);
    fflush(stdin);
    switch(Local_Choice)
    {
        case 1:
        Set_Bit(&Local_Register , Local_BitNumber);
        printf("%d\n",Local_Register);
        break;
        case 2:
        Clear_Bit(&Local_Register , Local_BitNumber);
        printf("%d\n",Local_Register);
        break;
        case 3:
        Get_Bit(&Local_Register , Local_BitNumber);
        printf("%d\n",Local_Register);
        break;
        case 4:
        Toggle_Bit(&Local_Register , Local_BitNumber);
        printf("%d\n",Local_Register);
        break;
        default :
            printf("not a valid choice\n");
    }

    return 0;
}





ES_t Set_Bit(int* Copy_Register , int Copy_Bit)
{
    ES_t Local_enuErrorState = ES_NOK;

    if(Copy_Register != NULL)
    {
        *Copy_Register = ((1<<Copy_Bit)|(*Copy_Register));
        Local_enuErrorState = ES_OK;
    }
    else
    {
        Local_enuErrorState = ES_NULL_POINTER;
    }

    return Local_enuErrorState;
}
ES_t Get_Bit(int* Copy_Register , int Copy_Bit)
{
    ES_t Local_enuErrorState = ES_NOK;

    if(Copy_Register != NULL)
    {
        *Copy_Register = (((*Copy_Register)>>Copy_Bit) & 1);
        Local_enuErrorState = ES_OK;
    }
    else
    {
        Local_enuErrorState = ES_NULL_POINTER;
    }

    return Local_enuErrorState;

}
ES_t Clear_Bit(int* Copy_Register , int Copy_Bit)
{

    ES_t Local_enuErrorState = ES_NOK;

    if(Copy_Register != NULL)
    {
        *Copy_Register = (~(1<<Copy_Bit)&(*Copy_Register));
        Local_enuErrorState = ES_OK;
    }
    else
    {
        Local_enuErrorState = ES_NULL_POINTER;
    }

    return Local_enuErrorState;
}
ES_t Toggle_Bit(int* Copy_Register , int Copy_Bit)
{

    ES_t Local_enuErrorState = ES_NOK;

    if(Copy_Register != NULL)
    {
        *Copy_Register = ((1<<Copy_Bit)^(*Copy_Register));
        Local_enuErrorState = ES_OK;
    }
    else
    {
        Local_enuErrorState = ES_NULL_POINTER;
    }

    return Local_enuErrorState;
}
