#include<stdio.h>
void func(int x)//receive int in x
{
    printf("received value x=%d\n",x);
    x=x+5;
    printf("updated value inside function x=%d\n",x);
}
int main()
{
    int x=5;

    printf("value of x =%d\n",x);
    func(x);
    printf("value of x after = %d\n",x);
    return 0;
}
