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


    cout<<ptr<<endl;
        cout<<*ptr+1<<" "<<ptr+1<<endl;
        ptr=ptr+1;
        cout<<*ptr-1<<" "<<ptr-1<<endl;






    return 0;
}
