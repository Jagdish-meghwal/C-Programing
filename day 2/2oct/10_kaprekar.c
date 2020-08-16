#include<stdio.h>
#include<math.h>

int square(int num)
{
    return num*num;
}
int splite(int n)
{


}
int countDigits(int num)
{

    int digits=0;
    while(num!=0)
    {
        digits=digits+1;
        num=num/10;
    }
    return digits;
}
int myPower(int x, int y)
{
    return pow(x,y);
}
int main()
{
    int num;
    scanf("%d",&num);
    int sq=square(num);
    int digits=countDigits(num);
    int power=myPower(num,(digits+1));
    int divide=myPower(10,(digits+1)/2);
    int left=power/divide;
    int right=power%divide;

    printf("%d\n%d\n%d",left,right,divide);


}
