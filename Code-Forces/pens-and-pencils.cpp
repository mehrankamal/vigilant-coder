//Problem:          Pens and Pencils
//Problem Link:     https://codeforces.com/contest/1244/problem/A

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
        int a, b, c, d, k;
        cin >> a >> b >> c >> d >> k;
        int minn = ceil(a / (float)c);
        int minn2 = ceil(b / (float)d);
        if(minn + minn2 <= k)
            cout << (minn + (k - minn2 - minn)) << " " << minn2 << endl;
        else
            cout << "-1" << endl;
    }

    return 0;
}
