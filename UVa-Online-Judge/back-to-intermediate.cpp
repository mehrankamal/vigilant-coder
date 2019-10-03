//Problem:          Back to Intermediate ...
//Problem Link:     https://uva.onlinejudge.org/external/107/10773.pdf

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
    int t, caseNo = 0;
    cin >> t;

    while(caseNo++, t--)
    {
        int d, u, v;
        bool possible = true;
        cin >> d >> v >> u;
        
        float fastest = ((float) d / (float) (u));
        float shortest = ((float) d / sqrt((float) (u * u - v * v)));
        if(fastest == shortest || v >= u) possible = false;


        printf("Case %d: ", caseNo);
        if(possible) printf("%.3f\n", abs(fastest - shortest));
        else printf("can't determine\n");
    }
    

    return 0;
}
