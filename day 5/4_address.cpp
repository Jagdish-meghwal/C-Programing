#include<stdio.h>
#include<iostream>
using namespace std;


int main()
{
    int arr[5]={1,2,3,4,5};
    int *ptr=arr;

    cout<<*ptr<<endl;

    ptr=ptr+1;

    cout<<*ptr<<endl;

    ptr=ptr+3;
    cout<<*ptr<<endl;



    cout<<&arr<<endl;//address of entire array
    cout<<arr<<endl;//address of first element of arr
    return 0;
}
