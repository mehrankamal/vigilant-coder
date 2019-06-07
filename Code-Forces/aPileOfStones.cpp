//Problem:          A Pile of Stone
//Problem Link:     https://codeforces.com/contest/1159/problem/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int ans = 0;
    int res = 0;
    int n;
    cin >> n;
    vector<char> arr(n);
    for(int i=0; i<arr.size(); i++)
    {
        cin >> arr[i];
        if(arr[i]=='-' && ans>0)    ans--;
        else if(arr[i] == '+')      ans++;
        else    ans = 0;
        
    }

    cout << ans << endl;


    return 0;
}