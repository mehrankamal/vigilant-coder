//Problem:          Google is Feeling Lucky
//Problem Link:     https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3166

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T, n = 0;
    cin >> T;

    while(n++, T--)
    {
        char arrStr[10][110];
        vector<string> mostRel;
        vector<int> arrRel(10);
        int maxRel = 0;
        for(int i=0; i<10; i++)
        {
            scanf("%s %d", arrStr[i], &arrRel[i]);
            maxRel = max(maxRel, arrRel[i]);
        }
        cout << "Case #" << n << ":" << endl;
        for(int i=0; i<10; i++)
            if(arrRel[i] == maxRel) printf("%s\n", arrStr[i]);
    }

    return 0;
}