//Problem:          Transform the Expression
//Problem Link:     https://www.spoj.com/problems/ONP/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        stack<char> operations;
        vector<char> ans;
        string input;
        cin >> input;
        int ops = 0;
        for(int j=0; j<input.length(); j++)
        {
            if(input[j] <= 'z' && input[j] >= 'a')
            {
                ans.push_back(input[j]);
            }
            else
            {
                if(input[j] == '(')
                {}
                else if (input[j] == ')')
                {
                    ans.push_back(operations.top());
                    operations.pop();
                }
                else    operations.push(input[j]);
            }
        }
        for(int j=0; j<ans.size(); j++) cout << ans[j];
        cout << endl;
    }

    return 0;
}