//Problem:      Monk and Welcome Problem
//Link:         https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/monk-and-welcome-problem/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    int *A = (int *)calloc(n, sizeof(int));
    int *B = (int *)calloc(n, sizeof(int));
    int *C = (int *)calloc(n, sizeof(int));

    for(i=0; i<n; i++)
        scanf("%d", (A+i));

    for(i=0; i<n; i++)
    {
        scanf("%d", (B+i));
        *(C+i) = *(A+i) + *(B+i);
    }

    for(i=0; i<n; i++)
        printf("%d ", *(C+i));

    free(A);
    free(B);
    free(C);

    return 0;
}
