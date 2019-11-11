//Problem:          Game With Sticks
//Problem Link:     https://codeforces.com/problemset/problem/451/A

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
    int n, m;
    cin >> n >> m;
    bool akshat = false;
    int total = n + m;

    while(total > 1 && m >= 1 && n >= 1)
    {
        total -= 2;
        n--;
        m--;
        akshat = !akshat;
    }

    if(akshat)
        cout << "Akshat" << endl;
    else    cout << "Malvika" << endl;    

    return 0;
}
