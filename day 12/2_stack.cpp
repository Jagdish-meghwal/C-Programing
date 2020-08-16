#include<iostream>
using namespace std;

#define SIZE 5
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
    {
         cout<<"overflow\n";
    }
    
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
    {
         throw "Empty Stack";
    }
    
}

int main()
{

    int ele;
    for(;;)
    {
        
    }
    for(int i=0;i<2;i++)
    {
        cin>>ele;
        push(ele);
    }
    int x;
    try
    {
        for(int i=0;i<4;i++)
          {
             x=pop();
             cout<<x<<endl;
          }

        
    }
    catch(const char *msg)
    {
        cout<<msg<<endl;
    }
    
    
   
}