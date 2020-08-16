#include<stdio.h>

void displayLine(int n,char c)
{
    int i;
    for(i=1;i<n;i++)
      printf("%c",c);

      printf("\n");
}
int main()
{
    int n,i;
    for(i=1;i<n;i++)
    {
        displayLine(i,'*');
    }
     for(i=1;i<n;i++)
    {
        displayLine(n-i,'*');
    }
    for(i=1;i<n;i++)
    {
          displayLine(n-i,' ');
        displayLine(i,'*');
    }
    return 0;
}
