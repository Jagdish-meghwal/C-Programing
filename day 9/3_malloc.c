#include<stdlib.h>
#include<stdio.h>

int main()
{

    int *ptr=malloc(9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999);
    if(ptr==NULL)
        printf("unable to allocate");
    else
        printf("memory allocated at %p ",ptr );

    free(ptr);
}


