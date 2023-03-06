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
