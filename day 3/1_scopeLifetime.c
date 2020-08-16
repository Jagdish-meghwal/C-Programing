#include<stdio.h>
//void func(); can take any no of argument
void func(void);//function does not take any argument
int a=2;
int main()
{
    printf("inside main a =%d\n",a);
    func();
    return 0;
}
void func()
{
    int a=3;
    int x=5;
    printf("inside func x =%d\na=%d\n",x,a);
    if(1)
    {
        int x=1;
        printf("inside if x =%d",x);

    }
}
