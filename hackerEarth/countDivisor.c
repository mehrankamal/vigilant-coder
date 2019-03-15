/*
You have been given 3 integers - l, r and k. Find how many numbers between l and r (both inclusive) are divisible by k. You do not need to print these numbers, you just have to find their count.

Input Format
The first and only line of input contains 3 space separated integers l, r and k.

Output Format
Print the required answer on a single line.

Constraints
 

SAMPLE INPUT 
1 10 1
SAMPLE OUTPUT 
10
*/

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
