//Problem:          Zapping
//Problem Link:     https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3912

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int src, dst;
    
    while(scanf("%d %d", &src, &dst), src != -1 && dst != -1)
    {
        if((abs(src + 99 - dst) < abs(src - dst)))    cout << abs(src + 100 - dst) << endl;
        else if((abs(dst + 99 - src) < abs(dst - src))) cout << abs(dst + 100 - src) << endl;
        else    cout << abs(src - dst) << endl;
    }

    return 0;
}