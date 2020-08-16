#include<iostream>
#include<stdio.h>

using namespace std;


int main()
{
    char *arr1="hello";//warning ,declare with const
    char arr2[]="hello";

    // arr1[0]='j';
     arr2[0]='j';
     cout<<"output"<<endl;
     cout<<*arr1<<" "<<arr2<<endl;

    return 0;
}
