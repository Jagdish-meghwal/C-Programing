
#include<stdio.h>
#include<stdio.h>


int maxCountElement(int arr[],int n)
{
    int i;
    int count=1;
    int max=arr[0];
    for(i=1;i<n;i++)
        {
            if(arr[i]>max)
                {
                    max=arr[i];
                    count=0#;
                }
            if(arr[i]==max)
                count++;
        }

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

    printf("count %d\n",maxCountElement(candles,n));
    return 0;

}

