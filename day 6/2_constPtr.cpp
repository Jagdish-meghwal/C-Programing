
#include<iostream>

using namespace std;
int main()
{
    int x=5;
    int y=10;

    const int *ptr1=&x; //pointer to const
    int const *ptr2=&x;//pointer to const
    int *const ptr3=&x;//constant pointer

    //*ptr1=10;
   //*ptr2=10;
   *ptr3=10;
    cout<<x<<endl;
   ptr1=&y;
   ptr2=&y;
   //ptr3=&y;



    return 0;
}
