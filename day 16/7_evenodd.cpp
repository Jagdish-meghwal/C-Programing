#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<stdlib.h>
using namespace std;

int main()
{
    int a1[]={1,2,3,4,5,6,7,8,9};
    int sum1=0;
    int sum2=0;
    for(int i=0;i<9;i++)
    {
        int num=a1[i];
        if(num&1)
           sum1=sum1+a1[i];
        else
           sum2=sum2+a1[i];
    }
    cout<<" odd : "<<sum1<<" even : "<<sum2;
}