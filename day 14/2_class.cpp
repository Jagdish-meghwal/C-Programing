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
        
 };

 int student::no_stud=0;
 int main()
 {
     list <student> s;

     s.push_back( student("student 1"s) );
     s.push_back( student("student 2"s) );
     s.push_back( student("student 3"s) );
     for(student ele : s)
     {
         ele.display();

     }

     list <student> :: iterator it=s.begin();

     while(it != s.end())  // < operator can not be use in list
     {
         it->display();  
         it++;            // it=it+1 can not use in list
     }
     

 }

