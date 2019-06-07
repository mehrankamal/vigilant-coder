//Problem:          Watermelon
//Link:             https://codeforces.com/problemset/problem/4/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int w;
    cin >> w;

    int aKilos = 2;
    int bKilos = w - aKilos;

    while(aKilos < w && bKilos > 0)
    {
        if(aKilos%2 == 0 && bKilos%2 == 0)
        {
            cout << "YES" << endl;
            return 0;
        }
        aKilos += 2;
    }
    
    cout << "NO" << endl;

    return 0;
}