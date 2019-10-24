//Problem:          Sereja and Array
//Problem Link:     https://codeforces.com/contest/315/problem/B

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
    ll n, m;
    cin >> n >> m;
    vector<long long> arr(n);
    repn(i, n)  cin >> arr[i];

    ll yi = 0;
    while(m--)
    {
        int op;
        cin >> op;
        if(op == 1)
        {
            ll in, in2;
            cin >> in >> in2;
            arr[in - 1] = in2 - yi;
        }
        else if(op == 2)
        {
            ll in;
            cin >> in;
            yi += in;
        }
        else
        {
            ll in;
            cin >> in;
            cout << arr[in - 1] + yi << endl;
        }
    }    

    return 0;
}
