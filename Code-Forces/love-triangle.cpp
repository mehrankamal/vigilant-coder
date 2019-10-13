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
    vi arr(n);
    repn(i, n)
    {
        cin >> arr[i], arr[i]--;
    }

    repn(i, n)
    {
        if(arr[arr[arr[i]]] == i)
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}
