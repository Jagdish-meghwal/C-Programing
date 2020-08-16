#include<iostream>

using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int *p1=arr;

    void *vp=arr;
     cout<<p1<< " "<< vp<<endl;
    p1++;
   // vp=vp+1;

    cout<<*p1<< " "<< *(int *)vp;
}