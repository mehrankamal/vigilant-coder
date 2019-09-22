//Problem:          Symmetric Matrix
//Problem Link:     https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2324

#include<bits/stdc++.h>


#define vii vector<long long>
#define v2ii vector<vii>
#define loop(i, n) for( int i=0; i<(int)n; i++)

using namespace std;

int  main()
{
    int T, tNo = 0;
    cin>> T;

    while(tNo++, T--)
    {
        int n;
        bool anyNeg = false;
        char a, b;
        cin >> a >> b >> n;

        v2ii matrix(n, vii(n));

        loop(i, n)
        {
            loop(j, n)
            {
                cin >> matrix[i][j];
                if(matrix[i][j] < 0) anyNeg = true;
            }
        }

        if(anyNeg)
        {
            cout << "Test #" << tNo << ": Non-symmetric.\n";
            continue;
        }
        bool check = true;
        loop(i, n)
        {
            loop(j, n)
            {
                if(matrix[n - (i+1)][n-(j+1)] != matrix[i][j])
                {
                    check = false;
                    break;
                }
            }
            if(!check) break;
        }

        if(check) cout << "Test #" << tNo << ": Symmetric.\n";
        else cout << "Test #" << tNo << ": Non-symmetric.\n";
    }

    return 0;
}