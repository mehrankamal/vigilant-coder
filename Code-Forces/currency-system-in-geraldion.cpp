//Problem:          Currency System in Geraldion
//Problem Link:     https://codeforces.com/problemset/problem/560/A
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i=0; i<n; i++)
    {
        int inp;
        cin >> inp;
        if(inp == 1)
        {
            cout << "-1" << endl;
            return 0;
        }
    }
    cout << "1" << endl;

    return 0;
}