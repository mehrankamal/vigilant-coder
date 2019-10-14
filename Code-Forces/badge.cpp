//Problem:          Badge
//Problem Link:     https://codeforces.com/problemset/problem/1020/B

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

void addEdge(vector<vi> &list, int v, int u)
{
    list[v].pb(u);
}

int main()
{
    int n;
    cin >> n;
    vector<vi> adjList(n + 1);

    repn(i, n)
    {
        int node;
        cin >> node;
        addEdge(adjList, i + 1, node);
    }
    repn(j, n + 1)
    {    
        if(j == 0)
            continue;
        if(j > 1) cout << " ";
        vi visited(n + 1, 0);
        visited[j] = 1;
        int i = adjList[j][0];
        while(visited[i] == 0)
        {
            visited[i] = 1;
            i = adjList[i][0];
        }
        cout << i;
    }
    cout << endl;

    return 0;
}
