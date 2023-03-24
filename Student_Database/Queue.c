#include "Student.h"
//Function to create queue
void createQueue(Queuex *PQ)
{
   PQ->Front = 0;
    PQ->Rear = -1;
    PQ->Size = 0;
}
//function to check if queue is empty
int QueueEmpty(Queuex *PQ)
{
  return !PQ->Size;
}
//function to check if queue is full
int QueueFull(Queuex *PQ)
{
  return (PQ->Size == 50);
}
//Function to Clear queue && it is same like createQueue()function
void clearQueue(Queuex *PQ)
{
    PQ->Front = 0;
    PQ->Rear = -1;
    PQ->Size = 0;
}
