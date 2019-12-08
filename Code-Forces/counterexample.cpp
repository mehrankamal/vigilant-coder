//Problem:          Counterexample
//Problem Link:     https://codeforces.com/contest/483/problem/A

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
    ll r, l; 
    cin >> l >> r;
    if(r - l + 1 < 3) cout << "-1" << endl;
    else if(l%2 == 0) cout << l << " " << l + 1 << " " << l + 2 << endl;
    else if(r - l  + 1 > 3) cout << l + 1 << " " << l + 2 << " " << l + 3 << endl;
    else cout << "-1" << endl;

    return 0;
}
