/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:C Basics
Problem(8):
....Write a C program to input temperature in Centigrade and convert to Fahrenheit.
----------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    /*Vriables Decleration*/
    float Centigrade,Fahrenheit;
    /*Asking User to Enter temperature in Centigrade*/
    printf("Enter temperature in Centigrade : ");
    scanf(" %f",&Centigrade);
    /*Finding temperature in Fahrenheit*/
    Fahrenheit=(Centigrade*9/5)+32;
    /*OUTPUT*/
    printf("-----------------------------------\n");
    printf("temperature in Centigrade= %.2f Celsius\n",Centigrade);
    printf("temperature in Fahrenheit= %.2f Fahrenheit\n",Fahrenheit);


    return 0;
}
