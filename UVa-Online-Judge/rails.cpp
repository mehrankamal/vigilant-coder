//Problem:          Rails
//Problem Link:     https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=455

#include<bits/stdc++.h>

using namespace std;

int main()
{
    while(true)
    {
        int n, coach = 1;
        cin >> n;
        if(n==0)    break;
        while(true)
        {
            stack<int> station;
            int inp;
            coach = 0;
            bool can = true;
            cin >> inp;
            if(inp == 0)    break;
            for(int i=0; i<n; i++)
            {
                if(i!=0)    cin >> inp;
                while(inp > coach)
                    station.push(++coach);
                if(station.empty() || station.top() != inp)
                    can = false;
                else
                    station.pop();
            }
            if(can) cout << "Yes" << endl;
            else    cout << "No" << endl;
        }
        cout << endl;
    }

    return 0;
}