//Problem:      
//Link:         

#include<stdio.h>
int main()
{
    int N, i, j;
    scanf("%d", &N);

    for(i=0; i<N; i++)
    {
        for(j=0; j<2; j++)
            printf("*   *\n");
        printf("*****\n");
    }
    for(j=0; j<2; j++)
        printf("*   *\n");

    return 0;
}
