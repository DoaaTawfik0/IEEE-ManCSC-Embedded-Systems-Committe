#define MAX_SIZE 1000
#define stackEntry int
typedef struct stack
{
    int Top;
    stackEntry entry[MAX_SIZE];
}Stack;
void createStack(Stack *ps);
void push(stackEntry e , Stack *ps);
void pop(stackEntry *pe , Stack *ps);
void stackTop(stackEntry *pe , Stack *ps);
void clearStack(Stack *ps);
int stackFull(Stack *ps);
int stackEmpty(Stack *ps);
int stackSize(Stack *ps);
void traverseStack(Stack *ps);
