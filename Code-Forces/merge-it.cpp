//Problem:          Merge It!
//Problem Link:     https://codeforces.com/problemset/problem/1176/B

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
        int count = 0;
        cin >> n;
        vector<int> modFreqArr(3, 0);
        repn(i, n)
        {
            int x;
            cin >> x;
            modFreqArr[x%3]++;
        }
        count += min(modFreqArr[2], modFreqArr[1]);
        modFreqArr[1] -= count;
        modFreqArr[2] -= count;
        count += modFreqArr[0];
        count += (modFreqArr[2] + modFreqArr[1])/3;

        cout << count << endl;
    }
    
    
    return 0;
}