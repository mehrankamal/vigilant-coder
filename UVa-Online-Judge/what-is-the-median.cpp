//Problem:          What is the Median?
//Problem Link:     https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1048
#include<bits/stdc++.h>
#define i64 long long
#define vii vector<int>

using namespace std;

int main()
{
    vector<i64> arr;
    i64 inp;

    while(scanf("%lld", &inp) != EOF)
    {
        arr.push_back(inp);
        sort(arr.begin(), arr.end());
        if(arr.size()%2 == 1) cout << arr[arr.size()/2] << endl;
        else cout << (arr[arr.size()/2 - 1] + arr[arr.size()/2]) / 2 << endl;
    }

    return 0;
}