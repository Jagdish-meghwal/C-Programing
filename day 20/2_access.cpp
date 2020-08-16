#include<iostream>
#include<string>
#include<queue>
#include<stack>
#include<algorithm>
using namespace std;

class Employee
{
    private:
        int empPriv;
    protected:
        int empProt;
    public:
        int empPub;
      void BaseFun()
      {

      }
};

class SalariedEmployee : public Employee
{
    int salary;

    public:
      void DerivedFunc()
      {
       empProt=1;
       empPub=2;
       
        
      }
};
class Level3 : public SalariedEmployee
{

    public:
      void Level3Func()
      {
       empProt=1;
       empPub=2;
      }
};

int main()
{
    SalariedEmployee se;
   
    se.DerivedFunc();

    Level3 l3;
    l3.Level3Func();

}