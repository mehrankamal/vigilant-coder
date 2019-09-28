//Problem:          ID Codes
//Problem Link:     https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=82

#include<bits/stdc++.h>

#define loop(i, n) for(int i=0; i<(int)n; i++)
#define vcc vector<char>
#define v2c vector<vcc>
#define i64 long long

using namespace std;

int main()
{
    while(true)
    {
        string inp;
        cin >> inp;
        if(inp == "#") return 0;
        if(next_permutation(inp.begin(), inp.end())) cout << inp << endl;
        else cout << "No Successor" << endl;
    }

    return 0;
}