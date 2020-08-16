#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void display(vector<int>  v)
{
	for(int i = 0 ; i < v.size(); i++)
		cout << v[i] << endl;
	cout << endl;
}
int main()
{
	vector<int>	v;
	int ch;
	int ele;
	for(;;)
	{
		cout << "1. Insert Rear \n 2. Delete Rear \n 3. Display \n";
		cin >> ch;
		switch(ch)
		{
		case 1: cout <<"Enter element to insert : ";   cin >> ele;
			v.push_back(ele); break;
		case 2: v.pop_back(); break;
		case 3 : display( v ); break;
		}
	}
}
