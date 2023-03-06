#include <stdio.h>
#include <stdlib.h>
#include "STACK.h"
int main()
{
    int choice , xSize;
    Stack s;//object of Type struct stack
    stackEntry e;
    createStack(&s);
    printf("Enter Your Choice\n");

        printf("1.Push element in stack 2.pop element\n"
           "3.Top element in stack 4.Get size of Stack 6\n"
           "5.Clear Stack 6.Traverse Stack \n"
           "7.Exit\n");
    do
    {
        scanf("%d",&choice);
        switch(choice)
        {
           case 1:
              if(stackFull(&s))
                 printf("Stack is Full\n");
              else
              {
                  printf("enter element to be pushed: ");
                  scanf("%d",&e);
                  push(e , &s);
              }

               break;
            case 2:
                if(stackEmpty(&s))
                  printf("Stack is Empty\n");
                else
                {
                   pop(&e , &s);
                   printf("element is %d\n",e);
                }
               break;
             case 3:
                 if(stackEmpty(&s))
                 {
                     printf("Stack is empty\n");
                 }
                 else
                {
                     stackTop(&e , &s);
                     printf("Top element is %d\n",e);
                }

               break;
             case 4:
                xSize = stackSize(&s);
                printf("Size of stack now is %d\n",xSize);
               break;
             case 5:
                clearStack(&s);

                break;
             case 6:
                 if(stackEmpty(&s))
                 {
                     printf("Stack is empty\n");
                 }
                 else
                     traverseStack(&s);
               break;
             case 7:
                printf("Program is End\n");
               break;
            default:
                printf("Enter Valid Choice\n");
        }
    }while(choice != 7);
    return 0;
}
//Function to initialize stack
void createStack(Stack *ps)
{
    ps->Top = 0;
}
//function to push element in stack
void push(stackEntry e , Stack *ps)
{
    ps->entry[ps->Top++] = e;
}
//function to pop element from stack
void pop(stackEntry *pe , Stack *ps)
{
    *pe = ps->entry[--ps->Top];
}
//function to check if stack is full or or not
int stackFull(Stack *ps)
{
    if((ps->Top)== MAX_SIZE)
        return 1;
    else
        return 0;
}
//function to check if stack is empty or or not
int stackEmpty(Stack *ps)
{
    if((ps->Top)<= 0)
        return 1;
    else
        return 0;
}
//function to get size of stack
int stackSize(Stack *ps)
{
    return ps->Top;
}
//function to get top element of stack
void stackTop(stackEntry *pe , Stack *ps)
{
    *pe = ps->entry[ps->Top-1];

}
//function to clear Stack
void clearStack(Stack *ps)
{
    ps->Top = 0;
     printf("Stack is cleared & Top = %d \n",ps->Top);
}
//function to print all elements in stack
void traverseStack(Stack *ps)
{
    int i  , x;
    for(i = ps->Top ; i > 0 ; i--)
    {
        x = ps->entry[i-1];
        printf("e = %d\n",x);
    }
}
