#include<stdio.h>
void bin(int num)
{
    if(num)
    {
        bin(num/2);
        printf("%d",num%2);
    }
}
int main()
{
    int b;
    scanf("%d",&b);
    bin(b);
    return 0;
}
