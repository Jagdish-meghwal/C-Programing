#include<iostream>
#include<vector>
using namespace std;
struct student
{
     student(int x)
    {
        cout<<"this function is called\n";
    }
    student(const student&)
    {
        cout<<"copy constructor\n";
    }
    ~student()
    {
        cout<<"Alvida\n";
    }
   
};
void func(student s)
{

}
int main()
{
    student s1=5;
    //student s2;
    student s3=s1; //invok copy constructor
    func(s1);//invok copy constructor when call pass by value only
    return 0;
}