 #include<stdio.h>
 int main()
 {
     int ip;
     scanf("%d",&ip);

     if((ip&(1<<7))==0)
        printf("class A");
     else if((ip&(1<<6))==0)
        printf("class B");
     else if((ip&(1<<5))==0)
        printf("class C");
    else
        printf("class D");

        return 0;


 }
