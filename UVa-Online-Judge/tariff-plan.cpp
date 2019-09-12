//Problem:          Tariff Plan
//Problem Link:     https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3309

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T, caseNo = 1;
    cin >> T;
    while(T--)
    {
        int n, val, commMile = 0, commJuice = 0;
        cin >> n;
        for(int i=0; i<n; i++)
        {
            cin >> val;
            commMile += 10 * ((val / 30) + 1);
            commJuice += 15 * ((val / 60) + 1);
        }

        if(commMile < commJuice)
            printf("Case %d: %s %d\n", caseNo++, "Mile", commMile);
        else if(commMile > commJuice)
            printf("Case %d: %s %d\n", caseNo++, "Juice", commJuice);
        else
            printf("Case %d: %s %d\n", caseNo++, "Mile Juice", commJuice);

    }

    return 0;
}