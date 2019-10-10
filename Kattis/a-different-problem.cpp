//Problem:          A Different Problem
//Problem Link:     https://open.kattis.com/problems/different

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
    ll a, b;
    while(scanf("%lld %lld", &a, &b) != EOF)
        cout << abs(a - b) << endl;

    return 0;
}
