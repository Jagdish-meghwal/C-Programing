#include<stdio.h>
#include<stdlib.h>

int *func()
{
    static int arr[5]={1,2,3,4,5};
    scanf("a= %p\n",arr);
    return arr;
}
int main()
{
    int *ptr1=func();
    int *ptr2=func();
    printf("ptr1 =%d\n",ptr1);
    for(int i=0;i<5;i++)
    {
        printf("ptr1 =%d\n",ptr1[i]);
    }
     for(int i=0;i<5;i++)
    {
        printf("ptr2 =%d\n",ptr2[i]);
    }
}
