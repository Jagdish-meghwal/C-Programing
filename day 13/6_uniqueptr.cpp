#include<iostream>
#include<string>
#include<memory>

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
            cout<<"copy constructor constructor\n";
            
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
        void operator=(const student &s)
        {
            cout<<"assignment operator\n";
            name=s.name;
        }
};

int main()
{
    unique_ptr <student> s(new student ("sikander")); // smart pointer 
    s->display();
    cout<<"-------------------------------------------";
    student *ptr=new student("zxcv"); 
    ptr->display();

}