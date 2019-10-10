//Problem:          Eight Queens
//Problem Link:     https://open.kattis.com/problems/8queens

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

bool search(vector<vector<char>> grid, int row, int col)
{
    for(int i = 0; i<grid.size(); i++)
    {
        if(grid[row][i] == '*' && i != col) return false;
    }
    for(int i = 0; i<grid.size(); i++)
    {
        if(grid[i][col] == '*' && i != row) return false;
    }
    for(int i = row + 1, j = col + 1; i<grid.size() && j < grid.size(); i++, j++)
    {
        if(i >= grid.size() || j >= grid.size()) break;
        if(grid[i][j] == '*') return false;
    }
    for(int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
    {
        if(i < 0 || j < 0) break;
        if(grid[i][j] == '*') return false;
    }
    for(int i = row - 1, j = col + 1; i>=0 && j < grid.size(); i--, j++)
    {
        if(i < 0 || j >= grid.size()) break;
        if(grid[i][j] == '*') return false;
    }
    for(int i = row + 1, j = col - 1; i>=0 && j >= 0; i++, j--)
    {
        if(i < 0 || j < grid.size()) break;
        if(grid[i][j] == '*') return false;
    }

    return true;
}

int main()
{
    vector<vector<char> > grid(8, vector<char>(8));

    repn(i, 8)
    {
        repn(j, 8)  cin >> grid[i][j];
    }
    repn(i, 8)
    {
        bool valid = false;
        repn(j, 8)
        {
            if(grid[i][j] == '*')
            {
                valid = search(grid, i, j);
            }
        }
        if(!valid)
        {
            cout << "invalid" << endl;
            return 0;
        }
    }
    cout << "valid" << endl;

    return 0;
}
