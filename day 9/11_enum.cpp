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
enum {INS_FRONT =1, INS_REAR , DEL_REAR , DISP };
int main()
{
	vector<int>	v;
	int ch;
	int ele;
	for(;;)
	{
		cout << "1. Insert front\n 2. Insert Rear \n 3. Delete Rear \n 4. Display \n";
		cin >> ch;
		switch(ch)
		{
        case INS_FRONT:cout <<"Enter element to insert : ";   cin >> ele;
             v.insert(v.begin(),ele); break;
		case INS_REAR: cout <<"Enter element to insert : ";   cin >> ele;
			v.push_back(ele); break;
		case DEL_REAR: v.pop_back(); break;
		case DISP : display( v ); break;
		}
	}
}
