//Problem:          Realtional Operator
//Problem Link:     https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2113

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string ans = "";
    cin >> n;
    while(n--)
    {
        int a, b;
        cin >> a >> b;
        if(a == b)  ans += "=\n";
        else if (a < b) ans += "<\n";
        else ans += ">\n";
    }

    cout << ans;

    return 0;
}