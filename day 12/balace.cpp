#include<iostream>
#include<math.h>
#include<stack>
using namespace std;
int main()
{
    stack <char> s;
    string expr="{{}}[";
    int ele;
    for(char c:expr)
    {
        if( c=='{' || c=='(' || c=='[' )
           s.push(c);
        else
        {
            if(s.empty()==false && c=='}' && s.top()=='{')
              s.pop();
            else if(s.empty()==false && c==')' && s.top()=='(')
              s.pop();
            else if(s.empty()==false && c==']' && s.top()=='[')
              s.pop();
            else
            {
                cout<<"not balanced";
                return 0;
            }         
       }  
    }
    if(s.empty()==true)
       cout<<"balanced";
    else
       cout<<"not balanced more braces"; 
}