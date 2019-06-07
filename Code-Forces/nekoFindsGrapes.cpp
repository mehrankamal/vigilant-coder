//Problem:			Neko Finds Grapes
//Problem Link:		https://codeforces.com/contest/1152/problem/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int chestEven = 0, keyEven = 0, chestOdd = 0, keyOdd = 0;
	for(int i=0; i<n; i++)
	{
		int data;
		cin >> data;
		if(data%2 == 1)	chestOdd++;
		else	chestEven++;
	}
	for(int i=0; i<m; i++)
	{
		int data;
		cin >> data;
		if(data%2 == 1)	keyOdd++;
		else	keyEven++;
	}
	
	int total = min(chestOdd, keyEven) + min(keyOdd, chestEven);
	cout << total << endl;
}
