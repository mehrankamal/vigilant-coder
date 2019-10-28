//Problem:          Divisors of two integers
//Problem Link:     https://codeforces.com/problemset/problem/1108/B

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
    multiset<int> arr;
    repn(i, n)
    {
        int a;
        cin >> a;
        arr.insert(a);
    }
    int x = *prev(arr.end());
    for(int i = 1; i <= x; i++)
    {
        if(x % i == 0)
            arr.erase(arr.find(i));
    }

    cout << x << " " <<  *prev(arr.end()) << endl;

    return 0;
}
