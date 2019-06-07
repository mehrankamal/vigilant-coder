//Problem:		Make Them Equal
//Problem Link:	https://codeforces.com/contest/1154/problem/B

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> arr(n);
	cin >> arr[0];
	if(n==1)
	{
		cout << "0" << endl;
		return 0;
	}
	int prev = arr[0];
	bool allEqual = true;
	for(int i=1; i<n; i++)
	{
		cin >> arr[i];
		if(prev != arr[i])	allEqual = false;
	}
	if(allEqual)
	{
		cout << "0" << endl;
		return 0;
	}
	
	sort(arr.begin(), arr.end());
	
	int tar = 0;
	int minD = INT_MAX;
	bool tempEqual = false;
	while(tar<=arr[n-1])
	{
		int i=0;
		
		for(; i<arr[n-1]; i++)
		{
			vector<int> temp(n);
			temp = arr;
			bool tarEqual = true;
			int c = 1;
			for(int j=0; j<n; j++)
			{
				if(tar != temp[j])
				{
					if(temp[j]<tar)	temp[j] += i;
					else	temp[j]	-= i;	
				}
			}
			for(int j=0; j<n; j++)
			{
				if(temp[j]!=tar)
				{
					tarEqual = false;
					break;
				}
			}
			if(!tar)	continue;
			for(int j=0; j<n-1; j++)
			{
				if(temp[j] == temp[j+1])	c++;
			}
			if(c==n && i<minD)
			{
				tempEqual = true;
				minD = i;
			}
		}
		tar++;
	}
	if(tempEqual)	cout << minD << endl;
	else	cout << "-1" << endl;
	
	return 0;
}
