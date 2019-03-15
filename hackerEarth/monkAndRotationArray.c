//Problem:      
//Link:         

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int T, K;
    int i, j, k, temp;

    scanf("%d", &T);

    int ptr = (int **)calloc(T, sizeof(int *));
    int *lenPtr = (int *)calloc(T, sizeof(int));

    for(i=0; i<T; i++)
    {
        scanf("%d%d", (lenPtr + i), &K);
        *(ptr+i) = (int *)calloc(*(lenPtr + i), sizeof(int));

        for(j=0; j<*(lenPtr + i); j++)
            scanf("%d", (*(ptr+i)+j));

        for(j=0; j<K; j++)
        {
            temp = *(*(ptr+i) + (*(lenPtr + i) - 1));
            for(k=*(lenPtr + i)-1; k>0; k--)
            {
                *(*(ptr+i)+k) = *(*(ptr+i)+k-1);
            }
           **(ptr+i) = temp;
        }
    }

    for(i=0; i<T; i++)
    {
        for(j=0; j<*(lenPtr + i); j++)
            printf("%d ", *(*(ptr+i)+j));
        printf("\n");
    }

    free(ptr);
    free(lenPtr);

    return 0;
}
