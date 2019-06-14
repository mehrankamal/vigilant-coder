//Problem:          Inna and Choose Options
//Problem Link:     https://codeforces.com/problemset/problem/400/A

#include<bits/stdc++.h>

using namespace std;

inline bool isPossible(string str, int a, int b);

int main()
{
    int n;
    cin >> n;
    vector<int> arr = {1, 2, 3, 4, 6, 12};

    while(n-- > 0)
    {
        string inp;
        cin >> inp;

        vector<int> wins;

        for(int i=0; i<6; i++)
        {
            int j = 12/arr[i];
            if(isPossible(inp, arr[i], j))
            {
                wins.push_back(arr[i]);
                wins.push_back(j);
            }
        }

        cout << wins.size()/2 << " ";
        for(int i=0; i<wins.size(); i+=2)
            cout << wins[i] << "x" << wins[i+1] << " ";
        cout << endl;
    }

    return 0;
}

inline bool isPossible(string str, int a, int b)
{
    char mat[a][b];
    for(int i = 0, k = 0; i<a; i++)
        for(int j = 0; j<b; j++, k++)
            mat[i][j] = str[k];
    
    bool check = false;
    for(int i=0; i<b && !check; i++)
    {
        check = true;
        for(int j=0; j<a && check; j++)
            if(mat[j][i] == 'O')    check = false;
    }

    return check;
}