//Problem:          Case of the Zeros and Ones
//Problem Link:     https://codeforces.com/problemset/problem/556/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, ones = 0, zeros = 0;
    string str;
    cin >> n;
    cin >> str;

    for(int i=0; i<str.length(); i++)
    {
        if(str[i] == '1')   ++ones;
        else    ++zeros;   
    }

    cout << ones + zeros - min(ones, zeros) * 2 << endl;

    return 0;
}