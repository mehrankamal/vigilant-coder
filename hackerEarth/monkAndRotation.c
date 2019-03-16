//Problem:      Monk and Rotation
//Link:         https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/monk-and-rotation-3/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int T, K;
    int i, j, k, temp;
    int N;

    scanf("%d", &T);

    for(i=0; i<T; i++)
    {
        scanf("%d%d", &N, &K);
        int arr[N];

        for(j=0; j<N; j++)
            scanf("%d", &arr[j]);

        K=K%N;

        for(j=0; j<N; j++)
            if(j-K<0)
                printf("%d ", arr[(N-K)+j]);
            else
                printf("%d ", arr[abs(j-K)]);
            
        
        printf("\n");
    }

    return 0;
}
