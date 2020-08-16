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
           if(index>=0 && index < strlen(ptr))
               return ptr[index];
            throw "index error";
       }
};
int main()
{
    MyString s1="sikander";
    MyString s2= "aassdf d";
    s1.display();
    s2.display();
    try
    {
        s1[1]='a';
        cout<<s1[1];
    }
    catch(const char *msg)
    {
        cout<<msg<<endl;
    }
}