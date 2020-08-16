 #include<stdio.h>
 int main()
 {
     char ch;

      scanf("%c",&ch);

        ch =ch^(1<<5);

        printf("%c",ch);
        return 0;


 }
