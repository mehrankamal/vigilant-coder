//Problem:          Andy's First Dictonary
//Problem Link:     https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1756

#include<bits/stdc++.h>

using namespace std;

int main()
{
    string inp;
    set<string> ans;

    while( cin >> inp)
    {
        // 
        // if(inp == "")   break;
        string parsed = "";
        
        for(int i=0; i<inp.length(); i++)
        {
            if(tolower(inp[i]) >= 'a' && tolower(inp[i] <= 'z'))
                parsed += tolower(inp[i]);
            else if(parsed != "")
            {
                ans.insert(parsed);
                parsed = "";
            }
        }
        if(parsed != "")    ans.insert(parsed);
    }

    for (auto it=ans.begin(); it != ans.end(); ++it) 
        cout << *it << endl;

    return 0;
}