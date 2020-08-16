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
         throw "overflow";
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
    int ch;
    for(;;)
    {
        cout<<"1. Push 2. Pop 3.Exit\n";
        cin>>ch;
        try
        {

            switch(ch)
            {
                case 1: cout<<"enter the element to push : ";
                        cin>>ele;
                        push(ele);
                        break;
                
                case 2:
                        ele=pop();
                        cout<<"element deleted :"<<ele<<endl;
                        break;                
                default: exit(0);
            }
            
        }
        catch(const char *msg)
        {
            cout<<msg<<endl;
        }
        
        
    }
   
}