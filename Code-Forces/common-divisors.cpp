//Problem:          Common Divisors
//Problem Link:     https://codeforces.com/problemset/problem/1203/C

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
    vector<ll> arr(n);
    repn(i, n)
        cin >> arr[i];

    ll answer = 0;
    ll gcdd = arr[0];

    for(ll i = 1; i<n; i++)
    {
        gcdd = __gcd(gcdd, arr[i]);
    }

    answer = 0;
    for(ll i = 1; i * i <= gcdd; i++)
        if(gcdd%i == 0)
        {
            answer++;
            if(i != gcdd / i) answer++;
        }

    cout << answer << endl;

    return 0;
}
