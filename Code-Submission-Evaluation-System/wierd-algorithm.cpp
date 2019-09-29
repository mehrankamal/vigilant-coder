//Problem:          Wierd Algorithm
//Problem Link:     https://cses.fi/problemset/task/1068

#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n, time = -1;
    cin >> n;

    cout << n << " ";

    while(time++, n > 1)
    {
        if(n%2 == 0)
        {
            n /= 2;
        }
        else
        {
            n = (n*3) + 1;
        }
        if(time > 0)
            cout << " ";
        cout << n;
    }
    cout << endl;

    return 0;
}
