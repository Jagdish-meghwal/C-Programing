#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<set>
using namespace std;

int main()
{
    vector<string>lanet={"kali","vini","saurabh","jyoti","lakshita"};
    vector<string>tcs={"lakshita","arush","vikram","vini"};

    
    set <string> placed_lanet;
    set <string> placed_tcs;

    for(string s:lanet)
        placed_lanet.insert(s);
    
    for(string s:tcs)
        placed_tcs.insert(s);
    
    vector<string> common(9);

    auto it=set_union(placed_lanet.begin(),placed_lanet.end(),placed_tcs.begin(),placed_tcs.end(),common.begin());

    common.resize(it-common.begin());

    for(string name:common)
       cout<<name<<endl;
    
    
    

}