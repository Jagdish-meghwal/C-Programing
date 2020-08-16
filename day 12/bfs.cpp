#include <queue>
#include <iostream>
using  namespace std;
int main()
{
/*	int matrix[5][5] = { {0,1,0,1,0} , 
			     {0,0,0,0,0},
			     {0,0,0,0,0},
			     {0,0,0,0,1},
			     {0,1,1,0,0}
			 };*/
	int matrix[7][7] = { {0,1,0,1,1, 0, 0} , 
			     {0,0,1,1,0, 0, 0},
			     {0,0,0,0,0, 0, 0},
			     {1,0,1,0,1, 0, 0},
			     {0,0,0,0,0, 0, 0},
			     {0,0,0,0,0, 0, 1},
			     {0,0,0,1,0, 0, 0}
			 };
/*	for(int i = 0 ; i < 7 ; i++)
	{
		cout <<"Children of Node " << i << " : ";
		for(int j = 0 ; j < 7 ; j++)
			if(matrix[i][j])
				cout << j <<" ";
		cout << endl;
	}*/
	bool visited[7] = {false};
	queue<int> q;
	int startNode = 5;
	
	q.push(startNode);
	visited[startNode] = true;

	while( q.empty() == false)
	{
		int i = q.front();
			q.pop();
		//cout << (char)(i + 'A') << " ";
		for(int j = 0 ; j < 7 ; j++)
			if(matrix[i][j] && visited[j] == false)
			{
				cout <<(char)(i + 'A') << " " << (char)(j + 'A') << endl;
				visited[j] = true;	
				q.push(j);
			}
	}
}









