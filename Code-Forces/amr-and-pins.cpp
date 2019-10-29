//Problem:          Amr and Pins
//Problem Link:     https://codeforces.com/problemset/problem/507/B

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
    ll r, x, y, x_new, y_new;
    cin >> r >> x  >> y >> x_new >> y_new;

    double dist = sqrt((x_new - x) * 1L * (x_new - x) + (y_new - y) * 1L * (y_new - y));
    int steps = (int) ceil(dist / (2 * r));

    cout << steps << endl;
    
    
    return 0;
}