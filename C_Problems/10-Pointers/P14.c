/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:Pointers
Problem(14):
....Write a C Program to concatenate two strings using pointer
----------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>

#define maxSize 100

int main()
{
    int counter = 0;
    char Text1[maxSize]; //pointer to first character of string1
    char Text2[maxSize]; //pointer to first character of string2
    char *text1_Ptr = Text1 ;
    char *text2_Ptr = Text2 ;
    printf("enter any Text:  ");
    gets(Text1);
    printf("enter any Text:  ");
    gets(Text2);
    while(*text1_Ptr != '\0')
    {
        text1_Ptr++; //incrementing pointer
    }

    while(*text2_Ptr != '\0')
    {
        *(text1_Ptr++) =  *(text2_Ptr++);
    }
   printf("Concatenated string = %s",Text1);

    return 0;
}
