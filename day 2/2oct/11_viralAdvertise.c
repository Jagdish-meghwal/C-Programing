#include<stdio.h>
int square(int n);
void square1(int n);
int main()
{
    int n=10;
    square(1,2);
    square1(n);
    return 0;
}
int square(int n)
{
    printf("%d\n",n*n);
    return 0;
}
void square1(int n)
{
    printf("%d",n*n);
}
