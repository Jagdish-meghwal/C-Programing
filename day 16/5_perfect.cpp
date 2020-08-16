#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>
#include<vector>
using namespace std;
int isPerfectSquare(int num)
{
    for(int i=0;i<=num;i++)
    {
        if((i*i)==num)
           return 1;
    }
    return 0;

}
int main()
{
    int count=0;

    int a1;
    int a2;
    cin>>a1>>a2;

    for(int i=a1; i<=a2;i++)
    {
         if(isPerfectSquare(i)==1)
            count++;

    }
    cout<<count;
}