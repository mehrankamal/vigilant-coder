//Problem:          Machined Surfaces
//Problem Link:     https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=355

#include<bits/stdc++.h>

using namespace std;

int main()
{
    while(true)
    {
        int n;
        cin >> n;
        if(n==0)    break;
        vector<int> count;
        char arr[1];
        int max = 0;
        cin.getline(arr, 1);
        for(int i = 0; i<n; i++)
        {
            int count_xs = 0;
            char line[26];
            cin.getline(line, 26);
            for(int j=0; j<25; j++)
            {
                if(line[j] == 'X')  ++count_xs;
            }
            count.push_back(count_xs);
            if(count_xs > max)  max = count_xs;
        }
        int ans = 0;

        for(int i=0; i<n; i++)  ans += abs(max - count[i]);

        cout << ans << endl;
    }

    return 0;
}