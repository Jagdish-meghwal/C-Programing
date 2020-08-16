#include<iostream>
#include<stdio.h>
#include<typeinfo>
#include<string>//c++ library
using namespace std;
void myswap(int &a,int &b)
{
    a=a^b;
    b=a^b;
    a=a^b;

}



int main()
{
    int x=5;
    int y=10;
    int a=1;
    int b=2;
    myswap(x,y);//myswap(x,x) faulty statement

    cout<<x<<endl;
    cout<<y<<endl;

    swap(a,b);

    cout<<a<<endl;
    cout<<b<<endl;

    return 0;
}

