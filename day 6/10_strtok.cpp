
#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
    char arr[]="hello ! how are you ";
    char *ptr;
    ptr=strtok(arr," ");
    int i=1;
    while(ptr!=NULL)
    {
        cout<<i<<" "<<ptr<<endl;
        ptr=strtok(NULL," ");
        i++;
    }
}
