#include<stdio.h>
void isPowOf2(int num)
{
    if(num==0)
      printf("not power of 2");
    else
      printf(num&num-1?"not a power of 2":"power of 2");
}
int main()
{
    int num;
    scanf("%d",&num);
    isPowOf2(num);
    return 0;
}
