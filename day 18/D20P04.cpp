#include<stdio.h>
#include<conio.h>
#include<map>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    map<string,string> placed;
    placed.insert(pair<string,string>("yash","lanet"));
    placed["Lakshita"]="tcs";
    placed["batul"]="arguesoft";
    placed["riya"]="tcs";
    placed["batul"]="metacube";
    string name;
    cout<<"Enter Name: ";
    cin>>name;
    cout<<placed[name];
    map<string,string>::iterator it=placed.begin();
    while(it!=placed.end())
    {
        cout<<it->first<<" : "<<it->second<<endl;
        it++;
    }
    getch();
    return 0;
}
