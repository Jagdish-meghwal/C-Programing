#include<iostream>
#include<string>
#include<vector>
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
    
    student s1=student {"jk"};
    vector<student> v;
   
    cout<<"-----------------------------------------------------\n";
       v.push_back(s1);
    cout<<"------ ----------------------------------------------\n";
       v.push_back(s1);
    cout<<"------ ----------------------------------------------\n";
       v.push_back(s1);
    cout<<"------ ----------------------------------------------\n";
       v.push_back(s1);
    cout<<"------ ----------------------------------------------\n";
       v.push_back(s1);
    cout<<"------ ----------------------------------------------\n";

    vector<student> ::iterator it=v.begin();
    //v.push_back(s1);
    while(it!=v.end())
    {
        it->display();
        it++;
    }

}