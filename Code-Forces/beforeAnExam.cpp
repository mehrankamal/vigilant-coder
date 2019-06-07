//Problem:      Before an Exam
//Link:         https://codeforces.com/problemset/problem/4/B

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int d, givenTime;
    int minTime = 0, maxTime = 0, sumTime = 0;
    cin >> d >> givenTime;
    vector<int> hours;
    int arr[d][2];
    for(int i=0; i<d; i++)
    {
        cin >> arr[i][0] >> arr[i][1];
        minTime += arr[i][0];
        maxTime += arr[i][1];
        hours.push_back(arr[i][0]);
        sumTime += hours[i];
    }

    if(minTime<=givenTime && givenTime <= maxTime)
    {
        cout << "YES" << endl;
        for(int i=0; i<d; i++)
        {
            int diff = arr[i][1] - arr[i][0];
            int j=1;
            while(j<=diff)
            {
                if(sumTime == givenTime)    break;
                sumTime++;
                hours[i]++;
                j++;
            }
        }
        for(int i=0; i<d; i++)  cout << hours[i] << " ";
        cout << endl;
    }
    else    cout << "NO" << endl;

    return 0;
}