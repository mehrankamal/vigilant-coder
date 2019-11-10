//Problem:          Chat Room
//Problem Link:     https://codeforces.com/problemset/problem/58/A

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
    string input;
    cin >> input;
    string hello = "hello";
    int ind = 0;

    for(int i = 0; i<input.length(); i++)
    {
        if(input[i] == hello[ind])
            ind++;
    }

    if(ind == 5)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    

    return 0;
}
