#include<stdio.h>
#include<string.h>

int main()
{
	int max = 0, i, j;
	unsigned int heights[26];
	char word[11];
	unsigned int wordHeight[10];
	unsigned int len;
	
	for(i=0; i<26; i++)
		scanf("%u", &heights[i]);
	scanf("%s", word);
	len  = strlen(word);
	
	for(i=0; i<len; i++)
	{
		for(j=0; j<26; j++)
		{
			if(word[i]-'a' == j)
			{
				wordHeight[i] = heights[j];
				break;
			}
		}
		if(wordHeight[i]>max)
			max = wordHeight[i];
	}
	
	printf("%d", max * len);
	
	return 0;
}
