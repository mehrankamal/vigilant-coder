//Problem:          Division of Nlogonia
//Problem Link:     https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2493

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    while(scanf("%d", &T), T!=0)
    {
        int ox, oy;
        cin >> ox >> oy;
        while(T--)
        {
            int x, y;
            cin >> x >> y;
            if(x == ox || y == oy)  cout << "divisa" << endl;
            else if (x > ox && y > oy)  cout << "NE" << endl;
            else if (x < ox && y > oy) cout << "NO" << endl;
            else if (x < ox && y < oy) cout << "SO" << endl;
            else cout << "SE" << endl;
        }
    }

    return 0;
}