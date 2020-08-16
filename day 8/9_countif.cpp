#include<iostream>
#include<algorithm>
#include<ctype.h>

using namespace std;
bool myisalpha(char c)
{
    return (bool)isalpha(c);
}

int main()
{

    char arr[]="Sik@ndde$";

    int res=count_if(begin(arr),end(arr),myisalpha);
    cout<<res<<endl;
}
