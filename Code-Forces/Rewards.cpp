//Problem:          Rewards
//Problem Link:     https://codeforces.com/problemset/problem/448/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> cups(3, 0);
    vector<int> medals(3, 0);
    int n;

    for(int i=0; i<3; i++)  cin >> cups[i];
    for(int i=0; i<3; i++)  cin >> medals[i];
    cin >> n;
    int totalCups = cups[0] + cups[1] + cups[2];
    int totalMedals = medals[0] + medals[1] + medals[2];

    int consumedShelves = 0;

    while(totalCups > 0)
    {
        if(consumedShelves > n)
        {
            cout << "NO" << endl;
            return 0;
        }
        totalCups -= 5;
        consumedShelves++;
    }

    while (totalMedals > 0)
    {
        if(consumedShelves > n)
        {
            cout << "NO" << endl;
            return 0;
        }
        totalMedals -= 10;
        consumedShelves++;
    }

    if(consumedShelves > n)
    {
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;
    

    return 0;
}