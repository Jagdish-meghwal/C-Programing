#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    vector <int> v;
    int ele;

    v.push_back(12);
    v.push_back(1);
    v.push_back(3);
    v.push_back(112);
    v.push_back(122);

    vector <int> :: iterator it=v.begin();
    //auto it=find(v.begin(),v.end(),2);
    for(;it<v.end();it++)
        cout<<*it <<endl;

    cout<<endl;

    it=find(v.begin(),v.end(),1);
    v.insert(it,2);

    for(it=v.begin();it<v.end();it++)
          cout<<*it <<endl;
}
