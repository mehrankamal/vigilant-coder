//Problem:          Cifera
//Problem Link:     https://codeforces.com/contest/114/problem/A

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
    ll n, k, divs = 0, prod = 1;
    cin >> n >> k;


    while(prod != k)
    {
        prod *= n;
        divs++;
        if(prod > k)
            break;
    }

    if(prod == k)
    {
        cout << "YES\n" << divs - 1 << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    

    return 0;
}