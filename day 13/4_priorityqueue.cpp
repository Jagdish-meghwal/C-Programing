#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main()
{
  //priority_queue <string, vector<string> , greater<string> > pq;
    priority_queue pq;
    pq.push("abc");
    pq.push("ebcdf");
    pq.push("fbc");
    pq.push("bbc");
  
    cout<<pq.top()<<endl;

}