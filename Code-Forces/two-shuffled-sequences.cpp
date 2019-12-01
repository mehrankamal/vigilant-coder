//Problem:          Two Shuffled Sequences
//Problem Link:     https://codeforces.com/problemset/problem/1144/C

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
    vector<int> freq((int) (2 * 1e5) + 1, 0);
    bool flag = true;
    repn(i, n)
    {
        cin >> arr[i];
        freq[arr[i]]++;
        if(freq[arr[i]] > 2) flag = false;
    }
    if(!flag)
    {
        cout << "NO" << endl;
        return 0;
    }
    sort(arr.begin(), arr.end());
    vector<int> arr_a;
    vector<int> arr_b;

    for(int i = 0; i<n; i++)
    {
        if(freq[arr[i]] == 2)
            arr_a.pb(arr[i++]);
        arr_b.pb(arr[i]);
    }

    cout << "YES" << endl;

    int len_a = arr_a.size();
    int len_b = arr_b.size();

    cout << len_a << endl;
    for(int i = 0; i<len_a; i++)
        cout << arr_a[i] << " ";
    cout << endl;

    cout << len_b << endl;
    for(int i = len_b - 1; i >= 0; i--)
        cout << arr_b[i] << " ";
    cout << endl;


    return 0;
}
