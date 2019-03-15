#include<stdio.h>

int main()
{
    int n;
    int i, j, k;

    scanf("%d", &n);

    int temp=0;

    for(i=0; i<n; i++)
    {
        k=i;
        temp = n;
        
        for(j=0; j<n; j++)
        {

            if(j==0 || i==0)
            {
                printf("%d", n);
            }
            else
            {
                printf("%d", temp);
            }
            if(k!=0)
            {
                temp--;
                k--;
            }
        }

        k = n-i-1;
         
        for(j=0; j<n-1; j++)
        {

            if(k==0)
            {
                temp++;
            }
            else
            {
                k--;
            }
            if(j==n-2 || i==0)
            {
                printf("%d", n);
            }
            else
            {
                printf("%d", temp);
            }
            
        }
        printf("\n");
    }

    for(i=0; i<n-1; i++)
    {
        k=n-i-2;
        temp = n;
        for(j=0; j<n; j++)
        {
            
            if(j==0 || i == n-2)
            {
                printf("%d", n);
            }
            else
            {
                printf("%d", temp);
            }
            if(k!=0)
            {
                temp--;
                k--;
            }
            
        }
        k=i+1;
        for(j=0; j<n-1; j++)
        {
            if(k==0)
            {
                temp++;
            }
            else
            {
                k--;
            }
            if(j==n-2 || i == n-2)
            {
                printf("%d", n);
            }
            else
            {
                printf("%d", temp);
            }
            
        }
        
        printf("\n");

    }

    printf("\n");
    return 0;
}