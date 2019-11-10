//Problem:          Lucky Divison
//Problem Link:     https://codeforces.com/problemset/problem/122/A

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
    int arr[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    int tot = 14;
    int inp;
    cin >> inp;

    for(int i = 0; i<tot; i++)
    {
        if(inp%arr[i] == 0)
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}
