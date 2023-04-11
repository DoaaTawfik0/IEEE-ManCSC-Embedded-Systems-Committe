/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:C Basics
Problem(7):
....Write a C program to input length in centimeter and convert it to meter and kilometer.
----------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    /*Vriables Decleration*/
    int length_CM;
    float length_M,length_KM;
    /*Asking User to Enter length in centimeter */
    printf("Enter length in centimeter : ");
    scanf(" %d",&length_CM);
    /*Finding length in Meter and kilometer*/
    length_M=length_CM/100.0;
    length_KM=length_CM/100000.0;
    /*OUTPUT*/
    printf("length in Centimeter= %d cm\n",length_CM);
    printf("length in Meter= %.2f m\n",length_M);
    printf("length in Kilometer= %.2f km\n",length_KM);

    return 0;
}
