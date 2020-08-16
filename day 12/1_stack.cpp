#include<iostream>
using namespace std;

#define SIZE 5
int buffer[SIZE];//can not use more than one stack if it is global ( use local )
int topIndex=-1;

void push()
{
    if(topIndex!=SIZE-1)
    {
    topIndex++;
    cout<<"enter element to push ";
    cin>>buffer[topIndex];
    }
    else
    {
         cout<<"overflow\n";
    }
    
}
void pop()
{
    if(topIndex!=-1)
    {
    
    cout<<"element deleted "<<buffer[topIndex]<<endl;
    // delete(buffer[topIndex]);
    //free(&buffer[topIndex]);
    //cin>>buffer[topIndex]='\0';
    topIndex--;
    }
    else
    {
         cout<<"empty\n";
    }
    
}

int main()
{

    push();
    push();
    push();
    pop();
    pop();
    pop();
    for(int i=0;i<3;i++)
    {
        cout<<buffer[i]<<endl;
    }

   
}