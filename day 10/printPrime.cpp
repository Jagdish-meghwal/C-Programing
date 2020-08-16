#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

bool prime(int n)
{
     
     for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
        return true;
    }
}
int main()
{
    vector <int> s={1,2,3,4,5,6,7,8,9,0};
    auto start=begin(s);
    while((start=find_if(start,end(s),prime))!=end(s))
    {
       cout<<*start<<endl;
       start++;

    }
}