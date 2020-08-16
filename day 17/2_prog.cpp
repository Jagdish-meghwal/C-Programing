#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>
#include<vector>
using namespace std;

int main()
{
    int num1;
    int num2;
    int num3;
    cin>>num1>>num2>>num3;
    int a=10;
    int l[2]={0};
    int arr[3];
    for(int i=0;i<4;i++)
    {
        if(i%2==0)
           {
               l[0]=num1%a;
               l[1]=num2%a;
               l[2]=num3%a;
               sort(begin(l),end(l));
               arr[i]=l[2];
               num1=num1/10;
               num2=num2/10;
               num3=num3/10;
           }
        else
          {
               l[0]=num1%a;
               l[1]=num2%a;
               l[2]=num3%a;
               sort(begin(l),end(l));
               arr[i]=l[0];

               num1=num1/10;
               num2=num2/10;
               num3=num3/10;
           }
    }
    for(int i=0;i<4;i++)
    {
        cout<<arr[i];
    }
}