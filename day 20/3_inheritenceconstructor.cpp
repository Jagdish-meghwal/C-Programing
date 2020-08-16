#include<iostream>
#include<string>
#include<queue>
#include<stack>
#include<algorithm>
using namespace std;

class Employee
{                          
    protected:
    int id;
    public:
    Employee()
    {
        cout<<"Base class default constructor \n";
    }
    Employee(int x)
    {
        id=x;
        cout<<"Base class parameterised \n";
    }
};

class Salaried: public Employee
{
    
    public:
      Salaried():Salaried(1) // call salaried constructor
      {
          cout<<"default salaried \n";
      }
       Salaried(int id):Employee(id) // call Employee constructor
      { 
          cout<<" parameterized salaried \n";   
      }
   
};

int main()
{
    Salaried se;
}