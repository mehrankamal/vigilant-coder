//Problem:      
//Link:         

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int palindrome(char *string)
{
    int len = strlen(string), i, j;
    char check[len+1];

    for(i=len - 1, j=0; i>=0; i--, j++)
    {
        check[j] = string[i];
    }

    check[len] = '\0';

    if(strcmp(string, check) == 0)
        return len%2;
    else
        return -1;

}

int main()
{
    int n, i;
    scanf("%d", &n);

    char **ptr = (char **)calloc(n, sizeof(char *));
    for(i=0; i<n; i++)
    {
        *(ptr + i) = (char *)calloc(100001, sizeof(char));
        scanf("%s", *(ptr + i));
    }

    for(i=0; i<n; i++)
    {
        int check = palindrome(*(ptr+i));
        if(check == 0)
            printf("YES EVEN\n");
        else if (check == 1)
            printf("YES ODD\n");
        else
            printf("NO\n");
    }

    free(ptr);

    return 0;
}
