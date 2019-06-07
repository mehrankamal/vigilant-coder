//Problem:      Find Product
//Link:         https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-product/

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
