#include<stdio.h>
#include<conio.h>
int main()
{
    int x=5;
    int *p[5];
    int a[5];
    p[0]=&x;
    printf("First Element is %d \n",*p[0]);
    printf("Size of P: %d\n",sizeof(p));
    printf("&a: %d\t&a+1: %d\n",&a,&a+1);
    printf("&p: %d\t&p+1: %d\n",p,p+1);
    getch();
    return 0;
}
