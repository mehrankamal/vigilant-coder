//Problem:          The Most Potent Corner
//Problem Link:     https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1205

#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> ans;
    while(true)
    {
        string in;
        getline(cin, in);
        if(in.empty())  break;
        int n = stoi(in);

        vector<int> arr((1 << n), 0);
        for(int i=0; i < (1 << n); i++)
            cin >> arr[i];

        vector<int> arr2((1 << n), 0);
        for(int i=0; i < (1 << n); i++)
            for(int j=0; j < n; j++)    arr2[i] += arr[i ^ (1 << j)];

        int maxx = 0;
        for(int i=0; i<(1 << n); i++)
        {
            for(int j=0; j < n; j++)
            {
                if((arr2[i] + arr2[i ^ (1 << j)]) > maxx) maxx = arr2[i] + arr2[i ^ (1 << j)];
            }
        }
        getline(cin, in);

        ans.push_back(maxx);
    }

    for(int i=0; i< ans.size(); i++)    cout << ans[i] << endl;

    return 0;
}