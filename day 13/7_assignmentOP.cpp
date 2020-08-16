#include<iostream>
#include<string>

using namespace std;

class student
{
    string name;
    public:
       student()
         {
            cout<<"default constructor\n";
            name="empty";
         }
        student(const student &s)
         {
            name=s.name;
            cout<<"copy constructor \n";
            
         }
        student(string str)
        {
            name=str;
            cout<<"parameterize constructor\n";
        }
        void display()
        {
            cout<<name<<endl;
        }
        ~student()
        {
            cout<<"Destructor\n";

        }
        student operator=(const student &s) //student & operator=(const student &s)
        {
            cout<<"assignment operator\n";
            name=s.name;
            return *this;
        }
};

int main()
{
    
    student s1{"hello"s};
    student s2{"sikander"s};
    student s3;
     cout<<"----------------------------------------------------\n";
    {
        s3=s1=s2;
    }
    cout<<"----------------------------------------------------\n";
   

}