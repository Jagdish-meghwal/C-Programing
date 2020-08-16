#include<iostream>
#include<vector>
using namespace std;
class student
{
     int regno;
   public:  
     student()
    {
        cout<<"this function is called\n";
    }
    ~student()
    {
        cout<<"Alvida\n";
    }
   
};
int main()
{
    student s1;
    //student s2=5;
    student s3=s1;
   
    return 0;
}