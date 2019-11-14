//Problem:          Word
//Problem Link:     https://codeforces.com/problemset/problem/59/A

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
    string inp;
    cin >> inp;
    int caps = 0, lows = 0;

    for(int i = 0; i<inp.length(); i++)
    {
        if(inp[i] >= 'A' && inp[i] <= 'Z') caps++;
        else lows++;
    }
    if(caps > lows)
        repn(i, inp.length())
            cout << (char)toupper(inp[i]);
    else
        repn(i, inp.length())
            cout << (char)tolower(inp[i]);
    cout << endl;

    return 0;
}
