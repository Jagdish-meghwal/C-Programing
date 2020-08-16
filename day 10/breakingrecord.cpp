#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>	v;
    int max=0,maxcount=0;
    int min=0,mincount=0;
    int num;
    int score;

    cout<<"enter numbers of scores"<<endl;
    cin>>num;
    for(int i=0;i<num;i++)
    {
        cin>>score;
        if(score==-1)
           break;
        
        v.push_back(score);
    }
    max=v[0];
    min =v[0];
    for(int i=1;i<num;i++)
    {
        if(v[i]>max)
           maxcount++;
        if(v[i]<min)
           mincount++;
    }
    cout<<maxcount<<endl;
    cout<<mincount<<endl;

}