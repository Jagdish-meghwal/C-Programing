#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<stdlib.h>
using namespace std;
   struct studentDetail
    {
      
          string name;
          int rollno;
          int marks;
    };

   void readStudent(studentDetail &s)
    {
        cin>>s.name;
        cin>>s.rollno;
        cin>>s.marks;
        
    }

void printStudent(studentDetail s)
    {
        cout<<"name :"<<s.name<<" ";
        cout<<"roll num : "<<s.rollno<<" ";
        cout<<"marks : "<<s.marks<<endl;
    
    } 

int main()
{
    vector <studentDetail> s;
    char ch='y';
    for( ; ch=='y'; )
    {
    studentDetail temp;
    
    cout<<"Enter the detail of  student"<<endl;
    readStudent(temp);
    s.push_back(temp);
   
    cout<<"add more"<<endl;
    cin>>ch;
    }

    sort(begin(s),end(s),[](studentDetail a, studentDetail b){ return a.marks<b.marks; });
     cout<<" detail of student"<<endl;
    for(int i=0;i < s.size() ;i++)
    {
    
     printStudent(s[i]);
    }
}