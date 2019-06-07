//Problem:		Book of Potion making
//Link:			https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/sum-it-if-you-can-4867f851/

#include<stdio.h>
#include<string.h>

int main()
{
	char str[11];
	int i;

	scanf("%s", str);

	if(strlen(str)!=10)
		printf("Illegal ISBN\n");
	else
	{
		int sum = 0;
		for(i=0; i<10; i++)
		{
			sum += (i+1)*(str[i]-'0');
		}
		if(sum%11 == 0)
			printf("Legal ISBN\n");
		else
			printf("Illegal ISBN\n");
	}

	return 0;
}
