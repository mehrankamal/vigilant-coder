//Problem:          Beautiful Year
//Problem Link:     https://codeforces.com/problemset/problem/271/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int inpYear;
    cin >> inpYear;
    int estYear = inpYear+1, dig;
    bool distinct = false;

    while(1)
    {
        int temp = estYear;
        vector<int> freq(10, 0);
        while(!(temp == 0))
        {
            dig = temp%10;
            temp /= 10;
            freq[dig]++;
        }

        for(int i=0; i<10; i++)
        {
            if(freq[i]>1)
            {
                estYear++;
                distinct = false;
                break;
            }
            else
            {
                distinct = true;
            }
        }
        if(distinct)    break;
    }

    cout << estYear << endl;

    return 0;
}