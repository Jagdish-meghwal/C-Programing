    #include<iostream>
#include<algorithm>
#include<math.h>
#include<string>
using namespace std;

int main()
{
    int matrix[3][3];
    int sum1=0;
    int sum2=0;
    int diff;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>matrix[i][j];
        }
    }

    int n=2;

    for(int i=0;i<3;i++)
    {
                sum1=sum1+matrix[i][i];
                sum2=sum2+matrix[i][n-i];
                cout<<"m1 :"<<matrix[i][i]<<"  "<<" m2 "<<matrix[i][n-i]<<endl; 
    }
      cout<<endl;
 
    cout<<"sum 1 : "<<sum1<<" sum 2 : "<<sum2<<endl;
    diff=abs(sum1-sum2);

    cout<<diff;
}