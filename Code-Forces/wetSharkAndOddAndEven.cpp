//Problem:          Wet Shark and Odd and Even
//Problem Link:     https://codeforces.com/problemset/problem/621/A

#include<bits/stdc++.h>
#define lli long long int

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> evens;
    vector<int> odds;

    for(int i=0; i<n; i++)
    {
        int inp;
        cin >> inp;
        if(inp%2==0)    evens.push_back(inp);
        else    odds.push_back(inp);
    }
    sort(odds.rbegin(), odds.rend());

    lli sum = 0;
    int evenCount = evens.size();
    int oddCount = odds.size();
    if(oddCount%2!=0)oddCount--;

    for(int i=0; i<evenCount; i++)  sum += evens[i];
    for(int i=0; i<oddCount; i++)   sum += odds[i];

    cout << sum << endl;

    return 0;
}