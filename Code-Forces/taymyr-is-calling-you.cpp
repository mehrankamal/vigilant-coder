//Problem:          Taymyr is calling you
//Problem Link:     https://codeforces.com/contest/764/problem/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, z, kills = 0;
    
    cin >> n >> m >> z;
    set<int> mySet;

    for(int i=1; n*i<=z; i++)
    {
        mySet.insert(n*i);
    }
    for(int i=1; m*i<=z; i++)
    {
        if(mySet.count(i*m) > 0)    ++kills;
    }

    cout << kills << endl;

    return 0;
}