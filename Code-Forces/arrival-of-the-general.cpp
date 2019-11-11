//Problem:          Arrival of the General
//Problem Link:     https://codeforces.com/problemset/problem/144/A

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
    int minn = INT_MAX, maxx = INT_MIN;
    int min_pos = 0, max_pos = 0;
    int time = 0;
    repn(i, n)
    {
        cin >> arr[i];
        if(maxx < arr[i])
        {
            maxx = arr[i];
            max_pos = i;
        }
    }

    for(int i = max_pos; i>0; i--)
    {
        swap(arr[i], arr[i - 1]);
        time++;
    }
    for(int i = 1; i<n; i++)
    {
        if(minn >= arr[i])
        {
            minn = arr[i];
            min_pos = i;
        }
    }

    for(int i = min_pos; i<(n - 1); i++)
    {
        swap(arr[i], arr[i+1]);
        time++;
    }

    cout << time << endl;
    return 0;
}
