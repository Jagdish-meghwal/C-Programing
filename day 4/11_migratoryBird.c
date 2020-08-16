#include<stdio.h>
int maxElement(int arr[],int n)
{
    int max=0;
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    return max;
}
int linearSearch(int arr[],int n,int x)
{
    int i;
    for(i=0;i<n;i++)
        if(arr[i]==x)
           return i;
    return -1;
}
int main()
{
    int n;
    printf("enter no of birds\n");
    scanf("%d",&n);
    int birds[n];
    int count[100]={0};
    for(int i=0;i<n;i++)
    {
        scanf("%d",&birds[i]);
        count[birds[i]]++;

    }

    printf("%d",linearSearch(count,n,maxElement(count,n)));
    return 0;

}
