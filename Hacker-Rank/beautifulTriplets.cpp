//Problem:      Beautiful Triplets
//Link:         https://www.hackerrank.com/challenges/beautiful-triplets/problem

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, d, count = 0;
    bool countBool = false;
    cin >> n >> d;
    vector<int> arr(n);
    for(int i=0; i<n; i++)  cin >> arr[i];

    for(int i=0; i<n-2; i++)
    {
        for(int j=i+1; j<n-1; j++)
        {
            if(arr[j]-arr[i]==d)
            {
                for(int k=j+1; k<n; k++)
                {
                    if(arr[k]-arr[j]==d)
                    {
                        count++;
                    }
                }
            }
        }
    }

    cout << count << endl;

    return 0;
}