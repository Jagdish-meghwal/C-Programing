
#include<iostream>
#include<typeinfo>
#include<string.h>
using namespace std;

void func(int x[])
{
    cout<<typeid(x).name()<<endl;

}
int main()
{
    char arr[]="asdf";
    char *ptr=strchr(arr,'d');
    cout<<*ptr<<endl;
    int index=ptr-arr;

    //cout<<index<<endl;
    return 0;
}
