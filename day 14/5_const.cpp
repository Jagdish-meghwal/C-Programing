#include <iostream>
#include <algorithm>
#include <list>
using namespace std;

class Employee
{
    const int empId;
    string name;
    public:
      Employee(int p_id,string p_name):  empId(p_id) // constructor initializer_list //only use for constructor
      {
         
          name=p_name;
      }
      void display()const // const member function 
      {
          //name="hello"; //const member function
          cout<<empId << " " <<name<<endl;
      }
      void print () 
      {
          
          cout<<name;
      }
      ~Employee() //const  // const can not use for constructor destructor and static member function
      {

      }
};

int main()
{
    Employee e1 { 1, " asd " };
   const  Employee e2 { 2, " asd 2 " };
   // Employee e3=e1; // invoking copy constructor

    //e1=e2; //not work bcause of const data member; //invoking assignment operation
    e1.display();
    e1.print();

    e2.display();
    // e2.print(); //can not invoke because print is not const function


}