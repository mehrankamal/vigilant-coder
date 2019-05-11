//Problem:          Eating Soup
//Problem Link:     https://codeforces.com/contest/1163/problem/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    if(m==0 || m==1)    cout << "1\n";
    else if(n==m)   cout << "0\n";
    else
    {
        if (m>n/2)  m = n-m;
        cout  << m << endl;
    }
    

    return 0;
}