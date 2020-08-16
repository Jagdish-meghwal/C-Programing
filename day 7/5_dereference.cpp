#include<iostream>
#include<stdio.h>
#include<typeinfo>

using namespace std;
void update_ptr(int *ptr)
{
    (*ptr)++;

}

void update_ref(int &ptr)
{
    ptr++;

}

int main()
{
    int x=5;
    //update_ptr(&x);
    update_ref(x);
    cout<<x;
    return 0;
}

