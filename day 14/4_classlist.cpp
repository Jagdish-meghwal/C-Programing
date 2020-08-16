#include <iostream>
#include <algorithm>
#include <list>
using namespace std;

class  Student
{
public :
    static int no_stud;
    int regno;
    string name;
public : Student(string p_name)
         {
             no_stud++;
             regno = no_stud;
             name = p_name;
         }
        bool operator ==(const Student &s) const
         {
             return name == s.name;
         }

         void display()
         {
             cout << regno <<" "<< name << endl;
         }
         static  void total_strength()
         {
             cout <<"Total number of students : ";
             cout <<no_stud <<endl;
         }
         Student(const Student &s)
         {
             no_stud++;
             regno=s.regno;
             name=s.name;
         }
         ~Student()
         {
             no_stud--;
         }
         
};
int Student::no_stud = 0;

void dispStudList(list<Student> studList)
{
    list<Student>::iterator    it = studList.begin();
    while(it != studList.end() )
    {
        it->display();
        it++;   //it = it + 1
    }
    cout <<"-------------------\n";
}
int main()
{
    list<Student>  studList;
    int ch;
    string name;
    do
    {
        cout <<"Enter the name of student : ";
        cin >> name;
        studList.push_front(Student(name));
        cout <<"Do you want to add more students(0/1): ";
        cin >> ch;
    }while(ch != 0);

    dispStudList(studList);
    Student::total_strength();

    cout <<"Enter the name of student to remove : ";
    cin >> name;

    auto it = find(begin(studList),end(studList),Student(name));
    studList.erase(it);
 
    dispStudList(studList);
    Student::total_strength();

}