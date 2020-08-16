
#include<stdio.h>

int main()
{
    int x=0x12345;

    char *ptr_c=&x;  //create problem when dereference
    short *ptr_si=&x;//create problem when dereference
    int *ptr_i=&x;

    printf("\n ptr_c =%p \n ptr_si=%p \nptr_i=%p " ,ptr_c,ptr_si,ptr_i);
    printf("\n *ptr_c =%d \n *ptr_si=%d \n*ptr_i=%d " ,*ptr_c,*ptr_si,*ptr_i);
    return 0;
}
