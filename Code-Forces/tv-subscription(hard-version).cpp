//Problem:          TV Subscriptions (Hard Version)
//Problem Link:     https://codeforces.com/contest/1247/problem/B2

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
        int n, k, d;
        cin >> n >> k >> d;
        vi arr(n);
        repn(i, n)
            cin >> arr[i];
        map<int, int> freq;
        for(int i=0; i<d; i++)
            freq[arr[i]]++;
        int minn = freq.size();
        for(int i = d; i<n; i++)
        {
            freq[arr[i]]++;
            freq[arr[i - d]]--;
            if(freq[arr[i - d]] == 0)
                freq.erase(arr[i - d]);
            minn = min(minn, (int)freq.size());
        }
        cout << minn << endl;
        freq.clear();
    }
    return 0;
}