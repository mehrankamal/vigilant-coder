//Problem:      Foregone Solutions
//Problem Link: https://codingcompetitions.withgoogle.com/codejam/round/0000000000051705/0000000000088231

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for(int i=0; i<t; i++)
    {
        string input;
        cin >> input;
        int len = input.length();
        vector<char> strA, strB;
        for(int j=0; j<len; j++)
        {
            if(input[j] == '4')
            {
                strA.push_back('3');
                strB.push_back('1');
            }
            else
            {
                strA.push_back(input[j]);
                strB.push_back('0');
            }
        }
        int j = 0;
        while(strB[j] == '0')   j++;
        cout << "Case #"<< i+1 << ": ";
        for(; j<len; j++)   cout << strB[j];
        cout << " ";
        for(j=0; j<len; j++)    cout << strA[j];
        cout << endl;
    }


    return 0;
}