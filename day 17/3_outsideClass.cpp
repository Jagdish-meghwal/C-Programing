#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>
#include<vector>
using namespace std;

class MyString
{
    int a;
    static int s;
    public:
       void display() const;
       static void sfunc() ;
};
int MyString::s;

void MyString::display() const
{
    cout<<"this is display function\n";
    //a=10; //this->a=10;
    s=10;
    MyString m;
    m.a=10; // access through const pointer
}

void MyString::sfunc() 
       {
           cout<<"this is static function\n";
       }

int main()
{
    MyString s1;
    s1.display();

}