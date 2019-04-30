//Problem:          Football
//Problem Link:     https://codeforces.com/problemset/problem/96/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    string inp;
    int countA = 1, countB = 1;
    int teamA = INT_MIN, teamB = INT_MIN;
    cin >> inp;
    for(int i=1; i < inp.length(); i++)
    {
        if(inp[i]==inp[i-1] && inp[i]=='1') countA++;
        else    countA = 1;
        if(countA>teamA)    teamA = countA;
    }

    for(int i=1; i<inp.length(); i++)
    {
        if(inp[i]==inp[i-1] && inp[i]=='0') countB++;
        else    countB = 1;
        if(countB>teamB)    teamB = countB;
    }

    if(teamA>=7 || teamB>=7)    cout << "YES" << endl;
    else    cout << "NO" << endl;

    return 0;
}