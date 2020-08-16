#include<iostream>
#include<typeinfo>
using namespace std;

void func(int x[])
{
    cout<<typeid(x).name()<<endl;

}
int main()
{
    int arr[5]={1,2,3,4,5};

    int *ptr =arr;

    for(int i=0;i<5;i++)
    {
        cout<<*ptr+i<<endl;
        cout<<ptr[i]<<endl;

    }
    func(arr);
    return 0;
}
