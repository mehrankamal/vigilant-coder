//Problem:          Sagheer and Crossroads
//Problem Link:     https://codeforces.com/problemset/problem/812/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<vector<int>> arr;

    for(int i=0; i<4; i++)
    {
        vector<int> inp(4);
        for(int j=0; j<4; j++)  cin >> inp[j];
        arr.push_back(inp);
    }

    bool accidents = false;

    for(int i=0; i<4; i++)
    {
        if((arr[i][0] == 1 && arr[(i+3)%4][3] == 1) || (arr[i][1] == 1 && arr[(i+2)%4][3] == 1) || (arr[i][2] == 1 && arr[(i+1)%4][3] == 1))
        {
            cout << "YES" << endl;
            return 0;
        }
        else if((arr[i][0] == 1 || arr[i][1] == 1 || arr[i][2] == 1) && arr[i][3] == 1)
        {
            cout << "YES" << endl;
            return 0;
        } 
    }

    cout << "NO" << endl;

    return 0;
}