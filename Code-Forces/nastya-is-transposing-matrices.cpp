//Problem:          Nastya Is Transposing Matrices
//Problem Link:     https://codeforces.com/contest/1136/problem/C

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
    int n, m, maxn = 500;
    cin >> n >> m;
    int a[maxn][maxn];
    int b[maxn][maxn];
    vi aa[maxn * 2], bb[maxn * 2];

    repn(i, n)
    {
        repn(j, m)
        {
            cin >> a[i][j];
            aa[i + j].pb(a[i][j]);
        }
    }

    repn(i, n)
    {
        repn(j, m)
        {
            cin >> b[i][j];
            bb[i + j].pb(b[i][j]);
        }
    }

    bool convertable = true;
    for(int i=0; i < maxn * 2 && convertable; i++)
    {
        sort(aa[i].begin(), aa[i].end());
        sort(bb[i].begin(), bb[i].end());
        if(aa[i] != bb[i])
            convertable = false;
    }

    if(convertable) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
