//Problem:          Books Exchange (Hard Version)
//Problem Link:     https://codeforces.com/contest/1249/problem/B2

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
        int n;
        cin >> n;
        vi arr(n);
        repn(i, n)
            cin >> arr[i];
        vi ans(n, 0);
        repn(i, n)
        {
            int pos = arr[i] - 1;
            int count = 1;
            vi cycle;
            cycle.pb(pos);
            while(pos != i)
            {
                pos = arr[pos] - 1;
                cycle.pb(pos);
                count++;
                if(ans[pos] != 0)
                {
                    count = ans[pos];
                    break;
                }
            }
            for(auto it:cycle) ans[it] = count;
        }
        repn(i, n)
        {
            if(i > 0)
                cout << " ";
            cout << ans[i];
        }
        cout << endl;
    }

    return 0;
}
