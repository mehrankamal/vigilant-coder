//Problem:      
//Link:         

#include<stdio.h>

int main()
{
    int count = 0, l, r, k, i;

    scanf("%d%d%d", &l, &r, &k);

    for(i=l; i<=r; i++)
        if(i%k==0)
            count++;

    printf("%d", count);

    return 0;
}
