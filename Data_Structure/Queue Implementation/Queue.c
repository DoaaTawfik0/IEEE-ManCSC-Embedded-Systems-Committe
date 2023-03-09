//Function to create queue
void createQueue(Queuex *PQ)
{
    PQ->Front = 0;
    PQ->Rear = -1;
    PQ->size = 0;
}
//function to Enqueue new element
void appendQueue(queueEntry element , Queuex *PQ)
{
    PQ->Rear = (PQ->Rear+1)%MAX_SIZE;
    PQ->entry[PQ->Rear] = element;
    PQ->size++;
}
//function to Dequeue first element
void serveQueue(queueEntry *Pe , Queuex *PQ)
{
   *Pe = PQ->entry[PQ->Front];
    PQ->Front = (PQ->Front+1)%MAX_SIZE;
    PQ->size--;
}
//function to check if queue is empty
int QueueEmpty(Queuex *PQ)
{
  return !PQ->size;
}
//function to check if queue is full
int QueueFull(Queuex *PQ)
{
  return (PQ->size == MAX_SIZE);
}
//function to get size of queue
int QueueSize(Queuex *PQ)
{
  return PQ->size;
}
//function to print all elements in Queue
void traverseQueue(Queuex *PQ)
{
    int i  , x;
    for(i = PQ->Front ; i <= PQ->Rear ; i++)
    {
        x = PQ->entry[i];
        printf("e = %d\n",x);
    }
}
//Function to Clear queue && it is same like createQueue()function
void clearQueue(Queuex *PQ)
{
    PQ->Front = 0;
    PQ->Rear = -1;
    PQ->size = 0;
}
