//Problem:          PolandBall and Hypothesis
//Problem Link:     https://codeforces.com/problemset/problem/755/A

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
    if(n > 2)
        cout << n - 2 << endl;
    else
    {
        if(n == 1)
            cout << "3" << endl;
        else
            cout << "4" << endl;
        
    }

    return 0;
}
