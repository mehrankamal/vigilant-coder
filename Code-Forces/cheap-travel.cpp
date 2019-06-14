// Problem:         Cheap Travel
// Preoblem Link:   https://codeforces.com/problemset/problem/466/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int combA = a*n, combB, combC;

    combB = (n/m) * b;
    combB += (n%m) * a;

    combC = (n/m) * b;

    if(!(n%m==0))   combC += b;
    
    combA = min(combA, combB);
    combA = min(combA, combC);

    cout << combA << endl;

    return 0;
}