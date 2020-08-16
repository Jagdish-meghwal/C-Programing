#include<iostream>
#include<string>

using namespace std;
int main()
{
   string x;
   string y;

   cout<<"enter first name: \n";
   getline(cin,x);
   cout<<"\nenter name\n";
   cin>>y;

   cout<<x<<endl;
   cout<<y<<endl;

   if(x==y)
    cout<<"equal\n";
   else if(x>y)
    cout<<"x greater";
   else
    cout<<"y greater";



    return 0;
}
