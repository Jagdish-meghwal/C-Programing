#include<stdio.h>
#include<stdio.h>
void readArray(int n)
{
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

}
void printArray(int arr[],int n)
{

   // printf("%d",arr);//print pointer
    for(int i = 0; i < n;i++)
    {
        printf("%d\n",arr[i]);
    }
}
int arraySum(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}
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
int linearSearch(int arr[],int n,int x)
{
    int i;
    for(i=0;i<n;i++)
        if(arr[i]==x)
           break;
    return i;
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
    int marks[]={70,75,80};
    int n=sizeof(marks)/sizeof(int);
    printArray(marks,n);
    int sum=arraySum(marks,n);
    int max=maxElement(marks,n);
    printf("max %d\n",max);
    printf("search %d\n",linearSearch(marks,n,70));
    printf("count %d\n",countElement(marks,n,70));
    return 0;

}
