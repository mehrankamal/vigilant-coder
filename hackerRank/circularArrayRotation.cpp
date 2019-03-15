#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
        cin >> arr[i];
    
    k=k%n;

    // for(int i=0; i<k; i++)
    // {
    //     int temp = arr[n-1];
    //     for(int j=n-1; j>=1; j--)
    //         arr[j] = arr[j-1];
    //     arr[0] = temp;
    // }

    for (int i = 0; i < q; i++) {
        int query;
        cin >> query;
        query = ((query - k) < 0) ? arr[n - k + query] : arr[query - k];
        cout << query << endl;
    }

    return 0;
}