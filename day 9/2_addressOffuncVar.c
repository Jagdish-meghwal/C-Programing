

#include <stdio.h>

int add(int a,int b)
{
	int sum = a + b;
	printf("&a = %p \n",&a);
	printf("&b = %p \n",&b);
	printf("&sum = %p \n",&sum);
	return sum;
}
int sub(int x,int y)
{
	int diff = x - y;
	printf("&x = %p \n",&x);
	printf("&y = %p \n",&y);
	printf("&diff = %p \n",&diff);
	int d=add(x,-y);
	printf("&d= %p \n",&d);

	return diff;
}
int main()
{
	add(4, 9);
	sub(5, 2);
}

