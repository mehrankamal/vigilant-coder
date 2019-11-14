//Problem:          Lights Out
//Problem Link:     https://codeforces.com/problemset/problem/275/A

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
    bool lights[3][3];
    int vals[3][3];
    for(int i = 0; i<3; i++)
        for(int j = 0; j<3; j++)
        {
            cin >> vals[i][j];
            lights[i][j] = true;
        }

    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            if(vals[i][j]%2 == 1)
            {
                if(i > 0)
                    lights[i - 1][j] = !lights[i - 1][j];
                if(j > 0)
                    lights[i][j - 1] = !lights[i][j - 1];
                if(j < 2)
                    lights[i][j + 1] = !lights[i][j + 1];
                if(i < 2)
                    lights[i + 1][j] = !lights[i + 1][j];
                lights[i][j] = !lights[i][j];
            }
        }
    }
    repn(i, 3)
    {
        repn(j, 3)
            printf("%c", lights[i][j]?'1':'0');
        cout << endl;
    }
    

    return 0;
}
