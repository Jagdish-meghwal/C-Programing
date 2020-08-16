#include<iostream>
#include<algorithm>
#include<map>
#include<string>
#include<vector>
#include<set>
using namespace std;

int main()
{
    string s[]={"asd", "asd", "qaz", "wsx", "edc", "qaz", "wsx", "qaz", "qaz" ,"qaz","qaz"};
    set <string> set1;
    map <string ,int> freq;
    for(string ele:s)
    {
        set1.insert(ele);
    }
    for(string ele:set1)
    {
        freq[ele]=0;
    }
     for(string ele:s)
    {
        freq[ele]=freq[ele]+1;
       
    }
    for(auto ele: freq)
    {
        cout<<ele.first<< " : "<<ele.second<<endl;

    }
      
}