#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
    /*int a=5,b=2,c=3,d=4,res;
    res=++a||++b;*/

    int a=1;
    a++&&printf("%d",a);// && act as sequence point so it not give warning
    ++a+printf("%d",a);// sequence point warning
    return 0;
}
