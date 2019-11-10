//Problem:          Presents
//Problem Link:     https://codeforces.com/problemset/problem/136/A

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
    vector<int> arr(n);

    for(int i =0; i<n; i++)
    {
        int in;
        cin >> in;
        arr[in - 1] = i + 1;
    }

    for(int i =0; i<n; i++)
    {
        if(i != 0)
            cout << " ";
        cout << arr[i];
    }
    cout << endl;

    return 0;
}
