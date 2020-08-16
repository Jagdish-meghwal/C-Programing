#include<stdio.h>
void func()
{
    int x=5;
    static int y=5;

    x++;
    y++;

    printf("x =%d\n",x);
    printf("y =%d\n",y);

}
int main()
{
    func();
    func();
    func();
    return 0;
}

