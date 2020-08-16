#include<iostream>
#include<algorithm>
#include<string.h>
#include<stdio.h>
using namespace std;
int count_(char str[],int (*pf)(int))
{
    int count=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(pf(str[i])) //isDigit(arr[i]),isupper(),islower();
        {
            count++;
        }
    }
    return count;

}

int main()
{

    char arr[]="HelloWorld444";
    int digits=count_(arr,isdigit);
    printf("digit %d\n",digits);
     int upper=count_(arr,isupper);
    printf("uppercase %d\n",upper);
     int lower=count_(arr,islower);
    printf("lowercase %d\n",lower);


}
