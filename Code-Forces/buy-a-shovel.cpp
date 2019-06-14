// Problem:         Buy a Shovel
// Problem Link:    https://codeforces.com/contest/732/problem/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int cost, burles;

    cin >> cost >> burles;

    int minShov = 1, estPrice, rem, tens;

    while(1)
    {
        estPrice = minShov * cost;
        tens = estPrice/10;
        rem = estPrice - (tens * 10);
        if(rem == burles || rem == 0)
        {
            cout << minShov << endl;
            break;
        }
        minShov++;
    }

    return 0;
}