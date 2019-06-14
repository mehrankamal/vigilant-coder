//Problem:          Bear and Finding Criminals
//Problem Link:     https://codeforces.com/problemset/problem/680/B

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, a;

    cin >> n >> a;

    vector<int> arr(n);
    n, a--;

    int count = 0;

    for(int i=0; i<n; i++)  cin >> arr[i];

    if(arr[a])  count++;

    for(int i=a+1, j=a-1; i<n || j>=0 ; i++, j--)
    {
        if(arr[i] && arr[j] && i<n && j>=0) count+=2;
        else if(arr[i] && j<0)  count++;
        else if(arr[j] && i>=n) count++;
    }

    cout << count << endl;

    return 0;
}