//Problem:          I Wanna Be the Guy
//Problem Link:     https://codeforces.com/problemset/problem/469/A

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
    vector<bool> levels(n, false);
    int p, q;
    cin >> p;
    repn(i, p)
    {
        int in;
        cin >> in;
        levels[in - 1] = true;
    }
    cin >> q;
    repn(i, q)
    {
        int in;
        cin >> in;
        levels[in - 1] = true;
    }

    repn(i, n)
    {
        if(!levels[i])
        {
            cout << "Oh, my keyboard!"<< endl;
            return 0;
        }
    }

    cout << "I become the guy." << endl;

    return 0;
}
