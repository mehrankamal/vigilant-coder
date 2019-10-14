//Problem:          Hamster Farm
//Problem Link:     https://codeforces.com/contest/939/problem/B

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
    ll n, k;
    cin >> n >> k;
    vector< long long >  arr(k);
    ll minMod = __LONG_LONG_MAX__;
    ll type = 0;

    repn(i, k) cin >> arr[i];

    repn(i, k)
    {
        if( n % arr[i] < minMod)
        {
            type = i + 1;
            minMod = n % arr[i];
        }
    }

    cout << type << " " << n / arr[type - 1] << endl;

    return 0;
}
