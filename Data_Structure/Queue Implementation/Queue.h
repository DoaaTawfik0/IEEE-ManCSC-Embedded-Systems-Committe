
#define MAX_SIZE 1000
#define queueEntry int
typedef struct Queue
{
    int Front;
    int Rear;
    int size;
    queueEntry entry[MAX_SIZE];
}Queuex;
void createQueue(Queuex *PQ);
void serveQueue(queueEntry *Pe , Queuex *PQ);
void appendQueue(queueEntry element , Queuex *PQ);
void traverseQueue(Queuex *PQ);
int QueueFull(Queuex *PQ);
int QueueEmpty(Queuex *PQ);
void clearQueue(Queuex *PQ);
int QueueSize(Queuex *PQ);
