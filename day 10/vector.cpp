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
    
    display(names);
    string key;

    string newStudent;
    cout<<"enter the name of new student  : ";
    cin>>newStudent;
    cout<<"tum kis dishant ke pas betna chahte ho  : ";
    cin>>key;


      names.insert(find(begin(names),end(names),key),newStudent);
    
    display(names);
    
}