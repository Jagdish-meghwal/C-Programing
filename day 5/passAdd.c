#include<stdio.h>
void func(int *p)
{
    printf("&p in func=%p\n",&p);
    printf("received=%d\n",p);
    printf("*p=%d\n",*p);
    *p=*p+5;
}
int main()
{

    int x=5;
    func(x);
    return 0;
}
