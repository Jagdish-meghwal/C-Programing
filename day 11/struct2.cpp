#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<stdlib.h>
using namespace std;
   struct student
    {
          char name[20];
          int rollno;
          int marks;
          student()
          {
              name="zxc";
              
          }
         void readStudent()
                    {
                        //cout<<"this "<<this<<endl;
                        cin>>name;
                        cin>>rollno;
                        cin>>marks;
                        
                    } 
        void printStudent()
                    {
                        int marks=100;
                        cout<<endl;
                        cout<<"name :"<<name<<endl;
                        cout<<"roll no :"<<rollno<<endl;
                        cout<<"marks : "<<marks<<endl;
                        cout<<"marks : "<<this->marks<<endl;
                    
                    }
    };
  /*void readStudent(student &s)
    {
        cin>>s.name;
        cin>>s.rollno;
        cin>>s.marks;
        
    }*/
/*
 void printStudent(student s)
    {
        cout<<endl;
        cout<<s.name<<endl;
        cout<<s.rollno<<endl;
        cout<<s.marks<<endl;
    
    } 
 */
int main()
{
    student s1,s2;

    // cout<<"this main "<<this<<endl;
    cout<<"Enter the detail of  student";
    s2.readStudent();
    cout<<" detail of student";
    s2.printStudent();
 
}