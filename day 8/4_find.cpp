#include<iostream>
#include<algorithm>
#include<string>
#include<typeinfo>



using namespace std;

int main()
{

    int arr[]={1,2,1,3,4,5,2,4,6,4,5};
    int key=1;
    int *ptr=find(begin(arr),end(arr),key);
    if(ptr==end(arr))
        cout<<"Not found\n";
    else
        cout<<"mil gya at "<<(ptr-begin(arr));

    int n=count(begin(arr),end(arr),key);

    return 0;
}
