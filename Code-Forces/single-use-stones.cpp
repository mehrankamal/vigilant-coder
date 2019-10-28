//Problem:			Single-use Stones          
//Problem Link:     https://codeforces.com/problemset/problem/965/D

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
	int n, w;
	cin >> n >> w;
	vi arr(n);
	repn(i, n)
		cin >> arr[i];

	int sum = 0;
	for(int i = 0; i<w; i++)
		sum += arr[i];
	int minn = sum;
	for(int i = w; i<n - 1; i++)
	{
		sum -= arr[i - w];
		sum += arr[i];
		minn = min(sum, minn); 
	}
	cout << minn << endl;   
    
    return 0;
}