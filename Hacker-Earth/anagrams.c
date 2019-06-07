//Problem:		Anagrams
//Link:			https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/anagrams-651/

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