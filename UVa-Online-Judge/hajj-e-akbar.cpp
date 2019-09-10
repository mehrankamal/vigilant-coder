//Problem:          Hajj-e-Akbar
//Problem Link:     https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=4022

#include<bits/stdc++.h>

using namespace std;

int main()
{
    string inp;
    int n = 0;
    while(n++, cin >> inp, inp != "*")
    {
        if(inp == "Hajj") cout << "Case " << n << ": " << "Hajj-e-Akbar" << endl;
        else    cout << "Case " << n << ": " << "Hajj-e-Asghar" << endl;
        

    }

    return 0;
}