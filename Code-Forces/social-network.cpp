//Problem:          Social Network
//Problem Link:     (Easy Version)      https://codeforces.com/contest/1234/problem/B1
//Problem Link:     (Hard Version)      https://codeforces.com/contest/1234/problem/B2

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
    int tot, disp, maxx = 0;
    cin >> tot >> disp;
    vi arr(tot);
    repn(i, tot)
    {
        cin >> arr[i];
        maxx = max(maxx, arr[i]);
    }

    set<int> freq;
    list<int> ans;

    repn(i, tot)
    {
        if(ans.size() < disp && freq.count(arr[i]) == 0)
        {
            ans.push_front(arr[i]);
            freq.insert(arr[i]);
        }
        else if(freq.count(arr[i]) == 0)
        {
            freq.erase(ans.back());
            freq.insert(arr[i]);
            ans.pop_back();
            ans.push_front(arr[i]);
        }
    }

    cout << ans.size() << endl;

    for(auto i = ans.begin(); i != ans.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    return 0;
}
