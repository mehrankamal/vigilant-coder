//Problem:      You Can Go Your Own Way
//Problem Link: https://codingcompetitions.withgoogle.com/codejam/round/0000000000051705/00000000000881da

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tests;
    cin >> tests;

    for(int i=0; i<tests; i++)
    {
        int mazeLen;
        cin >> mazeLen;
        string str;
        vector<char> result;
        cin >> str;
        for(int j=0; j<str.length(); j++)
        {
            if(str[j] == 'E')   result.push_back('S');
            else                result.push_back('E');
        }

        cout << "Case #" << i+1 << ": ";
        for(char a: result) cout << a;
        cout << endl;
    }

    return 0;
}