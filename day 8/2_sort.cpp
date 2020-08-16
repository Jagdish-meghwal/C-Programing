#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,0};
    int n=sizeof(arr)/sizeof(int);
    sort(arr,arr+n);

    for(int ele:arr)
        cout<<ele<<" ";
    cout<<endl;

    string names[]={"aadilllll","labana","Ayush"};
    sort(names,names+3);

    for(string ele:names)
        cout<<ele<<" ";
    cout<<endl;

    sort(names,names+3,[](string a,string b){ return a > b; } );

    for(string ele:names)
        cout<<ele<<" ";
    cout<<endl;

    sort(names,names+3,[](string a,string b){ return a.size() > b.size(); } );

    for(string ele:names)
        cout<<ele<<" ";
    cout<<endl;

    int *ptr_max=max_element(arr,arr+n);
    cout<<*ptr_max<<endl;


    return 0;
}
