#include<iostream>
 using namespace std;

 class student
 {
     public:
       static int regno;// declaration of static data member //not reserve memory 
       int marks;
 };

 int student::regno;//definition of static data member
 int main()
 {
     student s1,s2;
     
     //s1.regno=90;// should not use
     student::regno=90; // :: use to identifiy static data member
     s1.marks=100;
     
     //s2.regno=1;
     student::regno=1;
     s2.marks=10;
     
     cout<<s1.marks<<endl;
     cout<<s1.regno<<endl;
     cout<<s2.marks<<endl;
     cout<<s2.regno<<endl;
     //cout<<sizeof(student)<<endl;
 }

