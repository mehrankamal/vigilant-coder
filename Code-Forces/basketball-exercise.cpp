//Problem:          Basketball Exercise 
//Problem Link:     https://codeforces.com/problemset/problem/1195/C

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
    vector<int> team_a(n);
    vector<int> team_b(n);
    for(int i = 0; i<n; i++)    cin >> team_a[i];
    for(int i = 0; i<n; i++)    cin >> team_b[i];

    pair<ll, ll> dp[n] = {{team_a[0], team_b[0]}};

    for(int i = 1; i<n; i++)
        dp[i] = mp(max(dp[i - 1].f, dp[i - 1].s + team_a[i]), max(dp[i - 1].s, dp[i - 1].f + team_b[i]));

    cout << max(dp[n - 1].f, dp[n - 1].s) << endl;

    return 0;
}
