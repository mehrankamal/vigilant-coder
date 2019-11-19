//Problem:          Luxurious Houses
//Problem Link:     https://codeforces.com/problemset/problem/581/B

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
    vector<int> arr(n);
    vector<int> ans(n, 0);
    repn(i, n)
        cin >> arr[i];
    int maxx = 0;
    for(int i = n - 1; i>=0; i--)
    {
        ans[i] = max(0, maxx - arr[i] + 1);
        maxx = max(maxx, arr[i]);
    }

    for(int i = 0; i<n ; i++)
    {
        if(i != 0)
            cout << " ";
        cout << ans[i];
    }
    cout << endl;

    return 0;
}
