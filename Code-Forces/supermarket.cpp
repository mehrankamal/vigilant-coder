//Problem:          Supermarket
//Problem Link:     https://codeforces.com/contest/919/problem/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int superMarkets, totalApples;
    cin >> superMarkets >> totalApples;
    double min = INT_MAX;
    for(int i=0; i<superMarkets; i++)
    {
        int rate, kilos;
        cin >> rate >> kilos;
       
        if((double)rate/kilos < min) min = (double)rate/kilos;
    }
    printf("%.8f\n", min*totalApples);

    return 0;
}