#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

 int palimdrom(const char *str1,const char *str2)
 {


 }

 int main()
 {
     char arr[]="qwewq";
     char *pStart=arr;
     char *pEnd=arr+strlen(arr)-1;

     while(pStart<pEnd)
     {
         cout<<*pStart<<" "<<pEnd<<endl;
         if(*pStart!=*pEnd)
         {
             cout<<"not a palindrome"<<endl;
             return 0;
         }
         else
         {
             pStart++;
             pEnd--;
         }
     }
     cout<<"palindrome";

 }

