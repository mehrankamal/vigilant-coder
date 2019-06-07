//Problem:      Duration
//Link:         https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/duration/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int  N, i, HH, MM;
    scanf("%d", &N);

    int times[N][4];

    for(i=0; i<N; i++)
    {
        scanf("%d %d %d %d", &times[i][0], &times[i][1], &times[i][2], &times[i][3]);
    }

    for(i=0; i<N;i++)
    {
        if(times[i][1]<=times[i][3])
            printf("%d %d\n", times[i][2] - times[i][0], times[i][3]-times[i][1]);
        else
            printf("%d %d\n", times[i][2] - times[i][0] - 1, (60-times[i][1])+times[i][3]);
    }

    return 0;
}
