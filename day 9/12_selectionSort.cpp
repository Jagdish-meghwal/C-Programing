#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector <int> v = {12,321,12,32,12,3,2,12,1};

    for(int i=0;i<v.size()-1;i++)
    {
         auto it=min_element(v.begin()+i,v.end());
         swap(v[i],v[it-v.begin()]);
    for(int i=0;i<v.size();i++)
      {
        cout<<v[i]<<" ";
      }
      cout<< endl;
    }


}
