
#include<stdio.h>
#include<stdio.h>

int maxElement(int arr[],int n)
{
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    return max;
}

int countElement(int arr[],int n,int x)
{
    int i;
    int count=0;
    for(i=0;i<n;i++)
        if(arr[i]==x)
           count++;
    return count;
}
int main()
{
    int age;
    printf("enter age");
    scanf("%d",&age);
    int candles[age];
    for(int i=0;i<age;i++)
    {
        scanf("%d",&candles[i]);
    }
    int n=sizeof(candles)/sizeof(int);
    int max=maxElement(candles,n);
    printf("count %d\n",countElement(candles,n,max));
    return 0;

}
