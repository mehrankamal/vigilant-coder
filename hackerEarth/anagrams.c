/*
Given two strings, a and b , that may or may not be of the same length, determine the minimum number of character deletions required to make a and b anagrams. Any characters can be deleted from either of the strings.

Input :

test cases,t
two strings a and b, for each test case
Output:

Desired O/p

Constraints :

string lengths<=10000

Note :

Anagram of a word is formed by rearranging the letters of the word.

For e.g. -> For the word RAM - MAR,ARM,AMR,RMA etc. are few anagrams.

SAMPLE INPUT 
1
cde
abc
SAMPLE OUTPUT 
4
*/

#include<stdio.h>
#include<stdlib.h>

#define CHARS 26

int remChar(char [], char[]);

int main()
{
	int length = 10001;
	size_t T, i;
	char A[length];
	char B[length];

	scanf("%d", &T);
	size_t count[T];
	for(i=0; i<T; i++)
	{
		scanf("%s", A);
		scanf("%s", B);
		count[i] = remChar(A, B);
		fflush(stdin);
	}

	for(i=0; i<T; i++)
		printf("%d\n", count[i]);

	return 0;
}

int remChar(char strA[], char strB[])
{
	size_t countA[CHARS] = {0}, countB[CHARS] = {0};

	for(int i = 0; strA[i] != '\0'; i++)
		countA[strA[i] - 'a']++;
	
	for(int i = 0; strB[i] != '\0'; i++)
		countB[strB[i] - 'a']++;

	int result = 0;
	for(int i=0; i<CHARS; i++)
		result += abs(countA[i] - countB[i]);

	return result;
}