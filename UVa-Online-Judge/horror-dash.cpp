//Problem:          Horror Dash
//Problem Link:     https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2899

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    int n = 0;
    cin >> T;
    while(n++, T--)
    {
        int num, maxx = 0, speed;
        cin >> num;
        for(int i=0; i<num; i++)
        {
            cin >> speed;
            maxx = max(speed, maxx);
        }
        cout << "Case " << n << ": " << maxx << endl;
    }

    return 0;
}
