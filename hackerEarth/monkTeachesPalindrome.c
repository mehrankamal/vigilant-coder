/*
Monk introduces the concept of palindrome saying,"A palindrome is a sequence of characters which reads the same backward or forward." 
Now, since he loves things to be binary, he asks you to find whether the given string is palindrome or not. If a given string is palindrome, you need to state that it is even palindrome (palindrome with even length) or odd palindrome (palindrome with odd length).

Input:
The first line consists of T, denoting the number of test cases.
Next follow T lines, each line consisting of a string of lowercase English alphabets.

Output:
For each string , you need to find whether it is palindrome or not.
If it is not a palindrome, print NO.
If it is a palindrome, print YES followed by a space; then print EVEN it is an even palindrome else print ODD.
Output for each string should be in a separate line.
See the sample output for clarification.

Constraints:
\(1 \le T \le 50\)
\(1 \le length \space of \space string \le 10^5\)

SAMPLE INPUT 
3
abc
abba
aba
SAMPLE OUTPUT 
NO
YES EVEN
YES ODD
Explanation
The first string is not a palindrome.
The second and third strings are palindromes of even and odd lengths respectively.
*/

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
