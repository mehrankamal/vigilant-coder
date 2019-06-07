//Problem:          Is it rated?
//Problem Link:     https://codeforces.com/contest/807/problem/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    bool rated = false;
    bool seq = false;

    vector<int> col(2, 0);
    vector<vector<int>> vec(n, col);

    for(int i=0; i<n; i++)
    {
        cin >> vec[i][0] >> vec[i][1];
        if(vec[i][0] != vec[i][1])
        {
            rated = true;
        }
    }

    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
            if(vec[i][0] < vec[j][0])   seq = true;



    if(rated)   cout << "rated" << endl;
    else if(!seq)  cout << "maybe" << endl;
    else    cout << "unrated" << endl;

    return 0;
}