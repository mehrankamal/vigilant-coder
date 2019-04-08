//Problem:      Diverse Strings
//Link:         https://codeforces.com/contest/1144/problem/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = 0; i<n; i++)
    {
        string str;
        cin >> str;
        vector<int> freq(26);
        bool onlyOne = true;
        bool adj = true;

        int len = str.length();

        
        for(int j=0; j<len; j++)
            freq[str[j]-97]++;

        sort(str.begin(), str.end());
        
        for(int j=0; j<26; j++)
        {
            if(freq[j] > 1)
            {
                onlyOne = false;
                cout << "No" << endl;
                break;
            }
        }
        if(onlyOne)
            for(int j=0; j<len-1; j++)
                if(str[j+1]-str[j] > 1)
                {
                    adj = false;
                    cout << "No" << endl;
                    break;
                }



        if(onlyOne && adj)  cout << "Yes" <<endl;
    }

    return 0;
}