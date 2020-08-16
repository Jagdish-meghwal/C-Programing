#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>
#include<vector>
using namespace std;

int main()
{
    string s1="ASDASD!@asdfswsc!@@#@#@#";
    
    vector <char> v;
    
    for(int i=0;i<s1.size();i++)
    {
        if(isalpha(s1[i]))
             v.push_back(s1[i]);
    }
    for(char c:v)
    {
        cout<<c;
    }
}