#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int > v;
    int entery;
    int  t;
    int num;
    int req;
    int count=0;
    cout<<"enter numbers of test cases"<<endl;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cout<<"enter num of student";
        cin>>num;
        cout<<"enter min student required";
        cin>>req;
        for(int j=0;j<num;j++)
        {
        cin>>entry; 
        v.push_back(entry);
        if(entry<=0)
             count++;
        }

        if(count>=req)
          cout<<"No"<<endl;
        else
        {
            cout<<"Yes"<<endl;
        }
        
    }
}