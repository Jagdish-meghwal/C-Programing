#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    int num=30;
    string hexDigits="0123456789ABCDEF";
    string s="";
    while(num!=0)
    {
        s+=hexDigits[num%16];
        num/=16;
    }
    cout<<"print the string in the reverse order\n";
    for(int i=s.size()-1;i>=0;i--)
       cout<<s[i];
    cout<<endl;
}