
#include<stdio.h>

int main()
{

    int num;
    int count0=0,count1=0;
    printf("enter a num\n");
    scanf("%d",&num);

    for(int i=7;i>=0;i--)
    {
        int mask=(1<<i);
        int res=num&mask;
        printf(res?"1":"0");
        mask=mask*2;

        if(res==0)
           count0++;

    }
    while(num!=0)
    {
        count1++;
        num=num&(num-1);
    }
    printf("\n no of 1 :%d",count1);
    printf("\n no of 0 :%d",count0);
    return 0;
}
