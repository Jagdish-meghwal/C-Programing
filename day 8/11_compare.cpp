#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

bool compare(int a,int b)
{
    return a>b;
}
int main()
{
    int a[5]={1,2,3,4,5};
    sort(begin(a),end(b),compare);

}
