#include<iostream>
#include<algorithm>
#include<ctype.h>
#include<string.h>

using namespace std;

int main()
{
    int a1[]={1,2,3,4,5};
    int a2[4];
    int a3[4]={0};
    for(int i=0;i<5;i++)
    {
        a2[i]=a1[i];
           cout<<a2[i]<<endl;
    }
    memcpy(a3,a2,20);//5*sizeof(int)
    memset(a1,0,20);
    for(int i=0;i<5;i++)
          {

           cout<<a3[i]<<endl;

           }
    for(int i=0;i<5;i++)
          {
             cout<<a1[i]<<endl;
          }

}
