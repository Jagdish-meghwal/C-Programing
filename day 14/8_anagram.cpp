#include <iostream>
#include <algorithm>
#include <list>
#include<string>
#include<string.h>
using namespace std;

int main()
{
    string arr="asdfasdl";

    int count=0;

    int len=arr.size()/2;

    for(int i=0;i<len;i++)
    {
        int flag=0;
        for(int j=len;j<=arr.size();j++)
        {
            if(arr[i]==arr[j])
              flag=1;
        }
        if(flag==0)
           count++;
    }
    cout<<count;
}