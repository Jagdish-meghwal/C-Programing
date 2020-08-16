
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
    char arr[]="asdf asdf asdf";
    char *ptr;

    int index=0;

    while((ptr=strchr(arr+index,'a'))!=NULL)
    {
        index=ptr-arr;
        cout<<index<<endl;
        index=index+1;
    }
    index=0;
    while((ptr=strstr(arr+index,"df"))!=NULL)
    {
        index=ptr-arr;
        cout<<index<<endl;
        index=index+1;
    }


    return 0;
}
