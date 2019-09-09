//Problem:          Book Reading
//Problem Link:     https://codeforces.com/problemset/problem/1213/C
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    while(q--)
    {
        long long n, m, sum = 0;
        cin >> n >> m;
        long long iters = n / m;
        vector<int> digs(10);
        for(int i=0; i<10; i++) digs[i] = ((i + 1) * m) % 10;
        for(int i=0; i < iters % 10; i++) sum += digs[i];
        cout << sum + iters / 10 * accumulate(digs.begin(), digs.end(), 0LL) << endl;

    }

    return 0;
}