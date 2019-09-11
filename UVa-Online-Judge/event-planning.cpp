//Problem:          Event Planning
//Problem Link:     https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2595

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int numP, budget, numH, numW;

    while(scanf("%d %d %d %d", &numP, &budget, &numH, &numW) != EOF)
    {
        int minCost = INT_MAX;
        for(int i=0; i<numH; i++)
        {
            int priceP, consec = 0;
            cin >> priceP;
            vector<int> bedsAvailable(numW);
            for(int j=0; j<numW; j++)
            {
                cin >> bedsAvailable[j];
                if(bedsAvailable[j] >= numP)
                    consec++;
            }
            for(int j = consec ; j > 0; j--)
                if((numP * j * priceP <= budget) && (numP * j * priceP < minCost))
                            minCost = numP * j * priceP;
        }
        if(minCost < INT_MAX)
            cout << minCost << endl;
        else
            cout << "stay home" << endl;
    }

    return 0;
}