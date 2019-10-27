//Problem:          TV Subscriptions (Easy Version)
//Problem Link:     https://codeforces.com/contest/1247/problem/B1

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
        int minn = k;
        for(int i = 0; i<=n-d; i++)
        {
            vi freq(k + 1, 0);
            int count = 0;
            for(int j = i; j < i + d; j++)
            {
                if(freq[arr[j]] == 0)
                {
                    freq[arr[j]] = 1;
                    count++;
                }
            }
            minn = min(minn, count);
        }
        cout << minn << endl;
    }
    return 0;
}