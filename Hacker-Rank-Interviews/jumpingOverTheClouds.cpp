//Problem:          
//Link:             

#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n, pos = 0, count = 0;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
        cin >> arr[i];

    while(pos < n && pos != n-1)
    {
        if(pos+2 < n)
        {
            if(arr[pos+2] == 0)
                pos+=2;
            else
                pos++;
        }
        else
        {
            count++;
            break;
        }
        count++;
    }

    cout << count << endl;
    return 0;
}
