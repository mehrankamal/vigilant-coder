//Problem:          Distinct Digits
//problem Link:     https://codeforces.com/contest/1228/problem/A

#include<bits/stdc++.h>
#define i64 long long
#define vii vector<int>
#define v2i vectir<vii>
using namespace std;

bool distinct(int a)
{
    vii arr(10, 0);
    while(a != 0)
    {
        int temp = a%10;
        arr[temp]++;
        a /= 10;
    }

    for(int i=0; i<10; i++)
        if(arr[i] > 1) return false;

    return true;
}

int main()
{
    int l, r, ans;
    bool found = false;
    cin >> l >> r;

    for(int i=l; i <= r && !found; i++)
    {
        if(found = distinct(i)) ans = i;
    }

    if(!found) cout << "-1" << endl;
    else cout << ans << endl;
    

    return 0;
}