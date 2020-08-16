#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n;
	int *const ptr = (int *)malloc(n * sizeof(int) );

	for(int i = 0 ; i < 5 ; i++)
		printf(" %d", ptr[i]);	//
	printf("\n");

	int *const ptr2 = (int *)calloc(5, sizeof(int) );

	for(int i = 0 ; i < 5 ; i++)
		printf(" %d", ptr2[i]);		//0 0 0 0 0
	printf("\n");

	free(ptr);
	free(ptr2);
}
