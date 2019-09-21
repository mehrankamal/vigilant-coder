//Problem:          Army Buddies
//Problem Link:     https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=3778

#include<bits/stdc++.h>
#define loop(i, n) for(int i=0; i<n; i++)

using namespace std;
vector<int> arrL(100005, -1);
vector<int> arrR(100005, -1);
int main()
{
    int S, B;
    while(scanf("%d %d", &S, &B), S!=0 || B!=0)
    {
        for(int i=1; i<=S; i++)
        {
            arrL[i] = i - 1;
            arrR[i] = i + 1;
        }
        arrR[S] = -1;
        arrL[1] = -1;
        loop(i, B)
        {
            int l, r;
            scanf("%d %d", &l, &r);
            if(arrL[l] < 0) cout << "* ";
            else cout << arrL[l] << " ";
            if(arrR[r] < 0) cout << "*\n";
            else cout << arrR[r] << "\n";
            arrL[arrR[r]] = arrL[l];
            arrR[arrL[l]] = arrR[r];
        }
        printf("-\n");
    }


    return 0;
}