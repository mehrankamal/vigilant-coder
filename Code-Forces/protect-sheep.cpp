//Problem:          Protect Sheep
//Problem Link:     https://codeforces.com/problemset/problem/948/A?locale=en

#include<bits/stdc++.h>
#define vi vector<int>
#define ll long long
#define pi pair<int, int>
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define rep(i, a, b) for(int i=a; i<=b; i++)
#define repn(i, n) for(int i=0; i<(int)n; i++)

using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    vector< vector<char> > grid(r, vector<char>(c));

    repn(i, r)
        repn(j, c)
            cin >> grid[i][j];

    bool adjWolf = false;

    repn(i, r)
    {
        repn(j, c)
        {
            if(grid[i][j] == 'S')
            {
                if(i != 0)
                {
                    if(grid[i - 1][j] != 'W' && grid[i - 1][j] != 'S')
                    {
                        grid[i - 1][j] = 'D';
                    }
                    else if(grid[i - 1][j] == 'W')
                    {
                        adjWolf = true;
                        break;
                    }
                }
                if(j != 0)
                {
                    if(grid[i][j - 1] != 'W' && grid[i][j - 1] != 'S')
                    {
                        grid[i][j - 1] = 'D';
                    }
                    else if(grid[i][j - 1] == 'W')
                    {
                        adjWolf = true;
                        break;
                    }
                }
                if(i + 1 < r)
                {
                    if(grid[i + 1][j] != 'W' && grid[i + 1][j] != 'S')
                    {
                        grid[i + 1][j] = 'D';
                    }
                    else if(grid[i + 1][j] == 'W')
                    {
                        adjWolf = true;
                        break;
                    }
                }
                if(j + 1 < c)
                {
                    if(grid[i][j + 1] != 'W' && grid[i][j + 1] != 'S')
                    {
                        grid[i][j + 1] = 'D';
                    }
                    else if(grid[i][j + 1] == 'W')
                    {
                        adjWolf = true;
                        break;
                    }
                }
            }
        }
        if(adjWolf)
            break;
    }

    if(adjWolf)
        cout << "No" << endl;
    else
    {
        cout << "Yes" << endl;
        repn(i, r)
        {
            repn(j, c)
            {
                cout << grid[i][j];
            }
            cout << endl;
        }
    }
    

    return 0;
}
