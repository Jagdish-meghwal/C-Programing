#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int * mymax_element(int *pstart, int *pend)
{
    int *pLarge=pstart;
    while(pstart<pend)
    {

        if(*pstart>*pLarge)
            pLarge=pstart;
           pstart=pstart+1;
    }
    return pLarge;
}
int main()
{
    int arr[]={1,3,2,4,5,4,3,2,1};
    int n=sizeof(arr)/sizeof(int);

    int *ptr1=mymax_element(arr,arr+n);
    cout<<*ptr1<<endl;

}
