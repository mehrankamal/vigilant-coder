//Problem:
//Problem Link:

#include<bits/stdc++.h>
#define vi vector<int>
#define ll long long
#define pi pair<int, int>
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define rep(i, a, b) for(int i=a; i<=b; i++)
#define repn(i, n) for(int i=0; i<(int)n; i++)

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    repn(i, n)
        cin >> arr[i];

    ll evens = 0;
    repn(i, n)
    {
        if(arr[i] % 2 == 0)
            evens += arr[i] - 1;
        if(evens % 2 == 1)
            cout << "1" << endl;
        else
            cout << "2" << endl;
        
    }

    return 0;
}
