#include<iostream>
#include<string>
#include<queue>
#include<stack>
#include<algorithm>
using namespace std;
struct Node
{
    Node *Llink;
    char data;
    Node *Rlink;

    Node(char p_data)
    {
        data=p_data;
        Llink=Rlink=nullptr;
    }
};

Node *root=nullptr;

void preOrder(Node *pTrav)
{
    if(pTrav)
    {
        cout<<pTrav->data<<" ";
        preOrder(pTrav->Llink);
        preOrder(pTrav->Rlink);
    }
}
void inOrder(Node *pTrav)
{
    if(pTrav)
    {
        inOrder(pTrav->Llink);
        cout<<pTrav->data<<" ";
        inOrder(pTrav->Rlink);
    }
}
void postOrder(Node *pTrav)
{
    if(pTrav)
    {
        postOrder(pTrav->Llink);
        
        postOrder(pTrav->Rlink);
        cout<<pTrav->data<<" ";
    }
}

int main()
{
    string expr;
    stack<Node *> stk;
    cin>>expr;
    for(char c:expr)
    {
        Node *pNewNode= new Node(c);
        if(isalpha(c))
           stk.push(pNewNode);
        else
        {
            Node *right=stk.top(); stk.pop();
            Node *left=stk.top(); stk.pop();
            pNewNode->Llink=left;
            pNewNode->Rlink=right;
            stk.push(pNewNode);
        }
        
           
    }

    root=stk.top(); stk.pop();
    cout<<"\n InOrder \n";
    inOrder(root);
    cout<<"\n preOrder \n";
    preOrder(root);
    cout<<"\n postOrder \n";
    postOrder(root);
    
    

}
