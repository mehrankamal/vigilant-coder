//Problem:          Buses Between Cities
//Problem Link:     https://codeforces.com/problemset/problem/665/A

#include<bits/stdc++.h>

using namespace std;

int main()
{

    int a, ta, b, tb;
    int hh, mm;
    cin >> a >> ta;
    cin >> b >> tb;
    scanf("%d:%d", &hh, &mm);
    
    int x1 = 60 * hh + mm, y1 = x1 + ta, count = 0;
    for(int x2 = 5*60; x2 < 24 * 60; x2 += b)
    {
        int y2 = x2 + tb;
        int x = max(x1, x2), y = min(y1, y2);
        if(x < y)   count++;
    }

    cout << count << endl;

    return 0;
}