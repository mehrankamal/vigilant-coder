//Problem:          Twins
//Problem Link:     https://codeforces.com/problemset/problem/160/A

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
        cin >> arr[i];

    sort(arr.begin(), arr.end(), [](int a, int b) {return a > b;});

    int minCoins = 1;

    ll mySum = 0, hisSum = 0;

    for(int i =0; i<minCoins; i++)
        mySum += arr[i];

    for(int i = minCoins; i<n; i++)
        hisSum += arr[i];
    
    while(mySum <= hisSum && minCoins < n)
    {
        minCoins++;
        mySum += arr[minCoins - 1];
        hisSum -= arr[minCoins - 1];
    }

    cout << minCoins << endl;
    

    return 0;
}
