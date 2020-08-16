#include<iostream>
#include<vector>
using namespace std;
struct student
{
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
    student s2=s1;
    //student &s2=s1;
    return 0;
}