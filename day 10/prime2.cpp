#include<iostream>
#include<vector>
#include<string>

using namespace std;
bool isPrime(int num)
{
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            return false;
        }
        return true;
    }
}
int main()
{
    vector<int> v={1,2,3,4};
    int res=count_if(begin(v),end(v),isPrime);
    cout<<res;
}