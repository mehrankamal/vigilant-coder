//Problem:          Newspaper
//Problem Link:     https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2315

#include<bits/stdc++.h>
#define loop(i, n) for(int i=0; i<n; i++)

using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int n;
        cin >> n;
        map<char, long long> charVal;
        loop(i, n)
        {
            char inp;
            long val;
            cin >> inp >> val;
            charVal[inp] = val;
        }
        int m;
        cin >> m;
        m+=1;
        double finalVal = 0;
        cin.clear();
        loop(j, m)
        {
            string line;
            getline(cin, line, '\n');
            loop(i, line.length())
            {
                if(charVal.count(line[i])>0)
                {
                    finalVal += charVal[line[i]]/100.0;
                }
            }
        }
        printf("%.2f$\n", finalVal);
    }

    return 0;
}