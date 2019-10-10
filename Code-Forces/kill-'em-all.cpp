//Problem:          Kill 'Em All
//Problem Link:     https://codeforces.com/contest/1238/problem/B

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
    int q;
    cin >> q;

    while (q--)
    {
        int n, r;
        cin >> n >> r;
        vi enemies(n, 0);
        repn(i, n)
            cin >> enemies[i];
        sort(enemies.begin(), enemies.end());
        int shots = 0;
        int origin = 0;
        for(int i=enemies.size() - 1; i>=0; i--)
        {
            if(enemies[i] - origin <= 0)
                break;
            while(enemies[i] == enemies[i - 1] && i > 0)
            {
                enemies[i] = 0;
                i--;
            }
            shots++;
            origin += r;
        }
        cout << shots << endl;
    }
    

    return 0;
}
