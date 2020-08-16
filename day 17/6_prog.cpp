#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>
#include<vector>
using namespace std;

class sikander
{
    int a;
    public:
    sikander(int p_a=0): a(p_a)
    {

    }
    sikander & operator ++ ()
    {
        cout<<"this of op"<<endl;
        ++a;
        return *this;

    }
    sikander  operator ++ (int) //for post increament
    {
        cout<<"this of op post "<<endl;
        sikander temp = *this;
        a++;
        return temp;

    }

    friend ostream & operator << (ostream &out,sikander &s);

};
ostream & operator << (ostream &out,sikander &s)
{
     cout<<"-------------------\n";
    cout<<s.a<<endl;
     cout<<"-------------------\n";
    return out;
}

int main()
{
    sikander x=5;
    ++x++;
    
    
    cout<<"-------------------\n";
    cout<<"x : "<<x<<endl;
    cout<<"-------------------\n";
 
}