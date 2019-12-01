//Problem:          Tanya and Toys
//Problem Link:     https://codeforces.com/problemset/problem/659/C

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
    ll n, k;
    cin >> n >> k;
    set<int> toys;
    repn(i, n)
    {
        int in;
        cin >> in;
        toys.insert(in);
    }
    int start = 1;
    int i = 1;
    vector<int> ans;

    while(k > 0)
    {
        while(toys.find(start) != toys.end()) start++;
        if(k - start < 0) break;
        ans.pb(start);
        k -= start;
        toys.insert(start);
    }

    int len = ans.size();
    cout << len << endl;
    for(int i = 0; i<len; i++) cout << ans[i] << " ";
    cout << endl;
    

    return 0;
}
