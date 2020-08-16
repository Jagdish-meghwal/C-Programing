#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<stdlib.h>
using namespace std;
   struct studentDetail
    {
      //private:
          string name;
          int rollno;
          int marks;
    };
   /* void readStudent(studentDetail *s)
    {
        cin>>s->name;
        cin>>s->rollno;
        cin>>(*s).marks;
        
    }
    */
   void readStudent(studentDetail &s)
    {
        cin>>s.name;
        cin>>s.rollno;
        cin>>s.marks;
        
    }

void printStudent(studentDetail s)
    {
        cout<<s.name<<endl;
        cout<<s.rollno<<endl;
        cout<<s.marks<<endl;
    
    } 

int main()
{
    studentDetail s[3];
    for(int i=0;i<3;i++)
    {
    cout<<"Enter the detail of  student";
    readStudent(s[i]);
    cout<<" detail of student";
    printStudent(s[i]);
    }
}