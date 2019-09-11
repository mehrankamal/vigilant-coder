//Problem:          Stickers and Toys
//Problem Link:     https://codeforces.com/gym/252533/problem/C

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while(T--)
    {
        int eggs, sti, toys;
        cin >> eggs >> sti >> toys;

        cout << max (eggs - sti, eggs - toys) + 1 << endl;
    }


    return 0;
}