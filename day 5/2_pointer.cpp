#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    char c='a';
    short int si=34;
    int i=12;
    long int li=10000;

    char *ptr_c=&c;
    short int *ptr_si=&si;
    int *ptr_i=&i;
    long int *ptr_li=&li;

    cout<<*ptr_c<<endl;
    cout<<*ptr_si<<endl;
    cout<<*ptr_i<<endl;
    cout<<*ptr_li<<endl;

    cout<<(int*)&c<<endl;
    printf("%p\n",&c);

    cout<<"size of c "<<sizeof(c)<<endl;
    cout<<"size of ptr_c "<<sizeof(ptr_c)<<endl;
    return 0;
}
