/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:Pointers
Problem(12):
....Write a C Program to find length of string using pointer
----------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>

#define maxSize 100

int main()
{
    int counter = 0;
    char Text[maxSize]; //pointer to first character of string
    char *text_Ptr = Text ;
    printf("enter any Text:  ");
    gets(Text);
    while(*text_Ptr != '\0')
    {
        counter++;
        text_Ptr++; //incrementing pointer
    }
    printf("Length of '%s' = %d", Text, counter);

    return 0;
}
