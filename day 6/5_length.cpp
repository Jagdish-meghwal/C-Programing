#include<iostream>
#include<stdio.h>

using namespace std;

 int mystrlen(const char *str)
 {
     int i=0;
     const char *ptr=str;
     while(*str!='\0')
     {
         i++;
         str++;
     }

     cout<<str-ptr;
     return i;
 }
  /*int mystrlen(const char *str)
 {
     if(!*str)
        return 0;
     return 1+mystrlen(str+1);
 }*/
 int main()
 {
     char arr[]="asdf";
     int len=mystrlen(arr);
     cout<<(printf(arr))<<endl;
     cout<<len;
 }
