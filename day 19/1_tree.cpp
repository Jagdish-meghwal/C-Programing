
#include<iostream>
#include<string>
#include<queue>
#include<algorithm>
using namespace std;
int lcount=0;
struct Node
{
    Node *Llink;
    int data;
    Node *Rlink;

    Node(int p_data)
    {
        data=p_data;
        Llink=Rlink=nullptr;
    }
};

Node *root=nullptr;

void insert(int data)
{
    cout<<"Inserting: "<<data<<endl;
    Node *pNewNode=new Node(data);
    if(root==nullptr)
    {
        root=pNewNode;
        //cout<<"Tree was empty... Added the node as root\n";
    }
    else
    {
        Node *pTrav=root;
        while(true)
        {
            if(data>pTrav->data)
            {
                if(pTrav->Rlink==nullptr)
                {
                    //cout<<"Inserted at Right of "<<pTrav->data<<endl;
                     pTrav->Rlink=pNewNode;
                     break;
                }
                else
                {
                    pTrav=pTrav->Rlink;
                }

            }
            else{
                    if(pTrav->Llink==nullptr)
                    {
                        //cout<<"Inserted at Left of "<<pTrav->data<<endl;
                         pTrav->Llink=pNewNode;
                         break;
                    }
                    else
                    {
                        pTrav=pTrav->Llink;
                    }
            }
        }

    }
}

void preOrder(Node *pTrav)
{
    if(pTrav)
    {
        cout<<pTrav->data<<" ";
        preOrder(pTrav->Llink);
        preOrder(pTrav->Rlink);
    }
}
void inOrder(Node *pTrav,int level)
{
    if(pTrav)
    {
        inOrder(pTrav->Llink,level+1);
        cout<<pTrav->data<<" "<<level<<endl;
        inOrder(pTrav->Rlink,level+1);
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

void levelOrder(Node * pTrav)
{
    queue < Node *> q;
    q.push(pTrav);

    while(q.empty()==false)
    {
        pTrav=q.front();
        q.pop();
        cout<<pTrav->data<<" ";
        if(pTrav->Llink)
          q.push(pTrav->Llink);
        if(pTrav->Rlink)
          q.push(pTrav->Rlink);
        
    }
}

void search(int key)
{
    Node *pTrav = root;
    int count=0;
    while(pTrav!=nullptr)
    { 
        count++;
        if(pTrav->data==key)
        {
            cout<<"element found  "<<count<<endl;;
            return;
        }
           
        if(key>pTrav->data)
           pTrav=pTrav->Rlink;
        else
           pTrav=pTrav->Llink;
    }
    cout<<"not found \n";
    
}

int searchRec(Node *pTrav,int key)  // create extra stack frame // avoid it
{
    if(pTrav==nullptr)
    {
        return false;
    }
    else if(key==pTrav->data)
    {
        return true;
    }
    else if(key>pTrav->data)
    {
        return searchRec(pTrav->Rlink,key);
    }
    else
    {
        return searchRec(pTrav->Llink,key);
    }
    
}

int countLeaf(Node *pTrav)
{
    if(pTrav)
    {
        if(pTrav->Llink==nullptr && pTrav->Rlink==nullptr)
         lcount++;
        countLeaf(pTrav->Llink);
        countLeaf(pTrav->Rlink);
        
    }
    return lcount;
}
void minEle(Node *pTrav)
{
    while(pTrav->Llink!=nullptr)
    {
       pTrav= pTrav->Llink;
    }
            cout<<pTrav->data;
}
void maxEle(Node *pTrav)
{
    while(pTrav->Rlink!=nullptr)
    {
       pTrav= pTrav->Rlink;
    }
    
            cout<<pTrav->data;
}
int height(Node *pTrav)
{
    if(pTrav==nullptr)
      return 0;
    int left= height(pTrav->Llink);
    int right=height(pTrav->Rlink);
    return 1+max(left,right);
}
int main()
{
    insert(43);
    insert(89);
    insert(23);
    insert(87);
    insert(40);
    insert(12);

    preOrder(root);
    cout<<endl;
    inOrder(root,0);
    cout<<endl;
    postOrder(root);
    cout<<endl;
    levelOrder(root);
    search(1);
    searchRec(root,12);
    cout<<"\n--------count leaf----------\n";
    cout<<countLeaf(root);
    cout<<"\n----------min element--------\n";
    minEle(root);
    cout<<"\n----------max element--------\n";
    maxEle(root);
    cout<<endl;
    cout<<height(root);
    

}
