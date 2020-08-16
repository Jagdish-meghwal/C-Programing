#include<stdio.h>
#include<stdlib.h>

int *func()
{
    int *arr=malloc(20);
    for(int i=0;i<5;i++)
    {
        scanf("%d ",&arr[i]);

    }
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
    free(ptr1);
    free(ptr2);
    //calloc(10,4);
    //ptr2=NULL;
    for(int i=0;i<5;i++)
    {
        printf("ptr2 =%d\n",ptr2[i]);   //should give error segmentation dump
    }

}
