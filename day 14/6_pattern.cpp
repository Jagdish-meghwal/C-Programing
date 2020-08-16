#include <iostream>
#include <algorithm>
#include <list>
using namespace std;
void display(char c,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<c;
    }

}
void pattern(int n)
{
    for(int i=n-1,j=1;i>=0;i--,j+=2)
    {
        display(' ',i);
        display('*',j);
        cout<<endl;
    }
    for(int i=1;i<n;i++)
    {
        display(' ',i);
        display('*',2*(n-i)-1);
        cout<<endl;
    }
}

int main()
{
    pattern(3);

    
}