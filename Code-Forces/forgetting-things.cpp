//Problem:          Forgetting Things
//Problem Link:     https://codeforces.com/contest/1247/problem/A

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
    int a, b;
    cin >> a >> b;
    if(a == 9 && b == 1)
    {
        cout << a << " " << a + 1 << endl;
    }
    else if(b - a == 1 || b - a == 0)
    {
        if(a != b)
            cout << a << " " << a+1 << endl;
        else
        {
            cout << a*10 << " " << a*10 + 1 << endl;
        }
    }
    else
    {
        cout << "-1" << endl;
    }

    return 0;
}