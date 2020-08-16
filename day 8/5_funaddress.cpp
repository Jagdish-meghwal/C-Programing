#include<iostream>
#include<stdio.h>
using namespace std;
void func()
{
    int x=5;
    cout<<"func";
}
int func2()
{
    cout<<"func 2";
    //return 0;
}
int add(int a,int b)
{
    return a+b;
}

int sub(int a,int b)
{
    return a-b;
}
int main()
{

    printf("%p",func);

    void (*ptr)()=func ;//function pointer

    ptr();

    int (*ptr2)()=func2;
    ptr2();

    int (*p)(int,int)=add;
    int res=p(1,2);
    cout<<res<<endl;

    p=sub;
    res=p(1,2);
    cout<<res<<endl;

}
