//Problem:      Char Sum
//Link:         https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/char-sum-2d3a6ab5/

#include<stdio.h>
#include<ctype.h>
#include<string.h>

int num(char a);

int main()
{
    int i,j, sum = 0;
    char str[101];

    scanf("%s", str);
    j=strlen(str);

    for(i=0; i<j; i++)
    {
        sum += num(str[i]);
    }

    printf("%d", sum);

    return 0;
}

int num(char a)
{
    return a - 'a' + 1;
}
