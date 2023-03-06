#include <stdio.h>
#include <stdlib.h>
#include "STACK.h"
#include "Stack.c"
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

