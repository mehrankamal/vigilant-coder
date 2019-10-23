//Problem:          Dividing another into teams
//Problem Link:     https://codeforces.com/contest/1249/problem/A

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
    int q;
    cin >> q;
    while(q--)
    {
        int n;
        cin >> n;
        vi arr(n);
        repn(i, n)
            cin >> arr[i];
        sort(arr.begin(), arr.end());
        bool twos = false;
        for(int i=0; i<n && !twos; i++)
        {
            if(arr[i] - arr[i - 1] == 1)
                twos = true;
        }

        if(twos)
            cout << "2" << endl;
        else
            cout << "1" << endl;
        
    }
    

    return 0;
}
