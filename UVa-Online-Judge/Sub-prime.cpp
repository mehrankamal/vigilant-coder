//Problem:          Sub-prime
//Probelm Link:     https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2726

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int b, n;
    bool possible = false;
    int debtBank, creditorBank, debtVal;
    string ans = "";

    while(1)
    {
        possible = true;
        cin >> b >> n;
        if(b == 0)  break;

        vector<int> res(b, 0);

        for(int i=0; i<b; i++)  cin >> res[i];

        for(int i=0; i<n; i++)
        {
            cin >> debtBank >> creditorBank >> debtVal;
            --debtBank;
            --creditorBank;
            res[debtBank] -= debtVal;
            res[creditorBank] += debtVal;
        }
        for(int i=0; i<b; i++)
            if(res[i] < 0)
            {
                possible = false;
                break;
            }
        
        if(possible)    ans += "S\n";
        else    ans += "N\n";
    }

    cout << ans;

    return 0;
}