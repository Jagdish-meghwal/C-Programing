#include<stdio.h>
#include<math.h>
int main()
{
    int cat1;
    int cat2;
    int mouse;

    printf("enter mouse position");
    scanf("%d",&mouse);
    printf("enter cat1 position");
    scanf("%d\n",&cat1);
    printf("enter cat2 position");
    scanf("%d\n",&cat2);

    if(abs(mouse-cat1)>abs(mouse-cat2))
        printf("cat2");
    else if(abs(mouse-cat2)>abs(mouse-cat1))
        printf("\ncat 1");
    else
        printf("\nmouse");

    return 0;


}
