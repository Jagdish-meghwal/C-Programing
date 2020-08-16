#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main()
{
    string s1="friday";
    int len=s1.size();
    int i=0;
    auto start=begin(s1);
    auto end1=end(s1)-1;
    while(start<end1)
    {
        if(*start<*end1)
          *end1=*start;
        else
        {
          *start=*end1;
        }
        start++;
        end1--;
        cout<<s1<<endl;


    }
    cout<<s1<<endl;
}