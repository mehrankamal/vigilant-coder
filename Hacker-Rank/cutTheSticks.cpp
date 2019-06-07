#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n], count = 0, min = INT_MAX;

    for(int i=0; i<n; i++)
        cin >> arr[i];

    count = n;
    while (1)
    {
        cout << count << endl;
        min = INT_MAX;
        for(int i=0; i<n; i++)
            if(arr[i] < min && arr[i] != 0)
                min = arr[i];
        for(int i=0; i<n; i++)
        {
            if(arr[i] != 0)
            {
                arr[i] -= min;
                count--;
            }
        }
        for(int i=0; i<n; i++)
            if(arr[i] != 0)
                count++;
        if(count == 0)
            break;
    }

    return 0;
}