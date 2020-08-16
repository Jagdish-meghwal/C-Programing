#include<iostream>
using namespace std;
int main()
{
	int productCost=250;
	int taxPercent=5;
	float taxAmount=taxPercent/100*productCost;
	cout<<taxAmount;
	return 0;
}
