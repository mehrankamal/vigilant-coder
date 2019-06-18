//Problem:          Bus Game
//Problem Link:     https://codeforces.com/problemset/problem/79/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    int i=1;

    while(true)
    {
        if(i%2 == 1)
        {
            if(x >= 2 && y >= 2)
            {
                x-=2;
                y-=2;
            }
            else if(x >= 1 && y >= 12)
            {
                x-=1;
                y-=12;
            }
            else if(y >= 22)
            {
                y-=22;
            }
            else
            {
                cout << "Hanako" << endl;
                break;
            }
            i++;
        }
        else
        {
            if(y >= 22)
            {
                y-=22;
            }
            else if(x >= 1 && y >= 12)
            {
                x-=1;
                y-=12;
            }
            else if(x >= 2 && y >= 2)
            {
                x-=2;
                y-=2;
            }
            else
            {
                cout << "Ciel" << endl;
                break;
            }
            i--;    
        }
    }

    return 0;
}