#include <iostream>
#include <algorithm>
#include <set>
#include<string>
#include<string.h>
using namespace std;

int main()
{
    string s="the brown quick fox jumps over lazy dog ";

    set < char >  set1;
    for(char c:s)
    {
        if(isalpha(c))
            set1.insert(c);  
    }
    cout<<set1.size()<<endl;
    
}