#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>
#include<string.h>
#include<vector>
using namespace std;

class MyString 
{
    char *ptr;
    public:
       MyString(const char *str) 
       {
           //ptr=(char*)(str);
           // ptr=const_cast<char *>(str);
           ptr=new char[strlen(str)+1];
           strcpy(ptr,str);

       }
       void display()
       {
           cout<<ptr<<endl;
       }
       char &operator [](int index)
       {
               return ptr[index];
       }
       MyString(const MyString &x)
       {
           ptr=new char[strlen(x.ptr)+1];
           strcpy(ptr,x.ptr);
 

       }
};
int main()
{

    MyString s1="sikander";
    MyString s2= s1;// call copy constructor

    s2=s1;// call assignment operator

    s1.display();
    s2.display(); 

    s1[0]='m';

    s1.display();
    s2.display();        

}