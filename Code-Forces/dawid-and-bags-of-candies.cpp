//Problem:          Dawid and Bags of Candies
//Problem Link:     https://codeforces.com/contest/1230/problem/A

#include<bits/stdc++.h>

#define loop(i, n) for(int i=0; i<(int) n; i++)

using namespace std;

int main()
{
    int arr[4];
    loop(i, 4)
        cin >> arr[i];

    sort(arr, arr+4);

    if(arr[0] + arr[3] == arr[1] + arr[2] || arr[3] == arr[0] + arr[1] + arr[2])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    

    return 0;
}