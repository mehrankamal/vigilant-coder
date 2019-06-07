#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n, evens = 0, odds = 0;
    cin >> n;
    vector<int> arr(n);
    vector<int> evenNums, oddNums;

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        if(arr[i]%2 == 0)
        {
            evens++;
            evenNums.push_back(arr[i]);
        }
        else
        {
            odds++;
            oddNums.push_back(arr[i]);
        }
        
    }
    

    sort(evenNums.begin(), evenNums.end());
    sort(oddNums.begin(), oddNums.end());

    if(odds == 0)
    {
        ll sum = 0;
        for(int i=0; i<n-1; i++)    sum+=evenNums[i];
        cout << sum << endl;
        return 0;
    }
    else if(evens == 0)
    {
        ll sum = 0;
        for(int i=0; i<n-1; i++)    sum+=oddNums[i];
        cout << sum << endl;
        return 0;
    }
    else if(abs(evens - odds) <= 1)
    {
        cout << "0" << endl;
        return 0;
    }

    else if(evens>odds)
    {
        ll sum = 0;
        evens -= odds;
        evens--;
        for(int i=0; i<evens; i++)  sum+=evenNums[i];
        cout << sum << endl;
    }
    else if(odds>evens)
    {
        ll sum = 0;
        odds -= evens;
        odds--;
        for(int i=0; i<odds; i++)   sum+=oddNums[i];
        cout << sum << endl;
    }
    

    return 0;
}