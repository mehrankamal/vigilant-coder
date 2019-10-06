//Problem:          Vacations
//Problem Link:     https://codeforces.com/problemset/problem/698/A

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
    int n;
    cin >> n;

    vi arr(n);
    vector< vi > dp(n, vi(3, INT_MAX));

    repn(i, n) cin >> arr[i];
    dp[0][0] = 1;
    if(arr[0] == 1 || arr[0] == 3)
        dp[0][1] = 0;
    if(arr[0] == 2 || arr[0] == 3)
        dp[0][2] = 0;

    for(int i=1; i < arr.size(); i++)
    {
        dp[i][0] = 1 + min(min(dp[i-1][0], dp[i-1][1]), dp[i-1][2]);
        if(arr[i] == 1 || arr[i] == 3)
        {
            dp[i][1] = min(dp[i-1][0], dp[i-1][2]);
        }
        if(arr[i] == 2 || arr[i] == 3)
        {
            dp[i][2] = min(dp[i-1][0], dp[i-1][1]);
        }
    }
    
    cout << min(min(dp[n-1][0], dp[n-1][1]), dp[n-1][2]) << endl;

    return 0;
}
