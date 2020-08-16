#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>
#include<vector>
using namespace std;

int main()
{
    int matrix[3][3];
    int sum=0;
    int f=0;
    vector <int> v;

    for(int i=0;i<3;i++)
    {
         sum=0;
        for(int j=0;j<3;j++)
        {
            cin>>matrix[i][j];
            sum=sum+matrix[i][j];
        }
        v.push_back(sum);
        cout<<"sum : "<<sum<<endl;
    }
       
   
    for(int j=0;j<3;j++)
    {
         sum=0;
        for(int i=0;i<3;i++)
        {
           
            sum=sum+matrix[i][j];
        }
        v.push_back(sum);
        cout<<"sum : "<<sum<<endl;
    }

    for(int i=1;i<v.size();i++)
    {
       if(v[0]!=v[i])
       {
           f=1;
       } 
    }
    if(f==0)
    {
        cout<<"magic square\n";
    }
    else
    {
        cout<<"not a magic square\n";
    }
    
}