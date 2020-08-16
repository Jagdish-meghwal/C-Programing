#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<stdlib.h>
using namespace std;

void rev(int num)
{
        if(num)
        {
        int temp=num%10;
        cout<<temp;
        rev(num/10);
        }
}
int main()
{
    int num=12340;
    rev(num);
}