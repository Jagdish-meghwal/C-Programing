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
        arr[t]=1;
    }



    int *ptr=find(begin(arr),end(arr),0);
    if(ptr==end(arr))
        cout<<"panagram\n";
    else 
        cout<<"not panagram\n";


    int n=count(begin(arr),end(arr),1);
    if(n==26)
      cout<<"panagram";
    else
      cout<<"not panagram\n";
    

     return 0;

    
}