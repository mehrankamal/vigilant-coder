//Problem:          Loansome Car Buyer
//Problem Link:     https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1055

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int noMonths, records;
    float dPayment, loanAmt;

    while(scanf("%d %f %f %d", &noMonths, &dPayment, &loanAmt, &records), noMonths >= 0)
    {
        vector<float> depr(110, -1);
        for(int i=0; i<records; i++)
        {
            int a;
            float b;
            scanf("%d %f", &a, &b);
            depr[a] = b;
        }

        for(int i=1; i<depr.size(); i++)
            if(depr[i] < 0) depr[i] = depr[i-1];

        float carCost = (loanAmt + dPayment) * (1.0 - depr[0]);
        if(carCost > loanAmt)   printf("0 months\n");
        else
        {
            int month = 0;
            float pay = (loanAmt / noMonths);
            while(carCost <= loanAmt)
            {
                month++;
                loanAmt -= pay;
                carCost -= carCost * depr[month];
            }
            if(month == 1) cout << month << " month" << endl;
            else cout << month << " months" << endl;
        }
    }

    return 0;
}