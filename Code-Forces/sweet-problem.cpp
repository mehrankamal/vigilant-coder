//Problem:          Sweet Problem
//Problem Link:     https://codeforces.com/contest/1263/problem/A

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
    while(n--)
    {
        vector<int> arr(3);
        repn(i, 3) cin >> arr[i];
        sort(arr.begin(), arr.end());
        ll maxx = 0;
        ll delta = arr[2] - arr[1];
        if(delta > arr[0]) maxx = arr[0] + arr[1];
        else
        {
            maxx = delta;
            arr[0] -= delta;
            maxx += arr[0];
            arr[1] -= ceil(arr[0]/2.0);
            maxx += arr[1];
        }
        cout << maxx << endl;
    }

    return 0;
}
