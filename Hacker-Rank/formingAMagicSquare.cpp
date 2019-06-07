#include<iostream>
#include<cstdlib>
#include<climits>


//2 9 8
//4 2 7
//5 6 7

using namespace std;

int main()
{
	int squares[][3][3] = 	{	{{8, 1, 6}, {3, 5, 7}, {4, 9, 2}},
								{{6, 1, 8}, {7, 5, 3}, {2, 9, 4}},
								{{4, 9, 2}, {3, 5, 7}, {8, 1, 6}},
								{{2, 9, 4}, {7, 5, 3}, {6, 1, 8}},
								{{8, 3, 4}, {1, 5, 9}, {6, 7, 2}},
								{{4, 3, 8}, {9, 5, 1}, {2, 7, 6}}, 
								{{6, 7, 2}, {1, 5, 9}, {8, 3, 4}},
								{{2, 7, 6}, {9, 5, 1}, {4, 3, 8}}	};

	int input[3][3];
	int costMin = INT_MAX;
	int cost = 0;
	
	for(int i=0; i<3; i++)
	{
		for(int j= 0; j<3; j++)
			cin >> input[i][j];
	}
	
	for(int i = 0; i<8; i++)
	{
		cost = 0;
		for(int j=0; j<3; j++)
		{
			for(int k=0; k<3; k++)
			{
				cost += abs(squares[i][j][k]-input[j][k]);
			}
		}
		if(cost < costMin)
			costMin  = cost;
	}

	cout << costMin <<  endl;	

	return 0;
}
