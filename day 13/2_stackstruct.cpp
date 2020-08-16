#include<iostream>
using namespace std;

#define SIZE 5

struct MyStack
{
    int buffer[SIZE];
    int topIndex=-1;
};


void push(MyStack &s,int ele)
{
    if(s.topIndex!=SIZE-1)
    {
    s.topIndex++;
    
    s.buffer[s.topIndex]=ele;
    }
    else
    {
         cout<<"overflow\n";
    }
    
}
void pop(MyStack &s)
{
    if(s.topIndex!=-1)
    {
    
    cout<<"element deleted "<<s.buffer[s.topIndex]<<endl;
    // delete(buffer[topIndex]);
    //free(&buffer[topIndex]);
    //cin>>buffer[topIndex]='\0';
    s.topIndex--;
    }
    else
    {
         cout<<"empty\n";
    }
    
}
void display(MyStack &s)
{
    for(int i=s.topIndex;i>=0;i--)
    {
        cout<<s.buffer[i]<<" ";
    }
    cout<<endl;

}

int main()
{


    MyStack s1;
    MyStack s2;
    for(int i=0;i<5;i++)
    {
        if(i%2==0)
         push(s1,i);
        else
        {
            push(s2,i);
        }
        
    }
    
    display(s1);
    cout<<endl;
    display(s2);
}