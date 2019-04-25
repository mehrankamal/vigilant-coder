//Problem:			Restoring Three Numbers
//Problem Link:		https://codeforces.com/contest/1154/problem/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
	vector<int> arr(4);
	for(int i=0; i<4; i++)	cin >> arr[i];
	sort(arr.begin(), arr.end());
	
	int a = abs(arr[3] - arr[0]);
	int b = abs(arr[3] - arr[1]);
	int c = abs(arr[3] - arr[2]);
	
	cout << a << " " << b << " " << c << endl;
	
	return 0;
}
