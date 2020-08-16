#include<iostream>
#include<string>
#include<queue>
#include<stack>
#include<algorithm>
using namespace std;

class Employee
{
    //int empId;
    //string name;
     virtual void func()
     {

     }

};

class SalariedEmployee : public Employee
{
    int salary;
};

int main()
{
    cout<<sizeof(Employee)<<endl;

}