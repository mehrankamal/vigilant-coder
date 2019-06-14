//Problem:          Initial Bet
//Problem Link:     https://codeforces.com/problemset/problem/478/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, d, e;

    cin >> a >> b >> c >> d >> e;

    a += b+c+d+e;

    if(a%5 == 0 && a!=0)    cout << a/5 << endl;
    else    cout << "-1" << endl;

    return 0;
}