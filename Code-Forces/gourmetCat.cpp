//Problem:		Gourmet Cat
//Problem Link:	https://codeforces.com/problemset/problem/1154/C

#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
	int ids[7] = {0, 1, 2, 0, 2, 1, 0}, lastMax = INT_MIN;
	ll rations[3];
	ll maxDays;
	cin >> rations[0] >> rations[1] >> rations[2];
	
	ll fullWeeks = INT_MAX;
	fullWeeks = min(rations[0]/3, rations[1]/2);
	fullWeeks = min(fullWeeks, (rations[2]/2));

	rations[0] = rations[0] - fullWeeks*3;
	rations[1] = rations[1] - fullWeeks*2;
	rations[2] = rations[2] - fullWeeks*2;

	for(int i=0; i<7; i++)
	{
		int cur = 0, start = i;
		int tempRations[3];
		for(int j=0; j<3; j++)	tempRations[j] = rations[j];
		while(tempRations[ids[start]]>0)
		{
			tempRations[ids[start]]--;
			cur++;
			start++;
			start %= 7;
		}
		if(cur>lastMax)	lastMax = cur;
	}

	maxDays = fullWeeks*7 + lastMax;

	cout << maxDays << endl;
	
	return 0;
}
