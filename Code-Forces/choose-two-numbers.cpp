//Problem:          Choose Two Numbers
//Problem Link:     https://codeforces.com/problemset/problem/1206/A
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int maxA = -1, maxB = -1;
    int a, b;
    cin >> a;
    vector<int> arrA(a);
    for(int i=0; i<a; i++)
    {
        cin >> arrA[i];
        maxA = max(arrA[i], maxA);
    }

    cin >> b;
    vector<int> arrB(b);

    for(int i=0; i<b; i++)
    {
        cin >> arrB[i];
        maxB = max(maxB, arrB[i]);
    }

    cout << maxA << " " << maxB << endl;

    return 0;
}