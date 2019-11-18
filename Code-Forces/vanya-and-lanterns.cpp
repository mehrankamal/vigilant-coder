//Problem:          Vanya and Lanterns
//Problem Link:     https://codeforces.com/problemset/problem/492/B

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
    ll n, l;
    cin >> n >> l;
    vector<ll> arr(n);
    repn(i, n) cin >> arr[i];
    sort(arr.begin(), arr.end());
    double max_dist = 0;
    for(int i = 0; i<n - 1; i++)
    {
        double dist = arr[i + 1] - arr[i];
        max_dist = max(dist, max_dist);
    }

    double min_rad = max((double)max_dist/2, (double)max(l - arr[n - 1], arr[0] - 0));

    printf("%f\n", min_rad);

    return 0;
}
