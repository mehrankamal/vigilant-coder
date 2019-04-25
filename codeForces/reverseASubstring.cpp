//Problem:			Reverse a Substring
//Problem Link:		https://codeforces.com/contest/1155/problem/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<char> arr(n);
	for(int i=0;i<n;i++) cin>>arr[i];
	for(int i=1; i<n ; i++)
	{
		if(arr[i]<arr[i-1])
		{
			cout<<"YES"<<endl<<i<<" "<<i+1;
			return 0;
		}
	}
	cout<<"NO";
	return 0;
}
