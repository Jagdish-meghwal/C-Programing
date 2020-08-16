#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>
#include<vector>
using namespace std;

int main()
{
    int arr[]={1,2,3,6,2,-9,5,3,2};
    sort(begin(arr),end(arr));
    for(int ele:arr)
    {
        cout<<ele<<endl;
    }
    int n=sizeof(arr)/4;
    if(arr[0]*arr[1]>arr[n-1]*arr[n-2])
        cout<<arr[0]+arr[1];
    else
    {
        cout<<arr[n-1]+arr[n-2];   
    }
    
}