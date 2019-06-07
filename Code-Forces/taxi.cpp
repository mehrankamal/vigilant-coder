//Problem:          Taxi
//Problem Link:     https://codeforces.com/problemset/problem/158/B

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int taxi = 0, total = 0;
    int ones = 0, twos = 0, threes = 0;
    cin >> n;
    vector<int> arr(n);

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        if(arr[i] == 4) taxi++;
        if(arr[i] == 1) ones++;
        if(arr[i] == 2) twos++;
        if(arr[i] == 3) threes++;
        total += arr[i];
    }

    if(total<=4)
    {
        cout << "1" << endl;
        return 0;
    }

    taxi += min(ones, threes);

    int minn = min(ones, threes);

    ones -= minn;
    threes -= minn;

    taxi += twos/2;
    twos = twos%2;

    if(ones == 0 && threes>0)
    {
        taxi += threes;
        taxi += twos;
    }
    else if(threes == 0 && ones > 0)
    {
        taxi += min(twos, ones*2);
        minn = min(twos, ones*2);
        twos -= minn;
        ones -= minn*2;
        if(twos > 0 && twos%2 == 0 && ones==0)    taxi +=twos/2;
        else if(twos > 0 && ones == 0)   taxi += twos/2 + 1;
        if(ones > 0 && ones%4 == 0 && twos == 0)    taxi += ones/4;
        else if(ones>0 && twos ==0)     taxi += ones/4 + 1;
    }
    else if(twos > 0)   taxi++;

    cout << taxi << endl;

    return 0;
}