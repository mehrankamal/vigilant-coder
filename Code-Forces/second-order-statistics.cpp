//Problem:          Second Order Statistics
//Problem Link:     https://codeforces.com/problemset/problem/22/A

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
    repn(i, n)
        cin >> arr[i];
    if(n == 1)
    {
        cout << "NO" << endl;
        return 0;
    }

    sort(arr.begin(), arr.end());
    int i = 1;
    while(i < n && arr[i] == arr[i - 1])
    {
        i++;
    }
    if(i == n && arr[i - 2] == arr[i - 1])
    {
        cout << "NO" << endl;
        return 0;
    }
    
    cout << arr[i] << endl;
    
    return 0;
}