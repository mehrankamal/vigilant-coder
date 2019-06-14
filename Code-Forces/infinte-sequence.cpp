//Problem:          Infinite Sequence
//Problem Link:     https://codeforces.com/problemset/problem/675/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if(c<0)
    {
        while(a>=b)
        {
            if(a == b)
            {
                cout << "YES" << endl;
                return 0;
            }
            a+=c;
        }
    }
    else if(c>0)
    {
        while(a<=b)
        {
            if(a==b)
            {
                cout << "YES" << endl;
                return 0;
            }
            a+=c;
        }
    }
    else
    {
        if(a==b)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    

    cout << "NO" << endl;

    return 0;
}