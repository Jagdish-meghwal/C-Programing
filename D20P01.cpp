#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
typedef string data_d;
struct Node
{
public:
    data_d data;
    Node *link;
    Node(data_d d)
    {
        data=d;
        link=nullptr;
    }
    Node()
    {
        link=nullptr;
    }
};
class MyList
{
    Node *pstart=nullptr;
public:
    void insertFront(data_d d);
    void insertRear(data_d d);
    void deleteFront();
    void deleteRear();
    void display();
    void reDisplay();
    int mycount();
    void attachFront(Node *pNewNode);
    Node* detachFront();
    void attachOrder(Node *pNewNode);
};
void MyList::insertFront(data_d d)
{
    Node *t=new Node(d);
    t->link=pstart;
    pstart=t;
}
void MyList::insertRear(data_d d)
{
    if(pstart==nullptr)                     //Attached the node
        pstart=new Node(d);
    else
    {
         Node *pNewNode=new Node(d);           //Create and initialize a node
         Node *pTraverse=pstart;
         while(pTraverse->link!=nullptr)
            pTraverse = pTraverse->link;
         pTraverse->link = pNewNode;
    }
}
void MyList::deleteFront()
{
     if(pstart==nullptr)
        cout<<"List is already delete"<<endl;
    else
    {
        Node *pNewNode=pstart;
        pstart=pstart->link;
        delete(pNewNode);
    }
}
void MyList::deleteRear()
{
    if(pstart==nullptr)
        cout<<"List is already delete"<<endl;
    else if(pstart->link==nullptr)
    {
        delete(pstart);
        pstart=nullptr;
    }
     else
     {
        Node *pTraverse=pstart;
        Node *pNewNode;
        while(pTraverse->link->link!=nullptr)
            pTraverse = pTraverse->link;
        pNewNode=pTraverse->link;
        pTraverse->link=nullptr;
        delete(pNewNode);
     }
}
void MyList::display()
{
    if(pstart!=nullptr)
    {
        cout<<"\t";
        Node *pTraverse=pstart;
        while(pTraverse->link!=nullptr)
        {
            cout<<pTraverse->data<<"--> ";
            pTraverse = pTraverse->link;
        }
        cout<<pTraverse->data<<endl;
    }
    else
        cout<<"List is Empty"<<endl;
}
int MyList::mycount()
{
    if(pstart==nullptr)
        return 0;
    else
    {
        int ct=0;
        Node *temp=pstart;
        while(temp!=nullptr)
        {
            ct++;
            temp=temp->link;
        }
        return ct;
    }
}
void MyList::reDisplay()
{

    int n=mycount();
    data_d S[n];
    if(pstart==nullptr)
        cout<<"Empty List"<<endl;
    else
    {

        int ct=0;
        Node *temp=pstart;
        while(temp!=nullptr)
        {
            S[ct]=temp->data;
            temp=temp->link;
            ct++;
        }
        cout<<"\t";
        for(int i=n-1;i>0;i--)
        {
            cout<<S[i]<<"<--";
        }
        cout<<S[0]<<endl;
    }
}
void MyList::attachFront(Node *pNewNode)
{
    pNewNode->link=pstart;
    pstart=pNewNode;
}
Node* MyList::detachFront()
{
    if(pstart==nullptr)
        throw 0;
    Node *temp=pstart;
    pstart=pstart->link;
    return temp;
}
void MyList::attachOrder(Node *pNewNode)
{
    if(pstart==nullptr)
        pstart=pNewNode;
    else if(pNewNode->data<pstart->data)
        attachFront(pNewNode);
    else
    {
        Node *t=pstart;
        Node *tp;
        while(t!=nullptr&&pNewNode->data>t->data)
        {
             tp=t;
             t=t->link;
        }
        pNewNode->link=tp->link;
        tp->link=pNewNode;
    }
}
int main()
{
    int a=3,b=2,c,d;
    c=a,b;
    d=(a,b);    //$ |-| U B |-| /-\ |\/|    J /-\ R () |_ I
    int e=5>>1;
    cout<<c<<endl<<d<<endl<<e<<endl;
    MyList placed,notplaced;
    placed.insertRear("Aditya");
    placed.insertRear("Amar");
    placed.insertRear("KP");
    cout<<"Placed Student :";
    placed.reDisplay();
    Node *S=new Node("Bhavyya");
    placed.attachOrder(S);
     cout<<"Placed Student :";
    placed.display();
    notplaced.insertFront("Anarkali");
    notplaced.insertFront("Riya");
    notplaced.insertFront("Arwa");
    notplaced.insertFront("Archana");
     cout<<"Not Placed Student :";
    notplaced.display();
    cout<<endl<<endl;
    try
    {
        while(1)
            notplaced.attachOrder(placed.detachFront());
    }
    catch(int i)
    {
             cout<<"Not Placed Student : ";
            notplaced.display();
    }
     cout<<"Placed Student : ";
    placed.display();
    getch();
    return 0;
}
