//Problem:      
//Link:         

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
