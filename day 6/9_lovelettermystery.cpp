
#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

 int main()
 {
     char arr[]="asdfasdf";
     char *pStart=arr;
     char *pEnd=arr+strlen(arr)-1;

     while(pStart<pEnd)
     {
         //cout<<*pStart<<" "<<pEnd<<endl;
         if(*pStart!=*pEnd)
         {
             if(*pStart<*pEnd)
                *pEnd=*pStart;
             else
                *pStart=*pEnd;
         }
         else
         {
             pStart++;
             pEnd--;
         }
     }
     cout<<arr;

 }

