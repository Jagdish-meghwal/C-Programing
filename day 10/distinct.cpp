#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main()
{
    int arr[26]={0};
    int flag=0;

    string s="thequickbrownfoxjumpsoverlazydog";

    int t;
    for(int i=0;i<s.size();i++)
    {
        t=s[i]-'a';
        arr[t]++;
    }
    for(int i=0;i<26;i++)
    {
        if(s[i]>1)
          {
              cout<<"not uniq";
              flag=1;
              break;
          }
    }
    if(flag==0)
      cout<<"uniq";
    

     return 0;

    
}