#include<iostream>
using namespace std;

int main()
{

    //int *ptr1=(int *)malloc(sizeof(int));

    int *ptr1=new int;
    int *ptr2=new int[5];
    //free(ptr1);
    delete ptr1;
    delete [] ptr2;
}
