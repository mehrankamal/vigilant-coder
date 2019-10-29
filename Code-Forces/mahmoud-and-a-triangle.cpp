//Problem:          Mahmoud and a Triangle
//Problem Link:     https://codeforces.com/problemset/problem/766/B

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
        scanf("%d", &arr[i]);

    sort(arr.begin(), arr.end());

    for(int i = n - 1; i>1; i--)
    {
        int sumA = arr[i] + arr[i - 1], sumB = arr[i - 1] + arr[i - 2], sumC = arr[i] + arr[i - 2];
        if(sumA > arr[i - 2] && sumB > arr[i] && sumC > arr[i - 1])
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    
    return 0;
}