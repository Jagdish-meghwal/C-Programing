#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

bool IsUpper(char c)
{
    return isupper(c);
}
int main()
{
    string s="SiKaner";
    auto start=begin(s);
    while(true)
    {
        auto res=find_if(start,end(s),IsUpper);
        if(res==end(s))
           break;
       cout<<*res<<endl;
       start=res+1;

    }
}