#include <stdio.h>
#include <stdlib.h>
#include "bits.h"
void func1();
//void func2();//should give warning/error
int main()
{
    extern int x;
    printf("value of x =%d\n",x);
    func1();
    func2(100);
    return 0;
}
