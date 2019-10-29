//Problem:          Combination Lock
//Problem Link:     https://codeforces.com/problemset/problem/540/A

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
    int steps = 0;

    string ptrA, ptrB;
    cin >> ptrA >> ptrB;

    for(int i = 0; i<n; i++)
    {
        steps += min(min((int)abs(ptrA[i] - ptrB[i]), (abs(ptrA[i] - '9') + abs(ptrB[i] - '0')) + 1), (abs(ptrA[i] - '0') + abs(ptrB[i] - '9')) + 1);
    }
    
    cout << steps << endl;

    return 0;
}