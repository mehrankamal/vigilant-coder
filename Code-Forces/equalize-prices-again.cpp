//Problem:          Equalize Prices Again
//Problem Link:     https://codeforces.com/contest/1234/problem/A

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
        int n, sum = 0, top = 0;
        cin >> n;
        vi arr(n);
        repn(i, n)
        {
            cin >> arr[i];
            sum += arr[i];
            top = max(top, arr[i]);
        }

        while(top * n > sum)
            top--;

        if(top * n >= sum) cout << top << endl;
        else if((top + 1) * n >= sum) cout << top + 1 << endl;

    }

    return 0;
}
