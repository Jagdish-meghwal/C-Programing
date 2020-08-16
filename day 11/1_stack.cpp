#include<iostream>

void push(int *ptr,int &top)
{
    if(top!=max)
    {
    top++;
    cin>>ptr[top];
    }
    else
    {
         cout<<"overflow";
    }
    
}
void main()
{
    int stack[10];
    int top=-1;
    int max=10;

    cout<<"enter element to push ";
    push(stack,top);

    

   
}