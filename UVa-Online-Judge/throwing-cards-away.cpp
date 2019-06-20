//Problem:          Throwing cards away
//Problem Link:     https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1876

#include<bits/stdc++.h>

using namespace std;

int main()
{
    while(true)
    {
        int inp;
        cin >> inp;
        queue<int> deck;
        vector<int> throws;
        if(inp == 0)    break;
        for(int i=1; i<=inp; i++)
            deck.push(i);
        for(int i=0; i<inp; i++)
        {
            throws.push_back(deck.front());
            deck.pop();
            deck.push(deck.front());
            deck.pop();
        }
        if(inp == 1)    cout << "Discarded cards:";
        else    cout << "Discarded cards: ";
        for(int i=0; i<throws.size()-1; i++)
        {
            cout << throws[i];
            if(i != throws.size()-2) cout << ", ";
        }
        cout << endl << "Remaining card: " << throws[throws.size()-1] << endl;
    }

    return 0;
}