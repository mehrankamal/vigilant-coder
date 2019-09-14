#include<bits/stdc++.h>
#define M 1000000007
#define ll long long

using namespace std;

ll fact(vector<ll> &lookup, int n)
{
    if(n<=1) return 1;
    else if(lookup[n] != -1) return lookup[n];
    else return lookup[n] = ((n * fact(lookup, n-1)) % M);
}

int main()
{
    int T;
    cin >> T;
    vector<ll> arr(1000000, -1);
    while(T--)
    {
        int inp;
        cin >> inp;
        ll ans = fact(arr, inp);
        cout << ans << endl;
    }

    return 0;
}