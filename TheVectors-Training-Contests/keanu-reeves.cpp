//Problem:          Keanu Reeves
//Problem Link:     https://codeforces.com/gym/252533/problem/B

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string inp;
    cin >> inp;

    if(n % 2 == 0)
    {
        int zeros = 0, ones = 0;
        for(int i=0; i<n; i++)
        {
            if(inp[i] == '1')   ones++;
            else zeros++;
        }
        if(ones != zeros)
        {
            cout << "1" << endl;
            cout << inp << endl;
        }
        else
        {
            string A = "";
            for(int i=0; i<n-1; i++)
                A += inp[i];
            char B = inp[n-1];

            cout << "2" << endl;
            cout << A << " " << B << endl;
        }
        
    }
    else
    {
        cout << "1" << endl;
        cout << inp << endl;
    }
    

    return 0;
}