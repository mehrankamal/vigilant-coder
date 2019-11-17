//Problem:          Squares and Segments
//Problem Link:     https://codeforces.com/problemset/problem/1099/B

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
    int w = n, h = 1;
    int sqr = abs(sqrt(n));
    int minn = INT_MAX;
    int a = (sqr + 1) * (sqr + 1), b = (sqr + 1) * sqr, c = sqr * sqr;
    if(c == n && minn > a) minn = 2 * sqr;
    else if(b >= n && minn > b) minn = 2 * sqr + 1;
    else if(a >= n && minn > c) minn = 2 * (sqr + 1);
    cout << minn << endl;

    return 0;
}
