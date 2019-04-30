//Problem:          Beautiful Matrix
//Problem Link:     https://codeforces.com/problemset/problem/263/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int size = 5;
    int xOne = 0, yOne = 0;
    for(int i=0; i<size; i++)
        for(int j=0; j<size; j++)
        {
            int num;
            cin >> num;
            if(num == 1)
            {
                xOne = i+1;
                yOne = j+1;
            }
        }

    printf("%d\n", abs(xOne-3)+abs(yOne-3));

    return 0;
}