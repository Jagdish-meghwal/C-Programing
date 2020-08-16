#include<stdio.h>
#include<stdlib.h>

int main()
{

    int *ptr;
    ptr=malloc(100);
    printf("%p\n",ptr);

   ptr= ptr+1;
   printf("%p\n",ptr);
   free(ptr);
}
