//Problem:      Factorial!
//Link:         https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-factorial/

#include<stdio.h>

int fact(int n);

int main()
{
    int i;
    scanf("%d", &i);

    printf("%d\n", fact(i));
}

int fact(int n)
{
    if(n==1 || n==2)
    {
        return n;
    }
    else
    {
        return n*fact(n-1);
    }

}
