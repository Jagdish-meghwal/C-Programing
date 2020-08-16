#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
#define SIZE	5
template <class T> 
struct MyStack
{
    T buffer[SIZE];
    int topIndex = -1;

    void push( T ele)
    {
        if(topIndex == SIZE - 1)
            throw "Stack is Full \n";
        else{
            topIndex = topIndex + 1;
            buffer[topIndex] = ele;
        }
    }
    void display()
    {
        for(int i = topIndex ; i >= 0 ; i--)
            cout<<buffer[i]<<" ";
        cout << endl;
    }

    T pop()
    {
        if(topIndex == -1)
            throw "Empty Stack";
        else{
            T ele = buffer[topIndex];
            topIndex = topIndex - 1;
            return ele;
        }
    }

};

int main()
{
    MyStack  <string>   s1;
    MyStack    <int> s2;
    
    s1.push("Hello\n");
    s2.push(12);
    cout <<"Elements of s1 stack : ";
    s1.display();
    cout <<"Elements of s2 stack : ";
    s2.display();
}
