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
    //student s1("asdf");
    //student s1=student("asdf");
    //student s2=student();

    student s1=student{"asdf"};
    //student s2{};  //uniform initializer int x={5} int arr[]={1,2,3,4,5}   c++ 11
    student s3="jk"s; // c++ 14
    student s4="jk1"s;
    //s3.display();
    //s2.display();
     cout<<"----------------------------------------------------\n";
    {
        s3="zzzz"s;
        

    }
    cout<<"----------------------------------------------------\n";
    cout<<"----------------------------------------------------\n";
    {
        s3=s4;

    }
    cout<<"----------------------------------------------------\n";
    

}