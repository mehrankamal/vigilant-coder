//Problem:          Books Exchange (easy version)
//Problem Link:     https://codeforces.com/contest/1249/problem/B1

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
        repn(i, n)
        {
            if(i > 0)   cout << " ";
            int pos = arr[i] - 1;
            int ans = 1;
            while(pos != i)
            {
                ans += 1;
                pos = arr[pos] - 1;
            }
            cout << ans;
        }
        cout << endl;
    }
    

    return 0;
}
