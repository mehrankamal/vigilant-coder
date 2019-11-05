//Problem:			Data Center
//Problem Link:     https://codeforces.com/problemset/problem/1250/F

#include<bits/stdc++.h>
#define vi vector<int>
#define ll long long
#define pi pair<int, int>
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define rep(i, a, b) for(int i=a; i<=b; i++)
#define repn(i, n) for(int i=0; i<(int)n; i++)

using namespace std;

int main()
{
	ll n;
	cin >> n;
	int param = INT_MAX;
	int i = 1, j = n;
	while(i <= j)
	{
		if(i * j == n && 2 * i + 2 * j < param)
			param = 2 * i + 2 * j;
		else if(i * j > n)
			j--;
		else
			i++;
	}
	cout << param << endl;
    
    return 0;
}