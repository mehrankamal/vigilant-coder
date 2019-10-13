//Problem:          Rooms and Staircases
//Problem Link:     https://codeforces.com/contest/1244/problem/B

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
        int n;
        cin >> n;
        bool allzeros = true;
        vector<char> arr(n);
        ll maxx = n;
        repn(i, n)
        {
            cin >> arr[i];
            if(arr[i] == '1')
            {
                maxx = max((ll)(2 * (i + 1)), maxx);
                maxx = max((ll)(2 * (n - i)), maxx);
            }
        }
        cout << maxx << endl;
    }

    return 0;
}
