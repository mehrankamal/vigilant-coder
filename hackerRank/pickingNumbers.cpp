//Problem:      Picking Numbers
//Link:         https://www.hackerrank.com/challenges/picking-numbers/problem

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, count = 0, max = 0;
    bool check = true;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)   cin >> arr[i];
    
    sort(arr.begin(), arr.end());

    for(int i=0; i<n-1; i++)
    {
        count = 1;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j] - arr[i] <= 1)
                count++;
        }
        if(count > max)
            max = count;
    }

    cout << max << endl;

    return 0;
}