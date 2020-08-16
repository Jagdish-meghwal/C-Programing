#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>
#include<vector>
using namespace std;

int main()
{
    int arr[]={1,9,2,0,4,0,5,7};
 
    int n=sizeof(arr)/4;
  
    int *ptr1 ,*ptr2;
    ptr1=begin(arr);
    ptr2=begin(arr)+1;

    while(ptr2!=end(arr))
    {
        if(*ptr1==0 && *ptr2==0)
           {
               cout<<"ptr 1= ptr2\n";
              ptr2=ptr2+1;           
           }
        else if(*ptr1==0)
        {
           swap(*ptr1,*ptr2);
           ptr1=ptr1+1;
           ptr2=ptr2+1;
        }
        else
        {
           ptr1=ptr1+1;
           ptr2=ptr2+1;
        }
        
        
    }
    for(int ele: arr)
    {
        cout<<ele<<endl;
    }
}