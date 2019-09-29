//Problem:          Missing Number
//Problem Link:     https://cses.fi/problemset/task/1083

#include<bits/stdc++.h>

using namespace std;

int main()
{
    long n, ans;
    cin >> n;
    if (n==2)
    {
        cin >> ans;
        printf("%s\n", (ans == 1)? "2":"1");
        return 0;
    }
    vector<long> arr(n-1);

    for(long i=0; i < n - 1; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    bool found = false;
    for(long i=1; i<n - 1 && !found; i++)
    {
        if(arr[i] - arr[i - 1] > 1)
        {
            ans = arr[i - 1]  + 1;
            found = true;
        }
    }

    if(!found) ans = n;
    cout << ans << endl;

    return 0;
}