#include<iostream>
#include<algorithm>
#include<map>
#include<string>
#include<set>
#include<vector>
using namespace std;

int main()
{
    string s[]={"cat", "mouse", "cat", "lion", "deer", "tiger", "cat", "mouse", "lion" ,"lion","tiger"};
    set <string> set1;
    map <string ,int> freq;
   
     for(string ele:s)
    {
        freq[ele]=freq[ele]+1;
       
    }
  
    for(auto ele: freq)
    {
        cout<<ele.first<< " : "<<ele.second<<endl;
         
    }
   
}