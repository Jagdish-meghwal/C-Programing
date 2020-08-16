#include<iostream>
#include<string>
#include<queue>
#include<stack>
#include<algorithm>
using namespace std;

class Bird
{
  public:
    
     virtual void birdFunc()
     {
         cout<<"bird function\n";
     }
};

class Eagle:public Bird 
{
    public:
     
        void birdFunc() override
        {
            cout<<"eagle function\n";
        }

   
};

int main()
{
   Bird *ptr;
   int ch;
   cin>>ch;
  
   if(ch==1)
     ptr=new Bird();
    else
     ptr=new Eagle();
    
   ptr->birdFunc(); 
   //ptr->eagleFunc();

}