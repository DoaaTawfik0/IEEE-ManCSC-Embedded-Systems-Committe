#include <stdio.h>
#include "Queue.h"
#include "Queue.c"
int main()
{
    int choice , xSize ;

    Queuex Q;
    createQueue(&Q);
    queueEntry e;
    printf("Enter Your Choice\n");
        printf("1.Enqueue element in Queue 2.Dequeue element from Queue\n"
           "3.Get size of Queue 4.Traverse Queue\n"
           "5.Clear Queue 6.Exit\n");

    do
    {
        scanf("%d",&choice);
        switch(choice)
        {
           case 1:
              if(QueueFull(&Q))
                 printf("Queue is Full\n");
              else
              {
                  printf("enter element to be enqueued: ");
                  scanf("%d",&e);
                  appendQueue(e , &Q);
              }

               break;
            case 2:
                if(QueueEmpty(&Q))
                  printf("Queue is Empty\n");
                else
                {
                   serveQueue(&e , &Q);
                   printf("element is %d\n",e);
                }
               break;
             case 3:
                xSize = QueueSize(&Q);
                printf("Size of Queue now is %d\n",xSize);
               break;
             case 4:
                 if(QueueEmpty(&Q))
                 {
                     printf("Queue is empty\n");
                 }
                 else
                     traverseQueue(&Q);
               break;
             case 5:
                clearQueue(&Q);
                printf("Queue is cleared \n");
               break;
             case 6:
                printf("Program is End\n");
               break;
            default:
                printf("Enter Valid Choice\n");
        }
    }while(choice != 6);

    return 0;
}


