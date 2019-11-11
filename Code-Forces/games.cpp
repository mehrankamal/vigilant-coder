//Problem:          Games
//Problem Link:     https://codeforces.com/problemset/problem/268/A

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
    int n, count = 0;
    cin >> n;
    vector< pair<int, int> > arr(n);
    for(int i = 0; i<n; i++)
    {
        int a, b;
        cin >> a >> b;
        arr[i] = make_pair(a, b);
    }

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(arr[i].first == arr[j].second)
                count++;
        }
    }

    cout << count << endl;

    return 0;
}
