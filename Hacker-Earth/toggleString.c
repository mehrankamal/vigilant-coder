//Problem:      Toggle String
//Link:         https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/modify-the-string/

#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    int i,j;
    char string[101];
    scanf("%s", string);
    j= strlen(string);

    for(i=0; i<j; i++)
    {
        if(string[i]>='a' && string[i]<='z')
            printf("%c", toupper(string[i]));
        else
            printf("%c", tolower(string[i]));
    }

    printf("\n");
    return 0;
}
