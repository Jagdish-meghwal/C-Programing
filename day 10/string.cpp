#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

void display(vector<string> v)
{
    for(auto ele: v)
       cout<<ele<< " | ";
    cout<<endl;

}

int main()
{
    vector <string> names={"dishant1","dishant2","dishant3"};
    names.push_back("nextDishan");
    display(names);
    string key;
    cout<<"enter the name of student to be sent out : ";
    cin<<key;

    auto it =find(begin(names),end(names),key);
    if(it==end(names))
      cout<<" is name ka koi ni he";
    else
    {
      names.erase(it);
    }
    display(names);
    
}