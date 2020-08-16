#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
void count_digits(char *arr,int l)
{
    int d=0;
    for(int i=0;i<l;i++)
    {
        if(*arr>=48 && *arr<=57) //isDigit(arr[i]),isupper(),islower();
        {
            d++;
        }
        arr=arr+1;
    }
    cout<<d<<endl;

}

void count_uppercase(char *arr,int l)
{
    int d=0;
    for(int i=0;i<l;i++)
    {
        if(*arr>=65 && *arr<=90)
        {
            d++;
        }
        arr=arr+1;
    }
    cout<<d<<endl;

}
void count_lowercase(char *arr,int l)
{
    int d=0;
    for(int i=0;i<l;i++)
    {
        if(*arr>=97 && *arr<=122)
        {
            d++;
        }
        arr=arr+1;
    }
    cout<<d;

}
int main()
{

    char arr[]="HelloWorld444";
    int a=strlen(arr);
    count_digits(arr,a);
    count_uppercase(arr,a);
     count_lowercase(arr,a);

}
