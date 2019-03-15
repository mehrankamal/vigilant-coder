/*
// Sample code to perform I/O:
#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);              			// Reading input from STDIN
	printf("Input number is %d.\n", num);       // Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

/*
You have been given a String S. You need to find and print whether this string is a palindrome or not. If yes, print "YES" (without quotes), else print "NO" (without quotes).

Input Format
The first and only line of input contains the String S. The String shall consist of lowercase English alphabets only.

Output Format
Print the required answer on a single line.

Constraints 

Note
String S consists of lowercase English Alphabets only.

SAMPLE INPUT 
aba
SAMPLE OUTPUT 
YES
*/

// Write your code here
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
