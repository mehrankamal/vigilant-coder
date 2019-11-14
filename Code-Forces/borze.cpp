//Problem:          Borze
//Problem Link:     https://codeforces.com/problemset/problem/32/B

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

    for(int i =0; i<inp.length(); i++)
    {
        if(inp[i] == '.')
            cout << "0";
        else if(inp[i] == '-' && inp[i + 1] == '.')
        {
            cout << "1";
            i++;
        }
        else
        {
            cout << "2";
            i++;
        }
    }
    cout << endl;

    return 0;
}
