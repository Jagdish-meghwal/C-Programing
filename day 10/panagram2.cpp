#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<string.h>
#include<string.h>
using namespace std;

int main()
{
    int arr[26]={0};
    int flag=0;
    int c=0;

    string s="thequickbrownfoxjumpsoverlazydog";

   
    
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i+1]-s[i]==0)
        {
            flag=1;
            break;

        }
        else 
         c++;

    }
    if(flag==1)
      cout<<"repeat"<<endl;
    else
    {
         cout<<"uniq"<<endl;
    }
    
   
    cout<<s;
  

   return 0;
}