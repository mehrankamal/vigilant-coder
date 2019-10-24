//Problem:          k-rounding
//Problem Link:     https://codeforces.com/problemset/problem/858/A

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
    ll ans = n * pow(10, k);
    ans = ans / __gcd(n, (ll)ceil(pow(10.0, k)));

    if(ans%10 != 0 && k != 0) ans += 1;

    cout << ans << endl;


    return 0;
}
