//Problem:          Bit++
//Problem Link:     https://codeforces.com/problemset/problem/282/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int ops, x = 0;
    cin >> ops;
    for(int i=0; i<ops; i++)
    {
        string  str;
        cin >> str;
        for(int j=0; j<str.length(); j++)
        {
            if(str[j] == '+')
            {
                x++;
                break;
            }
            else if(str[j] == '-')
            {
                x--;
                break;
            }
        }
    }
    cout << x << endl;

    return 0;
}