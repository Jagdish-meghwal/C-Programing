#include<stdio.h>

int main()
{

    int orderValue,discount,price;
    scanf("%d\n",&orderValue);
    if(orderValue>3000)
      discount=orderValue*0.10;

    if(discount>2000)
      discount=2000;

    price=orderValue-discount;
    printf("offer price=%d",price);
    return 0;
}
