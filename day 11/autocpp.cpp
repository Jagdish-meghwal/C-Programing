#include<iostream>

using namespace std;
int main()
{
    int x=5;
    const int y=3;

    const int *a=&y;

    cout<<&x<<endl<<&y<<endl<<a<<endl;
}