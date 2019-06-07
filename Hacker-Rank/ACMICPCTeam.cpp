//Problem:          
//Link:             

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, count = 0, max = 0, teamCount = 0;
    cin >> n >> m;
    vector<string> arr (n);

    for(int i=0; i<n; i++)
        cin >> arr[i];

    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            count = 0;
            for(int k=0; k<m; k++)
            {
                if(arr[i][k] != '0' || arr[j][k] != '0')
                    count++;
            }
            if(count >max)
                max = count;
        }
    }

    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            count = 0;
            for(int k=0; k<m; k++)
            {
                if(arr[i][k] != '0' || arr[j][k] != '0')
                    count++;
            }
            if(count == max)
                teamCount++;
        }
    }

    cout << max << endl << teamCount << endl;

    return 0;
}