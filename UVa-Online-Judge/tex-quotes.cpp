//Problem:          TEX Quotes
//Problem Link:     https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=208

#include<bits/stdc++.h>

using namespace std;

int main()
{
    string ans = "";

    char inp;
    bool first = true;

    while(scanf("%c", &inp) != EOF)
    {
        if(first && inp == '"')
        {
            ans += "``";
            first = false;
        }
        else if(!first && inp == '"')
        {
            ans += "''";
            first = true;
        }
        else
        {
            ans += inp;
        }
    }

    cout << ans;

    return 0;
}