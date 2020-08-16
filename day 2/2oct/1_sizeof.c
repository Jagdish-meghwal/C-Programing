
#include <stdio.h>

int main()
{
    char a='a';
    char b='b';
    printf("size of a = %d\n",sizeof(a));
    printf("size of b = %d\n",sizeof(b));
    printf("size of a+b = %d\n",sizeof(a+b));//add ascii value first

    short int x=11;
    short int y=12;
    printf("size of x = %d\n",sizeof(x));
    printf("size of y = %d\n",sizeof(y));
    printf("size of x+y = %d\n",sizeof(x+y));

    int m=12;
    int n=13;
    printf("size of m = %d\n",sizeof(m));
    printf("size of n = %d\n",sizeof(n));
    printf("size of m+n = %d\n",sizeof(m+n));


    return 0;
}
