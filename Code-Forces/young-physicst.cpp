//Problem:          Young Physicist
//Problem Link:     https://codeforces.com/problemset/problem/69/A

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
    int summX = 0, summY = 0, summZ = 0;
    for(int i = 0; i<n; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        summX += x;
        summY += y;
        summZ += z;
    }

    if(summX == 0 && summY == 0 && summZ == 0)  cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
