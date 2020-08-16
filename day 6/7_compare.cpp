#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

 int mystrcmp(const char *str1,const char *str2)
 {
   while(*str1==*str2 && *str1!='\0')
   {
       str1=str1+1;
       str2=str2+1;
   }
   return *str1-*str2;

 }

 int main()
 {
     char arr[]="qwe";
     char arr1[]="qweasd";
     //int x=mystrlen(arr,arr1);

     cout<<strcmp(arr,arr1);
 }

