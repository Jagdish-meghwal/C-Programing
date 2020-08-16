#include <iostream>
#include <string>

using namespace std;

class DataStructure
{
    public : 
    virtual void push()=0; // pure virtual function
    DataStructure (){ cout<<"datastructure constructor\n";}
    virtual ~DataStructure (){ cout<<"datastructure distructor\n";}
    


};

class MyQueue : public DataStructure
{
public :
    MyQueue()
    {
        cout<<"queue constructor\n";
    }
    ~MyQueue()
    {
        cout<<"queue distructor \n";
    } 
    void push()
    {
        cout <<"Queue Push \n";
    }
    void pop()
    {
        cout <<"Queue Pop \n";
    }
};
class MyStack : public DataStructure
{
public :
    MyStack()
    {
        cout<<"stack constructor\n";
    }
    ~MyStack()
    {
        cout<<"stack distructor \n";
    } 
    void push(){
        cout <<"Stack Push \n";}
    void pop()
    {
        cout <<"Stack Pop \n";
    }
};
int main()
{
    DataStructure *ptr =new MyQueue;

    delete ptr;
    
}