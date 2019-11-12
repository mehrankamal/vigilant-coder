//Problem:          Anton and Letters
//Problem Link:     https://codeforces.com/problemset/problem/443/A

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

    string inp;
    getline(cin, inp);
    vector<int> freq(26, 0);

    for (int i = 0; i < inp.length(); i++) if(inp[i] >= 'a' && inp[i] <= 'z') freq[inp[i] - 'a']++;
    
    int count = 0;
    repn(i, 26) if(freq[i] > 0) count++;
    cout << count << endl;

    return 0;
}
