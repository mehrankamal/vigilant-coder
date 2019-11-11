//Problem:          Puzzles
//Problem Link:     https://codeforces.com/problemset/problem/337/A

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
    vector<int> arr(m);

    repn(i, m)
        cin >> arr[i];

    int minn = (int) 1e9;
    sort(arr.begin(), arr.end());

    for(int i = 0, k = n - 1; k < m; i++, k++)
    {
        int diff = arr[k] - arr[i];
        minn = min(diff, minn);
    }

    cout << minn << endl;

    return 0;
}
