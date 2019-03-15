//Problem:      
//Link:         

#include<stdio.h>
#include<string.h>

int palindrome(char *str);

int main()
{
    char string[101];
    scanf("%s", string);
    
    palindrome(string);
    
    return 0;
}

int palindrome(char *str)
{
    int len = strlen(str);
    int i, j;
    char str2[len+1];
    for(i=0, j=len-1; i<len; i++, j--)
    {
        str2[i] = str[j];
    }
    str2[i] = '\0';
    
    if(strcmp(str, str2)==0)
        printf("YES\n");
    else
        printf("NO\n");
        
    return 0;
}
