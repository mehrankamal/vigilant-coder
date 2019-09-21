//Problem:          Jolly Jumpers
//Problem Link:     https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=979

#include<bits/stdc++.h>
#define loop(i, n) for(int i=0; i<n; i++)

using namespace std;

int main()
{
    int n;
    while(scanf("%d", &n) == 1)
    {
        vector<bool> boolArr(n - 1, false);
        vector<int> arr(n, 0);
        loop(i, n)
        {
            cin >> arr[i];
            if(i>0)
            {
                int ind = abs(arr[i-1] - arr[i]) - 1;
                if(ind < n-1 && ind > -1) boolArr[ind] = true;
            }
        }
        bool jolly = true;
        loop(i, n-1)
            if(boolArr[i] == false)
                jolly = false;

        printf("%s", (jolly)?"Jolly\n":"Not jolly\n");
    }

    return 0;
}