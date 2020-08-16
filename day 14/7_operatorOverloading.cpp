#include<iostream>
#include<vector>
#include<algorithm>
 using namespace std;

 class student
 {
       int regno;
       string name;
       string branch;
       int marks;

    public:
       student(int p_regno=-1,string p_name=" ",int p_marks=0,string p_branch="cs") : regno(p_regno),name(p_name),marks(p_marks),branch(p_branch)
       {
           
       }
       bool operator<(const student &s) const
       {
           return name < s.name ; // two value send from sort one store in this and another one in pointer
       }
       bool operator==(const student &s) const
       {
           return branch== s.branch;
       }
       
       void display()
       {
           cout<<"reg num : "<<regno<< ", name : "<<name<<endl;
       }      
 };


 
 int main()
 {
     vector<student> v;
     v.push_back(student(1,"asdf",11));   
     v.push_back(student(2,"fsdf",13));   
     v.push_back(student(3,"zsdf",12,"ec"));   
     v.push_back(student(4,"aqsdf",15,"ec"));

     sort(begin(v),end(v));
     for(auto s: v)
     {
         s.display();
     }
     int n=count(begin(v),end(v),student(0,"",0,"ec"));
     cout<<n;


 }

