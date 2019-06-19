//Problem:          Splitting Numbers
//Problem Link:     https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3084

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    do
    {
        int a = 0, b = 0;
        bool turn = true;
        for(int i=0; i < 32; i++)
        {
            if(((1 << i) & n) != 0)
            {
                if(turn)    a |= 1 << i;
                else    b |= 1 << i;

                turn = !turn;
            }
        }

        cout << a << " " << b << endl;

        cin >> n;
    }
    while(n != 0);

    return 0;
}
