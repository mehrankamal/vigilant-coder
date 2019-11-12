//Problem:          Expression
//Problem Link:     https://codeforces.com/problemset/problem/479/A

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
    int a, b, c;
    cin >> a >> b >> c;
    int u = a * (b + c), v = a + b + c, w = (a * b) + c, x = a * b * c, y = (a + b) * c, z = a + (b * c);

    cout << max(max(u, v) ,max(max(w, x), max(y, z))) << endl;

    return 0;
}
