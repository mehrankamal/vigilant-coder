//Problem:          visiting a Friend
//Problem Link:     https://codeforces.com/problemset/problem/902/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;

    cin >> n >> m;
    
    vector<bool> path(100, false);

    for(int i=0; i<n; i++)
    {
        int x, y;
        cin >> x >> y;
        if(x==0)    path[0] = true;
        for(int j=x+1; j<=y; j++)   path[j] = true;
    }

    for(int i=0; i<=m; i++)
    {
        if(!path[i])
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;

    return 0;
}