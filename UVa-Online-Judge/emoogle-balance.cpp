//Problem:          Emoogle Balance
//Problem Link:     https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=3431

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n = 0;

    while(++n)
    {
        int c, balance = 0;
        cin >> c;
        if (c == 0) break;
        for(int i=0; i<c; i++)
        {
            int elem;
            cin >> elem;
            if(elem == 0)   balance--;
            else balance++;
        }
        cout << "Case " << n << ": " << balance << endl;
    }

    return 0;
}