#include<iostream>
using namespace std;
int main()
{
	int x=-5;
	if(x<sizeof(int))
        cout<<"x is less than size of int";
    else
        cout<<"x is greater than size of int ";
	return 0;
}
