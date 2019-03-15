//Problem:      
//Link:         

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
