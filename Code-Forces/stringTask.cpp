//Problem:          String Task
//Problem Link:     https://codeforces.com/problemset/problem/118/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    string inp;
    cin >> inp;
    for(int i=0; i<inp.length(); i++)
    {
        inp[i] = tolower(inp[i]);
    }
    for(int i=0; i<inp.length(); i++)
        if(inp[i]=='a' || inp[i]=='e' || inp[i]=='o' || inp[i]=='i' || inp[i]=='u' || inp[i]=='y')
        {
            inp.erase(inp.begin()+i);
            i--;
        }
    for(int i=0; i<inp.length(); i++)   cout << "." << inp[i];
    cout << endl;

    return 0;
}