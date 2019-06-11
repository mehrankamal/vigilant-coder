//Problem:          Puntuation
//Problem Link:     https://codeforces.com/problemset/problem/147/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    string inp;
    getline(cin, inp);

    vector<string>  strArr(1);
    int i = 0, ind = 0;
    bool foundWord = true;
    if(inp[0] == ' ')   foundWord = false;

    int len = inp.length();

    for(int i=0; i<len;)
    {
        while(inp[i] >= 'a' && inp[i] <= 'z')
        {
            strArr[ind] += inp[i];
            ++i;
            if(i == len)    break;
        }
        if(i>=len)  break;
        while(inp[i] == ' ')    ++i;
        if(i>=len)  break;
        if(!(inp[i] >= 'a' && inp[i] <= 'z'))
        {
                strArr[ind] += inp[i];
                ++i;
        }
        while (inp[i] == ' ')   ++i;
        if(i>=len)  break;
        
        strArr.push_back("");
        ++ind;
    }

    len = strArr.size();

    for(int i=0; i<len; i++)
    {
        cout << strArr[i];
        if(i != len-1)  cout << ' ';
    }

    cout << endl;

    return 0;
}