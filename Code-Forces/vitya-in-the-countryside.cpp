//Problem:          Vitya in the Countryside
//Problem Link:     https://codeforces.com/problemset/problem/719/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    if(n==1)
    {
        cin >> arr[0];
        if(arr[0] == 0) cout << "UP" << endl;
        else if(arr[0] == 15)    cout << "DOWN" << endl;
        else cout << "-1" << endl;
        return 0;
    }

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        if(i==n-1)
        {
            if(arr[n-1] == 15)  cout << "DOWN" << endl;
            else if(arr[n-1] == 0)  cout << "UP" << endl;
            else if(arr[n-1] > arr[n-2]) cout << "UP" << endl;
            else    cout << "DOWN" << endl;
        }
    }

    return 0;
}