#include<iostream>
#include<stdio.h>
#include<typeinfo>

using namespace std;
void func(const char *arr[])
{
    cout<<sizeof(arr)<<endl;
    cout<<typeid(arr).name<<endl;
    for(int i=0;i<4;i++)
    {
        cout<<arr[i]<<endl;
    }

}

int main()
{

    const char *arr[]={"asd","zxcv","qwea","zxs"};


     func(arr);
     cout<<"output"<<endl;

    cout<<"in main "<<sizeof(arr)<<endl;
    cout<<typeid(arr).name<<endl;

    return 0;
}
