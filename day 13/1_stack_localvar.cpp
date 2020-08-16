#include<iostream>
using namespace std;

#define SIZE 5


void push(int buffer[],int &topIndex,int ele)
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
void pop(int buffer[],int &topIndex)
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
void display(int buffer[],int &topIndex)
{
    for(int i=topIndex;i>=0;i--)
    {
        cout<<buffer[i]<<" ";
    }
    cout<<endl;

}

int main()
{
    int buffer1[SIZE];
    int topIndex1=-1;
    int buffer2[SIZE];
    int topIndex2=-1;

    for(int i=0;i<5;i++)
    {
        if(i%2==0)
         push(buffer1,topIndex1,i);
        else
        {
            push(buffer2,topIndex2,i);
        }
        
    }
    
    display(buffer1,topIndex1);
    cout<<endl;
    display(buffer2,topIndex2);
}