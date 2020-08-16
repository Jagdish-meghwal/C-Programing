#include<iostream>
#include<map>

using namespace std;

int main()
{
    int arr[]={10,20,20,10,10,30,50,10,20};
    map < int ,int > socks;

    for(int ele:arr)
       socks[ele]=socks[ele]+1;
    
    int pairs=0;
    for(auto ele: socks)
    {
        cout<<ele.first<< " : "<<ele.second<<endl;
        pairs+=ele.second/2;
    }
    cout<<pairs<<endl;

}