//Problem:          Fancy Fence
//Problem Link:     https://codeforces.com/problemset/problem/270/A

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
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        float a = 360.0/(180 - n);
        if(a == (int)a)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
    
    return 0;
}