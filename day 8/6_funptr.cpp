
#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

int add(int a,int b)
{
    return a+b;
}

int sub(int a,int b)
{
    return a-b;
}
int mul(int a,int b)
{
    return a*b;
}

int divide(int a,int b)
{
    return a/b;
}
int main()
{
    int (*pf)(int,int);
    int a,b,op;
    cout<<"enter two num\n";
    cin>>a>>b;
    cout<<"1. add 2.sub 3.mul 4.divide\n";
    cin>>op;
    switch(op)
    {

    case 1:pf=add;break;
    case 2:pf=sub;break;
    case 3:pf=mul;break;
    case 4:pf=divide;break;

    }
    int res=pf(a,b);
    cout<<res<<endl;

}
