/*
Rahul is a very busy persion he dont wan't to waste his time . He keeps account of duration of each and every work. Now he don't even get time to calculate duration of works, So your job is to count the durations for each work and give it to rahul.

Input:
First line will be given by N number of works
Next N line will be given SH,SM,EH and EM  each separated by space(SH=starting hr, SM=starting min, EH=ending hr, EM=ending min)

Output:
N lines with duration HH MM(hours and minutes separated by space)

SAMPLE INPUT 
2
1 44 2 14
2 42 8 23

SAMPLE OUTPUT 
0 30
5 41
*/

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
