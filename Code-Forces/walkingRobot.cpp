//Problem:      Walking Robot
//Problem Link: https://codeforces.com/contest/1154/problem/D

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, battMax, accMax;
    int battCur, accCur, steps = 0;
    bool charge;
    cin >> n >> battMax >> accMax;
    battCur = battMax;
    accCur = accMax;
    vector<int> arr(n);

    for(int i=0; i<n; i++)  cin >> arr[i];

    for(int i=0; i<n; i++)
    {
        if(accCur == 0 && battCur == 0)    break;
        if(accCur<accMax && arr[i] == 1 && battCur > 0 )
        {
            accCur++;
            battCur--;
            steps++;
        }
        else if (accCur>0)
        {
            accCur--;
            steps++;
        }
        else
        {
            battCur--;
            steps++;
        }
        
    }

    cout << steps << endl;

    return 0;
}