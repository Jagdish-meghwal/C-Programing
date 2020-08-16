
#include<iostream>
#include<vector>
#include<stdlib.h>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    vector <int> v;
    int ele;
    for( ; ; )
    {
        cout<<"Enter element : ";
        cin>>ele;
        if(ele == 0)
            break;
        v.push_back( ele );

        cout<<"Size of vector : "<<v.size()<<" "<<sizeof(v)<<" "<<v.capacity()<<endl;
    }
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<endl;
    //cout<<&v[0];
    //cout<<&v[1];
    //cout<<begin(v);
    sort(v.begin(),v.end());
    sort(begin(v),end(v));
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<endl;
}
