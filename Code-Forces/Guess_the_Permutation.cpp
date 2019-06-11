//Problem:          Guess the Permutation
//Problem Link:     https://codeforces.com/problemset/problem/618/B

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    bool gotTheHighest = false;
    vector<int> ans(n, 0);

    for(int i=0; i<n; i++)
    {
        int max = 0;
        int inp;
        for(int j=0; j<n; j++)
        {
            cin >> inp;
            if(inp > max)   max = inp;
        }
        if(max == n-1 && !gotTheHighest)    gotTheHighest = true;
        else if(max == n-1) max++;
        ans[i] = max;
    }

    for(int i=0; i<n; i++)  cout << ans[i] << " ";
    cout << endl;

    return 0;
}