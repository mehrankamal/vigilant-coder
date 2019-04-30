//Problem:          Word Capitalization
//Problem Link:     https://codeforces.com/problemset/problem/281/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    string inp;
    cin >> inp;
    inp[0] = toupper(inp[0]);
    cout << inp << endl;
    return 0;
}