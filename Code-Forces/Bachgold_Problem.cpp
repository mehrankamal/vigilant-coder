//Problem:          Bachgold Problem
//Problem Link:     https://codeforces.com/contest/749/problem/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    vector<int> arr(n/2, 2);

    if(n%2 == 1)
    {
        arr[arr.size()-1]++;
    }

    cout << n/2 << endl;

    for(int i=0; i<n/2; i++)    cout << arr[i] << ' ';
    cout << endl;

    return 0;
}