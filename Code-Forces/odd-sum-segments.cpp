//Problem:          Odd Sum Segments
//Problem Link:     https://codeforces.com/problemset/problem/1196/B

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

    int q;
    cin >> q;
    while(q--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        int odds = 0;
        repn(i, n)
        {
            cin >> arr[i];
            odds += (arr[i] % 2 == 1)?1:0;
        }
        if(odds < k || odds%2 != k%2)
        {
            cout << "NO" << endl;
            continue;
        }
        vector<int> starts;
        repn(i, n)
        {
            if(arr[i] % 2 == 1)
                starts.pb(i + 1);
        }

        cout << "YES" << endl;
        for(int i = 0; i<k - 1; i++)
            cout << starts[i] << " ";
        cout << n << endl;

    }

    return 0;
}
