
#include<iostream>
using namespace std;
/*void myswap(int *pa,int *pb)
{
    int *temp=pa;
    pa=pb;
    pb=temp;
   //swapping address
    cout<<"inside function"<<*pa<<" "<<*pb<<endl;
}*/
void myswap(int *const pa,int *const pb)
{
   *pa=*pa+*pb;
   *pb=*pa-*pb;
   *pa=*pa-*pb;

    cout<<"inside function"<<*pa<<" "<<*pb<<endl;
}
int main()
{
    int x=5;
    int y=10;

    myswap(&x,&y); //myswap(&x,&x) wrong result
    cout<<"inside main"<<x<<" "<<y<<endl;

    return 0;


}
