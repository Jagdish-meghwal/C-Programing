#include<iostream>
#include<math.h>
#include<stack>
using namespace std;
int main()
{
    int i,j;
    int matrix [5][5]={
                        {0,1,0,1,0},
                        {0,0,0,0,0},
                        {0,0,0,0,0},
                        {0,0,0,0,1},
                        {0,1,1,0,0}
                      };
    for(i=0;i<5;i++)
    {
        cout<<"children of node "<<i<<" : ";
        for( j=0;j<5;j++)
        {
            if(matrix[i][j]==1)
              cout<<" "<<j<<" ";
        }
        cout<<endl;
    }
}