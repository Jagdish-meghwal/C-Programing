#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

 int mystrcmp(const char *str1,const char *str2)
 {
     while(true)
     {
         if(*str1!='\0' && *str2!='\0')

         {

             if(*str1>*str2)
                return 1;
             else if(*str2>*str1)
                return -1;
             else
             {
                 str1=str1+1;
                 str2=str2+1;
             }
         }
         else
            return 0;
     }


 }

 int main()
 {
     char arr[]="qwe";
     char arr1[]="qwe";
     //int x=mystrlen(arr,arr1);

     cout<<strcmp(arr,arr1);
 }

