//Problem:      Way Too Long Words
//Problem Link: https://codeforces.com/problemset/problem/71/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        string word;
        cin >> word;
        if(word.length()<=10)
        {
            cout << word<< endl;
            continue;
        }
        else
        {
            vector<char> result;
            int abbrLen = word.length() - 2;
            stringstream abbreviated("");
            abbreviated << abbrLen;
            result.push_back(word[0]);
            for(char a: abbreviated.str())  result.push_back(a);
            result.push_back(word[word.length()-1]);
            for(char a: result) cout << a;
            cout << endl;
        }

    }

    return 0;
}