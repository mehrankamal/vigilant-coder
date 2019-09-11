//Problem:          Nauuo and Votes
//Problem Link:     https://codeforces.com/gym/252533/problem/H

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;

    if(x < y)
    {
        if (x + z >= y) cout << "?" << endl;
        else    cout << "-" << endl;
    }
    else if(x > y)
    {
        if(y + z >= x)  cout << "?" << endl;
        else cout << "+" << endl;
    }
    else 
    {
        if (z != 0) cout << "?" << endl;
        else    cout << "0" << endl;
    }



    return 0;
}