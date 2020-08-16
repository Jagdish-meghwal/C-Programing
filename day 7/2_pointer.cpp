#include<iostream>
#include<stdio.h>

using namespace std;


int main()
{
    char *arr1="hello";
    char *arr2="hello";
    char arr3[4][20]={"asd","zxcv","qwea","zxas"};
    const char  *name[]={"asd","zxcv","qwea","zxs"};

    if(*arr1==*arr2)
        printf(" value equal\n");
    else
        printf("value not equal\n");

    if(arr1==arr2)
        printf(" address equal\n");
    else
        printf("address not equal\n");
    cout<<sizeof(arr3)<<endl;
    cout<<sizeof(name);// no of stirng * pointer size=4;

    return 0;
}
