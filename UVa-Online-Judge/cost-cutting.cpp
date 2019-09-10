//Problem:          Cost Cutting
//Problem Link:     https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2827

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    int n = 0;

    while(n++, T--)
    {
        vector<int> arr(3);
        for(int i=0; i<3; i++)
            cin >> arr[i];
        sort(arr.begin(), arr.end());
        cout << "Case " << n << ": " << arr[1] << endl;
    }

    return 0;
}