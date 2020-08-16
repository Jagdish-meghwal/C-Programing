#include<stdio.h>

int main()
{
    int x=5;
    int w=&x;
    long int y=&x;

    printf("%d\n%p\n%x",w,&x,y);

    int *ptr=&x;

    printf("\npointer=%p",ptr);
    printf("\n dereference =%d",*ptr);
    return 0;
}
