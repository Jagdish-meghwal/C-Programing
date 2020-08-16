#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<stack>
using namespace std;

typedef string data_t;
   struct Node
    {
        data_t data;
        Node *link; //self referential structure
        Node(data_t ele)
        {
            data=ele;
            link=nullptr;
        }
    };

    Node *pStart=nullptr; //store address of node // not create new node
void inserFront(data_t ele)
{
    //Node * pNewNode=(struct Node *)malloc (sizeof(struct Node));
     Node *pNewNode=new Node { ele };
     pNewNode->link = pStart;
     pStart=pNewNode;
}
void inserRear(data_t ele)
{
     Node *pNewNode=new Node { ele };
     if(pStart==nullptr)
        pStart=pNewNode;
     else
     {
        Node *pTraverse=pStart;
        while(pTraverse->link)
            pTraverse=pTraverse->link;
        pTraverse->link=pNewNode;
     }

}
void display()
{
    Node *pTraverse=pStart;

    while(pTraverse)
    {
        cout<<pTraverse->data<<endl;
        pTraverse=pTraverse->link;
    }
}
void displayRev()
{
    Node *pTraverse=pStart;
    stack <Node *> stk;

    while(pTraverse)
    {
        stk.push(pTraverse);
        pTraverse=pTraverse->link;
    }
    while(stk.empty()==false)
    {
        cout<<stk.top()->data<<"\n";
        stk.pop();
    }
    
}
void displayReverse(Node *pTrav)
{
    if(pTrav)
    {
        displayReverse(pTrav->link);
        cout<<pTrav->data<<endl;

    }
}

void deleteFront()
{
    if(pStart!=nullptr)
    {
        Node *temp=pStart;
        delete(pStart);
        pStart=temp->link;
    }
}
void deleteEnd()
{
    Node *pTraverse1=pStart;
    Node *pTraverse2=pStart->link;

    if(pStart->link==nullptr)
      {
          delete(pStart);
          pStart=nullptr;

      } 
    else
    {
    while(pTraverse2->link)
    {
        pTraverse2=pTraverse2->link;
        pTraverse1=pTraverse1->link;
    }
        delete(pTraverse2);
        pTraverse1->link=nullptr;
    }
}
int main()
{
   // inserFront("asd");
    //inserFront("zxc");
    char ch='y';
    while(ch=='y')
    {
        cout<<"enter the element to insert  ";
        data_t ele;
        cin>>ele;
        inserRear(ele);
        cout<<"add more  (y/n) :";
        cin>>ch;
    }
    cout<<"front to last-------------------";
    display();
    cout<<"last to front-------------------";
    displayReverse(pStart);


}