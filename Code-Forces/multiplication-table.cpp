//Problem:          Multiplication Table
//Problem Link:     https://codeforces.com/problemset/problem/577/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;

    int rows = n, cols = 1, count = 0;

    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<=cols; j++)
        {
            if(j*i == x && i!=j)    count += 2;
            else if(j*i == x && i==j)   ++count;

            if(j*i > x) break;
        }
        ++cols;
    }

    cout << count << endl;

    return 0;
}