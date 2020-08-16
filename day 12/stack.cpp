
#define SIZE 10
int buffer[SIZE];
int topIndex=-1;

void push(int ele)
{
    if(topIndex!=SIZE-1)
    {
    topIndex++;
    buffer[topIndex]=ele;
    }
    else
         throw "overflow\n";
}
int pop()
{
    if(topIndex!=-1)
    {
    int x=topIndex;
    topIndex--;
    return buffer[x];
    }
    else
         throw "Empty Stack";
}
bool empty()
{
    return topIndex==-1;
}
int top()
{
    if(topIndex==-1)
      throw "empty stack";
    else
         return buffer[topIndex];
}

