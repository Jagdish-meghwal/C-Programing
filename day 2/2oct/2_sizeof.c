
#include<stdio.h>

int main()
{

    int x=-2;
    if(x<sizeof(int))
        printf("true");
    else
        printf("false");

    return 0;
}
