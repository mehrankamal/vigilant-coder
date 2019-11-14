//Problem:          Queue at the School
//Problem Link:     https://codeforces.com/problemset/problem/266/B

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
    int len, time;
    cin >> len >> time;
    vector<char> arr(len);

    repn(i, len)
        cin >> arr[i];

    for(int i = 0; i < time; i++)
    {
        for(int j = len - 1; j > 0; j--)
        {
            if(arr[j] == 'G' && arr[j - 1] == 'B')
            {
                arr[j] = 'B';
                arr[j - 1] = 'G';
                j--;
            }
        }
    }

    repn(i, len)
        cout << arr[i];
    cout << endl;

    return 0;
}
