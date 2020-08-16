#include<iostream>
#include<list>
 using namespace std;

 class student
 {
       static int no_stud; // part of class but not part of every object
       int regno;
       string name;

    public:
       student(string p_name)
       {
           no_stud++;
           regno=no_stud;
           name=p_name;
       }
       void display()
       {
           cout<<"reg num : "<<regno<< ", name : "<<name<<endl;
       }
       static void total_strength()
       {
           cout<<no_stud<<endl;
           //cout<<" static function \n";
       }
        
 };

 int student::no_stud=0;
 
 int main()
 {
     student s("student 1");
     
     s.display();
     
     //s.total_strength();      // incorrect way
     student::total_strength(); //correct way
 }

