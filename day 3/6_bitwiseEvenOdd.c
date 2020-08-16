#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,a;
    printf("enter a num");
    scanf("%d",&x);
    a=x&1;
    if(a==0)
       printf("even");
    else
        printf("odd");
    return 0;
}
