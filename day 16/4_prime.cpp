#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>
#include<vector>
using namespace std;

int isprime(int num)
{
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
           return 0;
    }
    return 1;
}
int main()
{
    int a1;
    int a2;

    cout<<"enter range : \n";
    cin>>a1>>a2;

    for(int i=a1;i<=a2;i++)
    {
         if(isprime(i)==1)
            {
                cout<<i;
                break;
            }
    }
     for(int i=a2;i>a1;i--)
    {
         if(isprime(i)==1)
            {
                cout<<i;
                break;
            }
    }

}