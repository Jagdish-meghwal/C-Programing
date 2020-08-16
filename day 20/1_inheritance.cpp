#include<iostream>
#include<string>
#include<queue>
#include<stack>
#include<algorithm>
using namespace std;

class Employee 
{       
    protected:
    int empId;
    string name;

    public:
      void readEmployee()
      {
          cout<<"Employee Id\n";
          cin>>empId;
          cout<<"Employee name \n";
          cin>>name;
      }
};

class SalariedEmployee : public Employee
{
    int salary;

    public:
      void readSalariedEmployee()
      {
          this->readEmployee();
          cout<<"Enter the salary : ";
          cin>>salary;
      }
      void printSalariedEmployee()
      {
          cout<<"Employee id     : "<<empId<<endl;
          cout<<"Employee name   : "<<name<<endl;
          cout<<"Employee salary : "<<salary<<endl;
      }
};

int main()
{
    SalariedEmployee se;
   
    se.readSalariedEmployee();
    se.printSalariedEmployee();
}