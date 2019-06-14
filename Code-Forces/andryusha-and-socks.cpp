//Problem:          Andryusha and Socks
//Problem Link:     https://codeforces.com/contest/782/problem/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int maxSocks = 0, consequetive = 0, n, inp;
    cin >> n;
    vector<int> freq(n+1, 0);

    for(int i=0; i<n*2; i++)
    {
        cin >> inp;
        if(freq[inp] > 0)
        {
            if(consequetive > maxSocks) maxSocks = consequetive;
            consequetive--;
            freq[inp] = 0;
        }
        else
        {
            consequetive++;
            freq[inp]++;
        }
    }

    cout << maxSocks << endl;
    
    return 0;
}