//Problem:          Zeros and Ones
//Problem Link:     https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1265

#include<bits/stdc++.h>
#define vi vector<int>
#define ll long long
#define pi pair<int, int>
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define rep(i, a, b) for(int i=a; i<=b; i++)
#define repn(i, n) for(int i=0; i<(int)n; i++)

using namespace std;

int main()
{
    string input;
    int t, caseNo = 1;
    while(cin >> input)
    {
        cin >> t;
        cout << "Case " << caseNo << ":" << endl;
        caseNo++;
        while(t--)
        {
            int i, j;
            cin >> i >> j;
            if(i > j)
            {
                int temp = j;
                j = i;
                i = temp;
            }
            bool flag = true;
            for( ; i<j && flag; i++)
            {
                if(input[i] != input[j])
                    flag = false;
            }
            if(flag)
                cout << "Yes";
            else
                cout << "No";
            cout << endl;
        }
    }
    

    return 0;
}
