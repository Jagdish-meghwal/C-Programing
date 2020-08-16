#include <string>
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;
class student
{
        string name;
    public :
        student()
         {
    
               name = "EMPTY";
         }
         student(const student &s)
         {
                 name = s.name;
         }
         student(string p_name)
         {
    
            name = p_name;
         }
         ~student()
         {
          //   cout << "Destructor \n";
         }
         student & operator =(const student &s)
         {
        
            name = s.name;
            return *this;
         }
         bool operator ==(const student &s) const 
         {
             return name == s.name;
         }
         void display()
         {
            cout << name << endl;
         }
};
int main()
{
    student s1 = student("asdf");

    list<student> v;
    cout <<"------------------\n";
    v.push_back(s1);
    cout <<"------------------\n";
    v.push_back("azq"s);
    cout <<"------------------\n";
    v.push_back("qaq"s);
    cout <<"------------------\n";
    v.push_front("azaa"s);
    cout <<"------------------\n";
    v.push_front("aazz"s);
    cout <<"------------------\n";

    v.insert(find(begin(v), end(v),"asdf"s) , "azaa"s);

    list<student>::iterator it = v.begin();

    while(it != v.end())
    {
        it->display();
        it++;
    }
    cout <<"------------------\n";
    cout <<"End of Program \n";
}
