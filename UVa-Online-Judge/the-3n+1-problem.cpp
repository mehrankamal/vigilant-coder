//Problem:          The 3n + 1 Problem
//Problem Link:     https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=36

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
    int i, j, caseNo = 0;

    while(scanf("%d %d", &i, &j) != EOF)
    {
        int maxx_cycle = 0;
        int i2 = (i <= j)? i:j;
        int j2 = (i <= j)? j:i;
        int temp = i2;

        while(temp <= j2)
        {
            int cycle = 1;
            int temp2 = temp;
            while(temp2 != 1)
            {
                if(temp2 % 2 == 0) temp2 /= 2;
                else temp2 = (temp2 * 3) + 1;
                cycle++;
            }
            maxx_cycle = max(maxx_cycle, cycle);
            temp++;
        }

        cout << i << " " << j << " " << maxx_cycle << endl;

    }
    

    return 0;
}
