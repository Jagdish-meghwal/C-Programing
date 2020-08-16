#include<iostream>
#include<math.h>
using namespace std;

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
    {
         throw "overflow\n";
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
    string expr="AB+C*D-";
    int ele;
    try
    {
    
    for(char c:expr)
    {
        if(isalpha(c))
        {
            cout<<"Enter the value of "<<c<<" : "<<endl;
            cin>>ele;
            push(ele);
        }
        else
        {
            int right=pop();
            int left=pop();
              switch(c)
                {
                    case '+':push( left + right ); break;
                    case '-':push( left - right );break;
                    case '*':push( left * right );break;
                    case '/':push( left / right );break;
                }
            
        }
    }

    }
    catch(char const * msg)
    {
        cout<<(msg);
    }
    int res=pop();
    cout<<res<<endl;
   
}