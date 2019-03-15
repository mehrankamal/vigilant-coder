//Problem:      
//Link:         

#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int n,i;
    long long fact=1;
    scanf("%d", &n);

    int nums[n];

    for(i=0; i<n; i++)
    {
        scanf("%d", &nums[i]);
        fact = (fact * nums[i])%1000000007;
    }

    printf("%lld", fact);

    return 0;
}
