//Problem:          Raising Bacteria
//Problem Link:     https://codeforces.com/problemset/problem/579/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;

    while(n)
    {
        if(n & 1)   count++;
        n >>= 1;
    }

    cout << count << endl;

    return 0;
}