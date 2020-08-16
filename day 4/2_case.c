#include<stdio.h>

int main()
{
    char a;
    scanf("%c",&a);
    printf(((a&32)==0)?"upper case":"lowercase");
    return 0;
}
