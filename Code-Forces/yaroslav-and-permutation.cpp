//Problem:          Yarosalv and Permutation
//Problem Link:     https://codeforces.com/problemset/problem/296/A

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
    vector<int> freq(1001, 0);
    repn(i, n)
    {
        int in;
        cin >> in;
        freq[in]++;
    }
    for(int i = 0; i < 1001; i++)
    {
        if(freq[i] > (n + 1) / 2)
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;

    return 0;
}
