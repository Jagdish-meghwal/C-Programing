#include <iostream>

using namespace std;

int main()
{
    int a=-5;
    if(a<sizeof(int))
        cout << "Hello world!" << endl; //not execute because a convert in unsigned which will be greater value
    return 0;
}
