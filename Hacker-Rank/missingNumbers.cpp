//Problem:          Missing Numbers
//Link:             https://www.hackerrank.com/challenges/missing-numbers/problem

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int freqA[10001] = {0}, freqB[10001]= {0};
    int m, n;
    cin >> n;
    vector<int> arrA(n);
    for(int i=0; i<n; i++)
    {
        cin >> arrA[i];
        freqA[arrA[i]]++;
    }
    cin >> m;
    vector<int> arrB(m);
    for(int i=0; i<m; i++)
    {
        cin >> arrB[i];
        freqB[arrB[i]]++;
    }

    for(int i=0; i<10001; i++)
        if(freqA[i] != freqB[i])
            cout << i << " ";
    
    cout << endl;

    return 0;
}