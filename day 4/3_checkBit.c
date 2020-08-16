#include<stdio.h>

int main()
{
    int mask=1;
    int num;
    int count0=0,count1=0;
    printf("enter a num\n");
    scanf("%d",&num);
    for(int i=0;i<8;i++)
    {
        int res=num&mask;
        printf(res?"1":"0");
        mask=mask*2;
        if(res==1)
         count1++;
        else
         count0++;

    }
    printf("\n no of 1 :%d",count1);
    printf("\n no of 0 :%d",count0);
    return 0;
}
