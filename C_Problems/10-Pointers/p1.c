/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:Pointers
Problem(1):
....Write a C program to create, initialize and demonstrate the use of pointers.
----------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x = 50 ; //Normal Variable
    int *Xptr = &x ; //Pointer to an integer value
    printf("%p\n",Xptr); 
    printf("%d\n\n",*Xptr); 
    *Xptr = 100 ;
    printf("%p\n",Xptr);
    printf("%d\n\n",*Xptr);

    return 0;
}
