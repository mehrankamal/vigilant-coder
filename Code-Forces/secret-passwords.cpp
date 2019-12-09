//Problem:          Secret Passwords
//Problem Link:     https://codeforces.com/problemset/problem/1263/D

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

vector<int> adjList[(int) (2e5 + 100)];
char used[(int)(2e5 + 100)];

void addEdge(int i, int v, vector<int> adjList[])
{
    adjList[v].pb(i);
    adjList[i].pb(v);
}

void dfs(int i)
{
    used[i] = 1;
    for(int to : adjList[i]) if(used[to] != 1) dfs(to);
};

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i<n; i++)
    {
        string in;
        cin >> in;
        for(char c : in) addEdge(i, n + c - 'a', adjList);
    }

    int res = 0;

    for(int i = 0; i < 26; i++)
    {
        if(!adjList[i].empty() && used[i] != 1)
        {
            dfs(i);
            res++;
        }
    }

    cout << res << endl;
    

    return 0;
}
