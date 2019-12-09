//Problem:          Obtain Two Zeros
//Problem Link:     https://codeforces.com/contest/1260/problem/B

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
    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        if(a > b) swap(a, b);
        if((a + b)%3 == 0 && 2 * a >= b) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
