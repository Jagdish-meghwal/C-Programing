#include<stdio.h>
#include<conio.h>

void func(int (*m[4]))
{
    printf("Size of matrix  %d\n",sizeof(m));
    printf("matrix=%u\n",m);
    printf("matrix+1=%u\n",m+1);
}
int main()
{
    int matrix[3][4];
    printf("%d\n",sizeof(matrix));
    func(matrix);
    getch();
    return 0;
}
