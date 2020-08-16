
#include <iostream>

using namespace std;


int main() {
  int sum=0;
  int n,i;
  cin>>n;
  for(i=1;sum<=n;i++)
  {
      sum=sum+i+2*i;
  }
  sum=sum+i+2*i;
  int diff=sum-n;
  if(diff<=i)
    cout<<"patlu";
else
{
    cout<<"motu";
}
    return 0;
}

