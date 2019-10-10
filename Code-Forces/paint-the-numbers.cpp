//Problem:          Paint The Numbers
//Problem Link:     https://codeforces.com/contest/1209/problem/A

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

    vi arr(n);
    repn(i, n) cin >> arr[i];
    int color = 0;
    sort(arr.begin(), arr.end());
    while(arr.size() != 0)
    {
        int minn = arr[0];
        color++;
        for(int j = 0; j < arr.size(); j++)
        {
            if(arr[j] % minn == 0)
            {
                arr.erase(arr.begin() + j);
                j--;
            }
        }
    }
    cout << color << endl;
    return 0;
}
